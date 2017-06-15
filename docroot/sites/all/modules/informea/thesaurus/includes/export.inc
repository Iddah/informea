<?php

/**
 * Export given VocBench RDF into Excel using PHPExcel library
 *
 * @param string $source
 *   Source file
 * @param string $destination
 *   Destination file
 *
 * @return bool|int
 *   0 on success
 */
function thesaurus_export_to_xls($source, $destination) {
  if (!easyrdf()) {
    drupal_set_message(t('EasyRdf library is not available.'), 'error');
    return FALSE;
  }
  if (!$source || !$destination) {
    drupal_set_message(t('Source and destination are required.'), 'error');
    return -1;
  }
  module_load_include('inc', 'phpexcel');

  $headers = array();
  $data = array();
  $options = array('format' => 'xls');

  $headers['Terms'] = array(
    'uri',
    'prefLabel',
    'altLabel',
    'definition',
    'definition 2',
    'definition 3',
    'related',
    'parentLabel',
  );

  $terms = thesaurus_load_from_rdf($source);

  foreach ($terms as $key => $term) {
    if ($term->status == 'Deprecated') {
      continue;
    }
    $uri = '';
    $drupal_term = thesaurus_term_load_by_uri($term->uri, 'thesaurus_informea');
    if ($drupal_term) {
      $uri = url(
        taxonomy_term_uri($drupal_term)['path'],
        array('absolute' => TRUE)
      );
    }
    else {
      drupal_set_message(t('Term not found in LEO: ') . $term->name, 'warning');
    }
    $altLabel = '';
    if (isset($term->altLabel['en'])) {
      foreach ($term->altLabel['en'] as $alt) {
        if ($altLabel != '') {
          $altLabel .= ', ';
        }
        $altLabel .= $alt;
      }
    }
    $definition1 = '';
    $definition2 = '';
    $definition3 = '';
    if (!empty($term->definition['en'])) {
      $def = $term->definition['en'];
      $definition1 = $def[0];
      $definition2 = count($def) > 1 ? $def[1] : '';
      $definition3 = count($def) > 2 ? $def[2] : '';
    }
    $related = '';
    foreach ($term->related as $rel) {
      $related .= $terms[$rel]->prefLabel['en'] . ', ';
    }
    $row = array(
      $uri,
      $term->prefLabel['en'],
      $altLabel,
      $definition1,
      $definition2,
      $definition3,
      $related,
      isset($term->broader) ? $terms[$term->broader]->prefLabel['en'] : '',
    );
    $data['Terms'][] = $row;
  }

  //Delete the file because phpexcel_export() appends data to existing file
  unlink($destination);
  $result = phpexcel_export($headers, $data, $destination, $options);
  if ($result == PHPEXCEL_SUCCESS) {
    drupal_set_message(t('Excel successfully exported.'));
    return 0;
  }
  else {
    drupal_set_message(t('Failed to export excel.'), 'error');
    return -1;
  }
}
