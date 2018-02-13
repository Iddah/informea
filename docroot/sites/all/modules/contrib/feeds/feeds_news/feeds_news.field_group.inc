<?php
/**
 * @file
 * feeds_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feeds_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|feed_item|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'feed_item';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_mea_topic',
      1 => 'field_region',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inline tags',
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
  $field_groups['group_tags|node|feed_item|search_item'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inline tags');

  return $field_groups;
}
