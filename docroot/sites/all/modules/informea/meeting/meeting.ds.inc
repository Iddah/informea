<?php
/**
 * @file
 * meeting.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function meeting_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|regional_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'regional_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'calendar_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"date_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:6:{s:11:"format_type";s:16:"calendar_display";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:6:"fromto";s:5:"value";s:19:"show_remaining_days";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:event_calendar_date";}',
        'load_terms' => 0,
      ),
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
  $export['node|event_calendar|regional_landing_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'calendar_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"date_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:6:{s:11:"format_type";s:16:"calendar_display";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:6:"fromto";s:5:"value";s:19:"show_remaining_days";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:event_calendar_date";}',
        'load_terms' => 0,
      ),
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
  $export['node|event_calendar|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event_calendar|topical_landing_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event_calendar';
  $ds_fieldsetting->view_mode = 'topical_landing_page';
  $ds_fieldsetting->settings = array(
    'content_type' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'calendar_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"date_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:6:{s:11:"format_type";s:16:"calendar_display";s:15:"multiple_number";s:0:"";s:13:"multiple_from";s:0:"";s:11:"multiple_to";s:0:"";s:6:"fromto";s:5:"value";s:19:"show_remaining_days";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:event_calendar_date";}',
        'load_terms' => 0,
      ),
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
  $export['node|event_calendar|topical_landing_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function meeting_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'calendar_date';
  $ds_field->label = 'Calendar date';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
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
  $export['calendar_date'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function meeting_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|regional_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'regional_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'calendar_date',
      ),
      'right' => array(
        1 => 'title',
        2 => 'content_type',
        3 => 'group_tags',
        4 => 'field_mea_topic',
      ),
    ),
    'fields' => array(
      'calendar_date' => 'left',
      'title' => 'right',
      'content_type' => 'right',
      'group_tags' => 'right',
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
  $export['node|event_calendar|regional_landing_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        1 => 'event_calendar_date',
        3 => 'field_mea_topic',
        4 => 'field_country',
        5 => 'title',
        6 => 'field_region',
        7 => 'field_location',
        8 => 'group_info',
        9 => 'field_treaty',
        10 => 'field_event_type',
        11 => 'group_tags',
      ),
      'left' => array(
        2 => 'calendar_date',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'event_calendar_date' => 'right',
      'calendar_date' => 'left',
      'field_mea_topic' => 'right',
      'field_country' => 'right',
      'title' => 'right',
      'field_region' => 'right',
      'field_location' => 'right',
      'group_info' => 'right',
      'field_treaty' => 'right',
      'field_event_type' => 'right',
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
  $export['node|event_calendar|search_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_calendar|topical_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_calendar';
  $ds_layout->view_mode = 'topical_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'content_type',
        2 => 'title',
        3 => 'field_region',
        4 => 'group_tags',
      ),
      'left' => array(
        1 => 'calendar_date',
      ),
    ),
    'fields' => array(
      'content_type' => 'right',
      'calendar_date' => 'left',
      'title' => 'right',
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
  $export['node|event_calendar|topical_landing_page'] = $ds_layout;

  return $export;
}
