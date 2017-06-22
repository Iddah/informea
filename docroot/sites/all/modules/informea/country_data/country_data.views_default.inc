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
  $view->name = 'ws_member_parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WS member parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_treaty_target_id']['id'] = 'field_treaty_target_id';
  $handler->display->display_options['relationships']['field_treaty_target_id']['table'] = 'field_data_field_treaty';
  $handler->display->display_options['relationships']['field_treaty_target_id']['field'] = 'field_treaty_target_id';
  /* Field: Content: OData identifier */
  $handler->display->display_options['fields']['field_odata_identifier']['id'] = 'field_odata_identifier';
  $handler->display->display_options['fields']['field_odata_identifier']['table'] = 'field_data_field_odata_identifier';
  $handler->display->display_options['fields']['field_odata_identifier']['field'] = 'field_odata_identifier';
  $handler->display->display_options['fields']['field_odata_identifier']['relationship'] = 'field_treaty_target_id';
  $handler->display->display_options['fields']['field_odata_identifier']['label'] = 'treaty';
  /* Field: Content: Date 1 */
  $handler->display->display_options['fields']['field_party_date_1']['id'] = 'field_party_date_1';
  $handler->display->display_options['fields']['field_party_date_1']['table'] = 'field_data_field_party_date_1';
  $handler->display->display_options['fields']['field_party_date_1']['field'] = 'field_party_date_1';
  $handler->display->display_options['fields']['field_party_date_1']['label'] = 'date_1';
  $handler->display->display_options['fields']['field_party_date_1']['alter']['text'] = '[field_party_date_1-value]';
  $handler->display->display_options['fields']['field_party_date_1']['settings'] = array(
    'format_type' => 'machine_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date 2 */
  $handler->display->display_options['fields']['field_party_date_2']['id'] = 'field_party_date_2';
  $handler->display->display_options['fields']['field_party_date_2']['table'] = 'field_data_field_party_date_2';
  $handler->display->display_options['fields']['field_party_date_2']['field'] = 'field_party_date_2';
  $handler->display->display_options['fields']['field_party_date_2']['label'] = 'date_2';
  $handler->display->display_options['fields']['field_party_date_2']['alter']['text'] = '[field_party_date_2-value]';
  $handler->display->display_options['fields']['field_party_date_2']['settings'] = array(
    'format_type' => 'machine_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: ISO alpha-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = 'country_iso_2';
  /* Field: Content: ISO alpha-3 code */
  $handler->display->display_options['fields']['field_country_iso3']['id'] = 'field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['table'] = 'field_data_field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['field'] = 'field_country_iso3';
  $handler->display->display_options['fields']['field_country_iso3']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['fields']['field_country_iso3']['label'] = 'country_iso_3';
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
    'member_party' => 'member_party',
  );
  /* Filter criterion: Content: ISO alpha-2 code (field_country_iso2) */
  $handler->display->display_options['filters']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['filters']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['filters']['field_country_iso2_value']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['filters']['field_country_iso2_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['operator_id'] = 'field_country_iso2_value_op';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['label'] = 'iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['operator'] = 'field_country_iso2_value_op';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['identifier'] = 'iso2';
  $handler->display->display_options['filters']['field_country_iso2_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: ISO alpha-3 code (field_country_iso3) */
  $handler->display->display_options['filters']['field_country_iso3_value']['id'] = 'field_country_iso3_value';
  $handler->display->display_options['filters']['field_country_iso3_value']['table'] = 'field_data_field_country_iso3';
  $handler->display->display_options['filters']['field_country_iso3_value']['field'] = 'field_country_iso3_value';
  $handler->display->display_options['filters']['field_country_iso3_value']['relationship'] = 'field_country_target_id';
  $handler->display->display_options['filters']['field_country_iso3_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_iso3_value']['expose']['operator_id'] = 'field_country_iso3_value_op';
  $handler->display->display_options['filters']['field_country_iso3_value']['expose']['label'] = 'iso3';
  $handler->display->display_options['filters']['field_country_iso3_value']['expose']['operator'] = 'field_country_iso3_value_op';
  $handler->display->display_options['filters']['field_country_iso3_value']['expose']['identifier'] = 'iso3';
  $handler->display->display_options['filters']['field_country_iso3_value']['expose']['remember_roles'] = array(
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

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'parties';
  $translatables['ws_member_parties'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_country'),
    t('Content entity referenced from field_treaty'),
    t('treaty'),
    t('date_1'),
    t('[field_party_date_1-value]'),
    t('date_2'),
    t('[field_party_date_2-value]'),
    t('country_iso_2'),
    t('country_iso_3'),
    t('iso2'),
    t('iso3'),
    t('Services'),
  );
  $export['ws_member_parties'] = $view;

  return $export;
}
