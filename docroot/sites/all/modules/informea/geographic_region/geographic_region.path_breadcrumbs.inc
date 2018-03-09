<?php
/**
 * @file
 * geographic_region.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function geographic_region_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'regions_region';
  $path_breadcrumb->name = 'Regions > Region';
  $path_breadcrumb->path = 'regions/%region';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Regions',
      1 => '%region:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'region' => array(
        'position' => 1,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vocabularies' => array(
            'geographical_region' => 'geographical_region',
            'decision_status' => 0,
            'decision_type' => 0,
            'event_repetition' => 0,
            'event_calendar_status' => 0,
            'event_kind' => 0,
            'event_type' => 0,
            'event_access' => 0,
            'action_plan_type' => 0,
            'analytics_key_type' => 0,
            'contact_role' => 0,
            'jurisdiction' => 0,
            'data_source' => 0,
            'declaration_paragraph_type' => 0,
            'document_author' => 0,
            'document_identifier_type' => 0,
            'document_type' => 0,
            'ecolex_decision_status' => 0,
            'ecolex_legislation_status' => 0,
            'ecolex_region' => 0,
            'ecolex_subjects' => 0,
            'field_of_application' => 0,
            'field_of_work' => 0,
            'geg_theme' => 0,
            'geographical_scope' => 0,
            'keywords' => 0,
            'legislation_sub_file_code' => 0,
            'literature_type' => 0,
            'mea_topic' => 0,
            'party_status' => 0,
            'person_type' => 0,
            'tags' => 0,
            'territorial_subdivision' => 0,
            'thesaurus_agrovoc' => 0,
            'thesaurus_emerging_terms' => 0,
            'thesaurus_geg' => 0,
            'thesaurus_ieg' => 0,
            'type_of_text' => 0,
            'thesaurus_ecolex' => 0,
            'thesaurus_gemet' => 0,
            'thesaurus_informea' => 0,
            'goal_sources' => 0,
            'type_of_goal' => 0,
            'informea_themes' => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 1,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['regions_region'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'regions_region_topic';
  $path_breadcrumb->name = 'Regions > Region > Topic';
  $path_breadcrumb->path = 'regions/%region/%topic';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Regions',
      1 => '%region:name',
      2 => '%topic:name',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'region' => array(
        'position' => 1,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vocabularies' => array(
            'geographical_region' => 'geographical_region',
            'decision_status' => 0,
            'decision_type' => 0,
            'event_repetition' => 0,
            'event_calendar_status' => 0,
            'event_kind' => 0,
            'event_type' => 0,
            'event_access' => 0,
            'action_plan_type' => 0,
            'analytics_key_type' => 0,
            'contact_role' => 0,
            'jurisdiction' => 0,
            'data_source' => 0,
            'declaration_paragraph_type' => 0,
            'document_author' => 0,
            'document_identifier_type' => 0,
            'document_type' => 0,
            'ecolex_decision_status' => 0,
            'ecolex_legislation_status' => 0,
            'ecolex_region' => 0,
            'ecolex_subjects' => 0,
            'field_of_application' => 0,
            'field_of_work' => 0,
            'geg_theme' => 0,
            'geographical_scope' => 0,
            'keywords' => 0,
            'legislation_sub_file_code' => 0,
            'literature_type' => 0,
            'mea_topic' => 0,
            'party_status' => 0,
            'person_type' => 0,
            'tags' => 0,
            'territorial_subdivision' => 0,
            'thesaurus_agrovoc' => 0,
            'thesaurus_emerging_terms' => 0,
            'thesaurus_geg' => 0,
            'thesaurus_ieg' => 0,
            'type_of_text' => 0,
            'thesaurus_ecolex' => 0,
            'thesaurus_gemet' => 0,
            'thesaurus_informea' => 0,
            'goal_sources' => 0,
            'type_of_goal' => 0,
            'informea_themes' => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 1,
        ),
      ),
      'topic' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vocabularies' => array(
            'mea_topic' => 'mea_topic',
            'decision_status' => 0,
            'decision_type' => 0,
            'event_repetition' => 0,
            'event_calendar_status' => 0,
            'event_kind' => 0,
            'event_type' => 0,
            'event_access' => 0,
            'action_plan_type' => 0,
            'analytics_key_type' => 0,
            'contact_role' => 0,
            'jurisdiction' => 0,
            'data_source' => 0,
            'declaration_paragraph_type' => 0,
            'document_author' => 0,
            'document_identifier_type' => 0,
            'document_type' => 0,
            'ecolex_decision_status' => 0,
            'ecolex_legislation_status' => 0,
            'ecolex_region' => 0,
            'ecolex_subjects' => 0,
            'field_of_application' => 0,
            'field_of_work' => 0,
            'geg_theme' => 0,
            'geographical_region' => 0,
            'geographical_scope' => 0,
            'keywords' => 0,
            'legislation_sub_file_code' => 0,
            'literature_type' => 0,
            'party_status' => 0,
            'person_type' => 0,
            'tags' => 0,
            'territorial_subdivision' => 0,
            'thesaurus_agrovoc' => 0,
            'thesaurus_emerging_terms' => 0,
            'thesaurus_geg' => 0,
            'thesaurus_ieg' => 0,
            'type_of_text' => 0,
            'thesaurus_ecolex' => 0,
            'thesaurus_gemet' => 0,
            'thesaurus_informea' => 0,
            'goal_sources' => 0,
            'type_of_goal' => 0,
            'informea_themes' => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 1,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['regions_region_topic'] = $path_breadcrumb;

  return $export;
}
