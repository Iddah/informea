<?php
/**
 * @file
 * informea.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function informea_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'content_type';
  $ds_field->label = 'Content type';
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
  $export['content_type'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'treaty_copy';
  $ds_field->label = 'Treaty copy';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'action_plan|search_item
national_report|search_item
contact_person|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['treaty_copy'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function informea_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_page';
  $ds_view_mode->label = 'Country Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_and_title';
  $ds_view_mode->label = 'Image and title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_and_title'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_only';
  $ds_view_mode->label = 'Image only';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_only'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'regional_landing_page';
  $ds_view_mode->label = 'Regional Landing Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['regional_landing_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'topical_landing_page';
  $ds_view_mode->label = 'Topical Landing Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['topical_landing_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'treaty_page';
  $ds_view_mode->label = 'Treaty Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['treaty_page'] = $ds_view_mode;

  return $export;
}
