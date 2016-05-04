<?php

define('DRUPAL_TYPE_COURT_DECISION', 'court_decisions');

class ElisCourtDecisionMigration extends AbstractElisMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->source = new CourtDecisionElisMigrateSource($arguments['source_url_pattern'], $arguments['xml_encoding']);
    $this->destination = new MigrateDestinationNode(DRUPAL_TYPE_COURT_DECISION, ['language' => 'en']);

    $this->addFieldMapping('field_alternative_record_id', 'id2');
    $this->addFieldMapping('field_original_id', 'id');
    $this->addFieldMapping('field_isis_number', 'isisMfn');
    $this->addFieldMapping('field_date_of_entry', 'dateOfEntry');
    $this->addFieldMapping('field_date_of_entry:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_date_of_modification', 'dateOfModification');
    $this->addFieldMapping('field_date_of_modification:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('title', 'title_english');
    $this->addFieldMapping('title_field', 'titleOfText');
    $this->addFieldMapping('title_field:language', 'titleOfText_languages');
    $this->addFieldMapping('field_title_of_text_short', 'titleOfTextShort');
    $this->addFieldMapping('field_title_of_text_short:language', 'titleOfTextShort_languages');
    $this->addFieldMapping('field_title_of_text_other', 'titleOfTextOther');
    $this->addFieldMapping('field_title_of_text_short_other', 'titleOfTextShortOther');
    $this->addFieldMapping('field_country', 'country');
    $this->addFieldMapping('field_ecolex_tags', 'subject');
    $this->addFieldMapping('field_ecolex_tags:source_type')->defaultValue('tid');
    //@todo: $this->addFieldMapping('field_source_language', 'languageOfDocument');
    $this->addFieldMapping('field_court_name', 'courtName');
    $this->addFieldMapping('field_sorting_date', 'dateOfText');
    $this->addFieldMapping('field_sorting_date:timezone')->defaultValue('Europe/Zurich');
    $this->addFieldMapping('field_reference_number', 'referenceNumber');
    $this->addFieldMapping('field_number_of_pages', 'numberOfPages');
    $this->addFieldMapping('field_available_in', 'availableIn');
    $this->addFieldMapping('field_url', 'linkToFullText');
    $this->addFieldMapping('field_url_other', 'linkToFullTextOther');
    $this->addFieldMapping('field_internet_reference_url', 'internetReference');
    $this->addFieldMapping('field_related_url', 'relatedWebSite');
    $this->addFieldMapping('field_ecolex_keywords', 'keyword');
    $this->addFieldMapping('field_ecolex_keywords:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_abstract', 'abstract');
    $this->addFieldMapping('field_abstract:language', 'abstract_languages');
    $this->addFieldMapping('field_court_decision_id_number', 'id');
    $this->addFieldMapping('field_type_of_text', 'typeOfText');
    $this->addFieldMapping('field_type_of_text:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_reference_to_legislation_t', 'referenceToNationalLegislation');
    $this->addFieldMapping('field_ecolex_treaty_raw', 'referenceToTreaties');
    $this->addFieldMapping('field_court_decision_raw', 'referenceToCourtDecision');
    $this->addFieldMapping('field_court_decision_subdivision', 'subdivision');
    $this->addFieldMapping('field_justices', 'justices');
    $this->addFieldMapping('field_territorial_subdivision', 'territorialSubdivision');
    $this->addFieldMapping('field_territorial_subdivision:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_link_to_abstract', 'linkToAbstract');
    $this->addFieldMapping('field_ecolex_decision_status', 'statusOfDecision');
    $this->addFieldMapping('field_ecolex_decision_status:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_legislation_eu_reference', 'referenceToEULegislation');
    $this->addFieldMapping('field_city', 'seatOfCourt');
    $this->addFieldMapping('field_jurisdiction', 'courtJurisdiction');
    $this->addFieldMapping('field_jurisdiction:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_instance', 'instance');
    $this->addFieldMapping('field_official_publication', 'officialPublication');
    $this->addFieldMapping('field_ecolex_region', 'region');
    $this->addFieldMapping('field_ecolex_region:source_type')->defaultValue('tid');
    $this->addFieldMapping('field_faolex_reference_raw', 'referenceToFaolex');
    $this->addFieldMapping('field_data_source')->defaultValue('ECOLEX/ELIS');
    $this->addFieldMapping('field_data_source:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_data_source:ignore_case')->defaultValue(TRUE);
    $this->addFieldMapping('field_data_source:source_type')->defaultValue('term');
    $this->addFieldMapping('field_files', 'linkToFullText');
    $this->addFieldMapping('field_files:description', 'linkToFullText');
    $this->addFieldMapping('field_files:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    // @ToDo: Map legislation by source id
    // $this->addFieldMapping('field_reference_to_legislation', 'referenceToNationalLegislation');
    // @todo: field_faolex_url

    $this->addFieldMapping('comment')->defaultValue(FALSE);
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(0);

    $this->addUnmigratedSources(array());

    $this->addUnmigratedDestinations(array(
      'created', 'changed', 'log', 'tnid', 'translate', 'revision_uid', 'is_new',
      'field_ecolex_tags:create_term', 'field_ecolex_tags:ignore_case',
      'field_keywords:create_term', 'field_keywords:ignore_case',
      'field_files:file_class', 'field_files:language', 'field_files:preserve_files',
      'field_files:destination_dir', 'field_files:destination_file',
      'field_files:display', 'field_files:urlencode',
      'field_files:source_dir', 'field_jurisdiction:ignore_case',
      'field_jurisdiction:create_term',
      'field_informea_tags:ignore_case', 'field_informea_tags:create_term',
      'field_informea_tags:source_type', 'field_informea_tags', 'field_abstract:format',
      'field_territorial_subdivision:ignore_case',
      'field_territorial_subdivision:create_term',
      'field_type_of_text:create_term', 'field_type_of_text:ignore_case',
      'field_url:title', 'field_url:attributes',
      'field_date_of_modification:to',
      'field_date_of_modification:rrule',
      'field_date_of_entry:to', 'field_date_of_entry:rrule' ,
      'field_ecolex_decision_status:create_term', 'field_ecolex_decision_status:ignore_case',
      'field_faolex_url:language', 'field_faolex_url:attributes', 'field_faolex_url:title',
      'field_ecolex_url:language', 'field_ecolex_url:attributes',
      'field_ecolex_url:title', 'field_ecolex_url',
      'field_internet_reference_url:title', 'field_internet_reference_url:attributes',
      'field_sorting_date:to', 'field_sorting_date:rrule',
      'field_related_url:attributes',
      'field_related_url:title',
      'field_region:create_term', 'field_region:ignore_case', 'path',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
    if (!empty($row->country)) {
      $countries = array();
      foreach($row->country as $name) {
        /** @var stdClass $country */
        if ($country = country_get_by_name($name)) {
          $countries[] = $country->nid;
        }
      }
      $row->country = $countries;
    }
    if (!empty($row->linkToFullText)) {
      $row->linkToFullText = str_replace('/server2.php', '', $row->linkToFullText);
    }
    return $this->validateRow($row);
  }

  public function validateRow($row) {
    return !empty($row->title_english);
  }
}