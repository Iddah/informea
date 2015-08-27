<?php

/**
 * Class DecisionsODataMigrateItem handles Decisions specific properties.
 */
class DecisionsODataMigrateItem extends ODataMigrateItem {

  /**
   * {@inheritdoc}
   */
  public function getItem($id) {
    $ob = parent::getItem($id);

    //Get titles
    $title_langs = array();
    $titles = array();
    $title_orig = NULL;
    $values = $this->getComplexProperty($ob, 'title');
    if (!empty($values) && is_array($values)) {
      foreach ($values as $value) {
        if (!empty($value->value)) {
          $title_langs[] = $value->language;
          $titles[] = $value->value;
          if ($value->language == 'en') {
            $title_orig = $value->value;
          }
        }
      }
    }
    $ob->title_langs = $title_langs;
    $ob->title = $titles;
    if ($title_orig) {
      $ob->title_orig = $title_orig;
    }
    else {
      if ($titles) {
        $ob->title_orig = $titles[0];
      }
    }

    //Get body
    $content_langs = array();
    $content = array();
    $values = $this->getComplexProperty($ob, 'content');
    if (!empty($values) && is_array($values)) {
      foreach ($values as $value) {
        if (!empty($value->value)) {
          $content_langs[] = $value->language;
          $content[] = $value->value;
        }
      }
    }
    $ob->content_langs = $content_langs;
    $ob->content = $content;

    //Get summary
    $summary = array();
    $values = $this->getComplexProperty($ob, 'summary');
    if (!empty($values) && is_array($values)) {
      foreach ($values as $value) {
        if (!empty($value->value)) {
          $summary[] = $value->value;
        }
      }
    }
    $ob->summary = $summary;

    //Get files
    $files = array();
    $files_language = array();
    //CITES does not have files
    if ($this->config->odata_name != 'cites') {
      $values = $this->getComplexProperty($ob, 'files');
      if (!empty($values) && is_array($values)) {
        foreach ($values as $value) {
          if (!empty($value->url)) {
            $files_language[] = $value->language;
            $files[] = $value->url;
          }
        }
      }
    }
    $ob->files_language = $files_language;
    $ob->files = $files;

    if (!property_exists($ob,'updated')) {
      $ob->updated = '';
    }
    return $ob;
  }
}