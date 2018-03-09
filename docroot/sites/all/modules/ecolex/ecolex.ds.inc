<?php
/**
 * @file
 * ecolex.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ecolex_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|court_decisions|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'court_decisions';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_excerpt' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|court_decisions|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|legislation|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'legislation';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_excerpt' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|legislation|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|literature|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'literature';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_excerpt' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
  $export['node|literature|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ecolex_ds_layout_settings_info() {
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
        0 => 'content_type',
        1 => 'title_field',
        2 => 'field_sorting_date',
        3 => 'field_mea_topic',
        4 => 'field_country',
        5 => 'field_region',
        6 => 'group_info',
        7 => 'search_excerpt',
        8 => 'field_type_of_text',
        9 => 'field_court_name',
        10 => 'field_ecolex_decision_status',
        11 => 'group_tags',
        12 => 'group_links',
        13 => 'field_url',
        14 => 'field_files',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'title_field' => 'right',
      'field_sorting_date' => 'right',
      'field_mea_topic' => 'right',
      'field_country' => 'right',
      'field_region' => 'right',
      'group_info' => 'right',
      'search_excerpt' => 'right',
      'field_type_of_text' => 'right',
      'field_court_name' => 'right',
      'field_ecolex_decision_status' => 'right',
      'group_tags' => 'right',
      'group_links' => 'right',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legislation|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legislation';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title_field',
        1 => 'group_info',
        2 => 'group_tags',
        3 => 'search_excerpt',
        4 => 'content_type',
        5 => 'group_links',
        6 => 'field_mea_topic',
        7 => 'field_url',
        8 => 'field_region',
        9 => 'field_files',
        10 => 'field_type_of_text',
        11 => 'field_sorting_date',
        12 => 'field_country',
      ),
    ),
    'fields' => array(
      'title_field' => 'right',
      'group_info' => 'right',
      'group_tags' => 'right',
      'search_excerpt' => 'right',
      'content_type' => 'right',
      'group_links' => 'right',
      'field_mea_topic' => 'right',
      'field_url' => 'right',
      'field_region' => 'right',
      'field_files' => 'right',
      'field_type_of_text' => 'right',
      'field_sorting_date' => 'right',
      'field_country' => 'right',
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
  $export['node|legislation|search_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|literature|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'literature';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'group_info',
        2 => 'search_excerpt',
        3 => 'group_tags',
        4 => 'content_type',
        5 => 'field_mea_topic',
        6 => 'field_region',
        7 => 'field_literature_type',
        8 => 'group_links',
        9 => 'field_sorting_date',
        10 => 'field_country',
        11 => 'field_treaty',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'group_info' => 'right',
      'search_excerpt' => 'right',
      'group_tags' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_literature_type' => 'right',
      'group_links' => 'right',
      'field_sorting_date' => 'right',
      'field_country' => 'right',
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
  $export['node|literature|search_item'] = $ds_layout;

  return $export;
}
