<?php
/**
 * @file
 * goal.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function goal_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-goals_disclaimer'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'goals_disclaimer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'goals',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -49,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-549473bf17c0945de6061fb70368f8a3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '549473bf17c0945de6061fb70368f8a3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'goal/target-1-0
goal/target-2-0
goal/target-3-0
goal/target-4-0
goal/target-5-0
goal/target-6-0
goal/target-7-0
goal/target-8-0
goal/target-9-0
goal/target-10-0
goal/target-11-0
goal/target-12-0
goal/target-13-0
goal/target-14-0
goal/target-15-0
goal/target-16-0
goal/target-17-0
goal/target-18-0
goal/target-19-0
goal/target-20-0',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Indicators',
    'visibility' => 1,
  );

  return $export;
}
