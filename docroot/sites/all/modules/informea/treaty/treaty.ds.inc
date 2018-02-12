<?php
/**
 * @file
 * treaty.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function treaty_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|treaty|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'treaty';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_online_course_link',
        3 => 'field_treaty_text_url',
        4 => 'field_entry_into_force',
        5 => 'field_mea_topic',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'field_online_course_link' => 'right',
      'field_treaty_text_url' => 'right',
      'field_entry_into_force' => 'right',
      'field_mea_topic' => 'right',
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
  $export['node|treaty|search_item'] = $ds_layout;

  return $export;
}
