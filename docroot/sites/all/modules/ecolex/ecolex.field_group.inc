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
      0 => 'group_links',
      1 => 'group_references',
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
  $field_group->identifier = 'group_info|node|court_decisions|search_item';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_court_name',
      2 => 'field_sorting_date',
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
  $field_groups['group_info|node|court_decisions|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|legislation|search_item';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legislation';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '1',
    'children' => array(
      0 => 'field_country',
      1 => 'field_sorting_date',
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
  $field_groups['group_info|node|legislation|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|literature|search_item';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'literature';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '1',
    'children' => array(
      0 => 'field_country',
      1 => 'field_treaty',
      2 => 'field_sorting_date',
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
  $field_groups['group_info|node|literature|search_item'] = $field_group;

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
  $field_group->identifier = 'group_links|node|court_decisions|search_item';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline links',
    'weight' => '5',
    'children' => array(
      0 => 'field_files',
      1 => 'field_url',
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
  $field_groups['group_links|node|court_decisions|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|legislation|search_item';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legislation';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline links',
    'weight' => '4',
    'children' => array(
      0 => 'field_url',
      1 => 'field_files',
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
  $field_groups['group_links|node|legislation|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|literature|search_item';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'literature';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline links',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-links field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_links|node|literature|search_item'] = $field_group;

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
      3 => 'field_mea_topic',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|court_decisions|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'court_decisions';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_type_of_text',
      1 => 'field_ecolex_decision_status',
      2 => 'field_region',
      3 => 'field_mea_topic',
      4 => 'content_type',
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
  $field_groups['group_tags|node|court_decisions|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|legislation|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legislation';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_type_of_text',
      1 => 'field_region',
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
  $field_groups['group_tags|node|legislation|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|literature|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'literature';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_literature_type',
      1 => 'field_region',
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
  $field_groups['group_tags|node|literature|search_item'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  t('Identifiers');
  t('Inline Tags');
  t('Inline info');
  t('Inline links');
  t('Links');
  t('References');
  t('Tagging');

  return $field_groups;
}
