<?php

/**
 * Class DocumentsODataMigration migrate OData contacts
 */
class DocumentsODataMigration extends AbstractODataMigration {

  /**
   * @var ODataConsumerConfig
   */
  protected $config = NULL;

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = sprintf('Import %s from %s', ODataConsumerConfig::$DRUPAL_TYPE_DOCUMENT, $this->config->odata_name);
    $this->source      = new InforMEAODataDocumentsMigrateSource($arguments, $this->config);
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
      ODataConsumerConfig::$DRUPAL_TYPE_DOCUMENT,
      array('language' => 'en', 'text_format' => 'full_html')
    );

    $this->addFieldMapping('field_original_id', 'id');

    $this->addFieldMapping('title', 'title_en');
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('title_field:language', 'title_language');

    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:language', 'description_language');

    $this->addFieldMapping('field_sorting_date', 'published');
    $this->addFieldMapping('field_sorting_date:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('field_last_update', 'updated');
    $this->addFieldMapping('field_last_update:timezone')->defaultValue('Europe/Zurich');
    //    $this->addFieldMapping('changed', 'changed'); - causes entity translation errors

    $this->addFieldMapping('field_treaty', 'treaty');

    $this->addFieldMapping('field_document_type', 'types');
    $this->addFieldMapping('field_document_type:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_document_authors', 'authors');
    $this->addFieldMapping('field_document_authors:source_type')->defaultValue('tid');

    // field_informea_tags uses tags or keywords
    $this->addFieldMapping('field_informea_tags', 'keywords');//prio: tags, keywords
    $this->addFieldMapping('field_informea_tags:source_type')->defaultValue('tid');

//    $this->addFieldMapping('field_document_identifiers', 'identifiers');

    $this->addFieldMapping('field_files', 'files');
    $this->addFieldMapping('field_files:description', 'files');
    $this->addFieldMapping('field_files:language', 'files_language');
    $this->addFieldMapping('field_files:destination_file', 'filename');
    $this->addFieldMapping('field_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    $this->addFieldMapping('field_image', 'thumbnailUrl');
    $this->addFieldMapping('field_image:file_class')->defaultValue('MigrateFileUri');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    $this->addFieldMapping('field_country', 'country');

    //@todo:
//    $this->addFieldMapping('field_document_entity_references', 'referenceToEntities');

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

  function get_odata_tags($row) {
    $consumer = $this->source->getConsumer();
    $tags = [];
    $odata_values = $consumer->loadNavigationProperty($row, 'tags');
    if ($odata_values) {
      foreach($odata_values as $value) { // scope filter ???  scope:brs-programme or scope:brs-term
        $tags[$value->value] = $value->value;
      }
    } else {
      $odata_values = $consumer->loadNavigationProperty($row, 'keywords');
      foreach($odata_values as $value) {
        $tags[$value->literalForm] = $value->literalForm;
      }
    }
    return $tags;
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
    foreach($languages as $key => $language) {
      if ($language == 'ru') {
        $titles[$key] = ODataMigrationUtil::fix_unicode_characters($titles[$key]);
      }
    }
    $row->title = $titles;
    $row->title_language = $languages;
    $all_languages = array_merge($all_languages, $languages);

    // types
    $vdt = taxonomy_vocabulary_machine_name_load('document_type');
    $odata_values = $consumer->loadNavigationProperty($row, 'types');
    $types = array();
    foreach($odata_values as $v) {
      if ($tid = ODataMigrationUtil::getOrCreateTaxonomyTermByName($v->value, $vdt->vid)) {
        $types[] = $tid;
      }
    }
    $row->types = $types;

    // keywords
    $odata_values = $this->get_odata_tags($row);
    $vdk = taxonomy_vocabulary_machine_name_load('thesaurus_informea');
    $keywords = array();

    foreach($odata_values as $value) {
      $terms = thesaurus_get_brs_map_terms($value);
      if ($terms) {
        $tids = array_keys($terms);
        $keywords[] = $tids[0];
      }
    }
    $row->keywords = $keywords;

    // authors
    $vda = taxonomy_vocabulary_machine_name_load('document_author');
    $odata_values = $consumer->loadNavigationProperty($row, 'authors');
    $authors = array();
    foreach($odata_values as $v) {
      if ($tid = ODataMigrationUtil::getOrCreateTaxonomyTermByName($v->value, $vda->vid)) {
        $authors[] = $tid;
      }
    }
    $row->authors = $authors;

    $description = $consumer->loadNavigationProperty($row, 'description');
    list($descriptions, $languages) = ODataMigrationUtil::getSingleValuedMultilingualField($description);
    $row->description = $descriptions;
    $row->description_language = $languages;
    $all_languages = array_merge($all_languages, $languages);
    $files = $consumer->loadNavigationProperty($row, 'files');
    $row->files = array();
    $row->files_language = array();
    $row->filename = array();
    if (!empty($files)) {
      foreach ($files as $file) {
        if (empty($file->url)) {
          ws_consumer_odata_log('Invalid file for Document id=' . $row->id, MigrationBase::MESSAGE_WARNING);
          continue;
        }

        // Filename validation
        $filename = NULL;
        if (!empty($file->filename)) {
          $filename = $file->filename;
        }
        else {
          $filename = ODataMigrationUtil::filenameFromURL($file->url);
        }
        if (empty($filename)) {
          ws_consumer_odata_log('Invalid filename for Document id=' . $row->id . '. File URL: ' . $file->url, MigrationBase::MESSAGE_WARNING);
          continue;
        }

        // File language handling
        if (empty($file->language)) {
          ws_consumer_odata_log('Missing language for file, Document id=' . $row->id . '. File URL: ' . $file->url, MigrationBase::MESSAGE_WARNING);
          continue;
        }
        $language = $file->language;
        $all_languages[] = $language;

        $row->files[] = $file->url;
        $row->filename[] = $filename;
        $row->files_language[] = $language;
      }
    }
    $row->languages = array_unique($all_languages);

    /* Do some data transformation */
    if (!empty($row->published)) {
      $row->published = $this->fixDateValue($row->published);
    }
    $row->treaty = $this->getTreatyByODataIdentifier($row->treaty)->nid;
    $row->filename = array();
    foreach ($row->files as $file) {
      if ($filename = $this->extractFilenameFromURL($file)) {
        $row->filename[] = $filename;
      }
    }

    $this->truncateFields($row, ['title_en', 'title']);

    return $this->validateRow($row);
  }

  public function validateRow($row) {
    if (!$this->validateEnglishTitle($row)) {
      return FALSE;
    }
    if (!$this->validateTreaty($row)) {
      return FALSE;
    }
    if (empty($row->files)) {
      ws_consumer_odata_log('Document with id=' . $row->id . ' has no files', MigrationBase::MESSAGE_WARNING);
    }
    return TRUE;
  }
}


class InforMEAODataDocumentsMigrateSource extends InforMEAAbstractODataMigrateSource {

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id' => 'Remote primary key',
      'title' => 'Document title',
      'title_en' => 'Document title in English',
      'title_language' => 'Title languages list',
      'published' => 'Publication date',
      'thumbnailUrl' => 'URL to document thumbnail/cover page',
      'treaty' => 'The document is linked to this treaty',
      'updated' => 'Last update date',
      'country' => 'Country',
      'displayOrder' => 'Decisions display order',
      'authors' => 'Document authors',
      'description' => 'Document description',
      'description_language' => 'Document description languages',
      'files' => 'Document files',
      'files_language' => 'Document files languages',
      'identifiers' => 'Document identifiers',
      'keywords' => 'InforMEA thesaurus keywords',
      'referenceToEntities' => 'Reference to othe entities',
      'tags' => 'Other specific tags',
      'types' => 'Document type',
    );
  }
}
