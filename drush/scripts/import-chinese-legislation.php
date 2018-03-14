<?php


class LegislationImportFromCSV {

  private $siteUrl;
  private $records = array();

  function __construct($csvFile, $siteUrl) {
    $this->siteUrl = $siteUrl;
    if (($handle = fopen($csvFile, "r")) !== FALSE) {
      $i = 0;
      while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
        // Ignore first line - headeer
        if ($i > 0) {
          $row = [];
          $row['title_en'] = $data[1];
          // @TODO Copy all CSV columns to the array.
          $this->records[] = $row;
        }
        $i++;
      }
      fclose($handle);
    }
    drush_log(count($this->records) . " records loaded from the CSV file ...\n", Drush\Log\LogLevel::OK);
  }


  public function import() {
    foreach($this->records as $idx => $record) {
      try {
        $node = $this->createNode($record);
        // TODO
        // 1. Create a node with fields in English (see createNode below)
        // 2. Add other chinese fields, like title_field['zh-cn'][0]['value'] = 'chinese title'
        // 3. Save node
        // 3. Mark chinese translation available - see setTranslation below
        node_save($node);
      } catch (Exception $e) {
        drush_log(
          sprintf("Error creating legislation node for CSV row #%d (%s)\n", $idx + 1, $e->getMessage()),
          \Drush\Log\LogLevel::ERROR
        );
      }
      drush_log(sprintf("row #%d: Created legislation node: %s/node/%d\n", $idx + 1, $this->siteUrl, $node->nid), \Drush\Log\LogLevel::OK);
    }
    drush_log('Done', Drush\Log\LogLevel::OK);
  }

  /**
   * Create a new node object and return it.
   */
  public function createNode($record, $type = 'legislation', $language = 'en') {
    $node = new stdClass();
    $node->title = $record['title_en'];
    // TODO add all fields.
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
  drush_set_error(sprintf('Usage: "drush scr %s /path/to/file.csv https://www.informea.org"', basename(__FILE__)));
  exit;
}
$runner = new LegislationImportFromCSV($arguments[2], $arguments[3]);
$runner->import();
