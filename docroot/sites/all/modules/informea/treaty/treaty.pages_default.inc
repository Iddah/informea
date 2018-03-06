<?php
/**
 * @file
 * treaty.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function treaty_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'treaties_listing_page';
  $page->task = 'page';
  $page->admin_title = 'Treaties listing page';
  $page->admin_description = '';
  $page->path = 'treaties/!topic';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
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
  $handler->name = 'page_treaties_listing_page__panel_context_a79a37f2-5e6a-4b1f-bb75-baeca5468f6f';
  $handler->task = 'page';
  $handler->subtask = 'treaties_listing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => ' topic-%topic:tid',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'topic-switcher-panel-container',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Topic switcher',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'title' => array(
        'type' => 'region',
        'title' => 'Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'text-center col-xs-12',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => 'informea-treaties-listings',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 5,
        ),
        'class' => 'col-sm-6',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => 'col-sm-6',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content__left',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content__right',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content__left' => array(
        'type' => 'region',
        'title' => 'Content: left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content__right' => array(
        'type' => 'region',
        'title' => 'Content: right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'content__left' => NULL,
      'content__right' => NULL,
      'content__bottom_left' => NULL,
      'content__bottom_right' => NULL,
      'courses' => NULL,
      'get_involved__title' => NULL,
      'get_involved__left' => NULL,
      'get_involved__right' => NULL,
      'contacts_hub' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Treaties and MEAs %topic:name_field';
  $display->uuid = '97e0aee3-d430-4dfd-8c22-76c3a49e31cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_treaties_listing_page__panel_context_a79a37f2-5e6a-4b1f-bb75-baeca5468f6f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-870be9b4-3add-4ca0-bd92-e3010c3031f5';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'treaty-treaty_switch_topic';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Browse by Environmental Topic',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '870be9b4-3add-4ca0-bd92-e3010c3031f5';
  $display->content['new-870be9b4-3add-4ca0-bd92-e3010c3031f5'] = $pane;
  $display->panels['center'][0] = 'new-870be9b4-3add-4ca0-bd92-e3010c3031f5';
  $pane = new stdClass();
  $pane->pid = 'new-cb698e1d-9eab-433d-9e75-b976ba9f0924';
  $pane->panel = 'content__left';
  $pane->type = 'views';
  $pane->subtype = 'regional_treaties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'context' => array(
      0 => 'argument_term_2.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb698e1d-9eab-433d-9e75-b976ba9f0924';
  $display->content['new-cb698e1d-9eab-433d-9e75-b976ba9f0924'] = $pane;
  $display->panels['content__left'][0] = 'new-cb698e1d-9eab-433d-9e75-b976ba9f0924';
  $pane = new stdClass();
  $pane->pid = 'new-9130a282-b3dd-412c-80ca-19b6acc13d75';
  $pane->panel = 'content__right';
  $pane->type = 'views';
  $pane->subtype = 'regional_treaties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'context' => array(
      0 => 'argument_term_2.tid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9130a282-b3dd-412c-80ca-19b6acc13d75';
  $display->content['new-9130a282-b3dd-412c-80ca-19b6acc13d75'] = $pane;
  $display->panels['content__right'][0] = 'new-9130a282-b3dd-412c-80ca-19b6acc13d75';
  $pane = new stdClass();
  $pane->pid = 'new-65913b9c-9240-4fcd-aae9-bac32e4d2255';
  $pane->panel = 'title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2 class="topic-title"><strong class="topic-title-all">All </strong>Treaties and MEAs <span>in %topic:name</span></h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'regional-page-panels-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65913b9c-9240-4fcd-aae9-bac32e4d2255';
  $display->content['new-65913b9c-9240-4fcd-aae9-bac32e4d2255'] = $pane;
  $display->panels['title'][0] = 'new-65913b9c-9240-4fcd-aae9-bac32e4d2255';
  $pane = new stdClass();
  $pane->pid = 'new-af9cf5ba-0117-4e0d-9495-0bf7dfcaecf0';
  $pane->panel = 'title';
  $pane->type = 'block';
  $pane->subtype = 'block-18';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af9cf5ba-0117-4e0d-9495-0bf7dfcaecf0';
  $display->content['new-af9cf5ba-0117-4e0d-9495-0bf7dfcaecf0'] = $pane;
  $display->panels['title'][1] = 'new-af9cf5ba-0117-4e0d-9495-0bf7dfcaecf0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['treaties_listing_page'] = $page;

  return $pages;

}