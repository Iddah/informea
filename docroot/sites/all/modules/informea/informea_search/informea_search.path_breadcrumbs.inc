<?php
/**
 * @file
 * informea_search.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function informea_search_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_bilateral_treaties';
  $path_breadcrumb->name = 'Search bilateral treaties';
  $path_breadcrumb->path = 'search-bilateral-treaties';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Bilateral treaties',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search-bilateral-treaties',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_bilateral_treaties'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_court_decisions';
  $path_breadcrumb->name = 'Search court decisions';
  $path_breadcrumb->path = 'search-court-decisions';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Court decisions',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search-court-decisions',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_court_decisions'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_documents';
  $path_breadcrumb->name = 'Search documents';
  $path_breadcrumb->path = 'search-publications';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Documents',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search-publications',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_documents'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_goals_and_principles';
  $path_breadcrumb->name = 'Search goals and principles';
  $path_breadcrumb->path = 'search-goals-and-principles';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Goals',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search-goals-and-principles',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_goals_and_principles'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_legislation';
  $path_breadcrumb->name = 'Search legislation';
  $path_breadcrumb->path = 'search-legislation';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Legislation',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search-legislation',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_legislation'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search_multilateral_treaties';
  $path_breadcrumb->name = 'Search multilateral treaties';
  $path_breadcrumb->path = 'search';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
      1 => 'Multilateral treaties',
    ),
    'paths' => array(
      0 => '<none>',
      1 => 'search',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['search_multilateral_treaties'] = $path_breadcrumb;

  return $export;
}
