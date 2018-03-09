<?php

/**
 * Implementation of hook_drush_command().
 */
function meeting_drush_command() {
  $items = array();

  $items['informea-meeting-populate-field-sorting-date'] = array(
    'description' => 'Populate field_sorting_date value for all event_calendar ctypes, with value from event_calendar_date field',
    'aliases' => array('im-pfsd'),
  );
  return $items;
}

function drush_meeting_informea_meeting_populate_field_sorting_date() {
  _meeting_populate_field_sorting_date();
}

/**
 * Populate field_sorting_date value for all event_calendar ctypes, with value from event_calendar_date field.
 */
function _meeting_populate_field_sorting_date(){
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'event_calendar')
    ->execute();
  if ($result['node']) {
    foreach ($result['node'] as $nid => $node) {
      $n = node_load($nid);
      node_save($n);
      drush_log("Updated event: " . $nid, "ok");
    }
  }
}
