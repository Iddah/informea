<?php
/**
 * @file
 * informea_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function informea_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-3KWtmCIzHfDw1AIpfhJ6xCbHm5eyrM1x'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3KWtmCIzHfDw1AIpfhJ6xCbHm5eyrM1x',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
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
    'title' => 'Geographical Region',
    'visibility' => 1,
  );

  $export['facetapi-3mJm1W4dfmvVJwQU6Fwa1UYCADF630r5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3mJm1W4dfmvVJwQU6Fwa1UYCADF630r5',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -43,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Type',
    'visibility' => 1,
  );

  $export['facetapi-5dVDefUus1Cng13EbCDnPRh5v5tXEP7B'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '5dVDefUus1Cng13EbCDnPRh5v5tXEP7B',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  $export['facetapi-7R00LhqRFhlzPLK775MhkBao9G1ddsJq'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '7R00LhqRFhlzPLK775MhkBao9G1ddsJq',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*
documents
node/*/documents
treaties/*/documents',
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
    'title' => 'Document type',
    'visibility' => 1,
  );

  $export['facetapi-ABol1qBh79jsfGqF27usDpaBznEzCn7M'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ABol1qBh79jsfGqF27usDpaBznEzCn7M',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-court-decisions
search-court-decisions/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
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
    'title' => 'Type of Decision',
    'visibility' => 1,
  );

  $export['facetapi-C0KfOYe1CTJW1tlSyl3brJVVT4qQLzy0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'C0KfOYe1CTJW1tlSyl3brJVVT4qQLzy0',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search
search/*
search-bilateral-treaties
search-bilateral-treaties/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -57,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Treaty/Organisation',
    'visibility' => 1,
  );

  $export['facetapi-EBe4nF0bWIclTeTpPk5EfoKyGT3EgxZw'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'EBe4nF0bWIclTeTpPk5EfoKyGT3EgxZw',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-legislation
search-legislation/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
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
    'title' => 'Geographical Region',
    'visibility' => 1,
  );

  $export['facetapi-EPopgYUIPRwLmsNXr9X8D1FoiB4vdkPG'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'EPopgYUIPRwLmsNXr9X8D1FoiB4vdkPG',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*
documents
node/*/documents
treaties/*/documents',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Country',
    'visibility' => 1,
  );

  $export['facetapi-EeqfYRvf4OeayxrDPBXmxh0uLs695r1S'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'EeqfYRvf4OeayxrDPBXmxh0uLs695r1S',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search
search/*
search-bilateral-treaties
search-bilateral-treaties/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -55,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Geographical Region',
    'visibility' => 1,
  );

  $export['facetapi-I6RVf55CR0muKADP1zTBRoXexXDd7LN4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'I6RVf55CR0muKADP1zTBRoXexXDd7LN4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search
search/*
search-bilateral-treaties
search-bilateral-treaties/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -52,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Term Concepts',
    'visibility' => 1,
  );

  $export['facetapi-IhbpziRRQ04ohXLVPOH1pzkj01ySLvut'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'IhbpziRRQ04ohXLVPOH1pzkj01ySLvut',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-legislation
search-legislation/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
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
    'title' => 'Country',
    'visibility' => 1,
  );

  $export['facetapi-IyeCKCprQMtwZlPzlV9rNi3D01lK0oqY'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'IyeCKCprQMtwZlPzlV9rNi3D01lK0oqY',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -39,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Geographical Scope',
    'visibility' => 1,
  );

  $export['facetapi-O1SxmXX8M8WxQY0H1ovKh0bHXdiFF6ao'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'O1SxmXX8M8WxQY0H1ovKh0bHXdiFF6ao',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*
documents',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -44,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Treaty',
    'visibility' => 1,
  );

  $export['facetapi-OpgMbCZOkFkccfINy31pwWl2rj4FLDML'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'OpgMbCZOkFkccfINy31pwWl2rj4FLDML',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-goals-and-principles
search-goals-and-principles/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Geographical scope',
    'visibility' => 1,
  );

  $export['facetapi-Pg30Pc0KVb1ixI192kdMOYYpptaM7w81'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Pg30Pc0KVb1ixI192kdMOYYpptaM7w81',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'informea_theme',
        'weight' => -45,
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

  $export['facetapi-W2YCUd5NB1p1Gf54RG0Rhl01CPHftg2r'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'W2YCUd5NB1p1Gf54RG0Rhl01CPHftg2r',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-court-decisions
search-court-decisions/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
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
    'title' => 'InforMEA Tags',
    'visibility' => 1,
  );

  $export['facetapi-bhF7dlwZfRYrATVWsYC6eOvTl9pFOHHh'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'bhF7dlwZfRYrATVWsYC6eOvTl9pFOHHh',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-legislation
search-legislation/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -51,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Type of Legislation',
    'visibility' => 1,
  );

  $export['facetapi-fdq04xNUyxSV1CkoyeTHIwwlufwxjcFK'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fdq04xNUyxSV1CkoyeTHIwwlufwxjcFK',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-court-decisions
search-court-decisions/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -45,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Geographical Region',
    'visibility' => 1,
  );

  $export['facetapi-jX6n57R09128yKk8mDTq4yM84f6PAh5a'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'jX6n57R09128yKk8mDTq4yM84f6PAh5a',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-court-decisions
search-court-decisions/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
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
    'title' => 'Country',
    'visibility' => 1,
  );

  $export['facetapi-lFTDOmrsVmQmRqG1yhvhkLE1HBeKji6v'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lFTDOmrsVmQmRqG1yhvhkLE1HBeKji6v',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Type of Literature',
    'visibility' => 1,
  );

  $export['facetapi-mMWjFpAxojLqkHPLTkVRmv1cZ3AJHpAx'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'mMWjFpAxojLqkHPLTkVRmv1cZ3AJHpAx',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-goals-and-principles
search-goals-and-principles/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'InforMEA tags',
    'visibility' => 1,
  );

  $export['facetapi-nH0H81P3pdN1dfvkdvCD5VKkmHgsDC6W'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nH0H81P3pdN1dfvkdvCD5VKkmHgsDC6W',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Publication Place',
    'visibility' => 1,
  );

  $export['facetapi-nY6tuVLZOW4TVNhZR18BPiJUCXU0NcoL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nY6tuVLZOW4TVNhZR18BPiJUCXU0NcoL',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-legislation
search-legislation/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -45,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'InforMEA Tags',
    'visibility' => 1,
  );

  $export['facetapi-ngjcSTHvKkM3YrCBeABMwT0nTaX6fC4t'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ngjcSTHvKkM3YrCBeABMwT0nTaX6fC4t',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*
documents
node/*/documents
treaties/*/documents',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'InforMEA tags',
    'visibility' => 1,
  );

  $export['facetapi-p9FlWiab4gZsEGaV8liVtKqUrzwmczuq'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'p9FlWiab4gZsEGaV8liVtKqUrzwmczuq',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-publications
search-publications/*',
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
    'title' => 'Territorial Subdivision',
    'visibility' => 1,
  );

  $export['facetapi-qTurWYUYYufA4n4p1OFoxmFTW0m9G81J'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'qTurWYUYYufA4n4p1OFoxmFTW0m9G81J',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search
search/*
search-bilateral-treaties
search-bilateral-treaties/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -53,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Party',
    'visibility' => 1,
  );

  $export['facetapi-rm0orTI2PzmJnpZ1x07XLj097DSEjQQJ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'rm0orTI2PzmJnpZ1x07XLj097DSEjQQJ',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search
search/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -56,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Type',
    'visibility' => 1,
  );

  $export['facetapi-sNdnHZ9tEwU574CRGjjcpEylZVw53rTR'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'sNdnHZ9tEwU574CRGjjcpEylZVw53rTR',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Type',
    'visibility' => 0,
  );

  $export['facetapi-wVKiNP1SAsYAATxmhganCmTF53XyZSa4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'wVKiNP1SAsYAATxmhganCmTF53XyZSa4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-goals-and-principles
search-goals-and-principles/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => '',
        'status' => 0,
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
    'title' => 'Type',
    'visibility' => 1,
  );

  $export['facetapi-x6qthNG10R5lpI4ajlUQ11DGwlsmdHRM'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'x6qthNG10R5lpI4ajlUQ11DGwlsmdHRM',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search-goals-and-principles
search-goals-and-principles/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter',
    'visibility' => 1,
  );

  $export['informea_search-search_informea_switch_topic'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search_informea_switch_topic',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'informea_search',
    'node_types' => array(),
    'pages' => 'search
search/*
search-legislation
search-legislation/*
search-court-decisions
search-court-decisions/*
search-publications
search-publications/*
search-bilateral-treaties
search-bilateral-treaties/*
search-goals-and-principles
search-goals-and-principles/*',
    'roles' => array(),
    'themes' => array(
      'informea_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'informea_theme',
        'weight' => -49,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
