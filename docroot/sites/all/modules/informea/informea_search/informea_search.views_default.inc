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
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_index';
  $view->human_name = 'Search';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => 'Relevance Asc|
Relevance Desc|Sort by Relevance
Date of text Desc|Sort by Most Recent
Date of text Asc|Sort by Least Recent',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_item';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Found @total results';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no results for this search...';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Date */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_sorting_date']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sorting_date']['expose']['label'] = 'Date of text';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
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
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = '<>';
  $handler->display->display_options['filters']['type']['value'] = array(
    'decision_paragraph' => 'decision_paragraph',
    'declaration_section' => 'declaration_section',
    'declaration_paragraph' => 'declaration_paragraph',
    'national_report_paragraph' => 'national_report_paragraph',
    'treaty_article' => 'treaty_article',
    'treaty_paragraph' => 'treaty_paragraph',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'search');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => 'Relevance Asc|
Relevance Desc|Sort by Relevance
Date of text Desc|Sort by Most Recent
Date of text Asc|Sort by Least Recent',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="search-results-info">Found @total results</div>';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['label'] = '<none>';
  $handler->display->display_options['header']['block']['empty'] = TRUE;
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:-exp-search-search';
  $handler->display->display_options['header']['block']['title'] = '<none>';
  $handler->display->display_options['path'] = 'search';

  /* Display: Documents (treaty) */
  $handler = $view->new_display('page', 'Documents (treaty)', 'search_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['display_description'] = 'This view lists all the documents asociated with a treaty.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="search-results-info">Found @total results</div>';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:-exp-search-search_documents';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Abstract document » The file. */
  $handler->display->display_options['fields']['field_document_abstract_file']['id'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_document_abstract_file']['field'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['label'] = '';
  $handler->display->display_options['fields']['field_document_abstract_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_abstract_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_abstract_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_abstract_file']['bypass_access'] = 0;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = '<dt>Instrument:&nbsp;&nbsp;</dt><dl>[field_treaty]</dl>';
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Treaty */
  $handler->display->display_options['arguments']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_treaty']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_treaty']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_treaty']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_treaty']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text_documents';
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
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'treaties/%/documents';

  /* Display: Contacts hub (treaty) */
  $handler = $view->new_display('page', 'Contacts hub (treaty)', 'search_contacts_hub_treaty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['display_description'] = 'This view lists all the contacts asociated with a treaty.';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => 'Title Asc|
Title Asc|Sort from A to Z
Title Desc|Sort from Z to  A',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'treaty_page';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="search-results-info">Found @total results</div>';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:a2e5acee3ad9875d2b14ebe127f09688';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Abstract document » The file. */
  $handler->display->display_options['fields']['field_document_abstract_file']['id'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_document_abstract_file']['field'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['label'] = '';
  $handler->display->display_options['fields']['field_document_abstract_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_abstract_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_abstract_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_abstract_file']['bypass_access'] = 0;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = '<dt>Instrument:&nbsp;&nbsp;</dt><dl>[field_treaty]</dl>';
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Title - indexed as string (used for sorting) */
  $handler->display->display_options['sorts']['title_index']['id'] = 'title_index';
  $handler->display->display_options['sorts']['title_index']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['title_index']['field'] = 'title_index';
  $handler->display->display_options['sorts']['title_index']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_index']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Treaty */
  $handler->display->display_options['arguments']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['arguments']['field_treaty']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_treaty']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_treaty']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_treaty']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_treaty']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text_contacts';
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
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_person' => 'contact_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'treaties/%/contacts-hub';

  /* Display: Contacts hub (country) */
  $handler = $view->new_display('page', 'Contacts hub (country)', 'search_contacts_hub_country');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['display_description'] = 'This view lists all the contacts asociated with a country.';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => 'Title Asc|
Title Asc|Sort from A to Z
Title Desc|Sort from Z to  A',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'country_page';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="search-results-info">Found @total results</div>';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:7cc5d3b37c1ff17cff2ec261f3aafbe1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Abstract document » The file. */
  $handler->display->display_options['fields']['field_document_abstract_file']['id'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_document_abstract_file']['field'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['label'] = '';
  $handler->display->display_options['fields']['field_document_abstract_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_abstract_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_abstract_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_abstract_file']['bypass_access'] = 0;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = '<dt>Instrument:&nbsp;&nbsp;</dt><dl>[field_treaty]</dl>';
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Title - indexed as string (used for sorting) */
  $handler->display->display_options['sorts']['title_index']['id'] = 'title_index';
  $handler->display->display_options['sorts']['title_index']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['title_index']['field'] = 'title_index';
  $handler->display->display_options['sorts']['title_index']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_index']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Country */
  $handler->display->display_options['arguments']['field_country']['id'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_country']['field'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_country']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text_contacts';
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
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact_person' => 'contact_person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'countries/%/contacts-hub';

  /* Display: Documents (country) */
  $handler = $view->new_display('page', 'Documents (country)', 'search_documents_country');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['display_description'] = 'This view lists all the documents asociated with a country.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="search-results-info">Found @total results</div>';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['label'] = '<none>';
  $handler->display->display_options['header']['block']['block_to_insert'] = 'views:41aeb0f7dd12f16be45f80ca0e6d3bf0';
  $handler->display->display_options['header']['block']['title'] = '<none>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Abstract document » The file. */
  $handler->display->display_options['fields']['field_document_abstract_file']['id'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_document_abstract_file']['field'] = 'field_document_abstract_file';
  $handler->display->display_options['fields']['field_document_abstract_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_document_abstract_file']['bypass_access'] = 0;
  /* Field: Indexed Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Country */
  $handler->display->display_options['arguments']['field_country']['id'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_country']['field'] = 'field_country';
  $handler->display->display_options['arguments']['field_country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_country']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text_documents';
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
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'countries/%/documents';
  $translatables['search'] = array(
    t('Master'),
    t('Search InforMEA'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Sort options'),
    t('Relevance Asc|
Relevance Desc|Sort by Relevance
Date of text Desc|Sort by Most Recent
Date of text Asc|Sort by Least Recent'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Found @total results'),
    t('No results text'),
    t('Sorry, there are no results for this search...'),
    t('Relevance'),
    t('Date of text'),
    t('Search'),
    t('Page'),
    t('<div class="search-results-info">Found @total results</div>'),
    t('<none>'),
    t('Documents (treaty)'),
    t('Documents'),
    t('This view lists all the documents asociated with a treaty.'),
    t('Treaty'),
    t('<dt>Instrument:&nbsp;&nbsp;</dt><dl>[field_treaty]</dl>'),
    t('All'),
    t('Content type'),
    t('Contacts hub (treaty)'),
    t('This view lists all the contacts asociated with a treaty.'),
    t('Title Asc|
Title Asc|Sort from A to Z
Title Desc|Sort from Z to  A'),
    t('Title'),
    t('Contacts hub (country)'),
    t('This view lists all the contacts asociated with a country.'),
    t('Documents (country)'),
    t('This view lists all the documents asociated with a country.'),
    t('Abstract document » The file.'),
  );
  $export['search'] = $view;

  return $export;
}
