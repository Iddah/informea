<?php

/**
 * Class ContactsODataMigration migrate OData contacts
 */
class ContactsODataMigration extends AbstractODataMigration {

  protected $migrated_ids = [];

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = sprintf('Import %s from %s', ODataConsumerConfig::$DRUPAL_TYPE_CONTACTS, $this->config->odata_name);
    $this->source      = new InforMEAODataContactsMigrateSource($arguments, $this->config);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Original ID from the MEA website',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->destination = new MigrateDestinationNode(
      ODataConsumerConfig::$DRUPAL_TYPE_CONTACTS,
      array('language' => 'en', 'text_format' => 'full_html')
    );

    $this->addFieldMapping('field_original_id', 'id');
    $this->addFieldMapping('title', 'title_en');
    $this->addFieldMapping('field_country', 'country');
    $this->addFieldMapping('field_treaty', 'treaties');
    $this->addFieldMapping('field_person_prefix', 'prefix');
    $this->addFieldMapping('field_person_first_name', 'firstName');
    $this->addFieldMapping('field_person_gender', 'gender');


    $this->addFieldMapping('field_person_last_name', 'lastName');
    $this->addFieldMapping('field_person_position', 'position');
    $this->addFieldMapping('field_person_institution', 'institution');
    $this->addFieldMapping('field_person_department', 'department');
    $this->addFieldMapping('field_address', 'address');
    $this->addFieldMapping('field_person_email', 'email');
    $this->addFieldMapping('field_contact_telephone', 'phoneNumber');
    $this->addFieldMapping('field_contact_fax', 'fax');
    $this->addFieldMapping('field_contact_primary_nfp', 'primary');

    $this->addFieldMapping('field_person_type', 'type');
    $this->addFieldMapping('field_person_type:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_person_type:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_last_update', 'updated');
    $this->addFieldMapping('field_last_update:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);

    $this->addUnmigratedDestinations(array(
      'created', 'log', 'tnid', 'translate', 'revision_uid', 'is_new',
      'body', 'body:summary', 'body:format',
      'field_person_position:language', 'field_person_institution:language',
      'field_person_prefix:language', 'field_person_type:source_type', 'path',
      'body:language',
      'field_last_update:rrule', 'field_last_update:to',
    ));
  }

  /**
   * Add some Contacts specific preparations.
   *
   * {@inheritdoc}
   */
  public function prepareRow($row) {
    parent::prepareRow($row);

    if ($row->gender !== NULL) {
      $v = intval($row->gender);
      $row->gender = ($v == 1) ?: 0;
    }

    /* Fill with remote-data */
    $consumer = $this->source->getConsumer();
    $row->languages = array('en');
    $treaties = array();
    $values = $consumer->loadNavigationProperty($row, 'treaties');
    if (!empty($values) && is_array($values)) {
      foreach ($values as $value) {
        if (!empty($value->value)) {
          if ($tob = $this->getTreatyByODataIdentifier($value->value)) {
            $treaties[] = $tob->nid;
          }
          else {
            ws_consumer_odata_log(__METHOD__ . "(): Invalid OData identifier({$value->value})", MigrationBase::MESSAGE_WARNING);
          }
        }
      }
    }
    // CBD OData v3 seem to return this format
    else if (!empty($value) && is_string($value)) {
      if ($tob = $this->getTreatyByODataIdentifier($value)) {
        $treaties[] = $tob->nid;
      }
      else {
        ws_consumer_odata_log(__METHOD__ . "(): Invalid OData identifier({$value})", MigrationBase::MESSAGE_WARNING);
      }
    }

    $row->roles = $consumer->loadContactRolesProperty($row);
    $row->email = str_replace(' ', '', $row->email);
    if (strlen($row->email) > 255) {
      $row->email = null;
    }
    $row->title_en = $this->getContactName($row);
    foreach ($row->roles as $odata_name => $roles) {
      if ($tob = $this->getTreatyByODataIdentifier($odata_name)) {
        $treaties[] = $tob->nid;
      }
      else {
        ws_consumer_odata_log(__METHOD__ . "(): Invalid OData identifier({$odata_name})", MigrationBase::MESSAGE_WARNING);
      }
    }

    $row->treaties = array_unique($treaties);
    return $this->validateRow($row);
  }

  /**
   * Validate Contact. Must have 'treaties' and 'name' not empty.
   *
   * @param stdClass $row
   *   Object to validate.
   *
   * @return bool
   *   FALSE if row is invalid
   */
  public function validateRow($row) {
    if (!$this->validateEnglishTitle($row)) {
      return FALSE;
    }

    if (empty($row->country)) {
      ws_consumer_odata_log('Skipping Contact without country (' . $row->id .')', MigrationBase::MESSAGE_ERROR);
      return FALSE;
    }

    foreach ($row->roles as $odata_name => $roles) {
      if (!$this->getTreatyByODataIdentifier($odata_name)) {
        ws_consumer_odata_log('Skipping Contact with source id=' . $row->id . ' and unknown treaty:' . $odata_name, MigrationBase::MESSAGE_ERROR);
        return FALSE;
      }
    }

    if (empty($row->treaties) && empty($row->roles)) {
      ws_consumer_odata_log('Skipping Contact with source id=' . $row->id .' because is missing treaties', MigrationBase::MESSAGE_ERROR);
      return FALSE;
    }
    return TRUE;
  }

  /**
   * Try our best to build the contact name from the data we have available.
   *
   * @param stdClass $row
   *   OData object
   *
   * @return null|string
   *   Contact name or NULL when everything fails
   */
  protected function getContactName($row) {
    $name = NULL;
    if (!empty($row->firstName)) {
      $name = $row->firstName;
    }
    if (!empty($row->lastName)) {
      if (!empty($row->firstName)) {
        $name .= ' ';
      }
      $name .= $row->lastName;;
    }
    if (empty($name) && !empty($row->position)) {
      $name = $row->position;
    }
    if (empty($name) && !empty($row->institution)) {
      $name = $row->institution;
    }
    $name = trim($name);
    return $name;
  }

  public function complete($entity, stdClass $row) {
    foreach ($row->roles as $odata_name => $roles) {
      $treaty = treaty_load_by_odata_name($odata_name);
      foreach ($roles as $delta => $role) {
        // vocabulary contact_role vid is 34
        $tid = ODataMigrationUtil::getOrCreateTaxonomyTermByName($role, 34);
        $values = array(
          'field_name' => 'field_contact_roles',
          'field_contact_treaty' => array(LANGUAGE_NONE => array($delta => array('target_id' => $treaty->nid))),
          'field_contact_role' => array(LANGUAGE_NONE => array($delta => array('tid' => $tid)))
        );
        /** @var FieldCollectionItemEntity $ob */
        $ob = entity_create('field_collection_item', $values);
        $ob->setHostEntity('node', $entity);
        $ob->save();
      }
    }
    $this->migrated_ids[] = $row->id;
  }

  /**
   * Delete destination when source data is removed
   */
  public function postImport() {
    parent::postImport();

    $query = db_select('migrate_map_' . strtolower($this->getMachineName()), 'm')
      ->fields('m', array('sourceid1', 'destid1'))
      ->isNotNull('destid1');
    if (!empty($this->migrated_ids)) {
      $query->condition('sourceid1', $this->migrated_ids, 'NOT IN');
    }

     $rows = $query->execute()->fetchAllKeyed();

    $klass = $this->config->getODataConsumerClass();
    /** @var ODataConsumer $consumer */
    $consumer = new $klass($this->config);
    $deleted = 0;
    foreach ($rows as $source_id => $nid) {
      ws_consumer_odata_log("{$this->getMachineName()}: Checking source id: $source_id", MigrationBase::MESSAGE_INFORMATIONAL);
      if (!$consumer->itemExists($this->config->odata_entity, $source_id)) {
        ws_consumer_odata_log("{$this->getMachineName()}: Deleting orphan record: $source_id ($nid)", MigrationBase::MESSAGE_INFORMATIONAL);
        node_delete($nid);
        $this->getMap()->delete(array($source_id));
        $deleted++;
      }
    }

    if ($deleted > 0) {
      ws_consumer_odata_log("{$this->getMachineName()}: Deleted {$deleted} orphan records", MigrationBase::MESSAGE_INFORMATIONAL);
    }
  }
}



class InforMEAODataContactsMigrateSource extends InforMEAAbstractODataMigrateSource {

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id' => 'Remote primary key',
      'country' => 'Contact country',
      'prefix' => 'Name prefix (Mr.)',
      'firstName' => 'Given name',
      'lastName' => 'Family name',
      'position' => 'Work position',
      'institution' => 'Working institution',
      'department' => 'Department',
      'address' => 'Working address',
      'email' => 'Work e-mail address',
      'gender' => 'Person gender (NULL unknown, 0=male, 1=female)',
      'phoneNumber' => 'Contact telephone number',
      'type' => 'Type of contact (i.e. licenced focal point)',
      'fax' => 'Work fax number',
      'primary' => 'Is primary focal point',
      'updated' => 'RSS updated field - when record was updated',
      'treaties' => 'List of treaties (odata_name) the focal point is working for',
    );
  }
}
