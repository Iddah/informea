<?php

class EcolexLegislationMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'legId' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Entity original ID from the Ecolex',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new EcolexLegislationMigrateSource($arguments['source_url_pattern']);
    $this->destination = new MigrateDestinationNode('legislation');

    // language
    $this->addFieldMapping('field_alternative_record_id', 'id');
    $this->addFieldMapping('field_original_id', 'legId');
    $this->addFieldMapping('field_faolex_id', 'legId');

    $this->addFieldMapping('field_sorting_date', 'legYear');
    $this->addFieldMapping('field_sorting_date:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('field_date_of_original_text', 'legOriginalYear');
    $this->addFieldMapping('field_date_of_original_text:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('field_type_of_text', 'legType_en');
    $this->addFieldMapping('field_type_of_text:source_type')->defaultValue('tid');

    $this->addFieldMapping('title', 'legTitle');
    $this->addFieldMapping('field_title_abbreviation', 'legLongTitle');
    $this->addFieldMapping('body', 'legAbstract');
    $this->addFieldMapping('field_country', 'legCountry_iso');
    $this->addFieldMapping('field_entry_into_force_notes', 'legEntryIntoForce');

    $this->addFieldMapping('field_ecolex_region', 'legGeoArea_en');
    $this->addFieldMapping('field_ecolex_region:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_files', 'legLinkToFullText');
    $this->addFieldMapping('field_files:description', 'legLinkToFullText');
    $this->addFieldMapping('field_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    $this->addFieldMapping('field_url', 'legRelatedWebSite');

    $this->addFieldMapping('field_ecolex_legislation_status', 'legStatus');
    $this->addFieldMapping('field_ecolex_legislation_status:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_ecolex_tags', 'legSubject_en');
    $this->addFieldMapping('field_ecolex_tags:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_territorial_subdivision', 'legTerritorialSubdivision');
    $this->addFieldMapping('field_territorial_subdivision:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_amends', 'legAmends');
    $this->addFieldMapping('field_implements', 'legImplement');
    $this->addFieldMapping('field_repeals', 'legRepeals');

    $this->addFieldMapping('field_ecolex_keywords', 'docKeyword_en');
    $this->addFieldMapping('field_ecolex_keywords:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_date_of_modification', 'updatedDate');
    $this->addFieldMapping('field_date_of_modification:timezone')->defaultValue('Europe/Zurich');


    $this->addFieldMapping('field_data_source', 'legDataSource');
    $this->addFieldMapping('field_data_source:source_type')->defaultValue('tid');
    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('language')->defaultValue('en');

    $this->addFieldMapping('field_date_of_entry', 'legEntryDate');
    $this->addFieldMapping('field_date_of_entry:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_ecolex_url', 'ecolex_url');
    $this->addFieldMapping('field_faolex_url', 'faolex_url');

    $this->addFieldMapping('field_ecolex_url:title')->defaultValue('ECOLEX');

    $this->addFieldMapping('field_informea_tags', 'leoKeywords');
    $this->addFieldMapping('field_informea_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_informea_tags:create_term')->defaultValue(FALSE);

    $this->addUnmigratedSources(array());
    $this->addUnmigratedDestinations(array(
      'nid', 'created', 'changed', 'log', 'tnid', 'translate', 'revision_uid', 'path',
      'is_new', 'body:summary', 'body:format', 'body:language',

      'metatag_title', 'metatag_description', 'metatag_abstract', 'metatag_keywords',
      'metatag_robots', 'metatag_news_keywords', 'metatag_standout', 'metatag_rating',
      'metatag_referrer', 'metatag_generator', 'metatag_rights', 'metatag_image_src',
      'metatag_canonical', 'metatag_shortlink', 'metatag_publisher', 'metatag_author',
      'metatag_original-source', 'metatag_prev', 'metatag_next', 'metatag_content-language',
      'metatag_geo.position', 'metatag_geo.placename', 'metatag_geo.region',
      'metatag_icbm', 'metatag_refresh', 'metatag_revisit-after', 'metatag_pragma',
      'metatag_cache-control', 'metatag_expires',

      'field_sorting_date:to', 'field_sorting_date:rrule',
      'field_abstract','field_abstract:language',
      'field_date_of_original_text:rrule',
      'field_date_of_original_text:to',

      //term
      'field_ecolex_tags:create_term', 'field_ecolex_tags:ignore_case',
      'field_type_of_text:create_term', 'field_type_of_text:ignore_case',
      'field_territorial_subdivision:create_term', 'field_territorial_subdivision:ignore_case',
      'field_ecolex_region:create_term', 'field_ecolex_region:ignore_case',
      'field_ecolex_legislation_status:create_term', 'field_ecolex_legislation_status:ignore_case',
      'field_ecolex_keywords:create_term', 'field_ecolex_keywords:ignore_case',
      // empty term
      'field_sub_file_code', 'field_sub_file_code:source_type', 'field_sub_file_code:create_term', 'field_sub_file_code:ignore_case',
      'field_informea_tags:ignore_case',
      'field_region', 'field_region:source_type', 'field_region:create_term', 'field_region:ignore_case',
      'field_data_source:create_term', 'field_data_source:ignore_case',
      'field_keywords', 'field_keywords:source_type', 'field_keywords:create_term', 'field_keywords:ignore_case',
      'field_emerging_terms','field_emerging_terms:source_type', 'field_emerging_terms:create_term', 'field_emerging_terms:ignore_case',

      'field_url:title', 'field_url:attributes', 'field_url:language',

      'field_date_of_entry:rrule', 'field_date_of_entry:to',
      'field_date_of_modification:rrule', 'field_date_of_modification:to',

      'field_internet_reference_url', 'field_internet_reference_url:title',
      'field_internet_reference_url:attributes', 'field_internet_reference_url:language',
      'field_notes',
      'field_reference_number',
      'field_repealed',
      'field_serial_imprint',

      'field_files:file_class', 'field_files:language', 'field_files:preserve_files', 'field_files:destination_dir', 'field_files:destination_file',
      'field_files:source_dir', 'field_files:urlencode', 'field_files:display',
      'field_title_abbreviation:language',
      'field_avaiable_web_site', 'field_avaiable_web_site:title',
      'field_avaiable_web_site:attributes', 'field_avaiable_web_site:language',
      'field_date_of_consolidation', 'field_date_of_consolidation:timezone',
      'field_date_of_consolidation:rrule', 'field_date_of_consolidation:to',
      'field_isis_number',
      'field_ecolex_url:attributes', 'field_ecolex_url:language',
      'field_faolex_url:attributes', 'field_faolex_url:language',
      'field_source_language',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (!$row->slug) {
      return false; // ignore already synced file
    }

    $row->legAbstract = ODataMigrationUtil::fix_unicode_characters($row->legAbstract);
    $row->updatedDate = substr($row->updatedDate, 0, 10);

    if (!empty($row->legYear) && strlen($row->legYear) == 4) {
      $row->legYear = $row->legYear . '-01-01';
    }
    if (!empty($row->legOriginalYear) && strlen($row->legOriginalYear) == 4) {
      $row->legOriginalYear = $row->legOriginalYear . '-01-01';
    }

    $row->ecolex_url = 'http://www.ecolex.org/legislation/details/' . $row->legId;
    $row->faolex_url = 'http://www.fao.org/faolex/results/details/en/?details=' . $row->legId;

    // Taxonomies
    // Map ECOLEX keywords to LEO
    $row->leoKeywords = ThesaurusMapping::mapEcolexTermToLEOMultiple($row->docKeyword_en);
    $row->legDataSource = 'FAOLEX';
    $this->prepare_term_reference_field($row, 'legDataSource', 'data_source');
    $this->prepare_term_reference_field_multilingual($row, 'legType', 'type_of_text');
    $this->prepare_term_reference_field_multilingual($row, 'legGeoArea', 'ecolex_region');
    $this->prepare_term_reference_field_multilingual($row, 'legSubject', 'ecolex_subjects');
    $this->prepare_term_reference_field_multilingual($row, 'docKeyword', 'thesaurus_ecolex');
    $this->prepare_term_reference_field($row, 'legStatus', 'ecolex_legislation_status');
    $this->prepare_term_reference_field($row, 'legTerritorialSubdivision', 'territorial_subdivision');

    // Entity references
    if ($country = country_load_by_iso($row->legCountry_iso)) {
      $row->legCountry_iso = $country->nid;
    }
    else {
      $row->legCountry_iso = NULL;
    }

    if (!empty($row->legAmends)) {
      $values = array();
      foreach($row->legAmends as $faolexId) {
        if ($nid = ecolex_legislation_load_nid_by_faolexid($faolexId)) {
          $values[] = $nid;
        }
      }
      $row->legAmends = $values;
    }

    if (!empty($row->legImplement)) {
      $values = array();
      foreach($row->legImplement as $faolexId) {
        if ($nid = ecolex_legislation_load_nid_by_faolexid($faolexId)) {
          $values[] = $nid;
        }
      }
      $row->legImplement = $values;
    }

    if (!empty($row->legRepeals)) {
      $values = array();
      foreach($row->legRepeals as $faolexId) {
        if ($nid = ecolex_legislation_load_nid_by_faolexid($faolexId)) {
          $values[] = $nid;
        }
      }
      $row->legRepeals = $values;
    }

    return $this->validateRow($row);
  }

  public function validateRow($row) {
    return !empty($row->legTitle);
  }

  /**
   * Map the term names with the existing terms tids.
   * If the vocabulary doesn't contain a term with that name, it will be created.
   *
   * @param $row
   *  Current migration row.
   * @param $field_name
   *  Name of the source field.
   * @param $data
   *  An array containing the terms. Each item needs to be an associative array
   * containing:
   *  - name: original term name
   *  - translations: an array containing language => translation pairs.
   * @param $vocabulary
   *  Vocabulary machine name.
   */
  public function prepare_term_reference_field(&$row, $field_name, $vocabulary) {
    if (empty($row->{$field_name})) {
      return;
    }
    else if (is_array($row->{$field_name})) {
      $tids = array();
      foreach ($row->{$field_name} as $term_name) {
        if ($term = taxonomy_get_term_by_name($term_name, $vocabulary)) {
          $tids[] = reset($term)->tid;
        }
        else {
          $tids[] = ecolex_migration_create_taxonomy_term($term_name, $vocabulary, array());
        }
      }
      $row->{$field_name} = $tids;
    } else {
      // Handle single-valued fields
      $term_name = $row->{$field_name};
      if ($term = taxonomy_get_term_by_name($term_name, $vocabulary)) {
        $row->{$field_name} = reset($term)->tid;
      }
      else {
        $row->{$field_name} = ecolex_migration_create_taxonomy_term($term_name, $vocabulary, array());
      }
    }
  }


  /**
   * Map the term names with the existing terms tids.
   * If the vocabulary doesn't contain a term with that name, it will be ignored.
   *
   * @param $row
   *  Current migration row.
   * @param $field_name_base
   *  Name of the source field.
   *
   * @param $vocabulary
   *  Vocabulary machine name.
   */
  function prepare_term_reference_field_multilingual(&$row, $field_name_base, $vocabulary) {
    if (empty($row->{$field_name_base . '_en'})) {
      return;
    }
    else if (is_array($row->{$field_name_base . '_en'})) {
      $tids = array();
      foreach ($row->{$field_name_base . '_en'} as $term_name) {
        if ($term = taxonomy_get_term_by_name($term_name, $vocabulary)) {
          $tids[] = reset($term)->tid;
        }
      }
      $row->{$field_name_base . '_en'} = $tids;
    } else {
      // Handle single-valued fields
      $term_name = $row->{$field_name_base . '_en'};
      if ($term = taxonomy_get_term_by_name($term_name, $vocabulary)) {
        $row->{$field_name_base . '_en'} = reset($term)->tid;
      }
    }
  }
}


class EcolexLegislationMigrateSource extends MigrateSource {

  private $url_pattern = NULL;

  public $check_modify_date = TRUE;
  public $found_rows = 0;
  public $fetched_rows = 0;
  public $log_detail;
  public $totalCount = 0;
  public $currentCount = 0;
  public $currentPage = 0;
  public $pagination = 1000;
  protected $data = array();

  public $per_migration_limit = 20000;
  public $current_page = 0;
  public $enable_partly_import = FALSE;

  public function __construct($source_url_pattern) {
    parent::__construct(array());
    $this->enable_partly_import = variable_get('ecolex_legislation_enable_partly_import', FALSE);
    $this->per_migration_limit = variable_get('ecolex_legislation_migration_limit', 20000);

    //$this->url_pattern = $source_url_pattern; - because of cache
    $this->url_pattern = 'http://www.ecolex.org/export/?type=legislation&format=json'; // todo cache
    $this->check_modify_date = variable_get('ecolex_legislation_check_modify_date', FALSE);
    $this->updated_after = 0;
    if ($this->check_modify_date) {
      $this->updated_after = date('Ymd', strtotime('-10 days'));
      $this->url_pattern .= '&updated_after=' . $this->updated_after;
    }
    $this->log_detail = variable_get('ecolex_legislation_log_detail', FALSE);
  }

  public function __toString() {
    return sprintf('Extract legislation from ECOLEX Solr');
  }

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id'                       => 'Primary Key',
      'legId'                    => 'FAOLEX Identifier',
      'legYear'                  => 'Date of text',
      'legOriginalYear'          => 'Consolidation date',
      'legType_en'               => 'Type of document (Legisation, Regulation, Miscellaneous)',
      'legTitle'                 => 'Short title',
      'legLongTitle'             => 'Full title',
      'legAbstract'              => 'Abstract',
      'legCountry_iso'           => 'Country ISO code',
      'legEntryIntoForce'        => 'Notes about enter into force',
      'legGeoArea_en'            => 'Geographical area, multivalued',
      'legLinkToFullText'        => 'Link to document file',
      'legRelatedWebSite'        => 'Related website',
      'legSource'                => 'Source of the data input (ie. scanned copy)',
      'legStatus'                => 'Status (i.e. in force)',
      'legSubject_en'            => 'ECOLEX subject',
      'legTerritorialSubdivision' => 'Territorial subdivision',
      'legAmends'                => 'IDs of the amended legislation',
      'legImplement'             => 'IDs of the implemented legislation',
      'legRepeals'               => 'IDs of the repealed legislation',
      'docKeyword_en'            => 'Tagging keywords',
      'ecolex_url'                  => 'Link to ECOLEX',
      'faolex_url'                  => 'Link to FAOLEX',
      'leoKeywords' => 'LEO tags computed from VocBench mappings to LEO',
    );
  }


  /**
   * Return the number of available source records.
   */
  public function computeCount() {
    if ($str = ecolex_migration_http_request($this->url_pattern . '&count=yes')) {
      if ($json = json_decode($str)) {
        $this->totalCount = $json->count;
      }
    }
    if ($this->totalCount && $this->enable_partly_import && $this->totalCount > $this->per_migration_limit) {
      echo 'total count = ' . $this->totalCount . "\n";
      $this->current_page = variable_get('ecolex_legislation_current_page', 0);
      $pages = ceil($this->totalCount / $this->per_migration_limit);
      // reset loop check
      if ($this->current_page >= $pages) {
        $this->current_page = 0;
      }

      if ($this->per_migration_limit * ($this->current_page + 1) > $this->totalCount) {
        $this->totalCount -= $this->per_migration_limit * $this->current_page;
      } else {
        $this->totalCount = $this->per_migration_limit;
      }
      echo 'limit = ' . $this->per_migration_limit. "\n";
      echo 'pages = ' . $pages . "\n";
      echo 'curr page = ' . $this->current_page . "\n";
      echo 'rows per migration = ' . $this->totalCount . "\n";
      variable_set('ecolex_legislation_current_page', $this->current_page + 1);
    }
    return $this->totalCount;
  }

  /**
   * Do whatever needs to be done to start a fresh traversal of the source data.
   *
   * This is always called at the start of an import, so tasks such as opening
   * file handles, running queries, and so on should be performed here.
   */
  public function performRewind() {
    $this->data = array();
    $this->found_rows = 0;
    $this->currentPage = 0;
    $this->currentCount = 0;
    $this->fetched_rows = 0;
    $this->computeCount();
    ecolex_migration_log(
      sprintf("Check using modification date: %s", $this->check_modify_date ? 'YES' : 'NO'),
      MigrationBase::MESSAGE_INFORMATIONAL
    );
    if ($this->log_detail) {
      ecolex_migration_log("Detailed logging enabled", MigrationBase::MESSAGE_WARNING);
    }
  }

  public function getDatesOfModification($sourceid1) {
    $op = is_array($sourceid1) ? 'IN' : '=';
    $q = db_select('migrate_map_ecolex_legislation', 'm')
      ->fields('m', array('sourceid1'))
      ->condition('m.sourceid1', $sourceid1, $op);

    $q->leftJoin('field_data_field_date_of_modification', 'dm', 'dm.entity_id = m.destid1');
    $q->fields('dm', array('field_date_of_modification_value'));

    return $q->execute()->fetchAllKeyed();
  }

  public function getData() {
    $next_call_count = $this->currentPage * $this->pagination;
    if ($this->currentCount == $this->totalCount) {
      return NULL;
    }
    $this->found_rows = 0;
    if ($this->currentCount == $next_call_count && $next_call_count < $this->totalCount) {
      $start = $this->currentPage * $this->pagination + $this->per_migration_limit * $this->current_page;

      $destination = 'temporary://ecolex_legislation/' . $this->pagination . '-' . $start. '-' . $this->updated_after . '.json';
      file_prepare_directory(dirname($destination), FILE_CREATE_DIRECTORY);
      $detail_filename = drupal_realpath($destination);
      $str = '';
      if (file_exists($detail_filename) && $this->log_detail) {
        $str = file_get_contents($detail_filename);
      }
      if (!$str) {
        $str = ecolex_migration_http_request($this->url_pattern . '&rows=' . $this->pagination . '&start=' . $start, array('Accept' => 'application/json'));
        if ($this->log_detail && $str) {
          if (!file_exists($detail_filename)) {
            file_put_contents($detail_filename, $str);
          }
        }
      }
      if ($str) {
        if ($json = json_decode($str)) {
          // Before filter.
          $this->found_rows = count($json);

          $mig_data = [];

          if ($this->check_modify_date) {
            $source_ids = [];
            foreach ($json as $row) {
              $source_ids[] = $row->docId;
            }
            if ($source_ids) {
              $mig_data = $this->getDatesOfModification($source_ids);
            }
          }

          foreach($json as $row) { // exclude the same updated Date rows
            if (!isset($mig_data[$row->docId])) { // new item
              $this->data[] = $row;
              continue;
            }
            if (substr($mig_data[$row->docId], 0, 10) != substr($row->updatedDate, 0, 10)) {
              $this->data[] = $row;
              continue;
            }
            $obj = new stdClass();
            $obj->url = '';
            $obj->slug = '';
            $obj->legId = $row->docId;

            $this->data[] = $obj;
          }
          $this->currentPage++;
        }
      }
    }
    if (!$this->data && $this->found_rows) {
      $this->getData();
    }
  }

  public function getItem() {
    $item = NULL;
    if (count($this->data)) {
      $item = current($this->data);
      next($this->data);
      $this->currentCount++;
      if (!$item) {
        $this->currentCount--;
        return NULL;
      }

      if ($item->url) {
        $destination = 'temporary://ecolex_legislation/'.$item->docId . '.json';
        $detail_filename = drupal_realpath($destination);
        $str = '';
        if (file_exists($detail_filename) && $this->log_detail) {
          $str = file_get_contents($detail_filename);
        }
        else {
          $str = ecolex_migration_http_request($item->url, array('Accept' => 'application/json') );
        }
        if ($this->log_detail && $str) {
          if (!file_exists($detail_filename)) {
            if (file_prepare_directory(dirname($destination), FILE_CREATE_DIRECTORY)) {
              file_put_contents($detail_filename, $str);
            }
          }
        }
        $json = json_decode($str);
        if ($json) {
          $item = $json[0];
        }
      }
    }
    return $item;
  }

  /**
   * Fetch the next row of data, returning it as an object.
   *
   * @return object
   *   FALSE data as stdClass, FALSE when there is no more data available.
   */
  public function getNextRow() {
    $item = $this->getItem();
    if (!$item) {
      $this->getData();
      $item = $this->getItem();
      if (!$item) {
        return FALSE;
      }
    }
    if ($item) {
      if ($item->slug) {
    $this->fetched_rows++;
      }
    }

    return $item;
  }
}
