<?php

/**
 * Implementation of hook_drush_command().
 */
function geographic_region_drush_command() {
  $items = array();

  $items['informea-populate-fields'] = array(
    'description' => 'Populate field_region and field_topic.',
    'options' => array(
      'ids' => 'List of node ids to update.',
    ),
  );

  return $items;
}

function drush_geographic_region_informea_populate_fields() {
  $ids = drush_get_option('ids', []);
  if (!is_array($ids)) {
    $ids = explode(',', $ids);
  }

  $fields = [
    DenormalizedFieldHandler::FIELD_REGION => 'RegionDenormalizedFieldHandler',
    DenormalizedFieldHandler::FIELD_MEA_TOPIC => 'TopicDenormalizedFieldHandler',
  ];
  foreach ($fields as $field => $handlerClassName) {
    /** @var \DenormalizedFieldHandler $instance */
    $instance = new $handlerClassName();
    foreach ($instance->getSupportedContentTypes() as $contentType) {
      $nodes = node_load_multiple($ids, array('type' => $contentType));

      foreach ($nodes as $node) {
        if ($instance->computeField($node)) {
          try {
            $nodeUpdate = (object) [
              'nid' => $node->nid,
              'vid' => NULL,
              'type' => $contentType,
              $field => $node->{$field},
            ];
            field_attach_update('node', $nodeUpdate);
            drush_log("Updated {$field} for node {$node->nid}");
          }
          catch (\Exception $e) {
            drush_log("ERROR udpating {$field} for node {$node->nid}: {$e->getMessage()}", 'error');
          }
        }
      }
    }
  }
}
