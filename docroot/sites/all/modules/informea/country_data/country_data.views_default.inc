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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_treaty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_treaty']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_treaty']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_treaty']['bypass_access'] = 0;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="contact-link>Save In Libarry</div>';
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
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="contact-link>Related Contacts</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'countries/%/contacts-hub';
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
    t('<div class="contact-link>Save In Libarry</div>'),
    t('Full Contact Profile'),
    t('<div class="contact-link>Related Contacts</div>'),
    t('Page'),
  );
  $export['contacts_hub'] = $view;

  return $export;
}
