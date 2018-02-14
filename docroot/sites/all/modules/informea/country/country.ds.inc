<?php
/**
 * @file
 * country.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function country_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|country|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'country';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'country_flag' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'treaty_links' => array(
      'weight' => '3',
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
  $export['node|country|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function country_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'country_flag';
  $ds_field->label = 'Country Flag';
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
  $export['country_flag'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function country_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'country_flag',
      ),
      'right' => array(
        1 => 'content_type',
        2 => 'field_region',
        3 => 'title',
        4 => 'group_tags',
        5 => 'treaty_links',
      ),
    ),
    'fields' => array(
      'country_flag' => 'left',
      'content_type' => 'right',
      'field_region' => 'right',
      'title' => 'right',
      'group_tags' => 'right',
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
  $export['node|country|search_item'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function country_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'flag_only';
  $ds_view_mode->label = 'Flag only';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['flag_only'] = $ds_view_mode;

  return $export;
}
