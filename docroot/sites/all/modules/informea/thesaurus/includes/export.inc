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
  $result = NULL;
  if ($terms = thesaurus_load_from_rdf($source)) {
    foreach ($terms as $key => $term) {
      if ($term->status == 'Deprecated') {
        continue;
      }
      $uri = $term->uri;
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
      // Try to get the term name in english or fallback to first language set.
      if (!empty($term->prefLabel['en'])) {
        $term_name = $term->prefLabel['en'];
      }
      else {
        $term_name = current($term->prefLabel);
      }
      $row = [
        $uri,
        $term_name,
        $altLabel,
        $definition1,
        $definition2,
        $definition3,
        $related,
        isset($term->broader) ? $terms[$term->broader]->prefLabel['en'] : '',
      ];
      $data['Terms'][] = $row;
    }

    //Delete the file because phpexcel_export() appends data to existing file
    if (file_exists($destination)) {
      unlink($destination);
    }
    $result = phpexcel_export($headers, $data, $destination, $options);
  }
  else {
    drupal_set_message(t('Failed to load RDF from source: @var', array('@var' => $source)));
  }
  if ($result == PHPEXCEL_SUCCESS) {
    drupal_set_message(t('Excel successfully exported.'));
    return 0;
  }
  else {
    drupal_set_message(t('Failed to export excel.'), 'error');
    return -1;
  }
}
