<?php
/**
 * @file
 * graphql_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function graphql_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'graphql_entity_type';
  $strongarm->value = array(
    'node' => '1',
    'node_action_plan' => '1',
    'node_contact_person' => '1',
    'node_country' => '1',
    'node_decision' => '1',
    'node_document' => '1',
    'node_event_calendar' => '1',
    'node_national_report' => '1',
    'node_treaty' => '1',
    'taxonomy_term' => '1',
    'taxonomy_term_tags' => '1',
    'taxonomy_term_thesaurus_informea' => '1',
    'taxonomy_term_document_type' => '1',
    'node_analytics_key' => NULL,
    'node_article' => NULL,
    'node_page' => NULL,
    'node_book' => NULL,
    'node_court_decisions' => NULL,
    'node_decision_paragraph' => NULL,
    'node_declaration' => NULL,
    'node_declaration_section' => NULL,
    'node_declaration_paragraph' => NULL,
    'node_feed' => NULL,
    'node_feed_item' => NULL,
    'node_geographical_site' => NULL,
    'node_goal' => NULL,
    'node_legislation' => NULL,
    'node_literature' => NULL,
    'node_member_party' => NULL,
    'node_national_report_paragraph' => NULL,
    'node_organisation' => NULL,
    'node_reporting_obligation_cycle' => NULL,
    'node_treaty_article' => NULL,
    'node_treaty_paragraph' => NULL,
    'node_webform' => NULL,
    'taxonomy_term_event_calendar_status' => NULL,
    'taxonomy_term_data_source' => NULL,
    'taxonomy_term_field_of_application' => NULL,
    'taxonomy_term_geographical_region' => NULL,
    'taxonomy_term_jurisdiction' => NULL,
    'taxonomy_term_type_of_text' => NULL,
    'taxonomy_term_thesaurus_agrovoc' => NULL,
    'taxonomy_term_thesaurus_ecolex' => NULL,
    'taxonomy_term_thesaurus_geg' => NULL,
    'taxonomy_term_thesaurus_gemet' => NULL,
    'taxonomy_term_thesaurus_ieg' => NULL,
    'taxonomy_term_decision_status' => NULL,
    'taxonomy_term_decision_type' => NULL,
    'taxonomy_term_action_plan_type' => NULL,
    'taxonomy_term_party_status' => NULL,
    'taxonomy_term_territorial_subdivision' => NULL,
    'taxonomy_term_event_access' => NULL,
    'taxonomy_term_event_kind' => NULL,
    'taxonomy_term_event_repetition' => NULL,
    'taxonomy_term_event_type' => NULL,
    'taxonomy_term_ecolex_decision_status' => NULL,
    'taxonomy_term_geographical_scope' => NULL,
    'taxonomy_term_legislation_sub_file_code' => NULL,
    'taxonomy_term_literature_type' => NULL,
    'taxonomy_term_goal_sources' => NULL,
    'taxonomy_term_informea_themes' => NULL,
    'taxonomy_term_type_of_goal' => NULL,
    'taxonomy_term_mea_topic' => NULL,
    'taxonomy_term_person_type' => NULL,
    'taxonomy_term_analytics_key_type' => NULL,
    'taxonomy_term_contact_role' => NULL,
    'taxonomy_term_geg_theme' => NULL,
    'taxonomy_term_declaration_paragraph_type' => NULL,
    'taxonomy_term_ecolex_legislation_status' => NULL,
    'taxonomy_term_ecolex_region' => NULL,
    'taxonomy_term_ecolex_subjects' => NULL,
    'taxonomy_term_thesaurus_emerging_terms' => NULL,
    'taxonomy_term_document_author' => NULL,
    'taxonomy_term_document_identifier_type' => NULL,
    'taxonomy_term_keywords' => NULL,
    'bootstrap_tour' => NULL,
    'bootstrap_tour_bootstrap_tour' => NULL,
    'bootstrap_tour_step' => NULL,
    'bootstrap_tour_step_bootstrap_tour_step' => NULL,
    'country' => NULL,
    'country_country' => NULL,
    'entityqueue_subqueue' => NULL,
    'entityqueue_subqueue_front_page_slider' => NULL,
    'entityqueue_subqueue_treaty_global' => NULL,
    'field_collection_item' => NULL,
    'field_collection_item_field_contact_roles' => NULL,
    'field_collection_item_field_document_identifiers' => NULL,
    'file' => NULL,
    'file_image' => NULL,
    'file_video' => NULL,
    'file_audio' => NULL,
    'file_document' => NULL,
    'taxonomy_vocabulary' => NULL,
    'taxonomy_vocabulary_taxonomy_vocabulary' => NULL,
    'user' => NULL,
    'user_user' => NULL,
  );
  $export['graphql_entity_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'graphql_info_fields';
  $strongarm->value = array(
    'body' => '1',
    'field_country' => '1',
    'field_informea_tags' => '1',
    'field_region' => '1',
    'field_sorting_order' => '1',
    'title_field' => '1',
    'field_original_id' => '1',
    'field_sorting_date' => '1',
    'field_treaty' => '1',
    'field_last_update' => '1',
    'field_address' => '1',
    'field_contact_fax' => '1',
    'field_contact_primary_nfp' => '1',
    'field_contact_telephone' => '1',
    'field_person_department' => '1',
    'field_person_email' => '1',
    'field_person_first_name' => '1',
    'field_person_institution' => '1',
    'field_person_last_name' => '1',
    'field_person_position' => '1',
    'field_person_prefix' => '1',
    'field_person_type' => '1',
    'field_person_gender' => '1',
    'field_document_authors' => '1',
    'field_document_entity_references' => '1',
    'field_document_type' => '1',
    'field_treaties' => '1',
    'description_field' => '1',
    'name_field' => '1',
    'eq_node' => NULL,
    'field_abstract' => NULL,
    'field_alternative_record_id' => NULL,
    'field_available_in' => NULL,
    'field_cited_treaties' => NULL,
    'field_data_source' => NULL,
    'field_depositary' => NULL,
    'field_ecolex_tags' => NULL,
    'field_ecolex_url' => NULL,
    'field_entry_into_force' => NULL,
    'field_faolex_url' => NULL,
    'field_field_of_application' => NULL,
    'field_internet_reference' => NULL,
    'field_is_protocol' => NULL,
    'field_jurisdiction' => NULL,
    'field_logo' => NULL,
    'field_number_of_pages' => NULL,
    'field_obsolete' => NULL,
    'field_odata_identifier' => NULL,
    'field_official_name' => NULL,
    'field_parent_treaty' => NULL,
    'field_place_of_adoption' => NULL,
    'field_primary' => NULL,
    'field_primary_topic' => NULL,
    'field_ratification_xml_url' => NULL,
    'field_related_website' => NULL,
    'field_secondary_topic' => NULL,
    'field_title_abbreviation' => NULL,
    'field_treaty_parties_url' => NULL,
    'field_treaty_text_url' => NULL,
    'field_treaty_website_url' => NULL,
    'field_type_of_text' => NULL,
    'field_amends_treaty' => NULL,
    'field_official_publication' => NULL,
    'field_related_url' => NULL,
    'field_date_of_entry' => NULL,
    'field_date_of_modification' => NULL,
    'field_treaty_article' => NULL,
    'field_treaty_article_paragraph' => NULL,
    'field_online_course_link' => NULL,
    'field_mea_topic' => NULL,
    'field_un_treaty_database_link' => NULL,
    'field_has_api_action_plans' => NULL,
    'field_has_api_decisions' => NULL,
    'field_has_api_national_reports' => NULL,
    'field_treaty_has_parties_from_un' => NULL,
    'field_treaty_decisions_url' => NULL,
    'field_treaty_plans_url' => NULL,
    'field_treaty_protocols_url' => NULL,
    'field_treaty_reports_url' => NULL,
    'field_user_owners' => NULL,
    'field_ecolex_keywords' => NULL,
    'field_image' => NULL,
    'field_action_plan_type' => NULL,
    'field_document_url' => NULL,
    'field_files' => NULL,
    'field_analytics_key' => NULL,
    'field_analytics_key_type' => NULL,
    'field_piwik_id' => NULL,
    'field_url' => NULL,
    'field_tags' => NULL,
    'field_video' => NULL,
    'field_images' => NULL,
    'field_contact_roles' => NULL,
    'field_country_iso2' => NULL,
    'field_country_iso3' => NULL,
    'field_country_official_name' => NULL,
    'field_eu_member' => NULL,
    'field_latitude' => NULL,
    'field_longitude' => NULL,
    'field_zoom' => NULL,
    'field_city' => NULL,
    'field_court_name' => NULL,
    'field_justices' => NULL,
    'field_reference_number' => NULL,
    'field_source_language' => NULL,
    'field_territorial_subdivision' => NULL,
    'field_court_decision_subdivision' => NULL,
    'field_ecolex_decision_status' => NULL,
    'field_isis_number' => NULL,
    'field_court_decision_raw' => NULL,
    'field_ecolex_region' => NULL,
    'field_ecolex_treaty_raw' => NULL,
    'field_faolex_reference_raw' => NULL,
    'field_instance' => NULL,
    'field_notes' => NULL,
    'field_ref_to_eu_legislation_raw' => NULL,
    'field_title_of_text_other' => NULL,
    'field_title_of_text_short' => NULL,
    'field_title_of_text_short_other' => NULL,
    'field_document_abstract' => NULL,
    'field_document_other' => NULL,
    'field_ref_to_nat_legislation_raw' => NULL,
    'field_decision_number' => NULL,
    'field_decision_status' => NULL,
    'field_decision_type' => NULL,
    'field_meeting' => NULL,
    'field_meeting_title_en' => NULL,
    'field_meeting_url' => NULL,
    'field_official_order' => NULL,
    'field_paragraph_indentation' => NULL,
    'field_parent_decision' => NULL,
    'field_sdg_goals' => NULL,
    'field_abbreviation' => NULL,
    'field_declaration_parent_section' => NULL,
    'field_hidden' => NULL,
    'field_parent_declaration' => NULL,
    'field_declaration_paragraph_type' => NULL,
    'field_document_identifiers' => NULL,
    'event_calendar_status' => NULL,
    'event_calendar_date' => NULL,
    'field_event_access' => NULL,
    'field_event_calendar_status' => NULL,
    'field_event_images' => NULL,
    'field_event_kind' => NULL,
    'field_event_repetition' => NULL,
    'field_event_type' => NULL,
    'field_location' => NULL,
    'field_feed_item_description' => NULL,
    'field_parent_feed' => NULL,
    'field_geg_tags' => NULL,
    'field_geg_theme' => NULL,
    'field_geographical_scope' => NULL,
    'field_goal_source' => NULL,
    'field_goal_tools' => NULL,
    'field_goal_type' => NULL,
    'field_parent_goal' => NULL,
    'field_referenced_decisions' => NULL,
    'field_link_emg_url' => NULL,
    'field_unstats_links' => NULL,
    'field_lead_institution' => NULL,
    'field_amends' => NULL,
    'field_avaiable_web_site' => NULL,
    'field_date_of_consolidation' => NULL,
    'field_date_of_original_text' => NULL,
    'field_entry_into_force_notes' => NULL,
    'field_faolex_id' => NULL,
    'field_implements' => NULL,
    'field_repeals' => NULL,
    'field_internet_reference_url' => NULL,
    'field_repealed' => NULL,
    'field_serial_imprint' => NULL,
    'field_sub_file_code' => NULL,
    'field_ecolex_legislation_status' => NULL,
    'field_emerging_terms' => NULL,
    'field_author' => NULL,
    'field_author_institution' => NULL,
    'field_collation' => NULL,
    'field_isbn' => NULL,
    'field_literature_call_number' => NULL,
    'field_literature_paper_title' => NULL,
    'field_literature_serial_title' => NULL,
    'field_literature_type' => NULL,
    'field_organizations' => NULL,
    'field_publication_place' => NULL,
    'field_publisher' => NULL,
    'field_related_literature' => NULL,
    'field_volume_no' => NULL,
    'field_party_date_1' => NULL,
    'field_party_date_2' => NULL,
    'field_party_status' => NULL,
    'field_party_status_original' => NULL,
    'field_parent_national_report' => NULL,
    'field_decision' => NULL,
    'field_decision_paragraph' => NULL,
    'field_reporting_frequency' => NULL,
    'field_parent_treaty_article' => NULL,
    'field_un_region' => NULL,
    'field_taxonomy_term_uri' => NULL,
    'field_term_reference_url' => NULL,
    'field_term_synonyms' => NULL,
    'field_term_geg_url' => NULL,
    'field_term_popularity' => NULL,
    'field_term_substantive' => NULL,
    'field_term_tag' => NULL,
    'field_thesaurus_map_agrovoc' => NULL,
    'field_thesaurus_map_ecolex' => NULL,
    'field_thesaurus_map_gemet' => NULL,
    'field_thesaurus_map_geg' => NULL,
    'field_term_related_uri' => NULL,
    'field_definitions' => NULL,
    'field_binding' => NULL,
    'field_country_party_count' => NULL,
    'field_is_eu_member' => NULL,
    'bootstrap_tour_step_reference' => NULL,
  );
  $export['graphql_info_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'graphql_info_property';
  $strongarm->value = array(
    'node_nid' => '1',
    'node_vid' => '1',
    'node_is_new' => '1',
    'node_type' => '1',
    'node_title' => '1',
    'node_language' => '1',
    'node_url' => '1',
    'node_edit_url' => '1',
    'node_status' => '1',
    'node_promote' => '1',
    'node_sticky' => '1',
    'node_created' => '1',
    'node_changed' => '1',
    'node_author' => '1',
    'node_source' => '1',
    'node_log' => '1',
    'node_revision' => '1',
    'taxonomy_term_tid' => '1',
    'taxonomy_term_name' => '1',
    'user_uid' => '1',
    'user_name' => '1',
    'file_fid' => '1',
    'file_name' => '1',
    'bootstrap_tour_bootstrap_tour_id' => NULL,
    'bootstrap_tour_title' => NULL,
    'bootstrap_tour_name' => NULL,
    'bootstrap_tour_description' => NULL,
    'bootstrap_tour_roles' => NULL,
    'bootstrap_tour_autorun' => NULL,
    'bootstrap_tour_start_path' => NULL,
    'bootstrap_tour_enabled' => NULL,
    'bootstrap_tour_status' => NULL,
    'bootstrap_tour_module' => NULL,
    'bootstrap_tour_feed_nid' => NULL,
    'bootstrap_tour_feed_node' => NULL,
    'bootstrap_tour_step_bootstrap_tour_step_id' => NULL,
    'bootstrap_tour_step_path' => NULL,
    'bootstrap_tour_step_selector' => NULL,
    'bootstrap_tour_step_placement' => NULL,
    'bootstrap_tour_step_title' => NULL,
    'bootstrap_tour_step_content' => NULL,
    'bootstrap_tour_step_content_text_format' => NULL,
    'bootstrap_tour_step_name' => NULL,
    'bootstrap_tour_step_feed_nid' => NULL,
    'bootstrap_tour_step_feed_node' => NULL,
    'country_cid' => NULL,
    'country_iso2' => NULL,
    'country_iso3' => NULL,
    'country_name' => NULL,
    'country_official_name' => NULL,
    'country_numcode' => NULL,
    'country_continent' => NULL,
    'country_enabled' => NULL,
    'country_language' => NULL,
    'country_continent_name' => NULL,
    'country_feed_nid' => NULL,
    'country_feed_node' => NULL,
    'field_collection_item_item_id' => NULL,
    'field_collection_item_revision_id' => NULL,
    'field_collection_item_field_name' => NULL,
    'field_collection_item_archived' => NULL,
    'field_collection_item_uuid' => NULL,
    'field_collection_item_url' => NULL,
    'field_collection_item_host_entity' => NULL,
    'field_collection_item_feed_nid' => NULL,
    'field_collection_item_feed_node' => NULL,
    'entityqueue_subqueue_subqueue_id' => NULL,
    'entityqueue_subqueue_queue' => NULL,
    'entityqueue_subqueue_name' => NULL,
    'entityqueue_subqueue_label' => NULL,
    'entityqueue_subqueue_language' => NULL,
    'entityqueue_subqueue_module' => NULL,
    'entityqueue_subqueue_uid' => NULL,
    'entityqueue_subqueue_feed_nid' => NULL,
    'entityqueue_subqueue_feed_node' => NULL,
    'node_book' => NULL,
    'node_book_ancestors' => NULL,
    'node_comment' => NULL,
    'node_comments' => NULL,
    'node_comment_count' => NULL,
    'node_comment_count_new' => NULL,
    'node_body' => NULL,
    'node_feed_nid' => NULL,
    'node_feed_node' => NULL,
    'node_uuid' => NULL,
    'node_vuuid' => NULL,
    'node_menu_link' => NULL,
    'taxonomy_term_description' => NULL,
    'taxonomy_term_weight' => NULL,
    'taxonomy_term_node_count' => NULL,
    'taxonomy_term_url' => NULL,
    'taxonomy_term_vocabulary' => NULL,
    'taxonomy_term_parent' => NULL,
    'taxonomy_term_parents_all' => NULL,
    'taxonomy_term_feed_nid' => NULL,
    'taxonomy_term_feed_node' => NULL,
    'taxonomy_term_uuid' => NULL,
    'taxonomy_term_pb_join' => NULL,
    'user_mail' => NULL,
    'user_url' => NULL,
    'user_edit_url' => NULL,
    'user_last_access' => NULL,
    'user_last_login' => NULL,
    'user_created' => NULL,
    'user_roles' => NULL,
    'user_status' => NULL,
    'user_theme' => NULL,
    'user_language' => NULL,
    'user_feed_nid' => NULL,
    'user_feed_node' => NULL,
    'user_uuid' => NULL,
    'file_mime' => NULL,
    'file_size' => NULL,
    'file_url' => NULL,
    'file_timestamp' => NULL,
    'file_owner' => NULL,
    'file_type' => NULL,
    'file_feed_nid' => NULL,
    'file_feed_node' => NULL,
    'file_uuid' => NULL,
    'taxonomy_vocabulary_vid' => NULL,
    'taxonomy_vocabulary_name' => NULL,
    'taxonomy_vocabulary_machine_name' => NULL,
    'taxonomy_vocabulary_description' => NULL,
    'taxonomy_vocabulary_term_count' => NULL,
    'taxonomy_vocabulary_feed_nid' => NULL,
    'taxonomy_vocabulary_feed_node' => NULL,
  );
  $export['graphql_info_property'] = $strongarm;

  return $export;
}
