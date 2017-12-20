<?php
/**
 * @file
 * geographic_region.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function geographic_region_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_and_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News and events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News and events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no news or events for current filters.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'field_data_event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_city], ';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Region (field_region) */
  $handler->display->display_options['arguments']['field_region_tid_1']['id'] = 'field_region_tid_1';
  $handler->display->display_options['arguments']['field_region_tid_1']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_tid_1']['field'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_region_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_tid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Topics (field_mea_topic) */
  $handler->display->display_options['arguments']['field_mea_topic_tid']['id'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['table'] = 'field_data_field_mea_topic';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['field'] = 'field_mea_topic_tid';
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
    'event_calendar' => 'event_calendar',
    'feed_item' => 'feed_item',
  );

  /* Display: Regional news and events */
  $handler = $view->new_display('block', 'Regional news and events', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event_calendar' => 'event_calendar',
    'feed_item' => 'feed_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['news_and_events'] = array(
    t('Master'),
    t('News and events'),
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
    t('No results text'),
    t('There are no news or events for current filters.'),
    t('[field_city], '),
    t('All'),
    t('Regional news and events'),
  );
  $export['news_and_events'] = $view;

  $view = new view();
  $view->name = 'regional_treaties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Regional treaties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Global treaties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no regional treaties for current filters.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_official_name']['id'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['table'] = 'field_data_field_official_name';
  $handler->display->display_options['fields']['field_official_name']['field'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['label'] = '';
  $handler->display->display_options['fields']['field_official_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_official_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_official_name']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_official_name] ([title])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: InforMEA tags */
  $handler->display->display_options['fields']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['table'] = 'field_data_field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_informea_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_informea_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  /* Sort criterion: Content: Official name (field_official_name) */
  $handler->display->display_options['sorts']['field_official_name_value']['id'] = 'field_official_name_value';
  $handler->display->display_options['sorts']['field_official_name_value']['table'] = 'field_data_field_official_name';
  $handler->display->display_options['sorts']['field_official_name_value']['field'] = 'field_official_name_value';
  /* Contextual filter: Content: Region (field_region) */
  $handler->display->display_options['arguments']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_region_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Topics (field_mea_topic) */
  $handler->display->display_options['arguments']['field_mea_topic_tid']['id'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['table'] = 'field_data_field_mea_topic';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['field'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['default_argument_type'] = 'taxonomy_tid';
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
    'treaty' => 'treaty',
  );
  /* Filter criterion: Content: Data source (field_data_source) */
  $handler->display->display_options['filters']['field_data_source_tid']['id'] = 'field_data_source_tid';
  $handler->display->display_options['filters']['field_data_source_tid']['table'] = 'field_data_field_data_source';
  $handler->display->display_options['filters']['field_data_source_tid']['field'] = 'field_data_source_tid';
  $handler->display->display_options['filters']['field_data_source_tid']['value'] = array(
    815 => '815',
  );
  $handler->display->display_options['filters']['field_data_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_data_source_tid']['vocabulary'] = 'data_source';

  /* Display: Regional treaties */
  $handler = $view->new_display('block', 'Regional treaties', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Regional treaties';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_official_name']['id'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['table'] = 'field_data_field_official_name';
  $handler->display->display_options['fields']['field_official_name']['field'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['label'] = '';
  $handler->display->display_options['fields']['field_official_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_official_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_official_name']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_official_name] ([title])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_mea_topic']['id'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['table'] = 'field_data_field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['field'] = 'field_mea_topic';
  $handler->display->display_options['fields']['field_mea_topic']['label'] = '';
  $handler->display->display_options['fields']['field_mea_topic']['element_class'] = 'topic-[field_mea_topic]';
  $handler->display->display_options['fields']['field_mea_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mea_topic']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_mea_topic']['delta_offset'] = '0';
  /* Field: Content: InforMEA tags */
  $handler->display->display_options['fields']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['table'] = 'field_data_field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['fields']['field_informea_tags']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_informea_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_informea_tags']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'textformatter-list',
    'textformatter_term_plain' => 0,
  );
  $handler->display->display_options['fields']['field_informea_tags']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_informea_tags']['delta_offset'] = '0';
  /* Field: Content: Treaty links */
  $handler->display->display_options['fields']['treaty_links']['id'] = 'treaty_links';
  $handler->display->display_options['fields']['treaty_links']['table'] = 'node';
  $handler->display->display_options['fields']['treaty_links']['field'] = 'treaty_links';
  $handler->display->display_options['fields']['treaty_links']['label'] = '';
  $handler->display->display_options['fields']['treaty_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['treaty_links']['display_links'] = array(
    'decisions' => 'decisions',
    'parties' => 'parties',
    'contacts-hub' => 'contacts-hub',
    'default' => 0,
    'protocols' => 0,
    'text' => 0,
    'national-reports' => 0,
    'action-plans' => 0,
    'documents' => 0,
  );
  $handler->display->display_options['fields']['treaty_links']['decisions_link_title'] = 'Meeting Decisions';

  /* Display: Global treaties */
  $handler = $view->new_display('block', 'Global treaties', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Global treaties';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no global treaties for current filters.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_official_name']['id'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['table'] = 'field_data_field_official_name';
  $handler->display->display_options['fields']['field_official_name']['field'] = 'field_official_name';
  $handler->display->display_options['fields']['field_official_name']['label'] = '';
  $handler->display->display_options['fields']['field_official_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_official_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_official_name']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_official_name] ([title])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Topics (field_mea_topic) */
  $handler->display->display_options['arguments']['field_mea_topic_tid']['id'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['table'] = 'field_data_field_mea_topic';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['field'] = 'field_mea_topic_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mea_topic_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'treaty' => 'treaty',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['value'] = array(
    0 => '1118',
  );
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'geographical_region';
  /* Filter criterion: Content: Data source (field_data_source) */
  $handler->display->display_options['filters']['field_data_source_tid']['id'] = 'field_data_source_tid';
  $handler->display->display_options['filters']['field_data_source_tid']['table'] = 'field_data_field_data_source';
  $handler->display->display_options['filters']['field_data_source_tid']['field'] = 'field_data_source_tid';
  $handler->display->display_options['filters']['field_data_source_tid']['value'] = array(
    815 => '815',
  );
  $handler->display->display_options['filters']['field_data_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_data_source_tid']['vocabulary'] = 'data_source';
  $translatables['regional_treaties'] = array(
    t('Master'),
    t('Global treaties'),
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
    t('No results text'),
    t('There are no regional treaties for current filters.'),
    t('[field_official_name] ([title])'),
    t('Tags'),
    t('All'),
    t('Regional treaties'),
    t('There are no global treaties for current filters.'),
  );
  $export['regional_treaties'] = $view;

  $view = new view();
  $view->name = 'take_part_webform';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Take part webform';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Take Part';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro';
  $handler->display->display_options['header']['area']['content'] = 'Do you want to bring valuable information on our platform? Tell us below:';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Webform: Webform form body */
  $handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
  $handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['label'] = '';
  $handler->display->display_options['fields']['webform_form_body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'webform' => 'webform',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '418241';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['take_part_webform'] = array(
    t('Master'),
    t('Take Part'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Intro'),
    t('Do you want to bring valuable information on our platform? Tell us below:'),
    t('Block'),
  );
  $export['take_part_webform'] = $view;

  return $export;
}
