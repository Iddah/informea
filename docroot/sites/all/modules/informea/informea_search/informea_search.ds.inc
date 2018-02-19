<?php
/**
 * @file
 * informea_search.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function informea_search_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'search_excerpt';
  $ds_field->label = 'Search excerpt';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|search_item';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['search_excerpt'] = $ds_field;

  return $export;
}
