<?php
/**
 * @file
 * country_deliverable.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function country_deliverable_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|action_plan|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'action_plan';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'treaty_copy' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:21:"entityreference_label";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:4:"link";i:0;s:13:"bypass_access";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:17:"node:field_treaty";}',
        'load_terms' => 0,
      ),
    ),
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
  $export['node|action_plan|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|national_report|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'national_report';
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
  $export['node|national_report|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function country_deliverable_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|action_plan|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'action_plan';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        2 => 'field_mea_topic',
        3 => 'title',
        4 => 'field_region',
        5 => 'group_info',
        6 => 'search_excerpt',
        7 => 'field_action_plan_type',
        8 => 'field_country',
        9 => 'group_tags',
        10 => 'treaty_copy',
        11 => 'group_links',
        12 => 'field_files',
      ),
      'left' => array(
        1 => 'field_treaty',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'field_treaty' => 'left',
      'field_mea_topic' => 'right',
      'title' => 'right',
      'field_region' => 'right',
      'group_info' => 'right',
      'search_excerpt' => 'right',
      'field_action_plan_type' => 'right',
      'field_country' => 'right',
      'group_tags' => 'right',
      'treaty_copy' => 'right',
      'group_links' => 'right',
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
  $export['node|action_plan|search_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|national_report|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'national_report';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        2 => 'field_country',
        3 => 'field_mea_topic',
        4 => 'title',
        5 => 'group_info',
        6 => 'field_files',
        7 => 'field_region',
        8 => 'search_excerpt',
        9 => 'field_informea_tags',
        10 => 'group_tags',
        11 => 'group_links',
      ),
      'left' => array(
        1 => 'field_treaty',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'field_treaty' => 'left',
      'field_country' => 'right',
      'field_mea_topic' => 'right',
      'title' => 'right',
      'group_info' => 'right',
      'field_files' => 'right',
      'field_region' => 'right',
      'search_excerpt' => 'right',
      'field_informea_tags' => 'right',
      'group_tags' => 'right',
      'group_links' => 'right',
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
  $export['node|national_report|search_item'] = $ds_layout;

  return $export;
}
