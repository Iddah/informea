<?php
/**
 * @file
 * meeting.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function meeting_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'informea-teaser__title',
        'exclude node title settings' => '1',
      ),
    ),
  );
  $export['node|event_calendar|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function meeting_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'event_calendar_date',
      ),
      'right' => array(
        1 => 'title',
        2 => 'group_event_info',
        3 => 'field_region',
        4 => 'field_country',
        5 => 'field_city',
        6 => 'field_location',
        7 => 'field_treaty',
      ),
    ),
    'fields' => array(
      'event_calendar_date' => 'left',
      'title' => 'right',
      'group_event_info' => 'right',
      'field_region' => 'right',
      'field_country' => 'right',
      'field_city' => 'right',
      'field_location' => 'right',
      'field_treaty' => 'right',
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
  $export['node|event_calendar|search_item'] = $ds_layout;

  return $export;
}
