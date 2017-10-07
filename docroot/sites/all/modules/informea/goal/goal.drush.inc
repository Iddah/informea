<?php

// ToDo: Do we need to retrieve these tids programmatically matched by term name?
define('DRUSH_GOAL_SDG_TID', 1753);
define('DRUSH_GOAL_GOAL_TID', 1734);
define('DRUSH_GOAL_TARGET_TID', 1737);
define('DRUSH_GOAL_INDICATOR_TID', 1735);

/**
 * Implementation of hook_drush_command().
 */
function goal_drush_command() {
  $items = array();

  $items['informea-sgd-import'] = array(
    'callback' => 'drush_goal_informea_sdg_import',
    'description' => 'Import External SDG json with images.',
    'arguments' => array(
      'url' => 'SDG Export json url',
    ),
    'examples' => array(
      'drush informea-import-sgd https://....' => 'Import SDG data tranlations and icons',
    ),
  );

  $items['informea-sdg-save'] = array(
    'callback' => 'drush_goal_informea_sdg_save',
    'description' => 'Save External SDG json with images.',
    'arguments' => array(
      'url' => 'SDG Export json url',
    ),
    'examples' => array(
      'drush informea-sdg-save https://....' => 'Save SDG data into files',
    ),
  );

  $items['informea-sdg-full-import'] = array(
    'drupal dependencies' => array('phpexcel'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => 'SDG Full Import',
    'aliases' => array('sdg-fi'),
  );

  $items['import-treaty-goals-mappings'] = array(
    'drupal dependencies' => array('phpexcel'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => 'SDG Full Import',
    'examples' => array(
      'drush import-treaty-goals-mappings /path/to/excel/file' => 'Import xls data',
    ),
    'arguments' => array(
      'path' => 'Path to excel file',
    ),
  );

  return $items;
}

function _goal_sdg_get_tags(array $tags, array $thesaurus_informea) {
  foreach ($tags as $key => $tag) {
    $tag = trim(preg_replace('/\s+/', ' ', $tag));
    if (empty($thesaurus_informea[$tag])) {
      if (!empty($tag)) {
        drush_log("Term \"{$tag}\" not found.", 'error');
      }
      unset($tags[$key]);
    }
    else {
      $tags[$key] = $thesaurus_informea[$tag];
    }
  }
  return $tags;
}

/**
 * @param array $info
 *  Array containing:
 *    - title_field
 *    - field_goal_source
 *    - field_goal_type
 *    - field_informea_tags
 *    - field_parent_goal
 *    - field_original_id
 */
function _goal_sdg_create_node($info) {
  $fields = [
    'field_goal_source' => [
      'lang' => LANGUAGE_NONE,
      'col' => 'tid',
    ],
    'field_parent_goal' => [
      'lang' => LANGUAGE_NONE,
      'col' => 'target_id',
    ],
    'title_field' => [
      'lang' => 'en',
      'col' => 'value',
    ],
    'field_original_id' => [
      'lang' => LANGUAGE_NONE,
      'col' => 'value',
    ],
  ];
  $fields['field_informea_tags'] = $fields['field_goal_type'] = $fields['field_goal_source'];
  $node = [
    'title' => $info['title_field'],
    'status' => '1',
    'type' => 'goal',
    'language' => 'en',
    'title_original' => $info['title_field'],
  ];

  foreach ($fields as $field => $det) {
    if (!empty($info[$field])) {
      if (is_array($info[$field])) {
        $node[$field] = [
          $det['lang'] => [],
        ];
        foreach ($info[$field] as $key => $val) {
          $node[$field][$det['lang']][$key] = [
            $det['col'] => $val,
          ];
        }
      }
      else {
        $node[$field] = [
          $det['lang'] => [
            0 => [
              $det['col'] => $info[$field],
            ],
          ],
        ];
      }
    }
  }
  $node = (object) $node;
  $node = node_submit($node);
  node_save($node);
  return $node;
}

function _goal_sdg_handle_item($item, $parent_tid = NULL) {
  $informea_tags = db_select('taxonomy_term_data', 't')
    ->fields('t', ['name', 'tid'])
    ->condition('t.vid', '14')
    ->execute()->fetchAllKeyed();
  $item['tags'] = _goal_sdg_get_tags($item['tags'], $informea_tags);
  $info = [
    'title_field' => $item['title'],
    'field_goal_source' => $item['source'],
    'field_goal_type' => $item['type'],
    'field_original_id' => $item['id'],
    'field_informea_tags' => $item['tags'],
  ];
  if (!empty($parent_tid)) {
    $info['field_parent_goal'] = $parent_tid;
  }
  $node = _goal_sdg_create_node($info);
  if (!empty($node->nid) && !empty($item['children'])) {
    foreach ($item['children'] as $child) {
      _goal_sdg_handle_item($child, $node->nid);
    }
  }
}

/**
 * Get goals from json.
 */
function informea_sdg_taxonomies_get_goals($json) {
  $goals = [];
  foreach($json['items'] as $item) {
    if ('Goal' == $item['item']['biodiversity_item_type']) {
      $goals[$item['item']['index']] = $item['item'];
    }
  }
  return $goals;
}

/**
 * Get targets form json.
 */
function informea_sdg_taxonomies_get_targets($json) {
  $targets = [];
  foreach($json['items'] as $item) {
    if ('Target' == $item['item']['biodiversity_item_type']) {
      $targets[$item['item']['index']] = $item['item'];
    }
  }
  return $targets;
}

/**
 * Update goal images.
 */
function informea_sdg_taxonomies_update_goal($node, $images) {
  $created = FALSE;
  $translation_handler = entity_translation_get_handler('node', $node);
  foreach($images['translations'] as $lang_code) {
    if (!isset($node->translations->data[$lang_code])) {

      if (!@$images['official_name_' . $lang_code]) {
        drush_log('Error no data...' . $lang_code, 'error');
        continue;
      }

      $translation_handler->setTranslation(
        array(
          'translate' => 0,
          'status' => 1,
          'uid' => 1,
          'language' => $lang_code,
          'source' => $node->translations->original,
        )
      );
      $translation_handler->saveTranslations();
      $created = TRUE;
    }
  }
  if ($created) {
    $node = node_load($node->nid);
  }

  $new = FALSE;
  foreach ($images['translations'] as $lang_code) {
    if ($node->field_images[$lang_code]) {
      drush_log("field_images exists " . ($lang_code), 'status');
      continue;
    }

    if (isset($images['image_' . $lang_code])) {
      $url = $images['image_' . $lang_code];
      $url = str_replace('http://chm7.local.ro','https://www.chm-cbd.net', $url);
      $data = file_get_contents($url);
      $destination = file_default_scheme() . '://' . basename($url);

      if ($data) {
        if ($file = file_save_data($data, $destination, FILE_EXISTS_REPLACE)) {
          $node->field_images[$lang_code][0] = (array)$file;
          drush_log("Downloaded and saved " . ($url), 'status');
          $new = TRUE;
        }
        else {
          drush_log("Error file_save_data " . $destination, 'error');
        }
      }
      else {
        drush_log("Error no data in  " . $url, 'error');
      }
    }
  }
  if ($new) {
    node_save($node);
    drush_log("Updated nid=" . $node->nid . ', title = ' .$node->title, 'status');
  }
}

/**
 * Update target translations.
 */
function informea_sdg_taxonomies_update_target($node, $translations) {
  $created = FALSE;
  $translation_handler = entity_translation_get_handler('node', $node);
  foreach($translations['translations'] as $lang_code) {
    if (!isset($node->translations->data[$lang_code])) {

      if (!@$translations['official_name_' . $lang_code]) {
        continue;
      }

      $translation_handler->setTranslation(
        array(
          'translate' => 0,
          'status' => 1,
          'uid' => 1,
          'language' => $lang_code,
          'source' => $node->translations->original,
        )
      );
      $translation_handler->saveTranslations();
      $created = TRUE;
    }
  }
  if ($created) {
    $node = node_load($node->nid);
  }

  $new = FALSE;
  foreach ($translations['translations'] as $lang_code) {
    if ($lang_code == 'en') {
      continue;
    }
    if (isset($translations['official_name_' . $lang_code])) {
      $node->body[$lang_code][0]['value'] = $translations['official_name_'.$lang_code];
      $node->body[$lang_code][0]['format'] = 'full_html';
      $new = TRUE;
    }
  }
  if ($new) {
    node_save($node);
    drush_log("Updated nid=" . $node->nid . ', title = ' .$node->title, 'status');
  }
}

/**
 * Get SDG targets nids.
 */
function goal_informea_get_sdg_targets() {
  $query = "
    SELECT 
      nid 
    FROM 
      {node} 
    INNER JOIN 
      {field_data_field_goal_source} field_data_field_goal_source ON (node.nid = field_data_field_goal_source.entity_id)
    INNER JOIN 
      {field_data_field_goal_type} field_data_field_goal_type ON (node.nid = field_data_field_goal_type.entity_id)
    WHERE
      (node.status = '1') AND
      (node.type = 'goal') AND
      (field_data_field_goal_source.field_goal_source_tid = '" . DRUSH_GOAL_SDG_TID . "') AND
      (field_data_field_goal_type.field_goal_type_tid = '" . DRUSH_GOAL_TARGET_TID . "')";
  return db_query($query)->fetchCol();
}

/**
 * Get SDG goals nids.
 */
function goal_informea_get_sdg_goals() {
  $query = "
    SELECT 
      nid 
    FROM 
      {node} 
    INNER JOIN 
      {field_data_field_goal_source} field_data_field_goal_source ON (node.nid = field_data_field_goal_source.entity_id)
    INNER JOIN 
      {field_data_field_goal_type} field_data_field_goal_type ON (node.nid = field_data_field_goal_type.entity_id)
    WHERE 
      (node.status = '1') AND 
      (node.type = 'goal') AND 
      (field_data_field_goal_source.field_goal_source_tid = '" . DRUSH_GOAL_SDG_TID . "') AND
      (field_data_field_goal_type.field_goal_type_tid = '" . DRUSH_GOAL_GOAL_TID . "')";
  return db_query($query)->fetchCol();
}

/**
 * Import SDG icons and translations.
 */
function drush_goal_informea_sdg_import($url = '') {
  drush_log("Import SDG...\n", 'status');
  $json = goal_informea_sdg_get_json($url);
  if (!$json) {
    drush_log("Error no json data", 'error');
    return;
  }
  $nids_targets = goal_informea_get_sdg_targets();
  drush_log("SDG targets nids: " . count($nids_targets), 'status');
  $nids_goals = goal_informea_get_sdg_goals();
  drush_log("SDG goals nids:" . count($nids_goals), 'status');

  $targets = informea_sdg_taxonomies_get_targets($json);
  drush_log("Json SDG targets: " . count($targets), 'status');
  $goals = informea_sdg_taxonomies_get_goals($json);
  drush_log("Json SDG goals: " . count($goals), 'status');

  foreach($nids_goals as $nid) {
    $node = node_load($nid);
    $identifier = $node->field_original_id['und'][0]['value'];
    $images = @$goals[$identifier];
    if ($images) {
      informea_sdg_taxonomies_update_goal($node, $images);
    }
  }

  foreach($nids_targets as $nid) {
    $node = node_load($nid);
    $translations = @$targets[$node->title];
    if ($translations) {
      informea_sdg_taxonomies_update_target($node, $translations);
    }
  }
}

/**
 * Get json from drush argument or module folder.
 */
function goal_informea_sdg_get_json($url) {
  $file = sprintf('%s/sdg_taxonomy.json', dirname(__FILE__));
  $json = [];
  if (file_exists($file)) {
    $json = json_decode(file_get_contents($file), TRUE);
    drush_log("Found " . count($json['items']) . " SDG items in local file\n", 'status');
  }
  else {
    if (drupal_valid_path($url) && $url) {
      $json = json_decode(file_get_contents($url), TRUE);
      drush_log("Found " . count($json['items']) . " SDG items in local file\n", 'status');
    }
  }
  return $json;
}

/**
 * Save SDG icons and json.
 */
function drush_goal_informea_sdg_save($url = '') {
  drush_log("Save SDG...\n", 'status');
  $json = goal_informea_sdg_get_json($url);
  if (!$json) {
    drush_log("Error no json data", 'error');
    return;
  }
  $files_dir = 'public://github_sdgs/icons';
  if (!file_prepare_directory($files_dir, FILE_CREATE_DIRECTORY)) {
    drush_log("Error creating directory" . $files_dir, 'error');
    return;
  }
  $saved = 0;
  foreach($json['items'] as &$item) {
    foreach($item['item']['translations'] as $lang_code) {
      if (isset($item['item']['image_' . $lang_code])) {
        $url = $item['item']['image_' . $lang_code];
        $item['item']['image_' . $lang_code] = 'icons/' . basename($url);
        $url = str_replace('http://chm7.local.ro','https://www.chm-cbd.net', $url);
        $destination = $files_dir . '/' . basename($url);
        if (file_exists($destination)) {
          continue;
        }
        $data = file_get_contents($url);
        if ($data) {
          if ($uri = file_unmanaged_save_data($data, $destination, FILE_EXISTS_REPLACE)) {
            drush_log("Downloaded and saved " . ($uri), 'status');
            $saved++;
          }
          else {
            drush_log("Error file_unmanaged_save_data " . $destination, 'error');
          }
        }
        else {
          drush_log("Error no data in file " . $url, 'error');
        }
      }
    }
  }
  $data = json_encode($json, 128);
  $destination = 'public://github_sdgs/sdg.json';
  if (!$uri = file_unmanaged_save_data($data, $destination, FILE_EXISTS_REPLACE)) {
    drush_log("Error saving " . $destination, 'error');
  }
  else {
    drush_log("Saved json in " . $destination, 'status');
  }
  drush_log("Saved " . $saved . " icons", 'status');
}

/**
 * Imports SDG goals, targets & indicators from SDG_datasheet.xlsx file.
 */
function drush_goal_informea_sdg_full_import() {
  $columns = [
    'goal_no' => 'SDG Goal No.',
    'goal_text' => 'SDG Goal Text',
    'goal_tags' => 'Goal LEO Terms; Existing',
    'target_no' => 'SDG Target No.',
    'target_text' => 'SDG Target Text',
    'target_tags' => 'Target LEO Terms; Existing',
    'indicator_no' => 'SDG Indicator No.',
    'indicator_text' => 'SDG Indicator Text',
    'indicator_tags' => 'Indicator LEO Terms; Existing',
  ];
  module_load_include('inc', 'phpexcel');
  $path = drupal_get_path('module', 'goal') . '/files/SDG_datasheet.xlsx';
  $data = phpexcel_import($path)[0];
  if (!is_array($data)) {
    drush_log("We could not get the data from the excel file.", 'error');
    return;
  }
  $goals = [];

  foreach ($data as $key => $row) {
    $missing = 0;
    foreach (['goal_text', 'target_text', 'indicator_text'] as $req_col) {
      if (empty($row[$columns[$req_col]])) {
        $missing ++;
      }
    }
    if ($missing > 0) {
      if ($missing < 3) {
        $rownum = $key + 2;
        drush_log("Found an empty column on row {$rownum}", 'error');
      }
      continue;
    }
    if (strlen($row[$columns['target_no']]) > 6) {
      $row[$columns['target_no']] = number_format((float)$row[$columns['target_no']],1,'.','');
      drush_log("Fixed id for target: {$row[$columns['target_no']]} {$row[$columns['target_text']]}", 'warning');
    }
    $goal = $row[$columns['goal_no']] . ' ' . $row[$columns['goal_text']];
    $target = $row[$columns['target_no']] . ' ' . $row[$columns['target_text']];
    $indicator = $row[$columns['indicator_no']] . ' ' . $row[$columns['indicator_text']];

    if (empty($goals[$goal])) {
      $goals[$goal] = [
        'title' => $goal,
        'id' => trim(str_replace(['Goal', '.'], '', $row[$columns['goal_no']])),
        'tags' => explode(',', $row[$columns['goal_tags']]),
        'source' => DRUSH_GOAL_SDG_TID,
        'type' => DRUSH_GOAL_GOAL_TID,
        'children' => [],
      ];
    }
    if (!array_key_exists($target, $goals[$goal]['children'])) {
      $goals[$goal]['children'][$target] = [
        'title' => $target,
        'id' => $row[$columns['target_no']],
        'tags' => explode(',', $row[$columns['target_tags']]),
        'source' => DRUSH_GOAL_SDG_TID,
        'type' => DRUSH_GOAL_TARGET_TID,
        'children' => [],
      ];
    }
    $goals[$goal]['children'][$target]['children'][] = [
      'title' => $indicator,
      'id' => $row[$columns['indicator_no']],
      'tags' => explode(',', $row[$columns['indicator_tags']]),
      'source' => DRUSH_GOAL_SDG_TID,
      'type' => DRUSH_GOAL_INDICATOR_TID,
      'children' => [],
    ];
  }

  foreach ($goals as $goal) {
    _goal_sdg_handle_item($goal);
  }
}

function drush_goal_import_treaty_goals_mappings($path = NULL) {
  if (!file_exists($path)) {
    drupal_set_message(t('File !path does not exists!', array('!path'=>$path)), 'error');
    return ;
  }
  $goal_original_ids = _goal_get_goal_original_ids();
  drush_log('Total goals ' . count($goal_original_ids), 'ok');

  module_load_include('inc', 'phpexcel');
  $data = phpexcel_import($path)[0];
  if (!is_array($data)) {
    drush_log("We could not get the data from the excel file.", 'error');
    return;
  }
  $updated = 0;
  foreach ($data as $key => $row) {
    if (empty($row['Permalink'])) {
      continue;
    }
    $goal_no = rtrim($row['SDG Goal'], ',. ');
    $goal_ids = _goal_parse_row_numbers($goal_no);
    $error = 0;
    foreach($goal_ids as $goal_id) {
      if ($goal_id != intval($goal_id)) {
        drush_log('Wrong goal identifier "' . $goal_id . '", line: ' . ($key + 2), 'error');
        $error++;
        continue;
      }
      if (!@$goal_original_ids[$goal_id]) {
        drush_log('We could not find goal identifier "' . $goal_id . '", line: ' . ($key + 2), 'error');
        $error++;
        continue;
      }
    }
    if ($error) {
      continue;
    }
    if (implode(',', $goal_ids) != str_replace(' ', '', $goal_no)) {
      drush_log('Error SDG Goal "' . $goal_no . '", line: ' . ($key + 2), 'error');
      continue;
    }

    $target_no = rtrim($row['SDG Target'], ',. ');
    $target_ids = _goal_parse_row_numbers($target_no);
    foreach($target_ids as $target_id) {
      if ($target_id == strval(intval($target_id))) {
        drush_log('Wrong target identifier "' . $target_id . '", line: ' . ($key + 2), 'error');
        $error++;
        continue;
      }
      if (!@$goal_original_ids[$target_id]) {
        drush_log('We could not find target identifier "' . $target_id . '", line: ' . ($key + 2), 'error');
        $error++;
        continue;
      }
    }
    if ($error) {
      continue;
    }
    if (implode(',', $target_ids) != str_replace(' ', '', $target_no)) {
      drush_log('Error SDG Target "' . $target_no . '", line: ' . ($key + 2), 'error');
      continue;
    }

    $treaty_node = _goal_get_treaty_node($row['Permalink']);
    if (!$treaty_node) {
      drush_log('Wrong treaty paragraph permalink "' . $row['Permalink'] . '", line: ' . ($key + 2), 'error');
      continue;
    }

    $new_sdg_goals = [];
    $add_ids = array_merge($goal_ids, $target_ids);
    foreach($add_ids as $original_id) {
      $new_sdg_goals[$goal_original_ids[$original_id]] = [ 'target_id'=>$goal_original_ids[$original_id] ];
    }

    if ($treaty_node && $new_sdg_goals) {
      $treaty_node->field_sdg_goals['und'] = array_values($new_sdg_goals);
      node_save($treaty_node);
      $updated++;
    }
  }
  drush_log('Updated ' . $updated, 'ok');
}

function _goal_parse_row_numbers($row) {
  if (!$row) {
    return [];
  }
  $row = explode(',', $row);
  foreach($row as $k => $v) {
    $row[$k] = trim($v);
  }
  return $row;
}

function _goal_get_treaty_node($url) {
  $url = drupal_parse_url($url);
  $nid = intval(@$url['query']['paragraph']);
  if ($nid) {
    return node_load($nid);
  }
  $nid = intval(@$url['query']['article']);
  if ($nid) {
    return node_load($nid);
  }
  return NULL;
}

function _goal_get_goal_original_ids() {
  $q = db_select('field_data_field_original_id')->fields(NULL, array('field_original_id_value', 'entity_id'));
  $q->condition('bundle', 'goal');
  $q->condition('entity_type', 'node');
  return $q->execute()->fetchAllKeyed(0, 1);
}
