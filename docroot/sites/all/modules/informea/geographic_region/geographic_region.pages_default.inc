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
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'region' => array(
      'id' => 1,
      'identifier' => 'Region: ID',
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 7,
          4 => 12,
          5 => 13,
          6 => 14,
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
        'class' => 'bg-dark-gray',
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
        'class' => 'text-center',
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
        'class' => '',
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
      7 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 8,
        ),
        'parent' => 'main',
        'class' => 'bg-light-gray',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 11,
        ),
        'class' => 'col-sm-6',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 10,
        ),
        'class' => 'col-sm-6',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content__bottom_left',
        ),
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content__bottom_right',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content__bottom_left' => array(
        'type' => 'region',
        'title' => 'Content: bottom left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content__bottom_right' => array(
        'type' => 'region',
        'title' => 'Content: bottom right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'courses',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'courses' => array(
        'type' => 'region',
        'title' => 'Courses',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'get_involved__title',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'get_involved__title' => array(
        'type' => 'region',
        'title' => 'Get involved: title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
        'hide_empty' => 0,
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 16,
          1 => 15,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      15 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '14',
        'children' => array(
          0 => 18,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      16 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '14',
        'children' => array(
          0 => 17,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      17 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'get_involved__left',
        ),
        'parent' => '16',
        'class' => '',
        'hide_empty' => 0,
      ),
      'get_involved__left' => array(
        'type' => 'region',
        'title' => 'Get involved: left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '17',
        'class' => '',
        'hide_empty' => 0,
      ),
      18 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'get_involved__right',
        ),
        'parent' => '15',
        'class' => '',
        'hide_empty' => 0,
      ),
      'get_involved__right' => array(
        'type' => 'region',
        'title' => 'Get involved: right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '18',
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
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%region:name_field';
  $display->uuid = '97e0aee3-d430-4dfd-8c22-76c3a49e31cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_region_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4252a8b2-a257-436e-b0a4-bee1f4537c94';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'geographic_region-region_switch_topic';
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
  $pane->uuid = '4252a8b2-a257-436e-b0a4-bee1f4537c94';
  $display->content['new-4252a8b2-a257-436e-b0a4-bee1f4537c94'] = $pane;
  $display->panels['center'][0] = 'new-4252a8b2-a257-436e-b0a4-bee1f4537c94';
  $pane = new stdClass();
  $pane->pid = 'new-b1b9da07-be2d-4050-beca-eca11fc3d634';
  $pane->panel = 'content__bottom_left';
  $pane->type = 'block';
  $pane->subtype = 'geographic_region-region_downloadable_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Downloadable Documents',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1b9da07-be2d-4050-beca-eca11fc3d634';
  $display->content['new-b1b9da07-be2d-4050-beca-eca11fc3d634'] = $pane;
  $display->panels['content__bottom_left'][0] = 'new-b1b9da07-be2d-4050-beca-eca11fc3d634';
  $pane = new stdClass();
  $pane->pid = 'new-035981b1-8365-4985-8021-10b1aa5913a2';
  $pane->panel = 'content__bottom_right';
  $pane->type = 'views';
  $pane->subtype = 'news_and_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '2',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_term_1.tid',
      1 => 'argument_term_2.tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '035981b1-8365-4985-8021-10b1aa5913a2';
  $display->content['new-035981b1-8365-4985-8021-10b1aa5913a2'] = $pane;
  $display->panels['content__bottom_right'][0] = 'new-035981b1-8365-4985-8021-10b1aa5913a2';
  $pane = new stdClass();
  $pane->pid = 'new-ff443f25-c59d-41b1-a677-38248aa98285';
  $pane->panel = 'content__bottom_right';
  $pane->type = 'views';
  $pane->subtype = 'contacts_hubs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '50',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_term_1.tid',
      1 => 'argument_term_2.tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ff443f25-c59d-41b1-a677-38248aa98285';
  $display->content['new-ff443f25-c59d-41b1-a677-38248aa98285'] = $pane;
  $display->panels['content__bottom_right'][1] = 'new-ff443f25-c59d-41b1-a677-38248aa98285';
  $pane = new stdClass();
  $pane->pid = 'new-0ab26761-785e-40a2-8aee-2dc972624b41';
  $pane->panel = 'content__left';
  $pane->type = 'views';
  $pane->subtype = 'regional_treaties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => 'argument_term_1.tid',
      1 => 'argument_term_2.tid',
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
  $pane->uuid = '0ab26761-785e-40a2-8aee-2dc972624b41';
  $display->content['new-0ab26761-785e-40a2-8aee-2dc972624b41'] = $pane;
  $display->panels['content__left'][0] = 'new-0ab26761-785e-40a2-8aee-2dc972624b41';
  $pane = new stdClass();
  $pane->pid = 'new-35a1fe01-4628-4865-a9bc-0a20450239d2';
  $pane->panel = 'content__right';
  $pane->type = 'views';
  $pane->subtype = 'regional_treaties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 1,
    'nodes_per_page' => '12',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = '35a1fe01-4628-4865-a9bc-0a20450239d2';
  $display->content['new-35a1fe01-4628-4865-a9bc-0a20450239d2'] = $pane;
  $display->panels['content__right'][0] = 'new-35a1fe01-4628-4865-a9bc-0a20450239d2';
  $pane = new stdClass();
  $pane->pid = 'new-4aef750d-ac5f-4f5c-8ff8-716d52c23fc3';
  $pane->panel = 'courses';
  $pane->type = 'views';
  $pane->subtype = 'learning_courses';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_term_1.tid',
      1 => 'argument_term_2.tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4aef750d-ac5f-4f5c-8ff8-716d52c23fc3';
  $display->content['new-4aef750d-ac5f-4f5c-8ff8-716d52c23fc3'] = $pane;
  $display->panels['courses'][0] = 'new-4aef750d-ac5f-4f5c-8ff8-716d52c23fc3';
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
    'body' => '<h2>Treaties and MEAs</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65913b9c-9240-4fcd-aae9-bac32e4d2255';
  $display->content['new-65913b9c-9240-4fcd-aae9-bac32e4d2255'] = $pane;
  $display->panels['title'][0] = 'new-65913b9c-9240-4fcd-aae9-bac32e4d2255';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['region_page'] = $page;

  return $pages;

}
