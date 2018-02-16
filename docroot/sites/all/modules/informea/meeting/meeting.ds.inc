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
  $ds_fieldsetting->id = 'node|event_calendar|regional_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'regional_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
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
  $export['node|event_calendar|regional_landing_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'informea-teaser__title',
        'exclude node title settings' => '1',
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|event_calendar|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|topical_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'topical_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
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
  $export['node|event_calendar|topical_landing_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function meeting_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|regional_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'regional_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'content_type',
        2 => 'field_mea_topic',
        3 => 'group_tags',
      ),
      'left' => array(
        4 => 'event_calendar_date',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'group_tags' => 'right',
      'event_calendar_date' => 'left',
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
  $export['node|event_calendar|regional_landing_page'] = $ds_layout;

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
        0 => 'post_date',
      ),
      'right' => array(
        1 => 'event_calendar_date',
        2 => 'content_type',
        3 => 'title',
        4 => 'field_country',
        5 => 'field_mea_topic',
        6 => 'field_location',
        7 => 'field_region',
        8 => 'group_info',
        9 => 'field_treaty',
        10 => 'field_event_type',
        11 => 'group_tags',
      ),
    ),
    'fields' => array(
      'post_date' => 'left',
      'event_calendar_date' => 'right',
      'content_type' => 'right',
      'title' => 'right',
      'field_country' => 'right',
      'field_mea_topic' => 'right',
      'field_location' => 'right',
      'field_region' => 'right',
      'group_info' => 'right',
      'field_treaty' => 'right',
      'field_event_type' => 'right',
      'group_tags' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|topical_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'topical_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        1 => 'title',
        2 => 'field_region',
        3 => 'group_tags',
      ),
      'left' => array(
        4 => 'event_calendar_date',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'title' => 'right',
      'field_region' => 'right',
      'group_tags' => 'right',
      'event_calendar_date' => 'left',
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
  $export['node|event_calendar|topical_landing_page'] = $ds_layout;

  return $export;
}
