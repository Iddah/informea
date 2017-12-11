<?php
/**
 * @file
 * geographic_region.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function geographic_region_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'region_page';
  $page->task = 'page';
  $page->admin_title = 'Geographic region page';
  $page->admin_description = '';
  $page->path = 'regions/%region/!topic';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'region' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'geographical_region' => 'geographical_region',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
    'topic' => array(
      'id' => 2,
      'identifier' => 'Topic: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'mea_topic' => 'mea_topic',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_region_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'region_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%region:name_field';
  $display->uuid = '97e0aee3-d430-4dfd-8c22-76c3a49e31cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_region_page__panel';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['region_page'] = $page;

  return $pages;

}
