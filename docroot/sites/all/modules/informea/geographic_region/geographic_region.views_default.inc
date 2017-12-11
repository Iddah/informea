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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Region (field_region) */
  $handler->display->display_options['arguments']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_region_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: MEA topic (field_mea_topic) */
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

  /* Display: Regional treaties */
  $handler = $view->new_display('block', 'Regional treaties', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';

  /* Display: Global treaties */
  $handler = $view->new_display('block', 'Global treaties', 'block_1');
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
  /* Contextual filter: Content: MEA topic (field_mea_topic) */
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
    t('[field_official_name] ([title])'),
    t('Tags'),
    t('All'),
    t('Regional treaties'),
  );
  $export['regional_treaties'] = $view;

  return $export;
}
