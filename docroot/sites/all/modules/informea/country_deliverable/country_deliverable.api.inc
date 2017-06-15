<?php

function country_deliverable_get_country_national_reports($id_country) {
  $query  = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'national_report')
    ->fieldCondition('field_country', 'target_id', $id_country)
    ->execute();
  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }
  return array();
}

function country_deliverable_get_country_action_plans($id_country) {
  $query  = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'action_plan')
    ->fieldCondition('field_country', 'target_id', $id_country)
    ->execute();
  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }
  return array();
}

function country_deliverable_get_treaty_national_reports($id_treaty) {
  $query  = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'national_report')
    ->fieldCondition('field_treaty', 'target_id', $id_treaty)
    ->execute();
  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }
  return array();
}

function country_deliverable_get_treaty_action_plans($id_treaty) {
  $query  = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'action_plan')
    ->fieldCondition('field_treaty', 'target_id', $id_treaty)
    ->execute();
  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }
  return array();
}

function country_deliverable_national_reports_group_by_treaty($id_country) {
  $rows = country_deliverable_get_country_national_reports($id_country);
  if (!empty($rows)) {
    $parties = array();
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $treaty  = $wrapper->field_treaty->value()[0];
      $parties[$treaty->nid] = $treaty;
    }
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $treaty = $wrapper->field_treaty->value()[0];
      $treaty = $parties[$treaty->nid];
      $treaty->national_reports[] = $row;
    }
    uasort($parties, function($a, $b) { return strcmp($a->title, $b->title); });
    // Sort the reports by date
    foreach($parties as &$party) {
      uasort($party->national_reports, function($a, $b) {
        $wa = entity_metadata_wrapper('node', $a);
        $wb = entity_metadata_wrapper('node', $b);
        return $wa->field_sorting_date->value() < $wb->field_sorting_date->value();
      });
    }
    return $parties;
  }
  return array();
}

function country_deliverable_action_plans_group_by_treaty($id_country) {
  $rows = country_deliverable_get_country_action_plans($id_country);
  if (!empty($rows)) {
    $parties = array();
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $treaty  = $wrapper->field_treaty->value()[0];
      $parties[$treaty->nid] = $treaty;
    }
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $treaty = $wrapper->field_treaty->value()[0];
      $treaty = $parties[$treaty->nid];
      $treaty->action_plans[] = $row;
    }
    uasort($parties, function($a, $b) { return strcmp($a->title, $b->title); });
    // Sort the plans by date
    foreach($parties as &$party) {
      uasort($party->action_plans, function($a, $b) {
        $wa = entity_metadata_wrapper('node', $a);
        $wb = entity_metadata_wrapper('node', $b);
        return $wa->field_sorting_date->value() < $wb->field_sorting_date->value();
      });
    }
    return $parties;
  }
  return array();
}

/**
 * National reports count for treaty.
 *
 * @param $id_treaty
 *
 * @return integer
 *   Number of reports or -1 if n/a
 */
function country_deliverable_count_treaty_national_reports($id_treaty) {
  if (treaty_can_have_national_reports($id_treaty)) {
    return EdwCacheDomain::cache_get_array('country_deliverable', __FUNCTION__, function ($id_treaty) {
      $national_reports = 0;
      $countries = country_deliverable_national_reports_group_by_country($id_treaty);
      foreach ($countries as $country) {
        $national_reports += count($country->national_reports);
      }
      return $national_reports;
    }, $id_treaty);
  }
  return -1;
}

/**
 * National reports count for treaty.
 *
 * @param $id_treaty
 *
 * @return integer
 *   Number of reports or -1 if n/a
 */
function country_deliverable_count_treaty_action_plans($id_treaty) {
  if (treaty_can_have_action_plans($id_treaty)) {
    return EdwCacheDomain::cache_get_array('country_deliverable', __FUNCTION__, function ($id_treaty) {
      $action_plans = 0;
      $countries = country_deliverable_action_plans_group_by_country($id_treaty);
      foreach ($countries as $country) {
        $action_plans += count($country->action_plans);
      }
      return $action_plans;
    }, $id_treaty);
  }
  return -1;
}

