<?php
/**
 * @file
 * geographic_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function geographic_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-engage_with_informea'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'engage_with_informea',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'regions/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'involvement',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -48,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Engage with InforMEA',
    'visibility' => 1,
  );

  $export['block-involvement_region_title'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'involvement_region_title',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'regions/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'involvement',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -50,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Get Involved',
    'visibility' => 1,
  );

  $export['mailchimp_signup-subscribe_to_newsletter'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'subscribe_to_newsletter',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_signup',
    'node_types' => array(),
    'pages' => 'regions/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'involvement',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -46,
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

  $export['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'social_media_links',
    'node_types' => array(),
    'pages' => 'regions/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'involvement',
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
    'title' => 'Follow our social media channels:',
    'visibility' => 1,
  );

  $export['views-news_and_events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_and_events-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_and_events-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_and_events-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_and_events-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_and_events-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_and_events-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_and_events-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-take_part_webform-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'take_part_webform-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'regions/*
topics/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'involvement',
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
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
