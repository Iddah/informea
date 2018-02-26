<?php
/**
 * @file
 * country_data.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function country_data_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_2|node|contact_person|country_page';
  $field_group->group_name = 'group_list_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'country_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline List 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_institution',
      1 => 'field_person_position',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline List 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'list--inline--pipe',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_2|node|contact_person|country_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_2|node|contact_person|search_item';
  $field_group->group_name = 'group_list_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline List 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_institution',
      1 => 'field_person_position',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline List 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'list--inline--pipe',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_2|node|contact_person|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|node|contact_person|country_page';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'country_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline List',
    'weight' => '2',
    'children' => array(
      0 => 'treaty_copy',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline List',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list|node|contact_person|country_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|node|contact_person|search_item';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline List',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'treaty_copy',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline List',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list|node|contact_person|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list|node|contact_person|treaty_page';
  $field_group->group_name = 'group_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'treaty_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline List',
    'weight' => '2',
    'children' => array(
      0 => 'field_person_institution',
      1 => 'field_person_position',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline List',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'list--inline--pipe',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list|node|contact_person|treaty_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|contact_person|country_page';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'country_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_roles',
      1 => 'field_mea_topic',
      2 => 'content_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline Tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__tags',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|contact_person|country_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|contact_person|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_region',
      1 => 'field_contact_roles',
      2 => 'field_mea_topic',
      3 => 'content_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline Tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__tags',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|contact_person|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|contact_person|treaty_page';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_person';
  $field_group->mode = 'treaty_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_roles',
      1 => 'field_mea_topic',
      2 => 'content_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline Tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__tags',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|contact_person|treaty_page'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inline List');
  t('Inline List 2');
  t('Inline Tags');

  return $field_groups;
}
