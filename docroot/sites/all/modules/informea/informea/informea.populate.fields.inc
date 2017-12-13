<?php

abstract class DenormalizedFieldHandler {

  const FIELD_TREATY = 'field_treaty';
  const FIELD_MEA_TOPIC = 'field_mea_topic';
  const FIELD_REGION = 'field_region';
  const FIELD_COUNTRY = 'field_country';

  /**
   * Retrieve the values for entity reference fields to a given node.
   *
   * @param \stdClass $node
   *   Node object.
   * @param string $field_name
   *   Field name.
   * @param string $ref
   *   Reference property ('target_id' for nodes or 'tid' for taxonomy term).
   *
   * @return array
   *   Array of integers (referenced node IDs).
   */
  public function getReferenceFieldValues($node, $field_name, $ref = 'target_id') {
    $ret = array();
    if (!empty($node->{$field_name}[LANGUAGE_NONE])) {
      foreach ($node->{$field_name}[LANGUAGE_NONE] as $delta => $value) {
        if (!empty($value[$ref])) {
          $ret[] = $value[$ref];
        }
      }
    }
    return $ret;
  }

  /**
   * Set values into a taxonomy reference field to a given node.
   * @param \stdClass $node
   *   Node object.
   * @param string $field_name
   *   Field name.
   * @param array $values
   *   Array of tids.
   */
  public function setNodeTermReferenceFieldValues($node, $field_name, array $values) {
    $node->{$field_name}[LANGUAGE_NONE] = array();
    foreach($values as $value) {
      $node->{$field_name}[LANGUAGE_NONE][] = ['tid' => $value];
    }
  }

  /**
   * Load field values for an array of nodes and return the loaded nodes.
   *
   * @param array $nids
   *   Array if node IDs.
   * @param string $bundle
   *   Node bundle.
   * @param string $field_name
   *   Field name.
   *
   * @return array
   *   Array of objects. For performance it does not load the full node.
   */
  public function loadNodesField(array $nids, $bundle, $field_name) {
    $fields = field_info_instances('node', $bundle);
    $rows = array();
    foreach ($nids as $nid) {
      $rows[$nid] = (object)array('nid' => $nid, 'vid' => NULL, 'type' => 'treaty');
    }
    field_attach_load('node', $rows, FIELD_LOAD_CURRENT, array('field_id' => $fields[$field_name]['field_id']));
    return $rows;
  }

  /**
   * Retrieve the list of unique topics for a given list of treaties.
   *
   * @param array $nids
   *   Array of node IDs of the same type.
   *
   * @return array
   *   Array of term IDs.
   */
  public function getTreatiesTopics(array $nids) {
    $rows = $this->loadNodesField($nids, 'treaty', self::FIELD_MEA_TOPIC);
    $ret = array();
    foreach ($rows as $nid => $treaty) {
      $topics = $this->getReferenceFieldValues($treaty, self::FIELD_MEA_TOPIC, 'tid');
      $ret = array_merge($ret, $topics);
    }
    return array_unique($ret);
  }

  /**
   * Retrieve the list of unique regions for a given list of countries.
   *
   * @param array $nids
   *   Array of node IDs of the same type.
   *
   * @return array
   *   Array of term IDs.
   */
  public function getCountriesRegions(array $nids) {
    $rows = $this->loadNodesField($nids, 'country', self::FIELD_REGION);
    $ret = array();
    foreach ($rows as $nid => $country) {
      $regions = $this->getReferenceFieldValues($country, self::FIELD_REGION, 'tid');
      $ret = array_merge($ret, $regions);
    }
    return array_unique($ret);
  }

  /**
   * Retrieve the list of unique regions for a given list of countries.
   *
   * @param array $nids
   *   Array of node IDs of the same type.
   *
   * @return array
   *   Array of term IDs.
   */
  public function getTreatiesRegions(array $nids) {
    $rows = $this->loadNodesField($nids, 'treaty', self::FIELD_REGION);
    $ret = array();
    foreach ($rows as $nid => $treaty) {
      $regions = $this->getReferenceFieldValues($treaty, self::FIELD_REGION, 'tid');
      $ret = array_merge($ret, $regions);
    }
    return array_unique($ret);
  }

  /**
   * Compute the new denormalized field values based on existing field values.
   *
   * @param \stdClass $node
   *   Node object.
   *
   * @param boolean $reset
   *   If TRUE, reset existing field values.
   *
   * @return bool
   *   Returns TRUE if object has changed, FALSE when left in original state.
   */
  public function computeField($node, $reset = TRUE) {
    if (empty($node) || !in_array($node->type, $this->getSupportedContentTypes())) {
      return FALSE;
    }
    return $this->computeFieldImpl($node, $reset);
  }

