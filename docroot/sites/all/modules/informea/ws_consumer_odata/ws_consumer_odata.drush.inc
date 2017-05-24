<?php

function ws_consumer_odata_drush_command() {
  return array(
    'ws-consumer-delete-nodes' => array(
      'description' => 'Delete node from specific type that belong to a treaty',
      'arguments' => array(
        'content_type' => 'Drupal content type',
        'treaty_odata_identifier' => 'Treaty OData identifier',
      ),
      'aliases' => array('wsc-dn'),
      'examples' => array(
        'drush wsc-dn contact_person cbd' => 'Delete all contacts from CBD',
      ),
      'required-arguments' => 2,
    ),

    'ws-consumer-remove-deleted' => array(
      'description' => 'Remove deleted destinatoins',
    ),

    'ws-consumer-purge-orphans' => array(
      'description' => 'Check remote service for orphaned records (removed) and remove them locally',
      'arguments' => array(
        'treaty_odata_identifier' => 'Treaty OData identifier (e.g. cbd)',
        'odata_entity' => 'OData entity to check (e.g. Contacts)'
      ),
      'required-arguments' => 2,
      'options' => array(
        'dry-run' => 'Do not delete, just report the records',
      ),
    )
  );
}

function drush_ws_consumer_odata_ws_consumer_remove_deleted() {
  $migrations = ws_consumer_odata_match_migrations_by_name('/_Meetings$/');
  $migrations = array_merge($migrations, ws_consumer_odata_match_migrations_by_name('/_Decisions$/'));
  foreach($migrations as $migration) {
    $table = 'migrate_map_' . strtolower($migration);
    $query = db_select($table, 'm')->fields('m', ['destid1']);
    $query->leftJoin('node', 'n','n.nid = m.destid1');
    $query->condition('m.destid1',NULL, 'IS NOT');
    $query->condition('n.nid',NULL);
    $destids = $query->execute()->fetchCol();
    if ($destids) {
      db_delete($table)
        ->condition('destid1', $destids, 'IN')
        ->execute();
      drush_log('Removed from ' . $table . ', ' . implode(', ', $destids), 'status');
    }
  }
}

function drush_ws_consumer_odata_ws_consumer_delete_nodes($content_type, $treaty_odata_identifier) {
  if ($treaty = treaty_load_by_odata_name($treaty_odata_identifier)) {
    $q = new EntityFieldQuery();
    $q->entityCondition('bundle', $content_type);
    $q->fieldCondition('field_treaty', 'target_id', $treaty->nid);
    $rows = $q->execute();
    if (!empty($rows['node'])) {
      $nids = array_keys($rows['node']);
      drush_log('Deleting ' . count($nids) . ' nodes of type: ' . $content_type, 'status');
      node_delete_multiple($nids);
    }
  }
  else {
    drush_set_error('Cannot find treaty: ' . $treaty_odata_identifier);
  }
}

function drush_ws_consumer_odata_ws_consumer_purge_orphans($treaty_odata_identifier, $odata_entity) {
  $dry_run = drush_get_option('dry-run');
  $config = new ODataConsumerConfig(array('odata_entity' => $odata_entity, 'odata_name' => $treaty_odata_identifier));
  $klass = $config->getODataConsumerClass();
  /** @var ODataConsumer $consumer */
  $consumer = new $klass($config);

  // https://www.drupal.org/node/1416672
  $migration_name = drupal_strtolower('odata_' . $treaty_odata_identifier . '_' . $odata_entity);
  /** @var Migration $migration */
  $migration = Migration::getInstance($migration_name);
  if (!$migration) {
    drush_set_error('No migration found:' . $migration_name);
    return;
  }
  if ($migration->getStatus() != MigrationBase::STATUS_IDLE) {
    drush_set_error('Migration not idle, waiting to finish. Status is: ' . $migration->getStatus());
    return;
  }
  $rows = db_select('migrate_map_' . $migration->getMachineName(), 'm')
    ->fields('m', array('sourceid1', 'destid1'))
    ->isNotNull('destid1')
    ->execute()
    ->fetchAllKeyed(0, 1);

  $count = count($rows);
  ws_consumer_odata_log(__METHOD__ . "(): Checking {$count} records for orphans", MigrationBase::MESSAGE_INFORMATIONAL);

  $delete_nids = array();
  $delete_src = array();
  $i = 0;
  $deleted = 0;
  foreach ($rows as $source_id => $nid) {
    if (!$consumer->itemExists($odata_entity, $source_id)) {
      $delete_src[] = $source_id;
      $delete_nids[] = $nid;
      ws_consumer_odata_log(__METHOD__ . "(): Deleting orphan record: $source_id ($nid)", MigrationBase::MESSAGE_INFORMATIONAL);
      $deleted++;
      if (!$dry_run) {
        node_delete($nid);
        $migration->getMap()->delete(array($source_id));
      }
    }
    if (++$i % 50 === 0) {
      ws_consumer_odata_log(__METHOD__ . "(): Checked {$i}/{$count}", MigrationBase::MESSAGE_INFORMATIONAL);
    }
  }
  ws_consumer_odata_log(__METHOD__ . "(): Removed {$deleted} orphan records", MigrationBase::MESSAGE_INFORMATIONAL);
}
