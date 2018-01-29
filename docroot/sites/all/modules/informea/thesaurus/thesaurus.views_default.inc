<?php
/**
 * @file
 * thesaurus.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thesaurus_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_term_related_bilateral_treaties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_index';
  $view->human_name = 'Taxonomy term related bilateral treaties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy term related bilateral treaties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_default_index';
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
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Content: Jurisdiction */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['text'] = '<span class="glyphicon glyphicon-education"></span> [field_jurisdiction]';
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_jurisdiction']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_jurisdiction']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Indexed Content: Place of adoption */
  $handler->display->display_options['fields']['field_place_of_adoption']['id'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_place_of_adoption']['field'] = 'field_place_of_adoption';
  $handler->display->display_options['fields']['field_place_of_adoption']['label'] = '';
  $handler->display->display_options['fields']['field_place_of_adoption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_place_of_adoption']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-globe"></span> [field_place_of_adoption]';
  $handler->display->display_options['fields']['field_place_of_adoption']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="meta search-index">
[field_jurisdiction]
[field_type_of_text]
[field_place_of_adoption]
[field_ecolex_url]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['order'] = 'DESC';
  /* Contextual filter: Indexed Content: InforMEA Tags */
  $handler->display->display_options['arguments']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_informea_tags']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_informea_tags']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_informea_tags']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_informea_tags']['not'] = 0;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'treaty' => 'treaty',
  );
  /* Filter criterion: Indexed Content: Data source */
  $handler->display->display_options['filters']['field_data_source']['id'] = 'field_data_source';
  $handler->display->display_options['filters']['field_data_source']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['filters']['field_data_source']['field'] = 'field_data_source';
  $handler->display->display_options['filters']['field_data_source']['value'] = array(
    2767 => '2767',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['taxonomy_term_related_bilateral_treaties'] = array(
    t('Master'),
    t('Taxonomy term related bilateral treaties'),
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
    t('Country'),
    t('<img class="img-thumbnail" src="/sites/all/themes/informea.theme/img/ecolex-logo.png">
'),
    t('<span class="glyphicon glyphicon-education"></span> [field_jurisdiction]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-globe"></span> [field_place_of_adoption]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>'),
    t('<div class="meta search-index">
[field_jurisdiction]
[field_type_of_text]
[field_place_of_adoption]
[field_ecolex_url]
</div>'),
    t('All'),
    t('Block'),
  );
  $export['taxonomy_term_related_bilateral_treaties'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_related_court_decisions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_index';
  $view->human_name = 'Taxonomy term related court decisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy term related court decisions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_default_index';
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
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<span class="glyphicon glyphicon-globe"></span> [field_country]';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta search-index">
[field_country]
[field_type_of_text]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Date of text */
  $handler->display->display_options['sorts']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['sorts']['field_sorting_date']['field'] = 'field_sorting_date';
  /* Contextual filter: Indexed Content: InforMEA Tags */
  $handler->display->display_options['arguments']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_informea_tags']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_informea_tags']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_informea_tags']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_informea_tags']['not'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['taxonomy_term_related_court_decisions'] = array(
    t('Master'),
    t('Taxonomy term related court decisions'),
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
    t('Country'),
    t('<span class="glyphicon glyphicon-globe"></span> [field_country]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]'),
    t('<div class="meta search-index">
[field_country]
[field_type_of_text]
</div>'),
    t('All'),
    t('Block'),
  );
  $export['taxonomy_term_related_court_decisions'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_related_legislations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_index';
  $view->human_name = 'Taxonomy term related legislation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_default_index';
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
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<span class="glyphicon glyphicon-globe"></span> [field_country]';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_country']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_country']['bypass_access'] = 0;
  /* Field: Indexed Content: Type of text */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]';
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_type_of_text']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_type_of_text']['bypass_access'] = 0;
  /* Field: Indexed Content: FAOLEX URL */
  $handler->display->display_options['fields']['field_faolex_url']['id'] = 'field_faolex_url';
  $handler->display->display_options['fields']['field_faolex_url']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_faolex_url']['field'] = 'field_faolex_url';
  $handler->display->display_options['fields']['field_faolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_faolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_faolex_url']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_faolex_url-attributes] href="[field_faolex_url]">[field_faolex_url-title]</a>';
  $handler->display->display_options['fields']['field_faolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_faolex_url']['type'] = 'link_absolute';
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta search-index">
[field_country]
[field_type_of_text]
[field_faolex_url]
[field_ecolex_url]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Indexed Content: InforMEA Tags */
  $handler->display->display_options['arguments']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_informea_tags']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_informea_tags']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_informea_tags']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_informea_tags']['not'] = 0;
  $translatables['taxonomy_term_related_legislations'] = array(
    t('Master'),
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
    t('Country'),
    t('<span class="glyphicon glyphicon-globe"></span> [field_country]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_type_of_text]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_faolex_url-attributes] href="[field_faolex_url]">[field_faolex_url-title]</a>'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>'),
    t('<div class="meta search-index">
[field_country]
[field_type_of_text]
[field_faolex_url]
[field_ecolex_url]
</div>'),
    t('All'),
  );
  $export['taxonomy_term_related_legislations'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_related_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_index';
  $view->human_name = 'Taxonomy term related publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy term related publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Country */
  $handler->display->display_options['relationships']['field_country']['id'] = 'field_country';
  $handler->display->display_options['relationships']['field_country']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['relationships']['field_country']['field'] = 'field_country';
  /* Relationship: Indexed Content: Treaty */
  $handler->display->display_options['relationships']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['relationships']['field_treaty']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['relationships']['field_treaty']['field'] = 'field_treaty';
  /* Field: Indexed Content: Data source */
  $handler->display->display_options['fields']['field_data_source']['id'] = 'field_data_source';
  $handler->display->display_options['fields']['field_data_source']['table'] = 'search_api_index_default_index';
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
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo',
    'image_link' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Content: Document type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['text'] = '<span class="glyphicon glyphicon-book"></span> [field_document_type]';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_document_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_document_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Literature type */
  $handler->display->display_options['fields']['field_literature_type']['id'] = 'field_literature_type';
  $handler->display->display_options['fields']['field_literature_type']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_literature_type']['field'] = 'field_literature_type';
  $handler->display->display_options['fields']['field_literature_type']['label'] = '';
  $handler->display->display_options['fields']['field_literature_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_literature_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_literature_type']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_literature_type]';
  $handler->display->display_options['fields']['field_literature_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_literature_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_literature_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_literature_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Publication Place */
  $handler->display->display_options['fields']['field_publication_place']['id'] = 'field_publication_place';
  $handler->display->display_options['fields']['field_publication_place']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_publication_place']['field'] = 'field_publication_place';
  $handler->display->display_options['fields']['field_publication_place']['label'] = '';
  $handler->display->display_options['fields']['field_publication_place']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_place']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: ECOLEX URL */
  $handler->display->display_options['fields']['field_ecolex_url']['id'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['fields']['field_ecolex_url']['field'] = 'field_ecolex_url';
  $handler->display->display_options['fields']['field_ecolex_url']['label'] = '';
  $handler->display->display_options['fields']['field_ecolex_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ecolex_url']['alter']['text'] = '<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>';
  $handler->display->display_options['fields']['field_ecolex_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ecolex_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ecolex_url']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="meta search-index">
[field_document_type]
[field_publisher]
[field_literature_type]
[field_publication_place]
[field_ecolex_url]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Indexed Content: InforMEA Tags */
  $handler->display->display_options['arguments']['field_informea_tags']['id'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['table'] = 'search_api_index_default_index';
  $handler->display->display_options['arguments']['field_informea_tags']['field'] = 'field_informea_tags';
  $handler->display->display_options['arguments']['field_informea_tags']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_informea_tags']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_informea_tags']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_informea_tags']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_informea_tags']['not'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['taxonomy_term_related_publications'] = array(
    t('Master'),
    t('Taxonomy term related publications'),
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
    t('Country'),
    t('Treaty'),
    t('<span class="glyphicon glyphicon-book"></span> [field_document_type]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-book"></span> [field_literature_type]'),
    t('<span class="separator">·</span> <span class="glyphicon glyphicon-share"></span> <a target="_blank" [field_ecolex_url-attributes] href="[field_ecolex_url]">[field_ecolex_url-title]</a>'),
    t('<div class="meta search-index">
[field_document_type]
[field_publisher]
[field_literature_type]
[field_publication_place]
[field_ecolex_url]
</div>'),
    t('All'),
    t('Block'),
  );
  $export['taxonomy_term_related_publications'] = $view;

  return $export;
}
