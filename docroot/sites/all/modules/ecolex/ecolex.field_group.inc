<?php
/**
 * @file
 * ecolex.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecolex_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups|node|court_decisions|form';
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '33',
    'children' => array(
      0 => 'group_references',
      1 => 'group_links',
      2 => 'group_tagging',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-groups field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_groups|node|court_decisions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identifiers|node|court_decisions|form';
  $field_group->group_name = 'group_identifiers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identifiers',
    'weight' => '1',
    'children' => array(
      0 => 'field_reference_number',
      1 => 'field_alternative_record_id',
      2 => 'field_isis_number',
      3 => 'field_original_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-identifiers field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_identifiers|node|court_decisions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|court_decisions|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '51',
    'children' => array(
      0 => 'field_url',
      1 => 'field_related_url',
      2 => 'field_document_abstract',
      3 => 'field_document_other',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|court_decisions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|court_decisions|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '50',
    'children' => array(
      0 => 'field_court_decision_raw',
      1 => 'field_ecolex_treaty_raw',
      2 => 'field_faolex_reference_raw',
      3 => 'field_ref_to_eu_legislation_raw',
      4 => 'field_ref_to_nat_legislation_raw',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_references|node|court_decisions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging|node|court_decisions|form';
  $field_group->group_name = 'group_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_groups';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '53',
    'children' => array(
      0 => 'field_ecolex_tags',
      1 => 'field_informea_tags',
      2 => 'field_ecolex_keywords',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tagging|node|court_decisions|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  t('Identifiers');
  t('Links');
  t('References');
  t('Tagging');

  return $field_groups;
}
