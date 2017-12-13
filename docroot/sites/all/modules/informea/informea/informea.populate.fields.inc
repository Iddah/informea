<?php

abstract class DenormalizedFieldHandler {

  const FIELD_TREATY = 'field_treaty';
  const FIELD_MEA_TOPIC = 'field_mea_topic';

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
   * Compute the new denormalized field values based on existing field values.
   *
   * @param \stdClass $node
   *   Node object.
   *
   * @return bool
   *   Returns TRUE if object has changed, FALSE when left in original state.
   */
  abstract function computeField($node);

  /**
   * Return an array of content types supported to de-normalise.
   *
   * @return mixed
   *   Array of strings.
   */
  abstract function getSupportedContentTypes();
}


class RegionDenormalizedFieldHandler extends DenormalizedFieldHandler {

  function getSupportedContentTypes() {
    // @TODO make configurable globally? Per node?
    return array('action_plan', 'contact_person', 'decision', 'document',
      'event_calendar', 'event_calendar_imported', 'feed_item',
      'geographical_site', 'member_party', 'national_report');
  }

  public function computeField($node) {
    if (empty($node) || !in_array($node->type, $this->getSupportedContentTypes())) {
      return FALSE;
    }
    $ret = FALSE;
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
  public function computeField($node) {
    if (empty($node) || !in_array($node->type, $this->getSupportedContentTypes())) {
      return FALSE;
    }
    $changed = FALSE;
    $original = $this->getReferenceFieldValues($node, self::FIELD_MEA_TOPIC);
    $source_field = NULL;
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
        $new_values = array_unique(array_merge($topic_tids, $original));
        $this->setNodeTermReferenceFieldValues($node, self::FIELD_MEA_TOPIC, $new_values);
        $changed = empty(array_diff($original, $topic_tids)) && empty(array_diff($topic_tids, $original));
      break;
    }
    return $changed;
  }
}
