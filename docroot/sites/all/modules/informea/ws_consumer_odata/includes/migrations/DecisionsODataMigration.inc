<?php

/**
 * Class DecisionsODataMigration migrate OData contacts
 */
class DecisionsODataMigration extends AbstractODataMigration {

  /**
   * @var ODataConsumerConfig
   */
  protected $config = NULL;

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = sprintf('Import %s from %s', ODataConsumerConfig::$DRUPAL_TYPE_DECISIONS, $this->config->odata_name);
    $this->source      = new InforMEAODataDecisionsMigrateSource($arguments, $this->config);
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
      ODataConsumerConfig::$DRUPAL_TYPE_DECISIONS,
      array('language' => 'en', 'text_format' => 'full_html')
    );

    $this->addFieldMapping('field_original_id', 'id');
    $this->addFieldMapping('title', 'title_en');
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('title_field:language', 'title_language');
    $this->addFieldMapping('field_treaty', 'treaty');
    $this->addFieldMapping('field_decision_status', 'status');
    $this->addFieldMapping('field_decision_status:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_decision_status:ignore_case')->defaultValue(TRUE);
    $this->addFieldMapping('field_decision_type', 'type');
    $this->addFieldMapping('field_decision_type:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_decision_type:ignore_case')->defaultValue(TRUE);
    $this->addFieldMapping('field_decision_number', 'number');
    // from decision published or meeting calendar date if exists
    $this->addFieldMapping('field_sorting_date', 'published');
    $this->addFieldMapping('field_sorting_date:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_meeting', 'meetingId');
    $this->addFieldMapping('field_meeting_title_en', 'meetingTitle');
    $this->addFieldMapping('field_meeting_url', 'meetingUrl');
    $this->addFieldMapping('body', 'content');
    $this->addFieldMapping('body:language', 'content_language');
    $this->addFieldMapping('body:summary', 'summary');
    $this->addFieldMapping('field_url', 'link');

    $this->addFieldMapping('field_files', 'files');
    $this->addFieldMapping('field_files:description', 'files');
    $this->addFieldMapping('field_files:language', 'files_language');
    $this->addFieldMapping('field_files:destination_dir')->defaultValue('public://decisions/' . $this->config->odata_name);
    $this->addFieldMapping('field_files:destination_file', 'filename');
    $this->addFieldMapping('field_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    $this->addFieldMapping('field_last_update', 'updated');
    $this->addFieldMapping('field_last_update:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('changed', 'updated');

    $this->addFieldMapping('field_informea_tags', 'keywords');
    $this->addFieldMapping('field_informea_tags:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_sorting_order', 'displayOrder');

    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('language')->defaultValue('en');

    $this->addUnmigratedDestinations(array(
      'created', 'log', 'tnid', 'translate', 'revision_uid', 'is_new',
      'body:format', 'path', 'field_decision_type:source_type',
      'field_decision_status:source_type',
      'field_sorting_date:rrule', 'field_sorting_date:to',
      'field_last_update:rrule', 'field_last_update:to',
      'field_meeting_url:title',
      'field_decision_updated:timezone', 'field_decision_updated:rrule',
      'field_decision_updated:to', 'field_decision_updated',
      'field_meeting_url:attributes', 'field_meeting_url:language',
      'field_url:attributes', 'field_url:language', 'field_url:title',
      'field_informea_tags:create_term', 'field_informea_tags:ignore_case',
      'field_files:preserve_files',
      'field_files:source_dir', 'field_files:urlencode', 'field_files:display',
      'field_files:file_class',
    ));
  }

  /**
   * Add some Contacts specific preparations.
   *
   * {@inheritdoc}
   */
  function prepareRow($row) {
    parent::prepareRow($row);
    /* Fill with remote-data */
    $consumer = $this->source->getConsumer();
    $all_languages = array('en');
    $titles = $consumer->loadNavigationProperty($row, 'title');
    $row->title_en = ODataMigrationUtil::prepareTitle($titles);
    list($titles, $languages) = ODataMigrationUtil::getSingleValuedMultilingualField($titles);
    $row->title = $titles;
    $row->title_language = $languages;
    $all_languages = array_merge($all_languages, $languages);

    $content = $consumer->loadNavigationProperty($row, 'content');
    list($contents, $languages) = ODataMigrationUtil::getSingleValuedMultilingualField($content);
    $websites = $this->config->getMEAWebsites();
    $domain = !empty($websites[$this->config->odata_name]) ? $websites[$this->config->odata_name] : NULL;
    foreach($contents as &$content) {
      $content = ODataMigrationUtil::removeHtmlAnchors($content);
      $content = ODataMigrationUtil::fixI18NString($content);
    }
    $row->content = $contents;
    $row->content_language = $languages;
    $all_languages = array_merge($all_languages, $languages);

    $summary = $consumer->loadNavigationProperty($row, 'summary');
    list($summaries, $langs) = ODataMigrationUtil::getSingleValuedMultilingualField($summary);
    foreach($summaries as &$sum) {
      $sum = ODataMigrationUtil::removeHtmlAnchors($sum);
    }
    $row->summary = $summaries;

    $files = $consumer->loadNavigationProperty($row, 'files');
    $row->files = array();
    $row->files_language = array();
    $row->filename = array();
    if (!empty($files)) {
      foreach ($files as $file) {
        // Skip non-document files
        if (in_array(strtolower($file->mimeType), array('image/jpeg'))) {
          continue;
        }

        if (!valid_url($file->url, TRUE)) {
          ws_consumer_odata_log('Invalid file for Decision id=' . $row->id . ', url=' . $file->url, MigrationBase::MESSAGE_WARNING);
          continue;
        }

        if (empty($file->url)) {
          ws_consumer_odata_log('Invalid file for Decision id=' . $row->id, MigrationBase::MESSAGE_WARNING);
          continue;
        }

        // Filename validation
        $filename = !empty($file->filename) ? $file->filename : ODataMigrationUtil::filenameFromURL($file->url);
        if (empty($filename)) {
          ws_consumer_odata_log('Invalid filename for Decision id=' . $row->id . '. File URL: ' . $file->url, MigrationBase::MESSAGE_WARNING);
          continue;
        }

        // File language handling
        if (empty($file->language)) {
          ws_consumer_odata_log('Missing language for file, Decision id=' . $row->id . '. File URL: ' . $file->url, MigrationBase::MESSAGE_WARNING);
          continue;
        }
        if (!in_array($file->url, $row->files)) {
          $language = ODataMigrationUtil::fixLanguage($file->language);
          $all_languages[] = $language;
          $row->files[] = $file->url;
          $row->filename[] = $filename;
          $row->files_language[] = $language;
        }
      }
    }
    $row->languages = array_unique($all_languages);

    // keywords
    $vdk = taxonomy_vocabulary_machine_name_load('thesaurus_informea');
    $odata_values = $consumer->loadNavigationProperty($row, 'keywords');
    $keywords = array();
    foreach($odata_values as $v) {
      if ($tid = ODataMigrationUtil::getTaxonomyTermByName($v->term, $vdk->vid)) {
        $keywords[] = $tid;
      }
    }
    $row->keywords = $keywords;

    /* Do some data transformation */
    if (!empty($row->published)) {
      $row->published = $this->fixDateValue($row->published);
    }
    $row->treaty = $this->getTreatyByODataIdentifier($row->treaty)->nid;
    $row->meetingId = $this->map_source_meeting($row->meetingId, $row->meetingTitle, $row->treaty);

    if ($row->meetingId) {
      $published = $this->meeting_get_start_date($row->meetingId);
      if ($published) {
        if ($published != $row->published) {
          $decisions_date = date('Y-m-d H:i', $row->published);
          $meeting_date = date('Y-m-d H:i', $published);
          drush_log("Decision date = {$decisions_date}, Meeting date = {$meeting_date}, Treaty = {$row->treaty}, Meeting = {$row->meetingId}", 'status');
          $row->published = $published;
        }
      }
    }
    else {
      ws_consumer_odata_log('Skipping ' . $this->config->odata_entity . ' with source id=' . $row->id .' because is missing meeting', MigrationBase::MESSAGE_ERROR);
      return FALSE;
    }

    return $this->validateRow($row);
  }

  public function meeting_get_start_date($nid) {
    $q = db_select('node', 'n')->fields('d', array('event_calendar_date_value'));
    $q->leftJoin('field_data_event_calendar_date', 'd', 'n.nid = d.entity_id');
    $q->condition('n.nid', $nid);
    $field = $q->execute()->fetchField();
    $date = new DateTime($field, new DateTimeZone('Europe/Zurich'));
    return $date ->getTimestamp();
  }

  public function map_source_meeting($id_event, $meeting_title, $id_treaty) {
    $ret = NULL;
    if (!empty($id_event)) {
      $table_name = $this->config->getDecisionMeetingMappingTable();
      $query = db_select($table_name, 'm')
        ->fields('m', array('destid1'))
        ->condition('m.sourceid1', $id_event);
      $ret = $query->execute()->fetchField();
      if (!$ret) {
        ws_consumer_odata_log('Meeting with source id=' . $id_event .' has not been found.', MigrationBase::MESSAGE_ERROR);
      }
    }
    else if (!empty($meeting_title) && !empty($id_treaty)) {
      $q = db_select('node', 'a')->fields('a', array('nid'));
      $q->innerJoin('field_data_field_treaty', 'b', 'a.nid = b.entity_id');
      $q->condition('a.title', $meeting_title);
      $q->condition('b.field_treaty_target_id', $id_treaty);
      $ret = $q->execute()->fetchField();
      if (!$ret) {
        ws_consumer_odata_log('Meeting with title `' . $meeting_title .'` not been found.', MigrationBase::MESSAGE_ERROR);
      }
    }
    return $ret;
  }

  public function validateRow($row) {
    if (!$this->validateEnglishTitle($row)) {
      return FALSE;
    }
    if (!$this->validateTreaty($row)) {
      return FALSE;
    }
    if (empty($row->files)) {
      ws_consumer_odata_log('Decision with id=' . $row->id . ' has no files', MigrationBase::MESSAGE_WARNING);
    }
    return TRUE;
  }

}


class InforMEAODataDecisionsMigrateSource extends InforMEAAbstractODataMigrateSource {

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id' => 'Remote primary key',
      'title' => 'Decision title',
      'title_en' => 'Decision title in English',
      'title_language' => 'Title languages list',
      'treaty' => 'The decision is linked to this treaty',
      'status' => 'Status',
      'type' => 'Type',
      'meetingId' => 'The decision is linked to this meeting entity (sourcedi1)',
      'meetingTitle' => 'Meeting title',
      'meetingUrl' => 'Meeting URL',
      'displayOrder' => 'Decisions display order',
      'number' => 'Number',
      'published' => 'Publication date',
      'files' => 'Decision files',
      'files_language' => 'Files language',
      'content' => 'Body field',
      'content_language' => 'Body field languages',
      'summary' => 'Body summary',
      'link' => 'URL',
      'keywords' => 'InforMEA thesaurus keywords',
      'filename' => 'filename',
      'updated' => 'Updated',
    );
  }
}
