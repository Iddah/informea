<?php
/**
 * @file
 * meeting.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function meeting_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-events-homepage_events'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events-homepage_events',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'front_page_content',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -47,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
