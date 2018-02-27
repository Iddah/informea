<?php
/**
 * @file
 * document.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function document_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|document|search_item';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_sorting_date',
      2 => 'field_treaty',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info|node|document|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|document|search_item';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline links',
    'weight' => '4',
    'children' => array(
      0 => 'field_files',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'informea-teaser__links',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_links|node|document|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|document|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_document_type',
      1 => 'field_mea_topic',
      2 => 'field_region',
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
  $field_groups['group_tags|node|document|search_item'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inline Tags');
  t('Inline info');
  t('Inline links');

  return $field_groups;
}
