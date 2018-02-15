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
  $ds_fieldsetting->id = 'node|treaty|regional_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'treaty';
  $ds_fieldsetting->view_mode = 'regional_landing_page';
  $ds_fieldsetting->settings = array(
    'treaty_links' => array(
      'weight' => '4',
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
  $export['node|treaty|regional_landing_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|treaty|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'treaty';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'treaty_links' => array(
      'weight' => '5',
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|treaty|topical_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'treaty';
  $ds_fieldsetting->view_mode = 'topical_landing_page';
  $ds_fieldsetting->settings = array(
    'treaty_links' => array(
      'weight' => '4',
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
  $export['node|treaty|topical_landing_page'] = $ds_fieldsetting;

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
  $ds_field->ui_limit = 'treaty|*';
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
  $ds_layout->id = 'node|treaty|regional_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'treaty';
  $ds_layout->view_mode = 'regional_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'group_tags',
        3 => 'field_informea_tags',
        4 => 'treaty_links',
        5 => 'field_mea_topic',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'group_tags' => 'right',
      'field_informea_tags' => 'right',
      'treaty_links' => 'right',
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
  $export['node|treaty|regional_landing_page'] = $ds_layout;

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
        3 => 'group_tags',
        4 => 'field_informea_tags',
        5 => 'treaty_links',
        6 => 'content_type',
        7 => 'field_mea_topic',
        8 => 'field_region',
        9 => 'field_type_of_text',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'group_info' => 'right',
      'group_tags' => 'right',
      'field_informea_tags' => 'right',
      'treaty_links' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_type_of_text' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|treaty|topical_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'treaty';
  $ds_layout->view_mode = 'topical_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_logo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'group_tags',
        3 => 'field_informea_tags',
        4 => 'field_region',
        5 => 'treaty_links',
      ),
    ),
    'fields' => array(
      'field_logo' => 'left',
      'title' => 'right',
      'group_tags' => 'right',
      'field_informea_tags' => 'right',
      'field_region' => 'right',
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
  $export['node|treaty|topical_landing_page'] = $ds_layout;

  return $export;
}
