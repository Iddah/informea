<?php
/**
 * @file
 * country_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function country_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contacts_hub';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_fulltext_solr_index';
  $view->human_name = 'Contacts Hub';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts Hub';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @total result(s)';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_treaty']['display'] = 'view';
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  /* Field: Indexed Content: Roles */
  $handler->display->display_options['fields']['field_contact_roles']['id'] = 'field_contact_roles';
  $handler->display->display_options['fields']['field_contact_roles']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_contact_roles']['field'] = 'field_contact_roles';
  $handler->display->display_options['fields']['field_contact_roles']['label'] = '';
  $handler->display->display_options['fields']['field_contact_roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_roles']['empty'] = '[field_treaty]';
  $handler->display->display_options['fields']['field_contact_roles']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_contact_roles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_contact_roles']['display'] = 'view';
  $handler->display->display_options['fields']['field_contact_roles']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_contact_roles']['bypass_access'] = 0;
  /* Field: Indexed Content: Position */
  $handler->display->display_options['fields']['field_person_position']['id'] = 'field_person_position';
  $handler->display->display_options['fields']['field_person_position']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_person_position']['field'] = 'field_person_position';
  $handler->display->display_options['fields']['field_person_position']['label'] = '';
  $handler->display->display_options['fields']['field_person_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_position']['type'] = 'text_plain';
  /* Field: Indexed Content: Institution */
  $handler->display->display_options['fields']['field_person_institution']['id'] = 'field_person_institution';
  $handler->display->display_options['fields']['field_person_institution']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_person_institution']['field'] = 'field_person_institution';
  $handler->display->display_options['fields']['field_person_institution']['label'] = '';
  $handler->display->display_options['fields']['field_person_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_institution']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="separator"></div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Indexed Content: Topics */
  $handler->display->display_options['fields']['field_mea_topic']['id'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_mea_topic']['field'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['label'] = '';
  $handler->display->display_options['fields']['field_mea_topic']['element_class'] = 'topic-[field_mea_topic]';
  $handler->display->display_options['fields']['field_mea_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mea_topic']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_mea_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mea_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mea_topic']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="contact-link>Save In Library</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Full Contact Profile';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="contact-link>Related Contacts</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Indexed Content: Country */
  $handler->display->display_options['arguments']['field_country']['id'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['arguments']['field_country']['field'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_country']['not'] = 0;
  /* Contextual filter: Indexed Content: Treaty */
  $handler->display->display_options['arguments']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['arguments']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_treaty']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_treaty']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_treaty']['not'] = 0;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_person' => 'contact_person',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
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
  );

  /* Display: Country contacts hub */
  $handler = $view->new_display('page', 'Country contacts hub', 'country_contacts_hub');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Country */
  $handler->display->display_options['arguments']['field_country']['id'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['arguments']['field_country']['field'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_country']['not'] = 0;
  $handler->display->display_options['path'] = 'countries/%/contacts-hub';

  /* Display: Treaty contacts hub */
  $handler = $view->new_display('page', 'Treaty contacts hub', 'treaty_contacts_hub');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Roles */
  $handler->display->display_options['fields']['field_contact_roles']['id'] = 'field_contact_roles';
  $handler->display->display_options['fields']['field_contact_roles']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_contact_roles']['field'] = 'field_contact_roles';
  $handler->display->display_options['fields']['field_contact_roles']['label'] = '';
  $handler->display->display_options['fields']['field_contact_roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_roles']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_contact_roles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_contact_roles']['display'] = 'view';
  $handler->display->display_options['fields']['field_contact_roles']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_contact_roles']['bypass_access'] = 0;
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Position */
  $handler->display->display_options['fields']['field_person_position']['id'] = 'field_person_position';
  $handler->display->display_options['fields']['field_person_position']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_person_position']['field'] = 'field_person_position';
  $handler->display->display_options['fields']['field_person_position']['label'] = '';
  $handler->display->display_options['fields']['field_person_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_position']['type'] = 'text_plain';
  /* Field: Indexed Content: Institution */
  $handler->display->display_options['fields']['field_person_institution']['id'] = 'field_person_institution';
  $handler->display->display_options['fields']['field_person_institution']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_person_institution']['field'] = 'field_person_institution';
  $handler->display->display_options['fields']['field_person_institution']['label'] = '';
  $handler->display->display_options['fields']['field_person_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_institution']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="separator"></div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  /* Field: Indexed Content: Topics */
  $handler->display->display_options['fields']['field_mea_topic']['id'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_mea_topic']['field'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['label'] = '';
  $handler->display->display_options['fields']['field_mea_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mea_topic']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_mea_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_mea_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_mea_topic']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="contact-link>Save In Library</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Full Contact Profile';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="contact-link>Related Contacts</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Treaty */
  $handler->display->display_options['arguments']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['arguments']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_treaty']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_treaty']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_treaty']['not'] = 0;
  $handler->display->display_options['path'] = 'treaties/%/contacts-hub';
  $translatables['contacts_hub'] = array(
    t('Master'),
    t('Contacts Hub'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @total result(s)'),
    t('[field_treaty]'),
    t('<div class="separator"></div>'),
    t('<span class="contact-link>Save In Library</span>'),
    t('Full Contact Profile'),
    t('<span class="contact-link>Related Contacts</span>'),
    t('All'),
    t('Country contacts hub'),
    t('Treaty contacts hub'),
  );
  $export['contacts_hub'] = $view;

  $view = new view();
  $view->name = 'contacts_hubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contacts Hubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts Hub';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: ISO alpha-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['path'] = '[path]/contacts-hub';
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]/contacts-hub';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_country_target_id';
  /* Contextual filter: Content: Region (field_region) */
  $handler->display->display_options['arguments']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_region_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Topics (field_mea_topic) */
  $handler->display->display_options['arguments']['field_mea_topic_tid']['id'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['table'] = 'field_data_field_mea_topic';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['field'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['relationship'] = 'field_treaty_target_id';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'contact_person' => 'contact_person',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['contacts_hubs'] = array(
    t('Master'),
    t('Contacts Hub'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_treaty'),
    t('Content entity referenced from field_country'),
    t('All'),
    t('Block'),
  );
  $export['contacts_hubs'] = $view;

  return $export;
}
