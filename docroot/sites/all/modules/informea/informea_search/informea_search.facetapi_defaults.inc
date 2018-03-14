<?php
/**
 * @file
 * informea_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function informea_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_action_plan_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_action_plan_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_mea_topic' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sorting_date' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_mea_topic' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'action_plan',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sorting_date' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_action_plan_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_contact_roles';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_contact_roles';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_literature_type' => 0,
        'field_person_type' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_literature_type' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'contact_person',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_contact_roles'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_contact_roles:field_contact_role';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_contact_roles:field_contact_role';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'field_geographical_scope' => 0,
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_ecolex_decision_status' => 0,
        'field_parent_goal' => 0,
        'field_lead_institution' => 0,
        'field_goal_type' => 0,
        'field_geg_theme' => 0,
        'field_document_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_region' => 0,
        'field_mea_topic' => 0,
        'field_field_of_application' => 0,
        'field_data_source' => 0,
        'field_informea_tags' => 0,
        'field_event_type' => 0,
        'year_of_text' => 0,
        'field_treaty' => 0,
        'type' => 0,
        'field_event_kind' => 0,
        'field_country' => 0,
        'field_jurisdiction' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_ecolex_decision_status' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_region' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_event_type' => '',
      'facet_items_year_of_text' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_country' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_contact_roles:field_contact_role'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_country';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_country';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_country'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_data_source';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_data_source';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_field_of_application' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'treaty',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_data_source'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_decision_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_decision_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'decision',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_decision_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_decision_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_decision_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'decision',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_decision_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_document_authors';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_document_authors';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'document',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_document_authors'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_document_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_document_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'field_geographical_scope' => 0,
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_ecolex_decision_status' => 0,
        'field_contact_roles:field_contact_role' => 0,
        'field_parent_goal' => 0,
        'field_lead_institution' => 0,
        'field_goal_type' => 0,
        'field_geg_theme' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_region' => 0,
        'field_mea_topic' => 0,
        'field_field_of_application' => 0,
        'field_data_source' => 0,
        'field_informea_tags' => 0,
        'field_event_type' => 0,
        'year_of_text' => 0,
        'field_treaty' => 0,
        'type' => 0,
        'field_event_kind' => 0,
        'field_country' => 0,
        'field_jurisdiction' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_ecolex_decision_status' => '',
      'facet_items_field_contact_roles:field_contact_role' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_region' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_event_type' => '',
      'facet_items_year_of_text' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_country' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_document_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_ecolex_decision_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_ecolex_decision_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_geographical_scope' => 0,
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_contact_roles:field_contact_role' => 0,
        'field_parent_goal' => 0,
        'field_lead_institution' => 0,
        'field_goal_type' => 0,
        'field_geg_theme' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_document_type' => 0,
        'field_document_authors' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_field_of_application' => 0,
        'field_data_source' => 0,
        'field_region' => 0,
        'year_of_text' => 0,
        'field_treaty' => 0,
        'field_informea_tags' => 0,
        'field_country' => 0,
        'field_jurisdiction' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_action_plan_type' => 0,
        'field_decision_type' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_contact_roles:field_contact_role' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_region' => '',
      'facet_items_year_of_text' => '',
      'facet_items_type' => 'court_decisions',
      'facet_items_field_treaty' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_country' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_ecolex_decision_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_ecolex_legislation_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_ecolex_legislation_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'legislation',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_ecolex_legislation_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_event_kind';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_event_kind';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'event_calendar',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_event_kind'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_event_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_event_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'event_calendar',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_event_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_field_of_application';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_field_of_application';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_data_source' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'treaty',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_field_of_application'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_geg_theme';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_geg_theme';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'goal',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_geg_theme'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_geographical_scope';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_geographical_scope';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'goal,literature',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_geographical_scope'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_goal_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_goal_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'goal',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_goal_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_informea_tags';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_informea_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_informea_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_jurisdiction';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_jurisdiction';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_field_of_application' => 0,
        'field_data_source' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'court_decisions,treaty',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_jurisdiction'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_lead_institution';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_lead_institution';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'goal',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_lead_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_literature_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_literature_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'literature',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_literature_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_mea_topic';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_mea_topic';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_mea_topic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_parent_goal';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_parent_goal';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'goal',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_parent_goal'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_person_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_person_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'field_geographical_scope' => 0,
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_ecolex_decision_status' => 0,
        'field_contact_roles:field_contact_role' => 0,
        'field_parent_goal' => 0,
        'field_lead_institution' => 0,
        'field_goal_type' => 0,
        'field_geg_theme' => 0,
        'field_document_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_region' => 0,
        'field_mea_topic' => 0,
        'field_field_of_application' => 0,
        'field_data_source' => 0,
        'field_informea_tags' => 0,
        'field_event_type' => 0,
        'year_of_text' => 0,
        'field_treaty' => 0,
        'type' => 0,
        'field_event_kind' => 0,
        'field_country' => 0,
        'field_jurisdiction' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_ecolex_decision_status' => '',
      'facet_items_field_contact_roles:field_contact_role' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_region' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_field_of_application' => '',
      'facet_items_field_data_source' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_event_type' => '',
      'facet_items_year_of_text' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_country' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_person_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_region';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_region';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_region'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_sdg_goals';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_sdg_goals';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_territorial_subdivision' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_territorial_subdivision' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'document',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_sdg_goals'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_sorting_date';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_sorting_date';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'date',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'date_granularity' => 'YEAR',
  );
  $export['search_api@default_index::field_sorting_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_territorial_subdivision';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_territorial_subdivision';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_ecolex_legislation_status' => 0,
        'field_geographical_scope' => 0,
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_parent_goal' => 0,
        'field_geg_theme' => 0,
        'field_lead_institution' => 0,
        'field_document_authors' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_event_kind' => 0,
        'field_jurisdiction' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_sdg_goals' => 0,
        'field_decision_status' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
        'field_type_of_text' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_ecolex_legislation_status' => '',
      'facet_items_field_geographical_scope' => '',
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_parent_goal' => '',
      'facet_items_field_geg_theme' => '',
      'facet_items_field_lead_institution' => '',
      'facet_items_field_document_authors' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_event_kind' => '',
      'facet_items_field_jurisdiction' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'court_decisions,legislation,literature',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_sdg_goals' => '',
      'facet_items_field_decision_status' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
      'facet_items_field_type_of_text' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_territorial_subdivision'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_treaty';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_treaty';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_treaty'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::field_type_of_text';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'field_type_of_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
        12 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'action_plan' => 0,
        'analytics_key' => 0,
        'article' => 0,
        'page' => 0,
        'book' => 0,
        'contact_person' => 0,
        'country' => 0,
        'court_decisions' => 0,
        'decision' => 0,
        'decision_paragraph' => 0,
        'declaration' => 0,
        'declaration_section' => 0,
        'declaration_paragraph' => 0,
        'document' => 0,
        'event_calendar' => 0,
        'feed' => 0,
        'geographical_site' => 0,
        'goal' => 0,
        'learning_course' => 0,
        'legislation' => 0,
        'literature' => 0,
        'member_party' => 0,
        'national_report' => 0,
        'national_report_paragraph' => 0,
        'feed_item' => 0,
        'organisation' => 0,
        'reporting_obligation_cycle' => 0,
        'treaty' => 0,
        'treaty_article' => 0,
        'treaty_paragraph' => 0,
        'webform' => 0,
      ),
      'facets' => array(
        'type' => 'type',
        'field_literature_type' => 0,
        'field_contact_roles' => 0,
        'field_person_type' => 0,
        'field_document_type' => 0,
        'field_goal_type' => 0,
        'field_declaration_paragraph_type' => 0,
        'field_mea_topic' => 0,
        'field_event_type' => 0,
        'field_treaty' => 0,
        'field_region' => 0,
        'field_country' => 0,
        'field_informea_tags' => 0,
        'field_decision_type' => 0,
        'field_action_plan_type' => 0,
        'field_sorting_date' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_literature_type' => '',
      'facet_items_field_contact_roles' => '',
      'facet_items_field_person_type' => '',
      'facet_items_field_document_type' => '',
      'facet_items_field_goal_type' => '',
      'facet_items_field_declaration_paragraph_type' => '',
      'facet_items_field_mea_topic' => '',
      'facet_items_field_event_type' => '',
      'facet_items_field_treaty' => '',
      'facet_items_type' => 'court_decisions,legislation,treaty',
      'facet_items_field_region' => '',
      'facet_items_field_country' => '',
      'facet_items_field_informea_tags' => '',
      'facet_items_field_decision_type' => '',
      'facet_items_field_action_plan_type' => '',
      'facet_items_field_sorting_date' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::field_type_of_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index::year_of_text';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = '';
  $facet->facet = 'year_of_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@default_index::year_of_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:attachments_field_document_abstract';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'attachments_field_document_abstract';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:attachments_field_document_abstract'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:attachments_field_document_other';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'attachments_field_document_other';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:attachments_field_document_other'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:attachments_field_files';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'attachments_field_files';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:attachments_field_files'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:event_calendar_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'event_calendar_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:event_calendar_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_abbreviation';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_abbreviation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_abbreviation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_action_plan_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_action_plan_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '10',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_action_plan_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_address';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_address';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_address'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_alternative_record_id';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_alternative_record_id';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_alternative_record_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_amends';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_amends';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_amends'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_amends_treaty';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_amends_treaty';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_amends_treaty'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_author';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_author';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_author_institution';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_author_institution';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_author_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_available_in';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_available_in';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_available_in'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_cited_treaties';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_cited_treaties';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_cited_treaties'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_city';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_city';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_city'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_collation';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_collation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_collation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_contact_fax';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_contact_fax';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_contact_fax'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_contact_primary_nfp';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_contact_primary_nfp';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_contact_primary_nfp'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_contact_roles';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_contact_roles';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@default_index:block:field_contact_roles'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_contact_roles:field_contact_role';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_contact_roles:field_contact_role';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_contact_roles:field_contact_role'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_contact_telephone';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_contact_telephone';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_contact_telephone'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_country';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_country';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_select_dropdowns',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => 'in All Parties',
    'reset_option_label' => 'in All Parties',
    'submit_page' => '',
    'hide_facet_count' => 0,
  );
  $export['search_api@default_index:block:field_country'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_country_iso2';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_country_iso2';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_country_iso2'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_country_iso3';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_country_iso3';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_country_iso3'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_country_official_name';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_country_official_name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_country_official_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_court_decision_subdivision';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_court_decision_subdivision';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_court_decision_subdivision'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_court_name';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_court_name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_court_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_data_source';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_data_source';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_data_source'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_date_of_consolidation';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_date_of_consolidation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_date_of_consolidation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_date_of_entry';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_date_of_entry';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_date_of_entry'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_date_of_modification';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_date_of_modification';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_date_of_modification'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_date_of_original_text';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_date_of_original_text';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_date_of_original_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_decision';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_decision';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_decision'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_decision_number';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_decision_number';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_decision_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_decision_paragraph';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_decision_paragraph';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_decision_paragraph'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_decision_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_decision_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_decision_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_decision_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_decision_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_decision_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_declaration_paragraph_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_declaration_paragraph_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_declaration_paragraph_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_declaration_parent_section';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_declaration_parent_section';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_declaration_parent_section'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_depositary';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_depositary';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_depositary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_document_authors';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_document_authors';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_document_authors'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_document_entity_references';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_document_entity_references';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_document_entity_references'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_document_identifiers';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_document_identifiers';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_document_identifiers'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_document_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_document_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_document_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_ecolex_decision_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ecolex_decision_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_ecolex_decision_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_ecolex_keywords';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ecolex_keywords';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_ecolex_keywords'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_ecolex_legislation_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ecolex_legislation_status';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@default_index:block:field_ecolex_legislation_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_ecolex_region';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ecolex_region';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_ecolex_region'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_ecolex_tags';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_ecolex_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_ecolex_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_emerging_terms';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_emerging_terms';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_emerging_terms'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_entry_into_force';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_entry_into_force';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_entry_into_force'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_entry_into_force_notes';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_entry_into_force_notes';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_entry_into_force_notes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_eu_member';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_eu_member';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_eu_member'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_event_access';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_event_access';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_event_access'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_event_calendar_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_event_calendar_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_event_calendar_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_event_kind';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_event_kind';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_event_kind'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_event_repetition';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_event_repetition';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_event_repetition'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_event_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_event_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_event_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_faolex_id';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_faolex_id';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_faolex_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_field_of_application';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_field_of_application';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_field_of_application'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_geg_tags';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_geg_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_geg_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_geg_theme';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_geg_theme';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_geg_theme'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_geographical_scope';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_geographical_scope';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_geographical_scope'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_goal_source';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_goal_source';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@default_index:block:field_goal_source'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_goal_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_goal_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_goal_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_implements';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_implements';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_implements'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_informea_tags';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_informea_tags';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_informea_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_informea_tags:name_field';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_informea_tags:name_field';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_informea_tags:name_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_instance';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_instance';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_instance'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_internet_reference';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_internet_reference';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_internet_reference'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_is_protocol';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_is_protocol';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_is_protocol'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_isbn';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_isbn';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_isbn'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_isis_number';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_isis_number';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_isis_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_jurisdiction';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_jurisdiction';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_jurisdiction'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_justices';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_justices';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_justices'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_last_update';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_last_update';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_last_update'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_latitude';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_latitude';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_latitude'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_lead_institution';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_lead_institution';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['search_api@default_index:block:field_lead_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_literature_call_number';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_literature_call_number';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_literature_call_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_literature_paper_title';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_literature_paper_title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_literature_paper_title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_literature_serial_title';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_literature_serial_title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_literature_serial_title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_literature_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_literature_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_literature_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_location';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_location';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_location'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_longitude';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_longitude';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_longitude'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_mea_topic';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_mea_topic';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '10',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_mea_topic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_meeting';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_meeting';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_meeting'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_meeting_title_en';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_meeting_title_en';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_meeting_title_en'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_notes';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_notes';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_notes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_number_of_pages';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_number_of_pages';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_number_of_pages'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_obsolete';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_obsolete';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_obsolete'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_odata_identifier';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_odata_identifier';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_odata_identifier'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_official_name';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_official_name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_official_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_official_order';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_official_order';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_official_order'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_official_publication';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_official_publication';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_official_publication'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_organizations';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_organizations';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_organizations'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_original_id';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_original_id';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_original_id'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_paragraph_indentation';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_paragraph_indentation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_paragraph_indentation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_decision';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_decision';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_decision'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_declaration';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_declaration';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_declaration'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_feed';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_feed';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_feed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_goal';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_goal';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_parent_goal'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_national_report';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_national_report';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_national_report'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_treaty';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_treaty';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_treaty'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_parent_treaty_article';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_parent_treaty_article';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_parent_treaty_article'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_party_status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_party_status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_party_status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_party_status_original';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_party_status_original';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_party_status_original'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_department';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_department';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_department'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_email';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_email';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_email'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_first_name';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_first_name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_first_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_gender';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_gender';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_gender'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_institution';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_institution';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_last_name';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_last_name';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_last_name'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_position';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_position';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_position'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_prefix';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_prefix';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_person_prefix'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_person_type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_person_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_person_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_place_of_adoption';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_place_of_adoption';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_place_of_adoption'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_primary';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_primary';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_primary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_primary_topic';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_primary_topic';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_primary_topic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_publication_place';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_publication_place';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_publication_place'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_publisher';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_publisher';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_publisher'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_reference_number';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_reference_number';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_reference_number'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_referenced_decisions';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_referenced_decisions';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_referenced_decisions'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_region';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_region';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '10',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_region'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_related_literature';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_related_literature';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_related_literature'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_related_website';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_related_website';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_related_website'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_repealed';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_repealed';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_repealed'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_repeals';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_repeals';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_repeals'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_reporting_frequency';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_reporting_frequency';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_reporting_frequency'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_sdg_goals';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_sdg_goals';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links_custom',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
  );
  $export['search_api@default_index:block:field_sdg_goals'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_secondary_topic';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_secondary_topic';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_secondary_topic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_serial_imprint';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_serial_imprint';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_serial_imprint'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_show_in_main_menu';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_show_in_main_menu';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_show_in_main_menu'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_sorting_date';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_sorting_date';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
  );
  $export['search_api@default_index:block:field_sorting_date'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_sorting_order';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_sorting_order';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_sorting_order'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_sub_file_code';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_sub_file_code';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_sub_file_code'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_summary';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_summary';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_summary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_tags';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_territorial_subdivision';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_territorial_subdivision';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_territorial_subdivision'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_title_abbreviation';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_title_abbreviation';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_title_abbreviation'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_treaty';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_treaty';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_select_dropdowns',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => 'in All Related Treaties',
    'reset_option_label' => 'in All Related Treaties',
    'submit_page' => '',
    'hide_facet_count' => 0,
  );
  $export['search_api@default_index:block:field_treaty'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_treaty:title_index';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_treaty:title_index';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_treaty:title_index'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_treaty_article';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_treaty_article';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_treaty_article'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_treaty_article_paragraph';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_treaty_article_paragraph';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_treaty_article_paragraph'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_type_of_text';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_type_of_text';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-47',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-44',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '5',
    'nofollow' => 1,
    'show_expanded' => 0,
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:field_type_of_text'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_user_owners';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_user_owners';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_user_owners'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:field_volume_no';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'field_volume_no';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:field_volume_no'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:language';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:nid';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'nid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:search_api_language';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:search_api_url';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_url';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:search_api_url'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:status';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:title';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:title'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:title_field';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'title_field';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:title_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:title_index';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'title_index';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@default_index:block:title_index'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:type';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
  );
  $export['search_api@default_index:block:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@default_index:block:year_of_text';
  $facet->searcher = 'search_api@default_index';
  $facet->realm = 'block';
  $facet->facet = 'year_of_text';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'search_api_ion_range_slider_ui_slider',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'exclude_items' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
      'narrow_results' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'show_if_minimum_items' => array(
        'status' => 0,
        'weight' => '-46',
      ),
      'deepest_level_items' => array(
        'status' => 0,
        'weight' => '-45',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'natural' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'natural' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'natural' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'prefix' => '',
    'suffix' => '',
    'precision' => '0',
    'step' => '1',
    'name' => 'Date of text',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'default_option_label' => '--Choose--',
    'reset_option_label' => '--Reset--',
    'submit_page' => '',
    'hide_facet_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'exclude' => '',
    'regex' => 0,
    'show_minimum_items' => 2,
    'rewrite_items' => 1,
  );
  $export['search_api@default_index:block:year_of_text'] = $facet;

  return $export;
}
