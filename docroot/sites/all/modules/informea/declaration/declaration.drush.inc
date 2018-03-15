<?php

/**
 * Implementation of hook_drush_command().
 */
function declaration_drush_command() {
  $items = array();

  $items['informea-declaration-populate-field-sorting-date'] = array(
    'description' => 'Populate field_sorting_date value for all declaration ctypes',
    'aliases' => array('id-pfsd'),
  );
  return $items;
}

function drush_declaration_informea_declaration_populate_field_sorting_date() {
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'declaration')
    ->execute();
  if ($result['node']) {
    foreach ($result['node'] as $nid => $node) {
      $n = node_load($nid);
      node_save($n);
      drush_log("Updated declaration: " . $nid . " date: " . date('Y-m-d h:i:s O', $n->created), "ok");
    }
  }
}
