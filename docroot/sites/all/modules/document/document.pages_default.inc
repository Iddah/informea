<?php
/**
 * @file
 * document.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function document_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_074a6436-fc65-47a7-933b-c61c329c21e4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Documents',
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
              'document' => 'document',
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
      'details' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'details',
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
      'text' => array(
        'type' => 'region',
        'title' => 'Text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'text',
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
  $display->uuid = 'bbcefade-cdba-43f4-8438-07f21103941b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_074a6436-fc65-47a7-933b-c61c329c21e4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9cce840a-2420-450f-ae22-f94e505568f5';
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
  $pane->uuid = '9cce840a-2420-450f-ae22-f94e505568f5';
  $display->content['new-9cce840a-2420-450f-ae22-f94e505568f5'] = $pane;
  $display->panels['center'][0] = 'new-9cce840a-2420-450f-ae22-f94e505568f5';
  $pane = new stdClass();
  $pane->pid = 'new-d83e1ae7-a4a2-4ac2-a1d0-bbb79fb6a8a1';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_document_authors';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd83e1ae7-a4a2-4ac2-a1d0-bbb79fb6a8a1';
  $display->content['new-d83e1ae7-a4a2-4ac2-a1d0-bbb79fb6a8a1'] = $pane;
  $display->panels['center'][1] = 'new-d83e1ae7-a4a2-4ac2-a1d0-bbb79fb6a8a1';
  $pane = new stdClass();
  $pane->pid = 'new-956a995e-0347-4d28-b2df-44f7a4208a9d';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '956a995e-0347-4d28-b2df-44f7a4208a9d';
  $display->content['new-956a995e-0347-4d28-b2df-44f7a4208a9d'] = $pane;
  $display->panels['center'][2] = 'new-956a995e-0347-4d28-b2df-44f7a4208a9d';
  $pane = new stdClass();
  $pane->pid = 'new-227f7b24-5002-4436-9cd5-bca0e8a29300';
  $pane->panel = 'details';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_document_type';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '227f7b24-5002-4436-9cd5-bca0e8a29300';
  $display->content['new-227f7b24-5002-4436-9cd5-bca0e8a29300'] = $pane;
  $display->panels['details'][0] = 'new-227f7b24-5002-4436-9cd5-bca0e8a29300';
  $pane = new stdClass();
  $pane->pid = 'new-1ba8bccd-bcfd-4c24-bc7f-ff23ea2891a2';
  $pane->panel = 'references';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_document_entity_references';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
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
  $pane->uuid = '1ba8bccd-bcfd-4c24-bc7f-ff23ea2891a2';
  $display->content['new-1ba8bccd-bcfd-4c24-bc7f-ff23ea2891a2'] = $pane;
  $display->panels['references'][0] = 'new-1ba8bccd-bcfd-4c24-bc7f-ff23ea2891a2';
  $pane = new stdClass();
  $pane->pid = 'new-df51ec83-115e-4582-82ba-41e19e56720a';
  $pane->panel = 'references';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_treaty';
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
  $pane->uuid = 'df51ec83-115e-4582-82ba-41e19e56720a';
  $display->content['new-df51ec83-115e-4582-82ba-41e19e56720a'] = $pane;
  $display->panels['references'][1] = 'new-df51ec83-115e-4582-82ba-41e19e56720a';
  $pane = new stdClass();
  $pane->pid = 'new-75d19b63-5a5d-4773-a97c-db5e964a7732';
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
  $pane->uuid = '75d19b63-5a5d-4773-a97c-db5e964a7732';
  $display->content['new-75d19b63-5a5d-4773-a97c-db5e964a7732'] = $pane;
  $display->panels['text'][0] = 'new-75d19b63-5a5d-4773-a97c-db5e964a7732';
  $pane = new stdClass();
  $pane->pid = 'new-2b0b870c-0e58-4c31-b92d-3d316bfb6cfb';
  $pane->panel = 'text';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => '',
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
  $pane->uuid = '2b0b870c-0e58-4c31-b92d-3d316bfb6cfb';
  $display->content['new-2b0b870c-0e58-4c31-b92d-3d316bfb6cfb'] = $pane;
  $display->panels['text'][1] = 'new-2b0b870c-0e58-4c31-b92d-3d316bfb6cfb';
  $pane = new stdClass();
  $pane->pid = 'new-e5a8b786-6ca8-4a16-9c7c-0175c14f0402';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e5a8b786-6ca8-4a16-9c7c-0175c14f0402';
  $display->content['new-e5a8b786-6ca8-4a16-9c7c-0175c14f0402'] = $pane;
  $display->panels['text'][2] = 'new-e5a8b786-6ca8-4a16-9c7c-0175c14f0402';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_074a6436-fc65-47a7-933b-c61c329c21e4'] = $handler;

  return $export;
}