function country_deliverable_count_treaty_documents($id_treaty) {
  $q = db_select('field_data_field_treaty', 't');
  $q->fields('t');
  $q->condition('bundle', 'document');
  $q->condition('field_treaty_target_id', $id_treaty);
  return $q->execute()->rowCount();
}

function country_deliverable_national_reports_group_by_country($id_treaty) {
  $query = db_select('field_data_field_treaty', 'a')
    ->fields('a', array('entity_id'))->fields('b', array('field_country_target_id'));
  $query->innerJoin('field_data_field_country', 'b', 'a.entity_id=b.entity_id');
  $query->condition('a.bundle', 'national_report');
  $query->condition('a.field_treaty_target_id', $id_treaty);
  $rids = $query->execute()->fetchAll();
  if (!empty($rids)) {
    $parties = array();
    foreach ($rids as $row) {
      if(!array_key_exists($row->field_country_target_id, $parties)) {
        $parties[$row->field_country_target_id] = node_load($row->field_country_target_id);
      }
    }
    foreach ($rids as $row) {
      $country = $parties[$row->field_country_target_id];
      $country->national_reports[$row->entity_id] = (object)array('nid' => $row->entity_id, 'vid' => NULL, 'type' => 'national_report');
    }

    foreach($parties as $country) {
      $fields = field_info_instances('node', 'national_report');
      field_attach_load('node', $country->national_reports, FIELD_LOAD_CURRENT, array('field_id' => $fields['title_field']['field_id']));
      field_attach_load('node', $country->national_reports, FIELD_LOAD_CURRENT, array('field_id' => $fields['field_files']['field_id']));
      field_attach_load('node', $country->national_reports, FIELD_LOAD_CURRENT, array('field_id' => $fields['field_informea_tags']['field_id']));
      field_attach_load('node', $country->national_reports, FIELD_LOAD_CURRENT, array('field_id' => $fields['field_document_url']['field_id']));
      field_attach_load('node', $country->national_reports, FIELD_LOAD_CURRENT, array('field_id' => $fields['field_sorting_date']['field_id']));
    }
    uasort($parties, function($a, $b) { return strcmp($a->title, $b->title); });
    // Sort the reports by date
    foreach($parties as &$party) {
      uasort($party->national_reports, function($a, $b) {
        if (empty($a->field_sorting_date[LANGUAGE_NONE][0]['value'])) {
          return -1;
        }
        if (empty($b->field_sorting_date[LANGUAGE_NONE][0]['value'])) {
          return 1;
        }
        return strtotime($a->field_sorting_date[LANGUAGE_NONE][0]['value']) < strtotime($b->field_sorting_date[LANGUAGE_NONE][0]['value']);
      });
    }
    return $parties;
  }
  return array();
}

function country_deliverable_action_plans_group_by_country($id_treaty) {
  $rows = country_deliverable_get_treaty_action_plans($id_treaty);
  if (!empty($rows)) {
    $parties = array();
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $country  = $wrapper->field_country->value()[0];
      $parties[$country->nid] = $country;
    }
    foreach ($rows as $row) {
      $wrapper = entity_metadata_wrapper('node', $row);
      $country = $wrapper->field_country->value()[0];
      $country = $parties[$country->nid];
      $country->action_plans[] = $row;
    }
    uasort($parties, function($a, $b) { return strcmp($a->title, $b->title); });
    // Sort the plans by date
    foreach($parties as &$party) {
      uasort($party->action_plans, function($a, $b) {
        $wa = entity_metadata_wrapper('node', $a);
        $wb = entity_metadata_wrapper('node', $b);
        return $wa->field_sorting_date->value() < $wb->field_sorting_date->value();
      });
    }
    return $parties;
  }
  return array();
}

function country_deliverable_get_reporting_obligation_cycles($id_treaty) {
  $query  = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'reporting_obligation_cycle')
    ->fieldCondition('field_treaty', 'target_id', $id_treaty)
    ->propertyOrderBy('created', 'DESC')
    ->execute();
  if (isset($result['node'])) {
    return node_load_multiple(array_keys($result['node']));
  }
  return array();
}
