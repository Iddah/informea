<?php
/**
 * @file
 * feeds_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feeds_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|feed_item|regional_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'feed_item';
  $ds_fieldsetting->view_mode = 'regional_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '1',
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
  $export['node|feed_item|regional_landing_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|feed_item|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'feed_item';
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
  );
  $export['node|feed_item|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|feed_item|topical_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'feed_item';
  $ds_fieldsetting->view_mode = 'topical_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '1',
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
  $export['node|feed_item|topical_landing_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feeds_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|feed_item|regional_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'feed_item';
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
    ),
    'fields' => array(
      'title' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
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
  $export['node|feed_item|regional_landing_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|feed_item|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'feed_item';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        2 => 'title',
        3 => 'field_mea_topic',
        4 => 'group_info',
        5 => 'field_feed_item_description',
        6 => 'field_region',
        7 => 'group_tags',
      ),
      'left' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'field_image' => 'left',
      'title' => 'right',
      'field_mea_topic' => 'right',
      'group_info' => 'right',
      'field_feed_item_description' => 'right',
      'field_region' => 'right',
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
  $export['node|feed_item|search_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|feed_item|topical_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'feed_item';
  $ds_layout->view_mode = 'topical_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'content_type',
        2 => 'group_tags',
        3 => 'field_region',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'content_type' => 'right',
      'group_tags' => 'right',
      'field_region' => 'right',
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
  $export['node|feed_item|topical_landing_page'] = $ds_layout;

  return $export;
}