  /**
   * Actual de-normalization function.
   *
   * @param \stdClass $node
   *   Node object.
   *
   * @param boolean $reset
   *   If TRUE, reset existing field values.
   *
   * @return bool
   *   Returns TRUE if object has changed, FALSE when left in original state.
   */
  abstract function computeFieldImpl($node, $reset = TRUE);

  /**
   * Return an array of content types supported to de-normalize.
   *
   * @return mixed
   *   Array of strings.
   */
  abstract function getSupportedContentTypes();
}

/**
 * Class RegionDenormalizedFieldHandler sets the field_region redundantly.
 *
 * This field is computed based on the existing field_country or field_treaty.
 */
class RegionDenormalizedFieldHandler extends DenormalizedFieldHandler {

  /**
   * {@inheritdoc}
   */
  function getSupportedContentTypes() {
    // @TODO make configurable globally? Per node?
    return array('action_plan', 'contact_person', 'decision', 'document',
      'event_calendar', 'event_calendar_imported', 'feed_item',
      'geographical_site', 'member_party', 'national_report');
  }

  /**
   * {@inheritdoc}
   */
  public function computeFieldImpl($node, $reset = TRUE) {
    $original = $this->getReferenceFieldValues($node, self::FIELD_REGION);
    $new_tids = array();
    switch ($node->type) {
      // Use only field_country as source for region.
      case 'action_plan':
      case 'contact_person':
      case 'geographical_site':
      case 'national_report':
        $country_nids = $this->getReferenceFieldValues($node, self::FIELD_COUNTRY);
        $new_tids = $this->getCountriesRegions($country_nids);
        break;
      // Use only field_treaty as source for region.
      case 'decision':
      case 'event_calendar_imported':
      case 'feed_item':
        $treaty_nids = $this->getReferenceFieldValues($node, self::FIELD_TREATY);
        $new_tids = $this->getTreatiesRegions($treaty_nids);

        break;
      // Use field_country and if empty fall back to field_treaty
      case 'document':
      case 'event_calendar':
        $country_nids = $this->getReferenceFieldValues($node, self::FIELD_COUNTRY);
        if (!empty($country_nids)) {
          $new_tids = $this->getCountriesRegions($country_nids);
        }
        else {
          $treaty_nids = $this->getReferenceFieldValues($node, self::FIELD_TREATY);
          $new_tids = $this->getTreatiesRegions($treaty_nids);
        }
        break;
    }
    $new_values = $reset ? $new_tids : array_unique(array_merge($new_tids, $original));
    $this->setNodeTermReferenceFieldValues($node, self::FIELD_REGION, $new_values);
    $changed = empty(array_diff($original, $new_tids)) && empty(array_diff($new_tids, $original));

    return $changed;
  }
}

/**
 * Class TopicDenormalizedFieldHandler sets the field_mea_topic redundantly.
 *
 * This field is computed based on the field_treaty property.
 */
class TopicDenormalizedFieldHandler extends DenormalizedFieldHandler  {

  function getSupportedContentTypes() {
    // @TODO make configurable globally? Per node?
    return array('action_plan', 'contact_person', 'decision',
      'document', 'event_calendar', 'event_calendar_imported', 'feed_item',
      'geographical_site', 'national_report');
  }

  /**
   * {@inheritdoc}
   */
  public function computeFieldImpl($node, $reset = TRUE) {
    $changed = FALSE;
    $original = $this->getReferenceFieldValues($node, self::FIELD_MEA_TOPIC);
    switch ($node->type) {
      case 'action_plan':
      case 'contact_person':
      case 'decision':
      case 'document':
      case 'event_calendar':
      case 'event_calendar_imported':
      case 'feed_item':
      case 'geographical_site':
      case 'national_report':
        $treaty_nids = $this->getReferenceFieldValues($node, self::FIELD_TREATY);
        $topic_tids = $this->getTreatiesTopics($treaty_nids);
        $new_values = $reset ? $topic_tids : array_unique(array_merge($topic_tids, $original));
        $this->setNodeTermReferenceFieldValues($node, self::FIELD_MEA_TOPIC, $new_values);
        $changed = !(empty(array_diff($original, $topic_tids)) && empty(array_diff($topic_tids, $original)));
      break;
    }
    return $changed;
  }
}
