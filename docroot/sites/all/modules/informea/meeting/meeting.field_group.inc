<?php
/**
 * @file
 * meeting.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function meeting_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event_calendar|search_item';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_calendar';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event info',
    'weight' => '2',
    'children' => array(
      0 => 'field_city',
      1 => 'field_country',
      2 => 'field_location',
      3 => 'field_treaty',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_info|node|event_calendar|search_item'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event info');

  return $field_groups;
}
