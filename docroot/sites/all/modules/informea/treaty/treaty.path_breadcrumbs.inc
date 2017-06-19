<?php
/**
 * @file
 * treaty.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function treaty_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties';
  $path_breadcrumb->name = 'Treaties';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:title',
      2 => 'Summary',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:url',
      2 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_action_plans';
  $path_breadcrumb->name = 'Treaties action plans';
  $path_breadcrumb->path = 'node/%node/action-plans';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Nat. plans',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/action-plans',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_action_plans'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_decisions';
  $path_breadcrumb->name = 'Treaties Decisions';
  $path_breadcrumb->path = 'node/%node/decisions';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Decisions',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/decisions',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_decisions'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_documents';
  $path_breadcrumb->name = 'Treaties Documents';
  $path_breadcrumb->path = 'node/%node/documents';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:title',
      2 => 'Documents',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:url',
      2 => '%node:url/documents',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:treaty:field_parent_treaty',
          'settings' => array(
            'field_parent_treaty' => array(
              'und' => array(),
            ),
            'field_parent_treaty_target_id' => array(),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_documents'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_nat_report';
  $path_breadcrumb->name = 'Treaties Nat Reports';
  $path_breadcrumb->path = 'node/%node/national-reports';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Nat. reports',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/national-reports',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_nat_report'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_parties';
  $path_breadcrumb->name = 'Treaties Parties';
  $path_breadcrumb->path = 'node/%node/parties';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Parties',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/parties',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_parties'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols';
  $path_breadcrumb->name = 'Treaties Protocols';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Summary',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_action_plans';
  $path_breadcrumb->name = 'Treaties Protocols Nat Plans';
  $path_breadcrumb->path = 'node/%node/action-plans';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Nat. plans',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/action-plans',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_action_plans'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_decisions';
  $path_breadcrumb->name = 'Treaties Protocols Decisions';
  $path_breadcrumb->path = 'node/%node/decisions';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Decisions',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/decisions',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_decisions'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_documents';
  $path_breadcrumb->name = 'Treaties Protocols Documents';
  $path_breadcrumb->path = 'node/%node/documents';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Documents',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/documents',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:treaty:field_parent_treaty',
          'settings' => array(
            'field_parent_treaty' => array(
              'und' => array(),
            ),
            'field_parent_treaty_target_id' => array(),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_documents'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_nat_reports';
  $path_breadcrumb->name = 'Treaties Protocols Nat Reports';
  $path_breadcrumb->path = 'node/%node/national-reports';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Nat. reports',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/national-reports',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_nat_reports'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_parties';
  $path_breadcrumb->name = 'Treaties Protocols Parties';
  $path_breadcrumb->path = 'node/%node/parties';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Parties',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/parties',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_parties'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_protocols_text';
  $path_breadcrumb->name = 'Treaties Protocols Text';
  $path_breadcrumb->path = 'node/%node/text';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Treaty text',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/text',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_protocols_text'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaties_text';
  $path_breadcrumb->name = 'Treaties Text';
  $path_breadcrumb->path = 'node/%node/text';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:title',
      2 => 'Treaty text',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:url',
      2 => '%node:url/text',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaties_text'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaty_protocol_protocols';
  $path_breadcrumb->name = 'Treaties Protocols > Protocols';
  $path_breadcrumb->path = 'node/%node/protocols';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:field-parent-treaty:title',
      2 => 'Protocols',
      3 => '%node:title',
      4 => 'Protocols',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:field-parent-treaty:url',
      2 => '%node:field-parent-treaty:url/protocols',
      3 => '%node:url',
      4 => '%node:url/text',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 1,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaty_protocol_protocols'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'treaty_protocols';
  $path_breadcrumb->name = 'Treaties > Protocols';
  $path_breadcrumb->path = 'node/%node/protocols';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Treaties',
      1 => '%node:title',
      2 => 'Protocols',
    ),
    'paths' => array(
      0 => 'treaties',
      1 => '%node:url',
      2 => '%node:url',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'treaty' => 'treaty',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_treaty_parent_value',
          'settings' => array(
            'is_not_empty' => 0,
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['treaty_protocols'] = $path_breadcrumb;

  return $export;
}
