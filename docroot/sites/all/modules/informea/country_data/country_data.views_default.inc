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
