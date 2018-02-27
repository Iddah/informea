<?php
/**
 * @file
 * document.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function document_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|document|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'document';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|document|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function document_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|document|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'document';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        2 => 'field_mea_topic',
        3 => 'title_field',
        4 => 'field_region',
        5 => 'group_info',
        6 => 'field_document_type',
        7 => 'group_tags',
        8 => 'group_links',
        9 => 'field_files',
        10 => 'field_sorting_date',
        11 => 'field_country',
        12 => 'field_treaty',
      ),
      'left' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'field_image' => 'left',
      'field_mea_topic' => 'right',
      'title_field' => 'right',
      'field_region' => 'right',
      'group_info' => 'right',
      'field_document_type' => 'right',
      'group_tags' => 'right',
      'group_links' => 'right',
      'field_files' => 'right',
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
  $export['node|document|search_item'] = $ds_layout;

  return $export;
}
