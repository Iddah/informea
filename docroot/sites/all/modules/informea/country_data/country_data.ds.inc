<?php
/**
 * @file
 * country_data.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function country_data_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact_person|country_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact_person';
  $ds_fieldsetting->view_mode = 'country_page';
  $ds_fieldsetting->settings = array(
    'contact_links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'content_type' => array(
      'weight' => '6',
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
  $export['node|contact_person|country_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact_person|search_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact_person';
  $ds_fieldsetting->view_mode = 'search_item';
  $ds_fieldsetting->settings = array(
    'contact_links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'content_type' => array(
      'weight' => '16',
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
  $export['node|contact_person|search_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact_person|treaty_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact_person';
  $ds_fieldsetting->view_mode = 'treaty_page';
  $ds_fieldsetting->settings = array(
    'contact_links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'content_type' => array(
      'weight' => '6',
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
  $export['node|contact_person|treaty_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function country_data_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contact_links';
  $ds_field->label = 'Contact links';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'contact_person|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '-',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['contact_links'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function country_data_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact_person|country_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'country_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_treaty',
      ),
      'right' => array(
        1 => 'title',
        2 => 'group_list',
        3 => 'field_person_position',
        4 => 'group_tags',
        5 => 'contact_links',
        6 => 'field_person_institution',
        7 => 'content_type',
        8 => 'field_mea_topic',
        9 => 'field_contact_roles',
      ),
    ),
    'fields' => array(
      'field_treaty' => 'left',
      'title' => 'right',
      'group_list' => 'right',
      'field_person_position' => 'right',
      'group_tags' => 'right',
      'contact_links' => 'right',
      'field_person_institution' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'field_contact_roles' => 'right',
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
  $export['node|contact_person|country_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact_person|regional_landing_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'regional_landing_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_treaty',
        2 => 'field_person_prefix',
        3 => 'field_person_first_name',
        4 => 'field_person_last_name',
        5 => 'field_person_position',
        6 => 'field_person_institution',
        7 => 'field_person_department',
        8 => 'field_address',
        9 => 'field_person_email',
        10 => 'field_contact_telephone',
        11 => 'field_contact_fax',
        12 => 'field_contact_primary_nfp',
        13 => 'field_country',
        14 => 'field_person_type',
        15 => 'field_last_update',
        16 => 'field_region',
        17 => 'field_person_gender',
        18 => 'field_mea_topic',
        19 => 'field_contact_roles',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_treaty' => 'left',
      'field_person_prefix' => 'left',
      'field_person_first_name' => 'left',
      'field_person_last_name' => 'left',
      'field_person_position' => 'left',
      'field_person_institution' => 'left',
      'field_person_department' => 'left',
      'field_address' => 'left',
      'field_person_email' => 'left',
      'field_contact_telephone' => 'left',
      'field_contact_fax' => 'left',
      'field_contact_primary_nfp' => 'left',
      'field_country' => 'left',
      'field_person_type' => 'left',
      'field_last_update' => 'left',
      'field_region' => 'left',
      'field_person_gender' => 'left',
      'field_mea_topic' => 'left',
      'field_contact_roles' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|contact_person|regional_landing_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact_person|search_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'search_item';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'field_country',
        2 => 'field_person_position',
        3 => 'title',
        4 => 'field_person_institution',
        5 => 'group_list',
        6 => 'group_tags',
        7 => 'contact_links',
        8 => 'content_type',
        9 => 'field_mea_topic',
        10 => 'field_region',
        11 => 'field_contact_roles',
      ),
      'left' => array(
        1 => 'field_treaty',
      ),
    ),
    'fields' => array(
      'field_country' => 'right',
      'field_treaty' => 'left',
      'field_person_position' => 'right',
      'title' => 'right',
      'field_person_institution' => 'right',
      'group_list' => 'right',
      'group_tags' => 'right',
      'contact_links' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'field_region' => 'right',
      'field_contact_roles' => 'right',
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
  $export['node|contact_person|search_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact_person|treaty_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact_person';
  $ds_layout->view_mode = 'treaty_page';
  $ds_layout->layout = 'informea_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_country',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_person_position',
        3 => 'group_list',
        4 => 'field_person_institution',
        5 => 'group_tags',
        6 => 'contact_links',
        7 => 'content_type',
        8 => 'field_mea_topic',
        9 => 'field_contact_roles',
      ),
    ),
    'fields' => array(
      'field_country' => 'left',
      'title' => 'right',
      'field_person_position' => 'right',
      'group_list' => 'right',
      'field_person_institution' => 'right',
      'group_tags' => 'right',
      'contact_links' => 'right',
      'content_type' => 'right',
      'field_mea_topic' => 'right',
      'field_contact_roles' => 'right',
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
  $export['node|contact_person|treaty_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function country_data_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact_roles';
  $ds_view_mode->label = 'Contact roles';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['contact_roles'] = $ds_view_mode;

  return $export;
}
