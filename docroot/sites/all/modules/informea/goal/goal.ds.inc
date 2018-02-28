<?php
/**
 * @file
 * goal.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function goal_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|goal|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'goal';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '5',
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
  $export['node|goal|search_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function goal_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|goal|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'goal';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_images',
      ),
      'right' => array(
        1 => 'title',
        2 => 'group_info',
        3 => 'search_excerpt',
        4 => 'group_tags',
        5 => 'field_mea_topic',
        6 => 'content_type',
        7 => 'field_goal_type',
      ),
    ),
    'fields' => array(
      'field_images' => 'left',
      'title' => 'right',
      'group_info' => 'right',
      'search_excerpt' => 'right',
      'group_tags' => 'right',
      'field_mea_topic' => 'right',
      'content_type' => 'right',
      'field_goal_type' => 'right',
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
  $export['node|goal|search_item'] = $ds_layout;

  return $export;
}