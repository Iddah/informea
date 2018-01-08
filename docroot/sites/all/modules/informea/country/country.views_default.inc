<?php
/**
 * @file
 * country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'country' => 'country',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'countries';

  /* Display: Manage countries */
  $handler = $view->new_display('page', 'Manage countries', 'page_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage countries';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Name';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Official name */
  $handler->display->display_options['fields']['field_country_official_name']['id'] = 'field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['table'] = 'field_data_field_country_official_name';
  $handler->display->display_options['fields']['field_country_official_name']['field'] = 'field_country_official_name';
  /* Field: Content: ISO alpha-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['type'] = 'text_plain';
  /* Field: Content: ISO alpha-3 code */
  $handler->display->display_options['fields']['field_country_iso3']['id'] = 'field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['table'] = 'field_data_field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['field'] = 'field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['type'] = 'text_plain';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'Region(s)';
  $handler->display->display_options['fields']['field_region']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: EU Member */
  $handler->display->display_options['fields']['field_eu_member']['id'] = 'field_eu_member';
  $handler->display->display_options['fields']['field_eu_member']['table'] = 'field_data_field_eu_member';
  $handler->display->display_options['fields']['field_eu_member']['field'] = 'field_eu_member';
  $handler->display->display_options['fields']['field_eu_member']['label'] = 'Is EU Member?';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
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
    'country' => 'country',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'geographical_region';
  $handler->display->display_options['filters']['field_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: EU Member (field_eu_member) */
  $handler->display->display_options['filters']['field_eu_member_value']['id'] = 'field_eu_member_value';
  $handler->display->display_options['filters']['field_eu_member_value']['table'] = 'field_data_field_eu_member';
  $handler->display->display_options['filters']['field_eu_member_value']['field'] = 'field_eu_member_value';
  $handler->display->display_options['filters']['field_eu_member_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_eu_member_value']['expose']['operator_id'] = 'field_eu_member_value_op';
  $handler->display->display_options['filters']['field_eu_member_value']['expose']['label'] = 'EU Member';
  $handler->display->display_options['filters']['field_eu_member_value']['expose']['operator'] = 'field_eu_member_value_op';
  $handler->display->display_options['filters']['field_eu_member_value']['expose']['identifier'] = 'field_eu_member_value';
  $handler->display->display_options['filters']['field_eu_member_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/countries';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Countries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['countries'] = array(
    t('Master'),
    t('Parties'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Manage countries'),
    t('Displaying @start - @end of @total. @items_per_page_links'),
    t('Name'),
    t('Official name'),
    t('ISO alpha-2 code'),
    t('ISO alpha-3 code'),
    t('Region(s)'),
    t('Is EU Member?'),
    t('Edit'),
    t('Region'),
    t('EU Member'),
  );
  $export['countries'] = $view;

  $view = new view();
  $view->name = 'country_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Country related content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Default';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  /* Contextual filter: Content: ISO alpha-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Focal points */
  $handler = $view->new_display('page', 'Focal points', 'page_contact_person');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country focal points';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: ISO alpha-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
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
    'contact_person' => 'contact_person',
  );
  $handler->display->display_options['path'] = 'countries/%/parties';

  /* Display: Legislation */
  $handler = $view->new_display('page', 'Legislation', 'page_legislation');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type of document */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'field_data_field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'legislation' => 'legislation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: InforMEA tags (field_informea_tags) */
  $handler->display->display_options['filters']['field_informea_tags_tid']['id'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['table'] = 'field_data_field_informea_tags';
  $handler->display->display_options['filters']['field_informea_tags_tid']['field'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_informea_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['operator_id'] = 'field_informea_tags_tid_op';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['label'] = 'InforMEA Tags';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['operator'] = 'field_informea_tags_tid_op';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['identifier'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_informea_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_informea_tags_tid']['vocabulary'] = 'thesaurus_informea';
  $handler->display->display_options['path'] = 'countries/%/parties';

  /* Display: Literature */
  $handler = $view->new_display('page', 'Literature', 'page_literature');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Legislation';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'literature' => 'literature',
  );
  $handler->display->display_options['path'] = 'countries/%/parties';

  /* Display: Court decisions */
  $handler = $view->new_display('page', 'Court decisions', 'page_court_decisions');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Court decisions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type of document */
  $handler->display->display_options['fields']['field_type_of_text']['id'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['table'] = 'field_data_field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['field'] = 'field_type_of_text';
  $handler->display->display_options['fields']['field_type_of_text']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_text']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'court_decisions' => 'court_decisions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: InforMEA tags (field_informea_tags) */
  $handler->display->display_options['filters']['field_informea_tags_tid']['id'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['table'] = 'field_data_field_informea_tags';
  $handler->display->display_options['filters']['field_informea_tags_tid']['field'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_informea_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['operator_id'] = 'field_informea_tags_tid_op';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['label'] = 'InforMEA tags';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['operator'] = 'field_informea_tags_tid_op';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['identifier'] = 'field_informea_tags_tid';
  $handler->display->display_options['filters']['field_informea_tags_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_informea_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_informea_tags_tid']['vocabulary'] = 'thesaurus_informea';
  $handler->display->display_options['path'] = 'countries/%/parties';

  /* Display: Embed national reports */
  $handler = $view->new_display('embed', 'Embed national reports', 'embed_national_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'National reports';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_document_url' => 'field_document_url',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of text */
  $handler->display->display_options['fields']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['table'] = 'field_data_field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['label'] = '';
  $handler->display->display_options['fields']['field_sorting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sorting_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Document URL */
  $handler->display->display_options['fields']['field_document_url']['id'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['table'] = 'field_data_field_document_url';
  $handler->display->display_options['fields']['field_document_url']['field'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['label'] = 'Document(s)';
  $handler->display->display_options['fields']['field_document_url']['alter']['text'] = '<a href="[field_document_url-url]">View</a>';
  $handler->display->display_options['fields']['field_document_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_document_url']['type'] = 'link_short';
  $handler->display->display_options['fields']['field_document_url']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of text (field_sorting_date) */
  $handler->display->display_options['sorts']['field_sorting_date_value']['id'] = 'field_sorting_date_value';
  $handler->display->display_options['sorts']['field_sorting_date_value']['table'] = 'field_data_field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date_value']['field'] = 'field_sorting_date_value';
  $handler->display->display_options['sorts']['field_sorting_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'national_report' => 'national_report',
  );

  /* Display: Ramsar sites */
  $handler = $view->new_display('embed', 'Ramsar sites', 'ramsar_sites');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sites';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = 'List of [field_treaty] sites';
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Field: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'geographical_site' => 'geographical_site',
  );
  /* Filter criterion: Content: Treaty (field_treaty) */
  $handler->display->display_options['filters']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['filters']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['filters']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['filters']['field_treaty_target_id']['value'] = array(
    272 => '272',
    269 => '269',
  );

  /* Display: WHC sites */
  $handler = $view->new_display('embed', 'WHC sites', 'whc_sites');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sites';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['alter']['text'] = 'List of [field_treaty] sites';
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Field: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'geographical_site' => 'geographical_site',
  );
  /* Filter criterion: Content: Treaty (field_treaty) */
  $handler->display->display_options['filters']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['filters']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['filters']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  $handler->display->display_options['filters']['field_treaty_target_id']['value'] = array(
    267 => '267',
    270 => '270',
  );

  /* Display: Embed action plans */
  $handler = $view->new_display('embed', 'Embed action plans', 'embed_action_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Action plans';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_treaty',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_document_url' => 'field_document_url',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Treaty */
  $handler->display->display_options['fields']['field_treaty']['id'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['fields']['field_treaty']['field'] = 'field_treaty';
  $handler->display->display_options['fields']['field_treaty']['label'] = '';
  $handler->display->display_options['fields']['field_treaty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_treaty']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date of text */
  $handler->display->display_options['fields']['field_sorting_date']['id'] = 'field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['table'] = 'field_data_field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['field'] = 'field_sorting_date';
  $handler->display->display_options['fields']['field_sorting_date']['label'] = '';
  $handler->display->display_options['fields']['field_sorting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sorting_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Document URL */
  $handler->display->display_options['fields']['field_document_url']['id'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['table'] = 'field_data_field_document_url';
  $handler->display->display_options['fields']['field_document_url']['field'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['label'] = 'Document(s)';
  $handler->display->display_options['fields']['field_document_url']['alter']['text'] = '<a href="[field_document_url-url]">View</a>';
  $handler->display->display_options['fields']['field_document_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_document_url']['type'] = 'link_short';
  $handler->display->display_options['fields']['field_document_url']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of text (field_sorting_date) */
  $handler->display->display_options['sorts']['field_sorting_date_value']['id'] = 'field_sorting_date_value';
  $handler->display->display_options['sorts']['field_sorting_date_value']['table'] = 'field_data_field_sorting_date';
  $handler->display->display_options['sorts']['field_sorting_date_value']['field'] = 'field_sorting_date_value';
  $handler->display->display_options['sorts']['field_sorting_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_country) */
  $handler->display->display_options['arguments']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['arguments']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['arguments']['field_country_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_country_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_target_id']['summary_options']['items_per_page'] = '25';
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
    'action_plan' => 'action_plan',
  );
  $translatables['country_related_content'] = array(
    t('Master'),
    t('Default'),
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
    t('Content entity referenced from field_country'),
    t('Treaty'),
    t('All'),
    t('Focal points'),
    t('Country focal points'),
    t('Content entity referenced from field_treaty'),
    t('Legislation'),
    t('Body'),
    t('Search'),
    t('InforMEA Tags'),
    t('Literature'),
    t('Court decisions'),
    t('InforMEA tags'),
    t('Embed national reports'),
    t('National reports'),
    t('Document(s)'),
    t('<a href="[field_document_url-url]">View</a>'),
    t('Ramsar sites'),
    t('Sites'),
    t('List of [field_treaty] sites'),
    t('[title]'),
    t('<a href="[field_url]">[title]</a>'),
    t('WHC sites'),
    t('Embed action plans'),
    t('Action plans'),
  );
  $export['country_related_content'] = $view;

  return $export;
}
