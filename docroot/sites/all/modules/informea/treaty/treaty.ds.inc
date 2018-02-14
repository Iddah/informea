<?php
/**
 * @file
 * treaty.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function treaty_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|treaty|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'treaty';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'treaty_links' => array(
      'weight' => '6',
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
  $export['node|treaty|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function treaty_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'treaty_links';
  $ds_field->label = 'Treaty links';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '-',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['treaty_links'] = $ds_field;

  return $export;
}

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
        2 => 'group_info',
        3 => 'body',
        4 => 'field_online_course_link',
        5 => 'field_treaty_text_url',
        6 => 'group_tags',
        7 => 'field_mea_topic',
        8 => 'field_region',
        9 => 'field_type_of_text',
        10 => 'treaty_links',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'group_info' => 'right',
      'body' => 'right',
      'field_online_course_link' => 'right',
      'field_treaty_text_url' => 'right',
      'group_tags' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_type_of_text' => 'right',
      'treaty_links' => 'right',
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
