<?php


class LegislationImportFromCSV {

  private $siteUrl;
  private $records = array();

  function __construct($csvFile, $siteUrl) {
    $this->siteUrl = $siteUrl;
    if (($handle = fopen($csvFile, "r")) !== FALSE) {
      $i = 0;
      while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        // Ignore first line - header
        if ($i > 0) {
          $row = [];
          $row['title_field_en'] = trim($data[2]);
          $row['title_field_cn'] = trim($data[1]);
          $row['field_date_of_original_text'] = trim($data[3]);
          $row['field_sorting_date'] = trim($data[4]);
          $row['field_type_of_text'] = trim($data[5]);
          $row['field_informea_tags'] = trim($data[6]);
          $row['field_url_cn'] = $data[7];
          $row['field_url_en'] = $data[8];
          $this->records[] = $row;
        }
        $i++;
      }
      fclose($handle);
    }
    drush_log(
      sprintf(
        "%d records loaded from the CSV file: %s\n", 
        count($this->records), 
        realpath($csvFile)
      ), 
      Drush\Log\LogLevel::OK);
  }


  public function import() {
    $count = 0;
    foreach($this->records as $idx => $record) {
      //var_dump($record);
      try {
        $node = $this->createNode($record);
        // TODO
        // 1. Create a node with fields in English (see createNode below)
        // 2. Add other chinese fields, like title_field['zh-cn'][0]['value'] = 'chinese title'
        // 3. Save node
        // 3. Mark chinese translation available - see setTranslation below
       // var_dump ($url);
        node_save($node);
        $this->setTranslation($node, 'zh-hans');
        node_save($node);
        $count++;
      } catch (Exception $e) {
        drush_log(
          sprintf("Error creating legislation node for CSV row #%d (%s)\n", $idx + 1, $e->getMessage()),
          \Drush\Log\LogLevel::ERROR
        );
      }
      drush_log(sprintf("row #%d: Created legislation node: %s/node/%d\n", $idx + 1, $this->siteUrl, $node->nid), \Drush\Log\LogLevel::OK);
    }
    drush_log('Done, records created: ' . $count, Drush\Log\LogLevel::OK);
  }

  /**
   * Create a new node object and return it.
   */
  public function createNode($record, $type = 'legislation', $language = 'en') {

    $vdk = taxonomy_vocabulary_machine_name_load('type_of_text');
    $type_of_text_vid = $vdk->vid;
    $vdk = taxonomy_vocabulary_machine_name_load('thesaurus_informea');
    $thesaurus_vid = $vdk->vid;

    $type_of_text_tid = ODataMigrationUtil::getTaxonomyTermByName($record['field_type_of_text'], $type_of_text_vid);
    if (empty($type_of_text_tid)) {
      throw new Exception('Cannot find type of text = ' . $record['field_type_of_text']);
    }
    $node = new stdClass();
    $node->title = $record['title_field_en'];
    $node->title_field['en'][0]['value'] = $node->title;
    $node->title_field['zh-hans'][0]['value'] = $record['title_field_cn'];
    $node->field_date_of_original_text[LANGUAGE_NONE][0]['value'] = $record['field_date_of_original_text'];
    $node->field_sorting_date[LANGUAGE_NONE][0]['value']= $record['field_sorting_date'];
    $node->field_type_of_text[LANGUAGE_NONE][0] = array('tid' => $type_of_text_tid);

    foreach(explode(';', $record['field_informea_tags']) as $i=>$term_name) {
      //var_dump($term_name);
      $tid = ODataMigrationUtil::getTaxonomyTermByName(trim($term_name), $thesaurus_vid);
      if (empty($tid)) {
        drush_log('Cannot find term in taxonomy:' . $term_name, \Drush\Log\LogLevel::WARNING);
      }
      else {
        $node->field_informea_tags[LANGUAGE_NONE][$i] = array('tid' => $tid);
      }
    }

    $node->field_url['zh-hans'][0]['url']= $record['field_url_cn'];
    $node->field_url['en'][0]['url'] = $record['field_url_en'];
    $node->type = $type;
    node_object_prepare($node);
    $node->language = $language;
    $node->uid = 1;
    $node->status = 1;
    $node->promote = 0;
    $node->comment = 0;
    return $node;
  }

  /**
   * Mark node translation in certain language.
   *
   * @param \stdClass $entity
   *   Node.
   * @param string $language
   *   Target language (i.e. zh-cn).
   */
  public function setTranslation($entity, $language) {
    $translation_handler = entity_translation_get_handler('node', $entity);
    $translation_handler->initTranslations();
    $entity->translations = $translation_handler->getTranslations();
    $translation_handler->setTranslation(array(
      'translate' => 0, 'status' => 1, 'uid' => 1,
      'language' => $language,
      'source' => 'en',
    ));
  }
}

$arguments = drush_get_arguments();
if(empty($arguments[2]) || empty($arguments[3])) {
  drush_set_error(sprintf('Usage: "drush scr %s /informea/drush/Chinese.csv https://www.informea.org"', basename(__FILE__)));
  exit;
}
$runner = new LegislationImportFromCSV($arguments[2], $arguments[3]);
$runner->import();
