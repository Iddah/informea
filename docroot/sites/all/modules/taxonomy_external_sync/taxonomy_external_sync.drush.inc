<?php

function taxonomy_external_sync_drush_command() {
  return array(
    'taxonomy-external-sync' => array(
      'description' => 'Trigger synchronization of taxonomies',
      'arguments' => array(),
      'examples' => array(),
      'required-arguments' => 0,
    )
  );
}



function drush_taxonomy_external_sync($taxonomy = null) {
  if (empty($taxonomy)) {
    taxonomy_external_sync_migrate_all_vocabularies();
  }
  else {
    taxonomy_external_sync_migrate_vocabulary($taxonomy);
  }
}