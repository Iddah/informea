<?php
/**
 * @file
 * treaty.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function treaty_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecolex|node|treaty|form';
  $field_group->group_name = 'group_ecolex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_treaty_field_group';
  $field_group->data = array(
    'label' => 'ECOLEX',
    'weight' => '19',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_alternative_record_id',
      2 => 'field_available_in',
      3 => 'field_cited_treaties',
      4 => 'field_depositary',
      5 => 'field_ecolex_tags',
      6 => 'field_ecolex_url',
      7 => 'field_field_of_application',
      8 => 'field_internet_reference',
      9 => 'field_jurisdiction',
      10 => 'field_number_of_pages',
      11 => 'field_obsolete',
      12 => 'field_place_of_adoption',
      13 => 'field_related_website',
      14 => 'field_type_of_text',
      15 => 'field_amends_treaty',
      16 => 'field_official_publication',
      17 => 'field_related_url',
      18 => 'field_date_of_entry',
      19 => 'field_date_of_modification',
      20 => 'field_sorting_date',
      21 => 'field_ecolex_keywords',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ecolex|node|treaty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_links|node|treaty|form';
  $field_group->group_name = 'group_external_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_treaty_field_group';
  $field_group->data = array(
    'label' => 'External links',
    'weight' => '18',
    'children' => array(
      0 => 'field_faolex_url',
      1 => 'field_treaty_parties_url',
      2 => 'field_treaty_text_url',
      3 => 'field_treaty_website_url',
      4 => 'field_treaty_decisions_url',
      5 => 'field_treaty_plans_url',
      6 => 'field_treaty_protocols_url',
      7 => 'field_treaty_reports_url',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_external_links|node|treaty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|treaty|regional_landing_page';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'regional_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '14',
    'children' => array(),
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
  $field_groups['group_info|node|treaty|regional_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|treaty|search_item';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'search_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '2',
    'children' => array(),
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
  $field_groups['group_info|node|treaty|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|treaty|topical_landing_page';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'topical_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline info',
    'weight' => '14',
    'children' => array(),
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
  $field_groups['group_info|node|treaty|topical_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|treaty|regional_landing_page';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'regional_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_mea_topic',
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
  $field_groups['group_tags|node|treaty|regional_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|treaty|regional_treaty';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'regional_treaty';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_mea_topic',
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
  $field_groups['group_tags|node|treaty|regional_treaty'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|treaty|search_item';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
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
  $field_groups['group_tags|node|treaty|search_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|treaty|topical_landing_page';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'topical_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_region',
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
  $field_groups['group_tags|node|treaty|topical_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|treaty|topical_treaty';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'topical_treaty';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_region',
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
  $field_groups['group_tags|node|treaty|topical_treaty'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_data|node|treaty|form';
  $field_group->group_name = 'group_technical_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_treaty_field_group';
  $field_group->data = array(
    'label' => 'Technical data',
    'weight' => '21',
    'children' => array(
      0 => 'field_odata_identifier',
      1 => 'field_ratification_xml_url',
      2 => 'field_sorting_order',
      3 => 'field_has_api_action_plans',
      4 => 'field_has_api_decisions',
      5 => 'field_has_api_national_reports',
      6 => 'field_treaty_has_parties_from_un',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-data field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_technical_data|node|treaty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_treaty_field_group|node|treaty|form';
  $field_group->group_name = 'group_treaty_field_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'treaty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '26',
    'children' => array(
      0 => 'group_ecolex',
      1 => 'group_external_links',
      2 => 'group_technical_data',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Additional information',
      'instance_settings' => array(
        'classes' => 'group-treaty-field-group field-group-htabs',
      ),
    ),
  );
  $field_groups['group_treaty_field_group|node|treaty|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional information');
  t('ECOLEX');
  t('External links');
  t('Inline Tags');
  t('Inline info');
  t('Technical data');

  return $field_groups;
}
