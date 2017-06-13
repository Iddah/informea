<?php

class EcolexTreatyMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'docId' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Entity original ID from the Ecolex',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new EcolexTreatyMigrateSource($arguments['source_url_pattern']);
    $this->destination = new MigrateDestinationNode('treaty');

    $this->addFieldMapping('field_alternative_record_id', 'id');
    $this->addFieldMapping('field_original_id', 'docId');
    $this->addFieldMapping('title', 'trTitleOfText_en');
    $this->addFieldMapping('field_official_name', 'trTitleAbbreviation');

    $this->addFieldMapping('field_date_of_modification', 'updatedDate');
    $this->addFieldMapping('field_date_of_modification:timezone')->defaultValue('Europe/Zurich');

    $this->addFieldMapping('field_date_of_entry', 'trDateOfEntry');
    $this->addFieldMapping('field_date_of_entry:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_place_of_adoption', 'trPlaceOfAdoption');

    $this->addFieldMapping('field_obsolete', 'trObsolete');

    $this->addFieldMapping('field_related_website', 'trRelatedWebSite');
    $this->addFieldMapping('field_available_in', 'trAvailableIn');
    $this->addFieldMapping('field_abstract', 'trAbstract_en');

    $this->addFieldMapping('field_entry_into_force', 'trEntryIntoForceDate');
    $this->addFieldMapping('field_entry_into_force:timezone')->defaultValue('Europe/Zurich');

    // Entity Reference
    $this->addFieldMapping('field_country', 'trCountry_en');
    $this->addFieldMapping('field_amends_treaty', 'trAmendsTreaty');

    // Taxonomy
    $this->addFieldMapping('field_data_source', 'trDataSource');
    $this->addFieldMapping('field_data_source:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_jurisdiction', 'trJurisdiction_en');
    $this->addFieldMapping('field_jurisdiction:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_field_of_application', 'trFieldOfApplication_en');
    $this->addFieldMapping('field_field_of_application:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_region', 'trRegion_en');
    $this->addFieldMapping('field_region:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_ecolex_tags', 'trSubject_en');
    $this->addFieldMapping('field_ecolex_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_type_of_text', 'trTypeOfText_en');
    $this->addFieldMapping('field_type_of_text:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_ecolex_keywords', 'docKeyword_en');
    $this->addFieldMapping('field_ecolex_keywords:source_type')->defaultValue('tid');

    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);
    $this->addFieldMapping('language')->defaultValue('en');

    $this->addFieldMapping('field_ecolex_url', 'ecolex_url');
    $this->addFieldMapping('field_ecolex_url:title')->defaultValue('ECOLEX');

    $this->addFieldMapping('field_informea_tags', 'leoKeywords');
    $this->addFieldMapping('field_informea_tags:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_informea_tags:create_term')->defaultValue(FALSE);

    $this->addUnmigratedSources(array());
    $this->addUnmigratedDestinations(array(
      'nid', 'created', 'changed', 'log', 'tnid', 'translate', 'revision_uid', 'path',
      'is_new', 'body', 'body:summary', 'body:format', 'body:language',

      'field_abstract:language',
      'field_official_name:language',
      'field_title_abbreviation', 'field_title_abbreviation:language',
      'field_internet_reference', 'field_internet_reference:language',

      //title_field, title_field:language, pathauto

      'field_number_of_pages',
      'field_odata_identifier',
      'field_parent_treaty',
      'field_primary',
      'field_sorting_order',
      'field_official_publication',
      'field_treaty_article',
      'field_treaty_article_paragraph',
      'field_user_owners',
      'field_cited_treaties',
      'field_depositary',
      'field_is_protocol',
      'field_has_api_action_plans',
      'field_has_api_decisions',
      'field_has_api_national_reports',
      'field_treaty_has_parties_from_un',

      // empty file
      'field_logo', 'field_logo:file_class', 'field_logo:language', 'field_logo:preserve_files',
      'field_logo:destination_dir', 'field_logo:destination_file', 'field_logo:file_replace', 'field_logo:source_dir',
      'field_logo:urlencode', 'field_logo:alt', 'field_logo:title',

      // date
      'field_date_of_entry:rrule', 'field_date_of_entry:to',
      'field_date_of_modification:rrule', 'field_date_of_modification:to',
      'field_entry_into_force:rrule', 'field_entry_into_force:to',
      // empty date
      'field_sorting_date', 'field_sorting_date:timezone', 'field_sorting_date:rrule', 'field_sorting_date:to',

      // term
      'field_ecolex_tags:create_term', 'field_ecolex_tags:ignore_case',
      'field_region:create_term', 'field_region:ignore_case',
      'field_field_of_application:create_term', 'field_field_of_application:ignore_case',
      'field_jurisdiction:create_term', 'field_jurisdiction:ignore_case',
      'field_type_of_text:create_term', 'field_type_of_text:ignore_case',
      'field_data_source:create_term', 'field_data_source:ignore_case',
      // empty term
      'field_primary_topic', 'field_primary_topic:source_type', 'field_primary_topic:create_term', 'field_primary_topic:ignore_case',
      'field_secondary_topic', 'field_secondary_topic:source_type', 'field_secondary_topic:create_term', 'field_secondary_topic:ignore_case',
      'field_informea_tags:ignore_case',
      'field_mea_topic', 'field_mea_topic:source_type', 'field_mea_topic:create_term', 'field_mea_topic:ignore_case',

      // links
      'field_ratification_xml_url', 'field_ratification_xml_url:title', 'field_ratification_xml_url:attributes', 'field_ratification_xml_url:language',
      'field_treaty_parties_url', 'field_treaty_parties_url:title', 'field_treaty_parties_url:attributes', 'field_treaty_parties_url:language',
      'field_treaty_text_url', 'field_treaty_text_url:title', 'field_treaty_text_url:attributes', 'field_treaty_text_url:language',
      'field_treaty_website_url', 'field_treaty_website_url:title', 'field_treaty_website_url:attributes', 'field_treaty_website_url:language',
      'field_related_url', 'field_related_url:title', 'field_related_url:attributes', 'field_related_url:language',
      'field_online_course_link', 'field_online_course_link:title', 'field_online_course_link:attributes', 'field_online_course_link:language',
      'field_un_treaty_database_link', 'field_un_treaty_database_link:title', 'field_un_treaty_database_link:attributes', 'field_un_treaty_database_link:language',
      'field_treaty_decisions_url', 'field_treaty_decisions_url:title', 'field_treaty_decisions_url:attributes', 'field_treaty_decisions_url:language',
      'field_treaty_plans_url', 'field_treaty_plans_url:title', 'field_treaty_plans_url:attributes', 'field_treaty_plans_url:language',
      'field_treaty_protocols_url', 'field_treaty_protocols_url:title', 'field_treaty_protocols_url:attributes', 'field_treaty_protocols_url:language',
      'field_treaty_reports_url', 'field_treaty_reports_url:title', 'field_treaty_reports_url:attributes', 'field_treaty_reports_url:language',
      'field_ecolex_url:attributes', 'field_ecolex_url:language',
      'field_faolex_url', 'field_faolex_url:title', 'field_faolex_url:attributes', 'field_faolex_url:language',

      // metatag
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

    if (empty($row->trTitleOfText_en)) {
      $row->trTitleOfText_en = $row->trTitleOfText_other;
    }

    if (empty($row->trTitleOfText_en)) {
      $row->trTitleOfText_en = $row->trTitleOfTextShort;
    }

    if (empty($row->trTitleOfText_en)) {
      $row->trTitleOfText_en = $row->trTitleOfText_es;
    }

    if (empty($row->trTitleOfText_en)) {
      $row->trTitleOfText_en = $row->trTitleOfText_fr;
    }

    if ($row->trObsolete == 'true') {
      $row->trObsolete = TRUE;
    }
    else {
      $row->trObsolete = FALSE;
    }

    if ($row->trTypeOfText_en) {
      $row->trTypeOfText_en = [$row->trTypeOfText_en];
    }
    if ($row->trTypeOfText_fr) {
      $row->trTypeOfText_fr = [$row->trTypeOfText_fr];
    }
    if ($row->trTypeOfText_es) {
      $row->trTypeOfText_es = [$row->trTypeOfText_es];
    }

    //    "trDateOfModification": "1997-07-16T00:00:00Z",
    //    "updatedDate": "2016-08-29T16:28:45Z",

    $row->trDateOfEntry = substr($row->trDateOfEntry, 0, 10);
    $row->trEntryIntoForceDate = substr($row->trEntryIntoForceDate, 0, 10);

    $row->trDateOfModification = substr($row->trDateOfModification, 0, 10);
    $row->updatedDate = substr($row->updatedDate, 0, 10);

    if (!empty($row->trRegion_en)) {
      if (is_string($row->trRegion_en)) {
        $row->trRegion_en = country_map_region($row->trRegion_en);
      }
      else if (is_array($row->trRegion_en)) {
        $regions = array();
        foreach ($row->trRegion_en as &$region) {
          if ($region = country_map_region($region)) {
            $regions[] = $region;
          }
        }
        $row->trRegion_en = $regions;
      }
    }

    $row->ecolex_url = 'http://www.ecolex.org/treaty/details/' . $row->docId;

    // Taxonomies
    // Map ECOLEX keywords to LEO
    $row->leoKeywords = ThesaurusMapping::mapEcolexTermToLEOMultiple($row->docKeyword_en);
    $row->trDataSource = 'ECOLEX';
    $this->prepare_term_reference_field($row, 'trDataSource', 'data_source');
    $this->prepare_term_reference_field_multilingual($row, 'trFieldOfApplication', 'field_of_application');
    $this->prepare_term_reference_field_multilingual($row, 'trJurisdiction', 'jurisdiction');
    $this->prepare_term_reference_field_multilingual($row, 'trRegion', 'geographical_region');
    $this->prepare_term_reference_field_multilingual($row, 'trSubject', 'ecolex_subjects');
    $this->prepare_term_reference_field_multilingual($row, 'trTypeOfText', 'type_of_text');
    $this->prepare_term_reference_field_multilingual($row, 'docKeyword', 'thesaurus_ecolex');

    // Entity Reference
    if ($row->trCountry_en) {
      $row->trCountry_en = $this->country_load_by_name($row->trCountry_en);
      if (!$row->trCountry_en) {
        $row->trCountry_en = NULL;
      }
    }
    if (!empty($row->trAmendsTreaty)) {
      $values = array();
      foreach($row->trAmendsTreaty as $faolexId) {
        if ($nid = ecolex_treaty_load_nid_by_faolexid($faolexId)) {
          $values[] = $nid;
        }
      }
      $row->trAmendsTreaty = $values;
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
    return !empty($row->trTitleOfText_en);
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


class EcolexTreatyMigrateSource extends MigrateSource {

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
    $this->check_modify_date = variable_get('ecolex_treaty_check_modify_date', FALSE);
    $this->updated_after = 0;
    if ($this->check_modify_date) {
      $this->updated_after = date('Ymd', strtotime('-10 days'));
      $this->url_pattern .= '&updated_after=' . $this->updated_after;
    }
    $this->log_detail = variable_get('ecolex_treaty_log_detail', FALSE);
  }

  public function __toString() {
    return sprintf('Extract treaty from ECOLEX Solr');
  }

  /**
   * The list of available fields to map from the source, keyed by field name.
   */
  public function fields() {
    return array(
      'id' => 'Primary Key',
      'docId' => 'FAOLEX Identifier',

      'trTitleOfText_en' => 'Title of Text',
      'trSubject_en' => 'Treaty Subject',
      'trCountry_en' => 'Treaty Country',
      'trTitleAbbreviation'=>'Title Abbreviation',
      'trTypeOfText_en' => 'Type Of Text',
      'trPlaceOfAdoption' => 'Place Of Adoption',
      'trObsolete' => 'Obsolete',
      'trRelatedWebSite' => 'Related Web Site',
      'trAvailableIn' => 'Available In',
      'trAbstract_en' => 'Abstract',
      'trDateOfEntry' => 'Date Of Entry',
      'trEntryIntoForceDate' => 'Entry Into Force Date',
      'trFieldOfApplication_en' => 'Field Of Application',
      'trJurisdiction_en' => 'Jurisdiction',
      'trRegion_en' => 'Region',
      'trAmendsTreaty' => 'Amends Treaty',
      'docKeyword_en' => 'Keywords',
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
    $q = db_select('migrate_map_ecolex_treaty', 'm')
      ->fields('m', array('sourceid1'))
      ->condition('m.sourceid1', $sourceid1, $op);

    // updatedDate: 2016-12-14T22:00:44Z
    // trDateOfModification: 2016-12-14T00:00:00Z

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

      $destination = 'temporary://ecolex_treaty/' . $this->pagination . '-' . $start. '-' . $this->updated_after . '.json';
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

          $skip_ids = ['TRE-001344', 'TRE-160054', 'TRE-160007', 'TRE-001143'];// already exists in live db
          foreach($json as $row) { // exclude the same updated Date rows
            if (!in_array($row->docId, $skip_ids)) {
              if (!isset($mig_data[$row->docId])) { // new item
                $this->data[] = $row;
                continue;
              }
              if (substr($mig_data[$row->docId], 0, 10) != substr($row->updatedDate, 0, 10)) {
                $this->data[] = $row;
                continue;
              }
            }
            $obj = new stdClass();
            $obj->url = '';
            $obj->slug = '';
            $obj->docId = $row->docId;

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
        $destination = 'temporary://ecolex_treaty/'.$item->docId . '.json';
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
