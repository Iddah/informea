<?php

/**
 * Implementation of hook_drush_command().
 */
function feeds_drush_command() {
  $items = array();

  $items['informea-feeds-populate-field-sorting-date'] = array(
    'description' => 'Populate field_sorting_date value for all event_calendar ctypes, with value from event_calendar_date field',
    'aliases' => array('if-pfsd'),
  );
  return $items;
}

function drush_feeds_informea_feeds_populate_field_sorting_date() {
  _feeds_populate_field_sorting_date();
}

/**
 * Populate field_sorting_date value for all event_calendar ctypes, with value from event_calendar_date field.
 */
function _feeds_populate_field_sorting_date(){
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'feed_item')
    ->execute();
  if ($result['node']) {
    foreach ($result['node'] as $nid => $node) {
      $n = node_load($nid);
      node_save($n);
      drush_log("Updated news: " . $nid . " date: " . date('Y-m-d h:i:s O', $n->created), "ok");
    }
  }
}
