<?php

namespace Drupal\taxonomy_external_sync\plugin\source;

class FaolexSource extends DefaultSource {

  private $available_languages = [
    'en' => 'English',
    'fr' => 'French',
    'es' => 'Spanish',
    'ar' => 'Arabic',
    'zh' => 'Chinese',
  ];

  function getName() {
    return 'FAOLEX web-service consumer';
  }

  function getDescription() {
    return t('Imports terms from the XML provided by FAOLEX.');
  }

  function getFieldNames() {
    return array(
      'ValID' => 'Source ID',
      'Classification_Sec_Area' => 'Classification Sec Area',
      'Code' => 'Code',
      'Name' => 'Name',
      'Variants' => 'Synonyms',
      'Scope_Note' => 'Scope note',
      'Exclude_from_External_Faolex' => 'Exclude from External Faolex',
      'Country_ISO_Code' => 'Country ISO Code',
      'Country_ISO2_Code' => 'Country ISO2 Code',
      'Country_ISO3_Code' => 'Country ISO3 Code',
      'Region' => 'Region',
      'Region_Countries' => 'Region Countries',
      'Exclude_from_Ecolex' => 'Exclude from Ecolex',
      'Language_ISO_Code' => 'Language ISO Code',
    );
  }

  function parseTerm($dictionary_term) {
    $term = new \stdClass();
    foreach ($dictionary_term as $field => $value) {
      if (preg_match('/(.*)\_(..)\_.*/', $field, $matches) && array_key_exists($lang = $matches[2], $this->available_languages)) {
        if ($lang == 'zh') {
          $lang = 'zh-hans';
        }
        $field_name = $matches[1];
        if (isset($term->{$field_name})) {
          $term->{$field_name}[$lang] = (string) $value;
        }
        else {
          $term->{$field_name} = [$lang => (string) $value];
        }
      }
      elseif (preg_match('/([a-zA-Z]*)\_(.*)/', $field, $matches) && in_array($matches[1], $this->available_languages)) {
        $lang = array_search($matches[1], $this->available_languages);
        if ($lang == 'zh') {
          $lang = 'zh-hans';
        }
        $field_name = $matches[2];
        if (isset($term->{$field_name})) {
          $term->{$field_name}[$lang] = (string) $value;
        }
        else {
          $term->{$field_name} = [$lang => (string) $value];
        }
      }
      elseif (is_array($value)) {
        // TODO: check why 'Code' property is not an array
        $term->{$field} = $value;
      }
      else {
        $term->{$field} = (string) $value;
      }
    }
    return $term;
  }

  function getTerms() {
    $terms = array();
    try {
      $xml = simplexml_load_file($this->url);
      foreach ($xml->dictionary_term as $dictionary_term) {
        $terms[] = $this->parseTerm($dictionary_term);
      }
    }
    catch (\Exception $e) {
      watchdog_exception('taxonomy_external_sync', $e);
    }
    return $terms;
  }
}