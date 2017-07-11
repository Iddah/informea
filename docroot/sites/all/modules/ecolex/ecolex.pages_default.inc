<?php
/**
 * @file
 * ecolex.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ecolex_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_42ee2088-b842-4683-8357-7d2b9b636700';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Bilateral treaties',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node_view_panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:treaty:field_data_source',
          'settings' => array(
            'field_data_source' => array(
              'und' => array(
                0 => array(
                  'tid' => '2767',
                ),
                1 => array(
                  'tid' => '3689',
                ),
              ),
            ),
            'field_data_source_tid' => array(
              0 => '2767',
              1 => '3689',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
          3 => 3,
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
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'details',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'references',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'details' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'details',
        'hide_empty' => 0,
      ),
      'text' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'text',
        'hide_empty' => 0,
      ),
      'references' => array(
        'type' => 'region',
        'title' => 'References',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'references',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'details' => NULL,
      'text' => NULL,
      'references' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '178b755b-b658-42bf-b344-ce37a38acac0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_42ee2088-b842-4683-8357-7d2b9b636700';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-33fe3ceb-6047-4654-8220-a2957a4f0e75';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_abstract';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '33fe3ceb-6047-4654-8220-a2957a4f0e75';
  $display->content['new-33fe3ceb-6047-4654-8220-a2957a4f0e75'] = $pane;
  $display->panels['center'][0] = 'new-33fe3ceb-6047-4654-8220-a2957a4f0e75';
  $pane = new stdClass();
  $pane->pid = 'new-d446c4a8-79a8-4682-b9cc-49b94a368f00';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd446c4a8-79a8-4682-b9cc-49b94a368f00';
  $display->content['new-d446c4a8-79a8-4682-b9cc-49b94a368f00'] = $pane;
  $display->panels['center'][1] = 'new-d446c4a8-79a8-4682-b9cc-49b94a368f00';
  $pane = new stdClass();
  $pane->pid = 'new-58403d2f-c841-4d3a-95e3-00ccdea5e1b8';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_type_of_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58403d2f-c841-4d3a-95e3-00ccdea5e1b8';
  $display->content['new-58403d2f-c841-4d3a-95e3-00ccdea5e1b8'] = $pane;
  $display->panels['center'][2] = 'new-58403d2f-c841-4d3a-95e3-00ccdea5e1b8';
  $pane = new stdClass();
  $pane->pid = 'new-371aa852-86ee-4f15-a4f6-fe7a5ceeccbb';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_field_of_application';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '371aa852-86ee-4f15-a4f6-fe7a5ceeccbb';
  $display->content['new-371aa852-86ee-4f15-a4f6-fe7a5ceeccbb'] = $pane;
  $display->panels['center'][3] = 'new-371aa852-86ee-4f15-a4f6-fe7a5ceeccbb';
  $pane = new stdClass();
  $pane->pid = 'new-b99ed350-b78f-414d-bd0a-0549dcc74f4c';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_date_of_entry';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b99ed350-b78f-414d-bd0a-0549dcc74f4c';
  $display->content['new-b99ed350-b78f-414d-bd0a-0549dcc74f4c'] = $pane;
  $display->panels['center'][4] = 'new-b99ed350-b78f-414d-bd0a-0549dcc74f4c';
  $pane = new stdClass();
  $pane->pid = 'new-1073dbd7-707b-4615-b8d1-b2e5a3a528b9';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_official_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '1073dbd7-707b-4615-b8d1-b2e5a3a528b9';
  $display->content['new-1073dbd7-707b-4615-b8d1-b2e5a3a528b9'] = $pane;
  $display->panels['details'][0] = 'new-1073dbd7-707b-4615-b8d1-b2e5a3a528b9';
  $pane = new stdClass();
  $pane->pid = 'new-298dafce-4f90-4112-9322-40aa017d0523';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_place_of_adoption';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '298dafce-4f90-4112-9322-40aa017d0523';
  $display->content['new-298dafce-4f90-4112-9322-40aa017d0523'] = $pane;
  $display->panels['details'][1] = 'new-298dafce-4f90-4112-9322-40aa017d0523';
  $pane = new stdClass();
  $pane->pid = 'new-c855a6bd-7478-4d67-96d4-6ed66c34aeb9';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_entry_into_force';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c855a6bd-7478-4d67-96d4-6ed66c34aeb9';
  $display->content['new-c855a6bd-7478-4d67-96d4-6ed66c34aeb9'] = $pane;
  $display->panels['details'][2] = 'new-c855a6bd-7478-4d67-96d4-6ed66c34aeb9';
  $pane = new stdClass();
  $pane->pid = 'new-36108a5a-6d04-4c86-9603-99d5b81ec027';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_informea_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '36108a5a-6d04-4c86-9603-99d5b81ec027';
  $display->content['new-36108a5a-6d04-4c86-9603-99d5b81ec027'] = $pane;
  $display->panels['details'][3] = 'new-36108a5a-6d04-4c86-9603-99d5b81ec027';
  $pane = new stdClass();
  $pane->pid = 'new-0c4621f1-2e01-4ca4-9571-09f37ce5288d';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0c4621f1-2e01-4ca4-9571-09f37ce5288d';
  $display->content['new-0c4621f1-2e01-4ca4-9571-09f37ce5288d'] = $pane;
  $display->panels['details'][4] = 'new-0c4621f1-2e01-4ca4-9571-09f37ce5288d';
  $pane = new stdClass();
  $pane->pid = 'new-9287edcb-fdf8-4df4-a8d0-b549dcd02fd2';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_region';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9287edcb-fdf8-4df4-a8d0-b549dcd02fd2';
  $display->content['new-9287edcb-fdf8-4df4-a8d0-b549dcd02fd2'] = $pane;
  $display->panels['details'][5] = 'new-9287edcb-fdf8-4df4-a8d0-b549dcd02fd2';
  $pane = new stdClass();
  $pane->pid = 'new-368e9a7c-4879-4cd9-9308-9f0154cd940d';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '368e9a7c-4879-4cd9-9308-9f0154cd940d';
  $display->content['new-368e9a7c-4879-4cd9-9308-9f0154cd940d'] = $pane;
  $display->panels['details'][6] = 'new-368e9a7c-4879-4cd9-9308-9f0154cd940d';
  $pane = new stdClass();
  $pane->pid = 'new-e5437999-5f57-47c6-9413-6ecf70144a3e';
  $pane->panel = 'references';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_treaty_article';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'e5437999-5f57-47c6-9413-6ecf70144a3e';
  $display->content['new-e5437999-5f57-47c6-9413-6ecf70144a3e'] = $pane;
  $display->panels['references'][0] = 'new-e5437999-5f57-47c6-9413-6ecf70144a3e';
  $pane = new stdClass();
  $pane->pid = 'new-34274356-fa5f-4623-a693-9fbba155c832';
  $pane->panel = 'references';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_treaty_article_paragraph';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '34274356-fa5f-4623-a693-9fbba155c832';
  $display->content['new-34274356-fa5f-4623-a693-9fbba155c832'] = $pane;
  $display->panels['references'][1] = 'new-34274356-fa5f-4623-a693-9fbba155c832';
  $pane = new stdClass();
  $pane->pid = 'new-468528ce-3a36-44a2-b2da-3a169da48c5f';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_country';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '468528ce-3a36-44a2-b2da-3a169da48c5f';
  $display->content['new-468528ce-3a36-44a2-b2da-3a169da48c5f'] = $pane;
  $display->panels['text'][0] = 'new-468528ce-3a36-44a2-b2da-3a169da48c5f';
  $pane = new stdClass();
  $pane->pid = 'new-b6f12ed1-7564-4adc-8b5e-da3a44aacbf2';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b6f12ed1-7564-4adc-8b5e-da3a44aacbf2';
  $display->content['new-b6f12ed1-7564-4adc-8b5e-da3a44aacbf2'] = $pane;
  $display->panels['text'][1] = 'new-b6f12ed1-7564-4adc-8b5e-da3a44aacbf2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_42ee2088-b842-4683-8357-7d2b9b636700'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5f52b64b-e59a-4f70-9eec-2226d891d971';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Court decisions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node_view_panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'court_decisions' => 'court_decisions',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
          3 => 3,
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
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'references',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'text' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'details',
        'hide_empty' => 0,
      ),
      'references' => array(
        'type' => 'region',
        'title' => 'References',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'references',
        'hide_empty' => 0,
      ),
      'text_' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'text',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'text' => NULL,
      'references' => NULL,
      'text_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '58ee912b-5048-4568-ac1c-4140d13ad4ba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_5f52b64b-e59a-4f70-9eec-2226d891d971';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebd1e6d3-8b66-44f3-913a-86059012dca9';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'ebd1e6d3-8b66-44f3-913a-86059012dca9';
  $display->content['new-ebd1e6d3-8b66-44f3-913a-86059012dca9'] = $pane;
  $display->panels['center'][0] = 'new-ebd1e6d3-8b66-44f3-913a-86059012dca9';
  $pane = new stdClass();
  $pane->pid = 'new-30deef70-dbf7-4dee-9c9f-006b65083773';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_country';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '30deef70-dbf7-4dee-9c9f-006b65083773';
  $display->content['new-30deef70-dbf7-4dee-9c9f-006b65083773'] = $pane;
  $display->panels['center'][1] = 'new-30deef70-dbf7-4dee-9c9f-006b65083773';
  $pane = new stdClass();
  $pane->pid = 'new-a0af4dc8-b20d-45bb-b173-18f7e801003d';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_type_of_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0af4dc8-b20d-45bb-b173-18f7e801003d';
  $display->content['new-a0af4dc8-b20d-45bb-b173-18f7e801003d'] = $pane;
  $display->panels['center'][2] = 'new-a0af4dc8-b20d-45bb-b173-18f7e801003d';
  $pane = new stdClass();
  $pane->pid = 'new-9fa2d80c-016a-4429-a786-f109d99b0686';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sorting_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9fa2d80c-016a-4429-a786-f109d99b0686';
  $display->content['new-9fa2d80c-016a-4429-a786-f109d99b0686'] = $pane;
  $display->panels['center'][3] = 'new-9fa2d80c-016a-4429-a786-f109d99b0686';
  $pane = new stdClass();
  $pane->pid = 'new-db2b458f-2828-4967-8791-c3d7814f6236';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_data_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'db2b458f-2828-4967-8791-c3d7814f6236';
  $display->content['new-db2b458f-2828-4967-8791-c3d7814f6236'] = $pane;
  $display->panels['center'][4] = 'new-db2b458f-2828-4967-8791-c3d7814f6236';
  $pane = new stdClass();
  $pane->pid = 'new-6e5fa969-8a4f-45be-a349-9b166cac3806';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '6e5fa969-8a4f-45be-a349-9b166cac3806';
  $display->content['new-6e5fa969-8a4f-45be-a349-9b166cac3806'] = $pane;
  $display->panels['text'][0] = 'new-6e5fa969-8a4f-45be-a349-9b166cac3806';
  $pane = new stdClass();
  $pane->pid = 'new-27c9f3a6-9504-48c7-8d47-acbd0ccd6342';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_city';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '27c9f3a6-9504-48c7-8d47-acbd0ccd6342';
  $display->content['new-27c9f3a6-9504-48c7-8d47-acbd0ccd6342'] = $pane;
  $display->panels['text'][1] = 'new-27c9f3a6-9504-48c7-8d47-acbd0ccd6342';
  $pane = new stdClass();
  $pane->pid = 'new-51d52daf-065d-46f1-b466-954c3f1c6607';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_justices';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '51d52daf-065d-46f1-b466-954c3f1c6607';
  $display->content['new-51d52daf-065d-46f1-b466-954c3f1c6607'] = $pane;
  $display->panels['text'][2] = 'new-51d52daf-065d-46f1-b466-954c3f1c6607';
  $pane = new stdClass();
  $pane->pid = 'new-e5f392ec-1c0e-4e8c-9f4e-caccf40cb77c';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_reference_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e5f392ec-1c0e-4e8c-9f4e-caccf40cb77c';
  $display->content['new-e5f392ec-1c0e-4e8c-9f4e-caccf40cb77c'] = $pane;
  $display->panels['text'][3] = 'new-e5f392ec-1c0e-4e8c-9f4e-caccf40cb77c';
  $pane = new stdClass();
  $pane->pid = 'new-dd663dc7-9f00-4bf0-b1d0-da03f00e0490';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_informea_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'textformatter_type' => 'ul',
      'textformatter_class' => 'textformatter-list',
      'textformatter_comma_full_stop' => 0,
      'textformatter_comma_and' => 0,
      'textformatter_comma_tag' => 'div',
      'textformatter_term_plain' => 0,
      'textformatter_comma_override' => 0,
      'textformatter_separator_custom' => '',
      'textformatter_separator_custom_tag' => 'span',
      'textformatter_separator_custom_class' => 'textformatter-separator',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'dd663dc7-9f00-4bf0-b1d0-da03f00e0490';
  $display->content['new-dd663dc7-9f00-4bf0-b1d0-da03f00e0490'] = $pane;
  $display->panels['text'][4] = 'new-dd663dc7-9f00-4bf0-b1d0-da03f00e0490';
  $pane = new stdClass();
  $pane->pid = 'new-2680e910-3828-45ca-a867-35e393b669d0';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2680e910-3828-45ca-a867-35e393b669d0';
  $display->content['new-2680e910-3828-45ca-a867-35e393b669d0'] = $pane;
  $display->panels['text'][5] = 'new-2680e910-3828-45ca-a867-35e393b669d0';
  $pane = new stdClass();
  $pane->pid = 'new-f5ec9255-5049-464e-b54c-f7c1db788a0b';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_url',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f5ec9255-5049-464e-b54c-f7c1db788a0b';
  $display->content['new-f5ec9255-5049-464e-b54c-f7c1db788a0b'] = $pane;
  $display->panels['text'][6] = 'new-f5ec9255-5049-464e-b54c-f7c1db788a0b';
  $pane = new stdClass();
  $pane->pid = 'new-15ba12cd-60cd-40ee-9bb1-9e064f787e98';
  $pane->panel = 'text_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_abstract';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '15ba12cd-60cd-40ee-9bb1-9e064f787e98';
  $display->content['new-15ba12cd-60cd-40ee-9bb1-9e064f787e98'] = $pane;
  $display->panels['text_'][0] = 'new-15ba12cd-60cd-40ee-9bb1-9e064f787e98';
  $pane = new stdClass();
  $pane->pid = 'new-66a6a7fc-123c-46a7-b816-7f81c1cc9ad6';
  $pane->panel = 'text_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_available_in';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66a6a7fc-123c-46a7-b816-7f81c1cc9ad6';
  $display->content['new-66a6a7fc-123c-46a7-b816-7f81c1cc9ad6'] = $pane;
  $display->panels['text_'][1] = 'new-66a6a7fc-123c-46a7-b816-7f81c1cc9ad6';
  $pane = new stdClass();
  $pane->pid = 'new-8bd713a6-f355-4a4f-b7ba-f38dff7dda1b';
  $pane->panel = 'text_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_files';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'file_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'data_element_key' => '',
      'skip_safe' => 0,
      'skip_empty_values' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8bd713a6-f355-4a4f-b7ba-f38dff7dda1b';
  $display->content['new-8bd713a6-f355-4a4f-b7ba-f38dff7dda1b'] = $pane;
  $display->panels['text_'][2] = 'new-8bd713a6-f355-4a4f-b7ba-f38dff7dda1b';
  $pane = new stdClass();
  $pane->pid = 'new-2993323a-a4cd-4fed-b5da-e839b415d5d0';
  $pane->panel = 'text_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_related_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_url',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2993323a-a4cd-4fed-b5da-e839b415d5d0';
  $display->content['new-2993323a-a4cd-4fed-b5da-e839b415d5d0'] = $pane;
  $display->panels['text_'][3] = 'new-2993323a-a4cd-4fed-b5da-e839b415d5d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5f52b64b-e59a-4f70-9eec-2226d891d971'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a9a3b862-96fa-4d96-9055-b8b137124495';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Literature',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node_view_panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'literature' => 'literature',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
          3 => 3,
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
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'details',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'references',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'details' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'details',
        'hide_empty' => 0,
      ),
      'text' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'text',
        'hide_empty' => 0,
      ),
      'references' => array(
        'type' => 'region',
        'title' => 'References',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'references',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'details' => NULL,
      'text' => NULL,
      'references' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b118b4c-a318-496b-b128-48ccce307645';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a9a3b862-96fa-4d96-9055-b8b137124495';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5eec53c0-b7fc-42dd-bf2e-d71520765bcd';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5eec53c0-b7fc-42dd-bf2e-d71520765bcd';
  $display->content['new-5eec53c0-b7fc-42dd-bf2e-d71520765bcd'] = $pane;
  $display->panels['center'][0] = 'new-5eec53c0-b7fc-42dd-bf2e-d71520765bcd';
  $pane = new stdClass();
  $pane->pid = 'new-fc75825a-c6d8-483a-a03f-eec7f836013b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fc75825a-c6d8-483a-a03f-eec7f836013b';
  $display->content['new-fc75825a-c6d8-483a-a03f-eec7f836013b'] = $pane;
  $display->panels['center'][1] = 'new-fc75825a-c6d8-483a-a03f-eec7f836013b';
  $pane = new stdClass();
  $pane->pid = 'new-75d35fa9-3926-4f8f-85f6-68f2bb527514';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_date_of_entry';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '75d35fa9-3926-4f8f-85f6-68f2bb527514';
  $display->content['new-75d35fa9-3926-4f8f-85f6-68f2bb527514'] = $pane;
  $display->panels['center'][2] = 'new-75d35fa9-3926-4f8f-85f6-68f2bb527514';
  $pane = new stdClass();
  $pane->pid = 'new-ec080201-5b06-44b9-a870-b3bbfedf5a76';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ec080201-5b06-44b9-a870-b3bbfedf5a76';
  $display->content['new-ec080201-5b06-44b9-a870-b3bbfedf5a76'] = $pane;
  $display->panels['center'][3] = 'new-ec080201-5b06-44b9-a870-b3bbfedf5a76';
  $pane = new stdClass();
  $pane->pid = 'new-39c3a9bb-d57d-41cd-b389-1dd74e8a4cb2';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publisher';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '39c3a9bb-d57d-41cd-b389-1dd74e8a4cb2';
  $display->content['new-39c3a9bb-d57d-41cd-b389-1dd74e8a4cb2'] = $pane;
  $display->panels['details'][0] = 'new-39c3a9bb-d57d-41cd-b389-1dd74e8a4cb2';
  $pane = new stdClass();
  $pane->pid = 'new-dbd6e0bc-ddb9-41c5-b509-1df35fa4a56e';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publication_place';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dbd6e0bc-ddb9-41c5-b509-1df35fa4a56e';
  $display->content['new-dbd6e0bc-ddb9-41c5-b509-1df35fa4a56e'] = $pane;
  $display->panels['details'][1] = 'new-dbd6e0bc-ddb9-41c5-b509-1df35fa4a56e';
  $pane = new stdClass();
  $pane->pid = 'new-0435e8dd-a8f8-46ad-9b5e-a4d7ee580573';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_collation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0435e8dd-a8f8-46ad-9b5e-a4d7ee580573';
  $display->content['new-0435e8dd-a8f8-46ad-9b5e-a4d7ee580573'] = $pane;
  $display->panels['details'][2] = 'new-0435e8dd-a8f8-46ad-9b5e-a4d7ee580573';
  $pane = new stdClass();
  $pane->pid = 'new-bf86f2a1-95de-4581-9766-30ea135dc9d8';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_literature_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bf86f2a1-95de-4581-9766-30ea135dc9d8';
  $display->content['new-bf86f2a1-95de-4581-9766-30ea135dc9d8'] = $pane;
  $display->panels['details'][3] = 'new-bf86f2a1-95de-4581-9766-30ea135dc9d8';
  $pane = new stdClass();
  $pane->pid = 'new-50e94b13-ce97-421f-81a9-12e9b46014e2';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_geographical_scope';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '50e94b13-ce97-421f-81a9-12e9b46014e2';
  $display->content['new-50e94b13-ce97-421f-81a9-12e9b46014e2'] = $pane;
  $display->panels['text'][0] = 'new-50e94b13-ce97-421f-81a9-12e9b46014e2';
  $pane = new stdClass();
  $pane->pid = 'new-b30ada89-600b-4e56-a82c-e77813acef65';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_country';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b30ada89-600b-4e56-a82c-e77813acef65';
  $display->content['new-b30ada89-600b-4e56-a82c-e77813acef65'] = $pane;
  $display->panels['text'][1] = 'new-b30ada89-600b-4e56-a82c-e77813acef65';
  $pane = new stdClass();
  $pane->pid = 'new-ab258297-5bbc-4c22-93f8-57a180d4b2a1';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_informea_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ab258297-5bbc-4c22-93f8-57a180d4b2a1';
  $display->content['new-ab258297-5bbc-4c22-93f8-57a180d4b2a1'] = $pane;
  $display->panels['text'][2] = 'new-ab258297-5bbc-4c22-93f8-57a180d4b2a1';
  $pane = new stdClass();
  $pane->pid = 'new-c4113396-b3bd-4363-b497-35db4e5036e4';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c4113396-b3bd-4363-b497-35db4e5036e4';
  $display->content['new-c4113396-b3bd-4363-b497-35db4e5036e4'] = $pane;
  $display->panels['text'][3] = 'new-c4113396-b3bd-4363-b497-35db4e5036e4';
  $pane = new stdClass();
  $pane->pid = 'new-b8c8002a-ce67-4cd3-95e4-24bdfb0be22a';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_url',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b8c8002a-ce67-4cd3-95e4-24bdfb0be22a';
  $display->content['new-b8c8002a-ce67-4cd3-95e4-24bdfb0be22a'] = $pane;
  $display->panels['text'][4] = 'new-b8c8002a-ce67-4cd3-95e4-24bdfb0be22a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a9a3b862-96fa-4d96-9055-b8b137124495'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_e820c3a0-7996-4ef5-8a6a-8cebb1ef80ac';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Legislation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'node_view_panel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'legislation' => 'legislation',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
          3 => 3,
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
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'references',
        ),
        'parent' => 'main',
        'class' => 'References',
        'hide_empty' => 0,
      ),
      'references' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'text',
        'hide_empty' => 0,
      ),
      'text' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'details',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'ref',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'ref' => array(
        'type' => 'region',
        'title' => 'References',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'references',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'references' => NULL,
      'text' => NULL,
      'ref' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c88aacaf-5ee5-4a88-942b-c37bea340bac';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_e820c3a0-7996-4ef5-8a6a-8cebb1ef80ac';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-361abfd4-84d4-466b-a183-b676fb9da22e';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '361abfd4-84d4-466b-a183-b676fb9da22e';
  $display->content['new-361abfd4-84d4-466b-a183-b676fb9da22e'] = $pane;
  $display->panels['center'][0] = 'new-361abfd4-84d4-466b-a183-b676fb9da22e';
  $pane = new stdClass();
  $pane->pid = 'new-cd834282-09a9-425f-9c13-ec97e46a3b96';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_abstract';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cd834282-09a9-425f-9c13-ec97e46a3b96';
  $display->content['new-cd834282-09a9-425f-9c13-ec97e46a3b96'] = $pane;
  $display->panels['center'][1] = 'new-cd834282-09a9-425f-9c13-ec97e46a3b96';
  $pane = new stdClass();
  $pane->pid = 'new-82962fe7-b781-4593-a7e2-0155a4aee03f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '82962fe7-b781-4593-a7e2-0155a4aee03f';
  $display->content['new-82962fe7-b781-4593-a7e2-0155a4aee03f'] = $pane;
  $display->panels['center'][2] = 'new-82962fe7-b781-4593-a7e2-0155a4aee03f';
  $pane = new stdClass();
  $pane->pid = 'new-ff2edbcc-b523-429f-b5fc-18e1a5810c84';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_country';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ff2edbcc-b523-429f-b5fc-18e1a5810c84';
  $display->content['new-ff2edbcc-b523-429f-b5fc-18e1a5810c84'] = $pane;
  $display->panels['center'][3] = 'new-ff2edbcc-b523-429f-b5fc-18e1a5810c84';
  $pane = new stdClass();
  $pane->pid = 'new-a9df161c-b2d9-4918-bc13-f0e1fbb330e0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_type_of_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a9df161c-b2d9-4918-bc13-f0e1fbb330e0';
  $display->content['new-a9df161c-b2d9-4918-bc13-f0e1fbb330e0'] = $pane;
  $display->panels['center'][4] = 'new-a9df161c-b2d9-4918-bc13-f0e1fbb330e0';
  $pane = new stdClass();
  $pane->pid = 'new-4b5c0118-e01b-496b-adf9-f350ba8b3c26';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sorting_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_YEAR',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4b5c0118-e01b-496b-adf9-f350ba8b3c26';
  $display->content['new-4b5c0118-e01b-496b-adf9-f350ba8b3c26'] = $pane;
  $display->panels['center'][5] = 'new-4b5c0118-e01b-496b-adf9-f350ba8b3c26';
  $pane = new stdClass();
  $pane->pid = 'new-aaa35515-2cba-4e8e-8b85-7b98cbcbb2d2';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_data_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'aaa35515-2cba-4e8e-8b85-7b98cbcbb2d2';
  $display->content['new-aaa35515-2cba-4e8e-8b85-7b98cbcbb2d2'] = $pane;
  $display->panels['center'][6] = 'new-aaa35515-2cba-4e8e-8b85-7b98cbcbb2d2';
  $pane = new stdClass();
  $pane->pid = 'new-1bf8f877-9543-472d-8eb8-ae95f773dd87';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_title_abbreviation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => '_none',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '1bf8f877-9543-472d-8eb8-ae95f773dd87';
  $display->content['new-1bf8f877-9543-472d-8eb8-ae95f773dd87'] = $pane;
  $display->panels['center'][7] = 'new-1bf8f877-9543-472d-8eb8-ae95f773dd87';
  $pane = new stdClass();
  $pane->pid = 'new-d0700714-e311-43d3-8750-26422dc1ec0d';
  $pane->panel = 'ref';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'References - Legislation',
    'title' => 'References - Legislation',
    'body' => '',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd0700714-e311-43d3-8750-26422dc1ec0d';
  $display->content['new-d0700714-e311-43d3-8750-26422dc1ec0d'] = $pane;
  $display->panels['ref'][0] = 'new-d0700714-e311-43d3-8750-26422dc1ec0d';
  $pane = new stdClass();
  $pane->pid = 'new-8239b050-0f90-4512-ac38-6b8b0eeb68ab';
  $pane->panel = 'ref';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_repeals';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8239b050-0f90-4512-ac38-6b8b0eeb68ab';
  $display->content['new-8239b050-0f90-4512-ac38-6b8b0eeb68ab'] = $pane;
  $display->panels['ref'][1] = 'new-8239b050-0f90-4512-ac38-6b8b0eeb68ab';
  $pane = new stdClass();
  $pane->pid = 'new-7a3df8a7-ad05-46bc-a2e8-76ec5664a725';
  $pane->panel = 'ref';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_implements';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'link' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7a3df8a7-ad05-46bc-a2e8-76ec5664a725';
  $display->content['new-7a3df8a7-ad05-46bc-a2e8-76ec5664a725'] = $pane;
  $display->panels['ref'][2] = 'new-7a3df8a7-ad05-46bc-a2e8-76ec5664a725';
  $pane = new stdClass();
  $pane->pid = 'new-ab2edeff-4761-424d-a810-ab5d5c33da0f';
  $pane->panel = 'ref';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_amends';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
      'view_mode' => 'default',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ab2edeff-4761-424d-a810-ab5d5c33da0f';
  $display->content['new-ab2edeff-4761-424d-a810-ab5d5c33da0f'] = $pane;
  $display->panels['ref'][3] = 'new-ab2edeff-4761-424d-a810-ab5d5c33da0f';
  $pane = new stdClass();
  $pane->pid = 'new-a2b24845-43af-4b11-891d-f4ff4989d125';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_informea_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'a2b24845-43af-4b11-891d-f4ff4989d125';
  $display->content['new-a2b24845-43af-4b11-891d-f4ff4989d125'] = $pane;
  $display->panels['text'][0] = 'new-a2b24845-43af-4b11-891d-f4ff4989d125';
  $pane = new stdClass();
  $pane->pid = 'new-d65f7b09-82fa-4092-98de-e61d330c941d';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_region';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'textformatter_type' => 'ul',
      'textformatter_class' => 'textformatter-list',
      'textformatter_comma_full_stop' => 0,
      'textformatter_comma_and' => 0,
      'textformatter_comma_tag' => 'div',
      'textformatter_term_plain' => 0,
      'textformatter_comma_override' => 0,
      'textformatter_separator_custom' => '',
      'textformatter_separator_custom_tag' => 'span',
      'textformatter_separator_custom_class' => 'textformatter-separator',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd65f7b09-82fa-4092-98de-e61d330c941d';
  $display->content['new-d65f7b09-82fa-4092-98de-e61d330c941d'] = $pane;
  $display->panels['text'][1] = 'new-d65f7b09-82fa-4092-98de-e61d330c941d';
  $pane = new stdClass();
  $pane->pid = 'new-d616567f-2664-4917-8ec6-d939a7973428';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ecolex_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd616567f-2664-4917-8ec6-d939a7973428';
  $display->content['new-d616567f-2664-4917-8ec6-d939a7973428'] = $pane;
  $display->panels['text'][2] = 'new-d616567f-2664-4917-8ec6-d939a7973428';
  $pane = new stdClass();
  $pane->pid = 'new-85c8770a-62df-4411-9476-b2b2e313b239';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_faolex_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '85c8770a-62df-4411-9476-b2b2e313b239';
  $display->content['new-85c8770a-62df-4411-9476-b2b2e313b239'] = $pane;
  $display->panels['text'][3] = 'new-85c8770a-62df-4411-9476-b2b2e313b239';
  $pane = new stdClass();
  $pane->pid = 'new-c5b69b92-8958-4e0c-9a5e-efc66c9f0251';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_files';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'file_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c5b69b92-8958-4e0c-9a5e-efc66c9f0251';
  $display->content['new-c5b69b92-8958-4e0c-9a5e-efc66c9f0251'] = $pane;
  $display->panels['text'][4] = 'new-c5b69b92-8958-4e0c-9a5e-efc66c9f0251';
  $pane = new stdClass();
  $pane->pid = 'new-b0bf430b-5451-4987-b15a-16ec57d1c847';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_url',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b0bf430b-5451-4987-b15a-16ec57d1c847';
  $display->content['new-b0bf430b-5451-4987-b15a-16ec57d1c847'] = $pane;
  $display->panels['text'][5] = 'new-b0bf430b-5451-4987-b15a-16ec57d1c847';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e820c3a0-7996-4ef5-8a6a-8cebb1ef80ac'] = $handler;

  return $export;
}
