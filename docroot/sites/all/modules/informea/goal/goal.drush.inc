<?php

// ToDo: Do we need to retrieve these tids programmatically matched by term name?
define('DRUSH_GOAL_SDG_TID', GOAL_SOURCE_SDG);
define('DRUSH_GOAL_GOAL_TID', GOAL_TYPE_GOAL);
define('DRUSH_GOAL_TARGET_TID', GOAL_TYPE_TARGET);
define('DRUSH_GOAL_INDICATOR_TID', GOAL_TYPE_INDICATOR);

/**
 * Implementation of hook_drush_command().
 */
function goal_drush_command() {
  $items = array();

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

  $items['fix-goals-content'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => 'Fix goals content',
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

function goal_get_row_value($row, $keys) {
  foreach($keys as $key) {
    if (isset($row[$key])) {
      return $row[$key];
    }
  }
  return '';
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
  $same = 0;

  drush_log("keys = " . implode(', ', array_keys($data)));
  if (is_array($data)) {
    drush_log('Rows in file ' . count($data), 'ok');
  }
  else {
    drush_log('Error data not array ', 'error');
  }
  foreach ($data as $key => $row) {

    if (empty($row['Permalink'])) {
      continue;
    }
    if ($row['Permalink'] == '-') {
      continue;
    }
    $goal_no = rtrim(goal_get_row_value($row, ['SDG Goal', 'SDG Goal(s)']), ',. ');
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

    $target_no = rtrim(goal_get_row_value($row, ['SDG Target', 'SDG Target(s)']), ',. ');
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
      if (isset($treaty_node->field_sdg_goals[LANGUAGE_NONE])) {
        if (md5(json_encode($treaty_node->field_sdg_goals[LANGUAGE_NONE]))==md5(json_encode(array_values($new_sdg_goals)))) {
          $same++;
          continue;
        }
      }
      $treaty_node->field_sdg_goals[LANGUAGE_NONE] = array_values($new_sdg_goals);
      node_save($treaty_node);
      $updated++;
    }
  }
  drush_log('Same ' . $same, 'ok');
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

function _goal_update_node_title_with_prefix(&$node, $prefix) {
  if (!preg_match("/^$prefix/", $node->title)) {
    $node->title = "{$prefix} {$node->title}";
  }

  foreach ($node->title_field as $language => &$value) {
    if (!empty($value[0]['value']) && !preg_match("/^$prefix/", $value[0]['value'])) {
      $value[0]['value'] = "{$prefix} {$value[0]['value']}";
    }
  }
}

function _goal_update_node_move_text_from_title_to_summary(&$node) {
  $pattern = '/(\d\.*)+(\s|\W)+(\w+.*)/';

  $pattern2 = '/(\.\d)+(\s|\W)+(\w+.*)/';

  if (preg_match($pattern, $node->title, $matches)) {
    $summary = end($matches);
    while (preg_match($pattern2, $summary, $matches)) {
      $summary = end($matches);
    }
    if (strlen($summary) > 5) {
      $node->field_summary[LANGUAGE_NONE] = [
        0 => [
          'value' => $summary,
        ],
      ];
      $node->title = trim(str_replace($summary, '', $node->title));
    }
  }
  if (preg_match('/(\W+)$/', $node->title, $matches)) {
    $node->title = substr($node->title, 0, count(end($matches)) * -1);
  }

  foreach ($node->title_field as $language => &$value) {
    if (!empty($value[0]['value'])) {
      if (preg_match($pattern, $value[0]['value'], $matches)) {
        $summary = end($matches);
        while (preg_match($pattern2, $summary, $matches)) {
          $summary = end($matches);
        }
        if (strlen($summary) > 5) {
          $node->field_summary[$language] = [
            0 => [
              'value' => $summary,
            ],
          ];
          $value[0]['value'] = trim(str_replace($summary, '', $value[0]['value']));
        }
      }
      if (preg_match('/(\W+)$/', $value[0]['value'], $matches)) {
        $value[0]['value'] = substr($value[0]['value'], 0, count(end($matches)) * -1);
      }
    }
  }
}

function _goal_update_node_fields(&$node) {
  $source = $node->field_goal_source[LANGUAGE_NONE][0]['tid'];
  $type = $node->field_goal_type[LANGUAGE_NONE][0]['tid'];

  switch ($type) {
    case 1733: // GEG (to be deleted)
    case 1736: // Strategic Goal (to be deleted)
      $type = GOAL_TYPE_GOAL;
      break;

    case 1732: // Aichi Target (to be deleted)
      $type = GOAL_TYPE_TARGET;
      break;
  }
  $node->field_goal_type[LANGUAGE_NONE][0]['tid'] = $type;

  switch ($source) {
    case GOAL_SOURCE_SDG:
      if ($type == GOAL_TYPE_TARGET) {
        // Prefix title with "Target" and move description to field_summary
        _goal_update_node_title_with_prefix($node, 'Target');
        $node->field_summary = $node->body;
        $node->body = [];
      }
      elseif ($type == GOAL_TYPE_INDICATOR) {
        // Prefix title with "Indicator" and move from title to field_summary
        _goal_update_node_move_text_from_title_to_summary($node);
        _goal_update_node_title_with_prefix($node, 'Indicator');
      }
      break;

    case GOAL_SOURCE_AICHI:
      if ($type == GOAL_TYPE_GOAL) {
        // Prefix title with "Strategic"
        _goal_update_node_title_with_prefix($node, 'Strategic');
      }
      elseif ($type == GOAL_TYPE_TARGET) {
        // Move description to field_summary
        $node->field_summary = $node->body;
        $node->body = [];
      }
      elseif ($type == GOAL_TYPE_INDICATOR) {
        // Clear description and move from title to field_summary
        _goal_update_node_move_text_from_title_to_summary($node);
        $node->body = [];
      }

      break;

    case GOAL_SOURCE_GEG:
      if ($type == GOAL_TYPE_GOAL) {
        // Title = "Goal" and move description to field_summary
        $node->title = 'Goal';
        foreach ($node->title_field as $language => &$value) {
          if (!empty($value[0]['value'])) {
            $value[0]['value'] = 'Goal';
          }
        }
        $node->field_summary = $node->body;
        $node->body = [];
      }
      break;
  }


  foreach($node->field_summary as $language => &$value) {
    $value[0]['value'] = strip_tags($value[0]['value']);
    $value[0]['format'] = NULL;
  }
}

/**
 * Enhancement #227: Goals, targets, indicators - restructure existing content
 */
function drush_goal_fix_goals_content() {
  if (variable_get('fix_goals_content_flag', FALSE)) {
    drush_set_error('The content has already been fixed.');
    return;
  }
  variable_set('fix_goals_content_flag', TRUE);
  $tids = [GOAL_SOURCE_AICHI, GOAL_SOURCE_SDG, GOAL_SOURCE_GEG];

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'goal')
    ->fieldCondition('field_goal_source', 'tid', $tids, 'IN');
  $result = $query->execute();
  $goals = !empty($result['node']) ? $result['node'] : [];

  foreach ($goals as $item) {
    $node = node_load($item->nid);
    _goal_update_node_fields($node);
    node_save($node);
    if (function_exists('drush_log')) {
      drush_log("Updated node $item->nid", 'success');
    }
  }
}
