<?php
/**
 * @file
 * informea_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function informea_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'informea_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_fulltext_solr_index';
  $view->human_name = 'InforMEA search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['css_class'] = 'view-informea-search-publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort results by';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending / Older first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending / Newest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'smallipop';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No search results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search ...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Treaty */
  $handler->display->display_options['relationships']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['relationships']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['relationships']['field_treaty']['field'] = 'field_treaty';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_treaty';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo',
    'image_link' => '',
  );
  /* Field: Indexed Content: Logo */
  $handler->display->display_options['fields']['field_logo_1']['id'] = 'field_logo_1';
  $handler->display->display_options['fields']['field_logo_1']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_logo_1']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo_1']['label'] = '';
  $handler->display->display_options['fields']['field_logo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_1']['settings'] = array(
    'image_style' => 'logo',
    'image_link' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta search-index">
[search_api_excerpt]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Attached files */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_files']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_files']['element_wrapper_class'] = 'field';
  $handler->display->display_options['fields']['field_files']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['type'] = 'external_url';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<span class="meta content-type">[type]</span>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Data source */
  $handler->display->display_options['fields']['field_data_source']['id'] = 'field_data_source';
  $handler->display->display_options['fields']['field_data_source']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_data_source']['field'] = 'field_data_source';
  $handler->display->display_options['fields']['field_data_source']['label'] = '';
  $handler->display->display_options['fields']['field_data_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_data_source']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-share"></span>[field_data_source]</span> ';
  $handler->display->display_options['fields']['field_data_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data_source']['list']['separator'] = ' | ';
  $handler->display->display_options['fields']['field_data_source']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_data_source']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_data_source']['bypass_access'] = 0;
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_country]</span>';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['list']['separator'] = ' | ';
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_treaty]</span>';
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['list']['separator'] = ' | ';
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  /* Field: Indexed Content: Jurisdiction */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-education"></span>[field_jurisdiction]</span>';
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jurisdiction']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jurisdiction']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Indexed Content: Place of adoption */
  $handler->display->display_options['fields']['field_place_of_adoption']['id'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_place_of_adoption']['field'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['label'] = '';
  $handler->display->display_options['fields']['field_place_of_adoption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_place_of_adoption]</span>';
  $handler->display->display_options['fields']['field_place_of_adoption']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Date */
  $handler->display->display_options['fields']['event_calendar_date']['id'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['event_calendar_date']['field'] = 'event_calendar_date';
  $handler->display->display_options['fields']['event_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['event_calendar_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['event_calendar_date']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-calendar"></span>[event_calendar_date]</span>';
  $handler->display->display_options['fields']['event_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['event_calendar_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="meta-container">
[type]
[field_country]
[field_treaty]
[field_jurisdiction]
[field_type_of_text]
[field_place_of_adoption]
[event_calendar_date]
[field_data_source]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );
  /* Filter criterion: Indexed Content: Treaty */
  $handler->display->display_options['filters']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['filters']['field_treaty']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['field_treaty']['field'] = 'field_treaty';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = '<>';
  $handler->display->display_options['filters']['type']['value'] = array(
    'treaty_paragraph' => 'treaty_paragraph',
  );

  /* Display: Multilateral treaties */
  $handler = $view->new_display('page', 'Multilateral treaties', 'page');
  $handler->display->display_options['path'] = 'search';
  $translatables['informea_search'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort results by'),
    t('Ascending / Older first'),
    t('Descending / Newest first'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results'),
    t('Sorry, there are no results for this search ...'),
    t('Treaty'),
    t('.'),
    t(','),
    t('<div class="meta search-index">
[search_api_excerpt]
</div>'),
    t('Attached files'),
    t('<span class="meta content-type">[type]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-share"></span>[field_data_source]</span> '),
    t('<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_country]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_treaty]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-education"></span>[field_jurisdiction]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_place_of_adoption]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-calendar"></span>[event_calendar_date]</span>'),
    t('<div class="meta-container">
[type]
[field_country]
[field_treaty]
[field_jurisdiction]
[field_type_of_text]
[field_place_of_adoption]
[event_calendar_date]
[field_data_source]
</div>'),
    t('Relevance'),
    t('Date of text'),
    t('Fulltext search'),
    t('Multilateral treaties'),
  );
  $export['informea_search'] = $view;

  $view = new view();
  $view->name = 'informea_search_bilateral_treaties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_fulltext_solr_index';
  $view->human_name = 'InforMEA Search Bilateral Treaties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['css_class'] = 'page-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort results by';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending / Older first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending / Newest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No search results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['relationships']['field_country']['field'] = 'field_country';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<img class="img-thumbnail" src="/sites/all/themes/informea.theme/img/ecolex-logo.png">
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Place of adoption */
  $handler->display->display_options['fields']['field_place_of_adoption']['id'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_place_of_adoption']['field'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['label'] = '';
  $handler->display->display_options['fields']['field_place_of_adoption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['text'] = '<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_place_of_adoption]</span>';
  $handler->display->display_options['fields']['field_place_of_adoption']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Jurisdiction */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-education"></span>[field_jurisdiction]</span>';
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jurisdiction']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jurisdiction']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="meta-container">
[field_place_of_adoption]
[field_jurisdiction]
[field_type_of_text]
[field_ecolex_url]
</div>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'treaty' => 'treaty',
  );
  /* Filter criterion: Indexed Content: Data source */
  $handler->display->display_options['filters']['field_data_source']['id'] = 'field_data_source';
  $handler->display->display_options['filters']['field_data_source']['table'] = 'search_api_index_informea_fulltext_solr_index';
  $handler->display->display_options['filters']['field_data_source']['field'] = 'field_data_source';
  $handler->display->display_options['filters']['field_data_source']['value'] = array(
    2767 => '2767',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-bilateral-treaties';
  $translatables['informea_search_bilateral_treaties'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort results by'),
    t('Ascending / Older first'),
    t('Descending / Newest first'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results'),
    t('Sorry, there are no results for this search...'),
    t('Country'),
    t('<img class="img-thumbnail" src="/sites/all/themes/informea.theme/img/ecolex-logo.png">
'),
    t('<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_place_of_adoption]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-education"></span>[field_jurisdiction]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>'),
    t('<div class="meta-container">
[field_place_of_adoption]
[field_jurisdiction]
[field_type_of_text]
[field_ecolex_url]
</div>
'),
    t('Relevance'),
    t('Date of text'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['informea_search_bilateral_treaties'] = $view;

  $view = new view();
  $view->name = 'informea_search_court_decision';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_court_decisions';
  $view->human_name = 'InforMEA Search Court Decision';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['css_class'] = 'page-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort results by';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending / Older first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending / Newest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No search results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['relationships']['field_country']['field'] = 'field_country';
  /* Field: Content: ISO alpha-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['relationship'] = 'field_country';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_country_iso2']['settings'] = array(
    'title_style' => 'div',
    'title_link' => '',
    'title_class' => 'country-flag',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_country]</span>';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta-container">
[field_country]
[field_type_of_text]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_court_decisions';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-court-decisions';
  $translatables['informea_search_court_decision'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort results by'),
    t('Ascending / Older first'),
    t('Descending / Newest first'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results'),
    t('Sorry, there are no results for this search...'),
    t('Country'),
    t('<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_country]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>'),
    t('<div class="meta-container">
[field_country]
[field_type_of_text]
</div>'),
    t('Relevance'),
    t('Date of text'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['informea_search_court_decision'] = $view;

  $view = new view();
  $view->name = 'informea_search_goals_and_principles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_goals_and_principles';
  $view->human_name = 'InforMEA Search Goals and Principles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Goal */
  $handler->display->display_options['relationships']['field_parent_goal']['id'] = 'field_parent_goal';
  $handler->display->display_options['relationships']['field_parent_goal']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['relationships']['field_parent_goal']['field'] = 'field_parent_goal';
  $handler->display->display_options['relationships']['field_parent_goal']['label'] = 'Parent Goal';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '<span class="meta content-type">[type]</span>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Parent declaration */
  $handler->display->display_options['fields']['field_parent_declaration']['id'] = 'field_parent_declaration';
  $handler->display->display_options['fields']['field_parent_declaration']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['field_parent_declaration']['field'] = 'field_parent_declaration';
  $handler->display->display_options['fields']['field_parent_declaration']['label'] = '';
  $handler->display->display_options['fields']['field_parent_declaration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_declaration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_declaration']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-pushpin"></span>[field_parent_declaration]</span>';
  $handler->display->display_options['fields']['field_parent_declaration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_declaration']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_parent_declaration']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_parent_declaration']['bypass_access'] = 0;
  /* Field: Indexed Content: Parent section */
  $handler->display->display_options['fields']['field_declaration_parent_section']['id'] = 'field_declaration_parent_section';
  $handler->display->display_options['fields']['field_declaration_parent_section']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['field_declaration_parent_section']['field'] = 'field_declaration_parent_section';
  $handler->display->display_options['fields']['field_declaration_parent_section']['label'] = '';
  $handler->display->display_options['fields']['field_declaration_parent_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_declaration_parent_section']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_declaration_parent_section']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-tasks"></span>[field_declaration_parent_section]</span>';
  $handler->display->display_options['fields']['field_declaration_parent_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_declaration_parent_section']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_declaration_parent_section']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_declaration_parent_section']['bypass_access'] = 0;
  /* Field: Indexed Content: Goal Type */
  $handler->display->display_options['fields']['field_goal_type']['id'] = 'field_goal_type';
  $handler->display->display_options['fields']['field_goal_type']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['field_goal_type']['field'] = 'field_goal_type';
  $handler->display->display_options['fields']['field_goal_type']['label'] = '';
  $handler->display->display_options['fields']['field_goal_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_goal_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_goal_type']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-folder-open"></span>[field_goal_type]</span>';
  $handler->display->display_options['fields']['field_goal_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_goal_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_goal_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_goal_type']['bypass_access'] = 0;
  /* Field: Content: Goal */
  $handler->display->display_options['fields']['field_parent_goal_1']['id'] = 'field_parent_goal_1';
  $handler->display->display_options['fields']['field_parent_goal_1']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_parent_goal_1']['field'] = 'field_parent_goal';
  $handler->display->display_options['fields']['field_parent_goal_1']['relationship'] = 'field_parent_goal';
  $handler->display->display_options['fields']['field_parent_goal_1']['label'] = '';
  $handler->display->display_options['fields']['field_parent_goal_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_goal_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_goal_1']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-pushpin"></span>[field_parent_goal_1]</span>';
  $handler->display->display_options['fields']['field_parent_goal_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_goal_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_parent_goal_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_parent_goal_1']['bypass_access'] = 0;
  /* Field: Indexed Content: Goal */
  $handler->display->display_options['fields']['field_parent_goal']['id'] = 'field_parent_goal';
  $handler->display->display_options['fields']['field_parent_goal']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['fields']['field_parent_goal']['field'] = 'field_parent_goal';
  $handler->display->display_options['fields']['field_parent_goal']['label'] = '';
  $handler->display->display_options['fields']['field_parent_goal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parent_goal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parent_goal']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-tasks"></span>[field_parent_goal]</span>';
  $handler->display->display_options['fields']['field_parent_goal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parent_goal']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_parent_goal']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_parent_goal']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta-container">
[type]
[field_parent_declaration]
[field_declaration_parent_section]
[field_goal_type]
[field_parent_goal_1]
[field_parent_goal]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_informea_goals_and_principles';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = '<>';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declaration_paragraph' => 'declaration_paragraph',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-goals-and-principles';
  $translatables['informea_search_goals_and_principles'] = array(
    t('Master'),
    t('Search InforMEA'),
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
    t('Parent Goal'),
    t('<span class="meta content-type">[type]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-pushpin"></span>[field_parent_declaration]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-tasks"></span>[field_declaration_parent_section]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-folder-open"></span>[field_goal_type]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-pushpin"></span>[field_parent_goal_1]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-tasks"></span>[field_parent_goal]</span>'),
    t('<div class="meta-container">
[type]
[field_parent_declaration]
[field_declaration_parent_section]
[field_goal_type]
[field_parent_goal_1]
[field_parent_goal]
</div>
'),
    t('Relevance'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['informea_search_goals_and_principles'] = $view;

  $view = new view();
  $view->name = 'informea_search_legislation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_legislations';
  $view->human_name = 'InforMEA Search Legislation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['css_class'] = 'page-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort results by';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending / Older first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending / Newest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No search results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['relationships']['field_country']['field'] = 'field_country';
  /* Field: Content: ISO alpha-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['relationship'] = 'field_country';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_country]</span>';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Indexed Content: Original ID */
  $handler->display->display_options['fields']['field_original_id']['id'] = 'field_original_id';
  $handler->display->display_options['fields']['field_original_id']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['field_original_id']['field'] = 'field_original_id';
  $handler->display->display_options['fields']['field_original_id']['label'] = '';
  $handler->display->display_options['fields']['field_original_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_original_id']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Indexed Content: FAOLEX URL */
  $handler->display->display_options['fields']['field_faolex_url']['id'] = 'field_faolex_url';
  $handler->display->display_options['fields']['field_faolex_url']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['fields']['field_faolex_url']['field'] = 'field_faolex_url';
  $handler->display->display_options['fields']['field_faolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_faolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faolex_url']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_faolex_url-attributes] href="[field_faolex_url]">[field_faolex_url-title]</a></span>';
  $handler->display->display_options['fields']['field_faolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_faolex_url']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta-container">
[field_country]
[field_type_of_text]
[field_faolex_url]
[field_ecolex_url]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_legislations';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-legislation';
  $translatables['informea_search_legislation'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort results by'),
    t('Ascending / Older first'),
    t('Descending / Newest first'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results'),
    t('Sorry, there are no results for this search...'),
    t('Country'),
    t('<span class="meta"><span class="glyphicon glyphicon-globe"></span>[field_country]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_type_of_text]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_faolex_url-attributes] href="[field_faolex_url]">[field_faolex_url-title]</a></span>'),
    t('<div class="meta-container">
[field_country]
[field_type_of_text]
[field_faolex_url]
[field_ecolex_url]
</div>'),
    t('Relevance'),
    t('Date of text'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['informea_search_legislation'] = $view;

  $view = new view();
  $view->name = 'informea_search_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_informea_publications';
  $view->human_name = 'InforMEA Search Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search InforMEA';
  $handler->display->display_options['css_class'] = 'page-search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Sort';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort results by';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending / Older first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending / Newest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No search results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['relationships']['field_country']['field'] = 'field_country';
  /* Relationship: Indexed Content: Treaty */
  $handler->display->display_options['relationships']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['relationships']['field_treaty']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['relationships']['field_treaty']['field'] = 'field_treaty';
  /* Field: Indexed Content: Data source */
  $handler->display->display_options['fields']['field_data_source']['id'] = 'field_data_source';
  $handler->display->display_options['fields']['field_data_source']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_data_source']['field'] = 'field_data_source';
  $handler->display->display_options['fields']['field_data_source']['label'] = '';
  $handler->display->display_options['fields']['field_data_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data_source']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_data_source']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_data_source']['bypass_access'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_treaty';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo',
    'image_link' => '',
  );
  /* Field: computed_logo */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'computed_logo';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'LOGO';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['text'] = '<span class="meta"><span class="glyphicon glyphicon-book"></span>[field_document_type]</span>';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_document_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_document_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-pencil"></span>[field_publisher]</span>';
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Publication Place */
  $handler->display->display_options['fields']['field_publication_place']['id'] = 'field_publication_place';
  $handler->display->display_options['fields']['field_publication_place']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_publication_place']['field'] = 'field_publication_place';
  $handler->display->display_options['fields']['field_publication_place']['label'] = '';
  $handler->display->display_options['fields']['field_publication_place']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_place']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_place']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_publication_place]</span>';
  $handler->display->display_options['fields']['field_publication_place']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Literature type */
  $handler->display->display_options['fields']['field_literature_type']['id'] = 'field_literature_type';
  $handler->display->display_options['fields']['field_literature_type']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_literature_type']['field'] = 'field_literature_type';
  $handler->display->display_options['fields']['field_literature_type']['label'] = '';
  $handler->display->display_options['fields']['field_literature_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_literature_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_literature_type']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_literature_type]</span>';
  $handler->display->display_options['fields']['field_literature_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_literature_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_literature_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_literature_type']['bypass_access'] = 0;
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta-container">
[field_publication_place]
[field_document_type]
[field_publisher]
[field_literature_type]
[field_ecolex_url]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_informea_publications';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-publications';
  $translatables['informea_search_publications'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Sort'),
    t('Reset'),
    t('Sort results by'),
    t('Ascending / Older first'),
    t('Descending / Newest first'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No search results'),
    t('Sorry, there are no results for this search...'),
    t('Country'),
    t('Treaty'),
    t('LOGO'),
    t('<span class="meta"><span class="glyphicon glyphicon-book"></span>[field_document_type]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-pencil"></span>[field_publisher]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-globe"></span>[field_publication_place]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-book"></span>[field_literature_type]</span>'),
    t('<span class="meta"> · <span class="glyphicon glyphicon-share"></span><a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a></span>'),
    t('<div class="meta-container">
[field_publication_place]
[field_document_type]
[field_publisher]
[field_literature_type]
[field_ecolex_url]
</div>'),
    t('Relevance'),
    t('Date of text'),
    t('Fulltext search'),
    t('Page'),
  );
  $export['informea_search_publications'] = $view;

  return $export;
}
