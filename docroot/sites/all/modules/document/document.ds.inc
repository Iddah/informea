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
    'title_prefix' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'content_type',
        2 => 'title_prefix',
        3 => 'title',
        4 => 'field_mea_topic',
        5 => 'field_region',
        6 => 'field_document_type',
        7 => 'group_info',
        8 => 'group_tags',
        9 => 'field_files',
        10 => 'field_sorting_date',
        11 => 'field_country',
        12 => 'field_treaty',
        13 => 'group_links',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'content_type' => 'right',
      'title_prefix' => 'right',
      'title' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_document_type' => 'right',
      'group_info' => 'right',
      'group_tags' => 'right',
      'field_files' => 'right',
      'field_sorting_date' => 'right',
      'field_country' => 'right',
      'field_treaty' => 'right',
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
  $export['node|document|search_item'] = $ds_layout;

  return $export;
}
