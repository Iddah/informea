<?php
/**
 * @file
 * informea.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function informea_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-map_disclaimer'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'map_disclaimer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'countries',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => -11,
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

  $export['informea-informea_front_page_slider'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'informea_front_page_slider',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'informea',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'front_page_hero',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-news-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-news-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-mea_contextual_events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mea_contextual_events-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'treaty',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
