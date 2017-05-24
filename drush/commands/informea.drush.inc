<?php

/**
 * @file
 */

/**
 * Implements hook_drush_command().
 */
function informea_drush_command() {
  $items = array();
  $items['informea-sync-production'] = array(
    'description' => "Devify local installation",
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_ROOT,
  );
  $items['informea-cache-warm'] = array(
    'description' => "Warm the cache",
    'options' => array(
      'prefix' => 'URL prefix to append to the URLs',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  $items['sync-ecolex-legislation'] = array(
    'description' => 'Sync ecolex legislation',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'options' => array(
      'limit' => 'limit',
    ),
    'examples' => array(
      'sync-ecolex-legislation' => 'Sync ecolex legislation',
    ),
  );
  $items['sync-ecolex-literature'] = array(
    'description' => 'Sync ecolex literature',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'options' => array(
      'limit' => 'limit',
    ),
    'examples' => array(
      'sync-ecolex-literature' => 'Sync ecolex literature',
    ),
  );
  $items['sync-ecolex-treaty'] = array(
    'description' => 'Sync ecolex literature',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'options' => array(
      'limit' => 'limit',
    ),
    'examples' => array(
      'sync-ecolex-literature' => 'Sync ecolex treaty',
    )
  );
  $items['informea-tag-ecolex-data'] = array(
    'description' => "Tag ECOLEX data",
    'options' => array(),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  $items['informea-tag-court-decisions'] = array(
    'description' => "Tag court decisions with ECOLEX mappings",
    'options' => array(),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  return $items;
}

function drush_informea_sync_production() {
  if (drush_confirm('Start to import the production database here?')) {
    drush_invoke_process('@self', 'sql-drop', array(), array('yes' => TRUE));
    drush_invoke_process('@self', 'sql-sync', array('@prod', '@self'), array('yes' => TRUE));
    drush_invoke_process('@self', 'devify', array(), array('yes' => TRUE));
  }
}


function drush_informea_cache_warm() {
  $prefix = drush_get_option('prefix', 'http://www.informea.org/');
  $output = array();

  // Treaties
  $rows = db_select('field_data_field_odata_identifier')->fields(NULL, array('field_odata_identifier_value'))->execute()->fetchCol();
  $output[] = $prefix . 'treaties';
  foreach($rows as $row) {
    $output[] = $prefix . 'treaties/' . $row;
    $output[] = $prefix . 'treaties/'. $row . '/protocols';
    $output[] = $prefix . 'treaties/'. $row . '/text';
    $output[] = $prefix . 'treaties/'. $row . '/decisions';
    $output[] = $prefix . 'treaties/'. $row . '/parties';
    $output[] = $prefix . 'treaties/'. $row . '/national-reports';
    $output[] = $prefix . 'treaties/'. $row . '/action-plans';
  }

  // Countries
  $output[] = $prefix . 'countries';
  $rows = db_select('field_data_field_country_iso2')->fields(NULL, array('field_country_iso2_value'))->execute()->fetchCol();
  foreach($rows as $row) {
    $output[] = $prefix . 'countries/' . $row;
    $output[] = $prefix . 'countries/' . $row . '/parties';
    $output[] = $prefix . 'countries/' . $row . '/action-plans';
    $output[] = $prefix . 'countries/' . $row . '/national-reports';
  }
  print implode("\n", $output);
  print "\n";
}

function drush_informea_sync_ecolex_legislation() {
  ecolex_migration_legislation_sync();
}

function drush_informea_sync_ecolex_literature() {
  ecolex_migration_literature_sync();
}

function drush_informea_sync_ecolex_treaty() {
  ecolex_migration_treaty_sync();
}

function drush_informea_tag_ecolex_data() {
  $args = func_get_args();
  if (empty($args)) {
    $args = array('legislation', 'court_decisions', 'treaty');
  }
  $q = db_select('taxonomy_term_data', 'a')
    ->fields('a', array('name', 'tid'))
    ->condition('vid', 14);
  $terms = $q->execute()->fetchAll(PDO::FETCH_KEY_PAIR);

  if (in_array('legislation', $args)) {
    $rows = _drush_informea_read_mapping_file(dirname(__FILE__) . "/data/legislation-leo.csv");
    echo "legislation:" . count($rows) . "\n";
    $i = 0;
    $updated = 0;
    foreach ($rows as $k => $tags) {
      $nid = db_select('field_data_field_original_id', 'a')
        ->fields('a', array('entity_id'))
        ->condition('field_original_id_value', $k)
        ->execute()->fetchField();

      $node = new stdClass();
      $node->nid = $nid;
      $node->type = 'legislation';
      foreach ($tags as $name) {
        if (!empty($terms[$name])) {
          $node->field_informea_tags[LANGUAGE_NONE][] = array('tid' => $terms[$name]);
        }
      }
      if (!empty($node->nid) && !empty($node->field_informea_tags[LANGUAGE_NONE])) {
        field_attach_update('node', $node);
        $updated++;
      }
      else {
        drush_log("Skipping invalid court decision: $k");
      }
      if ($i % 5000 == 0) {
        echo "$i\n";
      }
      $i++;
    }
    echo "updated: $updated legislation\n";
  }

  if (in_array('court_decisions', $args)) {
    $rows = _drush_informea_read_mapping_file(dirname(__FILE__) . "/data/court_decisions-leo.csv");
    echo "court decisions:" . count($rows) . "\n";
    $i = 0;
    $updated = 0;
    foreach ($rows as $k => $tags) {
      $nid = db_select('field_data_field_original_id', 'a')
        ->fields('a', array('entity_id'))
        ->condition('field_original_id_value', $k)
        ->execute()->fetchField();

      $node = new stdClass();
      $node->nid = $nid;
      $node->type = 'court_decisions';
      foreach ($tags as $name) {
        if (!empty($terms[$name])) {
          $node->field_informea_tags[LANGUAGE_NONE][] = array('tid' => $terms[$name]);
        }
      }
      if (!empty($node->nid) && !empty($node->field_informea_tags[LANGUAGE_NONE])) {
        field_attach_update('node', $node);
        $updated++;
      }
      else {
        drush_log("Skipping invalid court decision: $k");
      }
      if ($i % 5000 == 0) {
        echo "$i\n";
      }
      $i++;
    }
    echo "updated: $updated court decisions\n";
  }

  if (in_array('treaty', $args)) {
    $rows = _drush_informea_read_mapping_file(dirname(__FILE__) . "/data/treaty-leo.csv");
    echo "treaties:" . count($rows) . "\n";
    $i = 0;
    $updated = 0;
    foreach ($rows as $k => $tags) {
      $nid = db_select('field_data_field_original_id', 'a')
        ->fields('a', array('entity_id'))
        ->condition('field_original_id_value', $k)
        ->execute()->fetchField();

      $node = new stdClass();
      $node->nid = $nid;
      $node->type = 'treaty';
      foreach ($tags as $name) {
        if (!empty($terms[$name])) {
          $node->field_informea_tags[LANGUAGE_NONE][] = array('tid' => $terms[$name]);
          $updated++;
        }
        else {
          drush_log("Skipping invalid treaty: $k");
        }
      }
      if (!empty($node->nid) && !empty($node->field_informea_tags[LANGUAGE_NONE])) {
        field_attach_update('node', $node);
      }
      if ($i % 5000 == 0) {
        echo "$i\n";
      }
      $i++;
    }
    echo "updated: $updated treaties\n";
  }
}

function _drush_informea_read_mapping_file($file) {
  $rows = array();
  $c = 0;
  if (($handle = fopen($file, "r")) !== FALSE) {
    while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
      $col0 = trim($data[0]);
      $col1 = trim($data[1]);
      if (empty($rows[$col0])) {
        $rows[$col0] = array();
      }
      $rows[$col0][] = $col1;
      $c++;
    }
    fclose($handle);
  }
  return $rows;
}


function drush_informea_tag_court_decisions() {
  $q = new EntityFieldQuery();
  $q->entityCondition('entity_type', 'node');
  $q->entityCondition('bundle', 'court_decisions');

  $rows = $q->execute();
  foreach ($rows['node'] as $nid => $row) {
    $node = node_load($nid);
    if (ecolex_nod_map_ecolex_term($node)) {
      node_save($node);
      echo "Updated node: {$nid}\n";
    }
  }
}