<?php

/**
 * Page title for topic page.
 */
function informea_topics_topic_page_title_block_view() {
  $block = [];
  $topic_id = _geographic_region_page_get_argument('topic');
  if (!empty($topic_id)) {
    $vocabulary = taxonomy_vocabulary_machine_name_load('mea_topic');
    $terms = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);
    $options = [];
    $title = '';
    foreach ($terms as $term) {
      if (!empty($term->field_published[LANGUAGE_NONE][0]['value'])) {
        if ($term->tid == $topic_id) {
          $title = sprintf('%s <span class="sr-only">%s</span>', t('Discover environmental information in'), $term->name);
        }
        $options[url('/taxonomy/term/' . $term->tid)] = $term->name;
      }
    }
    if (!empty($options)) {
      $block['content'] = [
        '#type' => 'select',
        '#options' => $options,
        '#default_value' => url('/taxonomy/term/' . $topic_id),
        '#prefix' => '<h1>' . $title . '</h1>',
        '#attributes' => ['onChange' => 'window.location.href=this.value', 'class' => ['use-select-2'], 'id' => 'edit-geographic-region'],
        '#select2' => [
          'width' => 'auto'
        ],
        '#attached' => array('libraries_load' => array(array('select2', variable_get('select2_compression_type', 'minified')))),
      ];
    }
  }
  return $block;
}
