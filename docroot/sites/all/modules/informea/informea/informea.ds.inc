<?php
/**
 * @file
 * informea.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function informea_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|court_decisions|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'court_decisions';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'informea-teaser__title',
        'exclude node title settings' => '1',
      ),
    ),
  );
  $export['node|court_decisions|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function informea_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|court_decisions|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'court_decisions';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'field_sorting_date',
        1 => 'title',
        2 => 'field_country',
        3 => 'group_info',
        4 => 'group_tags',
        5 => 'field_court_name',
        6 => 'group_links',
        7 => 'field_mea_topic',
        8 => 'field_region',
        9 => 'field_type_of_text',
        10 => 'field_ecolex_decision_status',
        11 => 'field_url',
        12 => 'field_files',
      ),
    ),
    'fields' => array(
      'field_sorting_date' => 'right',
      'title' => 'right',
      'field_country' => 'right',
      'group_info' => 'right',
      'group_tags' => 'right',
      'field_court_name' => 'right',
      'group_links' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_type_of_text' => 'right',
      'field_ecolex_decision_status' => 'right',
      'field_url' => 'right',
      'field_files' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|court_decisions|search_item'] = $ds_layout;

  return $export;
}
