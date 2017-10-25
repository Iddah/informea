<?php

class EcolexLiteratureMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'litId' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Entity original ID from the Ecolex',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new EcolexLiteratureMigrateSource($arguments['source_url_pattern']);
    $this->destination = new MigrateDestinationNode('literature');

    $this->addFieldMapping('field_alternative_record_id', 'id');
    $this->addFieldMapping('field_original_id', 'litId');
    $this->addFieldMapping('title', 'litLongTitle_en');

    $this->addFieldMapping('field_date_of_entry', 'litEntryDate');
    $this->addFieldMapping('field_date_of_entry:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_date_of_modification', 'updatedDate');
    $this->addFieldMapping('field_date_of_modification:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('field_author', 'litAuthor');
    $this->addFieldMapping('field_literature_paper_title', 'litPaperTitleOfText_en');
    $this->addFieldMapping('field_literature_call_number', 'litCallNo');
    //Field validation error for field_isbn: ISBN: this field cannot hold more than 1 values.
    $this->addFieldMapping('field_isbn', 'litISBN');
    $this->addFieldMapping('field_publisher', 'litPublisher');
    $this->addFieldMapping('field_publication_place', 'litPublPlace');
    $this->addFieldMapping('field_literature_serial_title', 'litSerialTitle');
    $this->addFieldMapping('field_volume_no', 'litVolumeNo');
    $this->addFieldMapping('field_collation', 'litCollation');

    $this->addFieldMapping('field_full_text_url', 'litLinkToFullText');


    $this->addFieldMapping('field_sorting_date', 'litYearOfText');
    $this->addFieldMapping('field_sorting_date:timezone')->defaultValue('Europe/Zurich');

    // Taxonomy
    $this->addFieldMapping('field_data_source', 'litDataSource');
    $this->addFieldMapping('field_data_source:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_territorial_subdivision', 'litTerritorialSubdivision_en');
    $this->addFieldMapping('field_territorial_subdivision:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_literature_type', 'litTypeOfText_en');
    $this->addFieldMapping('field_literature_type:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_ecolex_tags', 'litSubject_en');
    $this->addFieldMapping('field_ecolex_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_geographical_scope', 'litScope_en');
    $this->addFieldMapping('field_geographical_scope:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_region', 'litRegion_en');
    $this->addFieldMapping('field_region:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_ecolex_keywords', 'docKeyword_en');
    $this->addFieldMapping('field_ecolex_keywords:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_informea_tags', 'leoKeywords');
    $this->addFieldMapping('field_informea_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_informea_tags:create_term')->defaultValue(FALSE);

    // Entity Reference
    $this->addFieldMapping('field_country', 'litCountry_en');
    $this->addFieldMapping('field_related_literature', 'litRelatedMonograph');
    $this->addFieldMapping('field_treaty', 'litTreatyReference');

    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('language')->defaultValue('en');

    $this->addFieldMapping('field_ecolex_url', 'ecolex_url');
    $this->addFieldMapping('field_ecolex_url:title')->defaultValue('ECOLEX');

    $this->addUnmigratedSources(array());
    $this->addUnmigratedDestinations(array(
      'field_isis_number',
      'field_author_institution',
      'field_organizations',
      'field_informea_tags:ignore_case',

      'field_url:title', 'field_url:attributes', 'field_url:language',
      'field_sorting_date:rrule', 'field_sorting_date:to',
      'field_date_of_entry:rrule', 'field_date_of_entry:to',
      'field_date_of_modification:rrule', 'field_date_of_modification:to',
      'field_ecolex_tags:create_term', 'field_ecolex_tags:ignore_case',
      'field_geographical_scope:create_term', 'field_geographical_scope:ignore_case',
      'field_literature_type:create_term', 'field_literature_type:ignore_case',
      'field_region:create_term', 'field_region:ignore_case',
      'field_territorial_subdivision:create_term', 'field_territorial_subdivision:ignore_case',
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
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (!$row->slug) {
      return false; // ignore already synced file
    }

    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litPaperTitleOfText_en;
    }
    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litPaperTitleOfText_other;
    }
    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litLongTitle_other;
    }
    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litLongTitle_es;
    }
    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litLongTitle_fr;
    }

    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litPaperTitleOfText_fr;
    }

    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litPaperTitleOfText_es;
    }
    if (empty($row->litLongTitle_en)) {
      $row->litLongTitle_en = $row->litId;
    }

    $row->litDateOfModification = substr($row->litDateOfModification, 0, 10);
    $row->updatedDate = substr($row->updatedDate, 0, 10);

    if (!empty($row->litYearOfText) && strlen($row->litYearOfText) == 4) {
      $row->litYearOfText = $row->litYearOfText . '-01-01';
    }

    if (!empty($row->litRegion_en)) {
      if (is_string($row->litRegion_en)) {
        $row->litRegion_en = country_map_region($row->litRegion_en);
      }
      else if (is_array($row->litRegion_en)) {
        $regions = array();
        foreach ($row->litRegion_en as &$region) {
          if ($region = country_map_region($region)) {
            $regions[] = $region;
          }
        }
        $row->litRegion_en = $regions;
      }
    }

    $row->ecolex_url = 'http://www.ecolex.org/literature/details/' . $row->litId;

    // Taxonomies
    // Map ECOLEX keywords to LEO
    $row->leoKeywords = ThesaurusMapping::mapEcolexTermToLEOMultiple($row->docKeyword_en);
    $row->litDataSource = 'ECOLEX';
    $this->prepare_term_reference_field($row, 'litDataSource', 'data_source');
    $this->prepare_term_reference_field_multilingual($row, 'litTerritorialSubdivision', 'territorial_subdivision');
    $this->prepare_term_reference_field_multilingual($row, 'litTypeOfText', 'literature_type');
    $this->prepare_term_reference_field_multilingual($row, 'litSubject',    'ecolex_subjects');
    $this->prepare_term_reference_field_multilingual($row, 'litScope',      'geographical_scope');
    $this->prepare_term_reference_field_multilingual($row, 'litRegion',     'geographical_region');
    $this->prepare_term_reference_field_multilingual($row, 'docKeyword', 'thesaurus_ecolex');

    //Entity Reference
    if ($row->litCountry_en) {
      $row->litCountry_en = $this->country_load_by_name($row->litCountry_en);
      if (!$row->litCountry_en) {
        $row->litCountry_en = NULL;
      }
    }
    if (!empty($row->litRelatedMonograph)) {
      if (!is_array($row->litRelatedMonograph)){
        $row->litRelatedMonograph = [$row->litRelatedMonograph];
      }
      foreach($row->litRelatedMonograph as $faolexId) {
        if ($nid = ecolex_literature_load_nid_by_faolexid($faolexId)) {
          $row->litRelatedMonograph[] = $nid;
        }
        else {
          watchdog('ecolex_migration', 'faolexid [litRelatedMonograph] @faolexId not found', array('@faolexId' => $faolexId), WATCHDOG_WARNING);
        }
      }
    }
    if (!empty($row->litTreatyReference)) {
      foreach($row->litTreatyReference as $faolexId) {
        if ($nid = ecolex_treaty_load_nid_by_faolexid($faolexId)) {
          $row->litTreatyReference[] = $nid;
        }
        else {
          watchdog('ecolex_migration', 'faolexid [litTreatyReference] @faolexId not found', array('@faolexId' => $faolexId), WATCHDOG_WARNING);
        }
      }
    }

    return $this->validateRow($row);
  }

  public function country_load_by_name($name) {
    static $list = [];
    if (!$list) {
      $list = country_get_list();
      $list = array_flip($list);
      $list = array_change_key_case($list, CASE_LOWER);
    }
    return @$list[strtolower($name)];
  }

  public function validateRow($row) {
    return !empty($row->litLongTitle_en);
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
      foreach ($row->{$field_name} as $delta => $term_name) {
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
      foreach ($row->{$field_name_base . '_en'} as $delta => $term_name) {
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


class EcolexLiteratureMigrateSource extends MigrateSource {

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

  public function __construct($source_url_pattern) {
    parent::__construct(array());
    $this->url_pattern = $source_url_pattern;
    $this->check_modify_date = variable_get('ecolex_literature_check_modify_date', FALSE);
    $this->updated_after = 0;
    if ($this->check_modify_date) {
      $this->updated_after = date('Ymd', strtotime('-10 days'));
      $this->url_pattern .= '&updated_after=' . $this->updated_after;
    }
    $this->log_detail = variable_get('ecolex_literature_log_detail', FALSE);
  }

  public function __toString() {
    return sprintf('Extract literature from ECOLEX Solr');
  }

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id' => 'Primary Key',
      'litId' => 'FAOLEX Identifier',
      'litLongTitle_en' => 'Full title',
      'litPaperTitleOfText_en' => 'Literature Paper Title Of Text',
      'litText' => 'Literature Text',
      'litAuthor' => 'Literature Author',
      'litCallNo' => 'Literature Call No',
      'litPublisher' => 'Literature Publisher',
      'litSubject_en' => 'Literature Subject',
      'litTypeOfText_en' => 'Literature Type Of Text',
      'litTerritorialSubdivision_en' => 'Literature Territorial Subdivision',
      'litCollation' => 'Literature Collation',
      'litCountry_en' => 'Literature Country',
      'litEntryDate' => 'Literature Entry Date',
      'litScope_en' => 'Literature Scope',
      'litISBN' => 'Literature ISBN',
      'litSerialTitle' => 'Literature Serial Title',
      'litPublPlace' => 'Literature Publ Place',
      'litRegion_en' => 'Literature Region',
      'litRelatedMonograph' => 'Literature Related Monograph',
      'litYearOfText' => 'Literature Year Of Text',
      'litTreatyReference' => 'Literature Treaty Reference',
      'litRelatedWebSite' => 'Literature RelatedWeb Site',
      'litVolumeNo' => 'Literature Volume No',
      'docKeyword_en' => 'ECOLEX keywords',
      'updatedDate' => 'Updated Date',
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
    $q = db_select('migrate_map_ecolex_literature', 'm')
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
      $start = $this->currentPage * $this->pagination;

      $destination = 'temporary://ecolex_literature/' . $this->pagination . '-' . $start. '-' . $this->updated_after . '.json';
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
          $this->found_rows = count($json); // before filter

          $mig_data = [];

          if ($this->check_modify_date) {
            $source_ids = [];
            foreach($json as $row) {
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
            $obj->litId = $row->docId;

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
        $destination = 'temporary://ecolex_literature/'.$item->docId . '.json';
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
