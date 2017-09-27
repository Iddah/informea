<?php
/**
 * @file
 * informea.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function informea_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'documents';
  $path_breadcrumb->name = 'Documents';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Documents',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => '/documents',
      1 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'document' => 'document',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -84;
  $export['documents'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'documents_view';
  $path_breadcrumb->name = 'Documents view';
  $path_breadcrumb->path = 'documents';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Documents',
    ),
    'paths' => array(
      0 => '/documents',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -80;
  $export['documents_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'glossary';
  $path_breadcrumb->name = 'Glossary';
  $path_breadcrumb->path = 'terms';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Glossary',
    ),
    'paths' => array(
      0 => '/terms',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -81;
  $export['glossary'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'goal_sources';
  $path_breadcrumb->name = 'Goal Sources';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%term:name',
    ),
    'paths' => array(
      0 => '%term:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vocabularies' => array(
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
            'geg_theme' => 0,
            'geographical_region' => 0,
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
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'goal_sources' => 'goal_sources',
            ),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -82;
  $export['goal_sources'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'goals';
  $path_breadcrumb->name = 'Goals';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Goals',
      1 => '%node:field-goal-source:name',
      2 => '%node:field-parent-goal:0:field-parent-goal:0:title',
      3 => '%node:field-parent-goal:0:title',
      4 => '%node:title',
    ),
    'paths' => array(
      0 => 'goal',
      1 => '%node:field-goal-source:url',
      2 => '%node:field-parent-goal:0:field-parent-goal:0:url',
      3 => '%node:field-parent-goal:0:url',
      4 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'goal' => 'goal',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -83;
  $export['goals'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'goals_view';
  $path_breadcrumb->name = 'Goals view';
  $path_breadcrumb->path = 'goals';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Goals',
    ),
    'paths' => array(
      0 => '/goals',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['goals_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'parties_view';
  $path_breadcrumb->name = 'Parties view';
  $path_breadcrumb->path = 'countries';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Parties',
    ),
    'paths' => array(
      0 => '/countries',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -79;
  $export['parties_view'] = $path_breadcrumb;

  return $export;
}
