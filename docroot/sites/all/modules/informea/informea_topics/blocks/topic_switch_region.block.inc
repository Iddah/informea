<?php

/**
 * Browse by Environmental Topic block.
 */
function informea_topics_topic_switch_region_block_view() {
  $block = [];
  $topic_id = _geographic_region_page_get_argument('topic');
  if (!empty($topic_id)) {
    $page = page_manager_get_current_page();
    $vocabulary = taxonomy_vocabulary_machine_name_load('geographical_region');
    $terms = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);
    usort($terms, function ($a, $b) {
      return strcmp($a->name, $b->name);
    });
    
    $current_region = _geographic_region_page_get_argument('region');

    $topic_path = 'topics/' . $page['contexts']['argument_term_2']->original_argument;
    $tabs = [
      [
        'data' => l(t('All regions'), $topic_path),
        'class' => empty($current_region) ? ['active', 'all-topics'] : ['all-topics'],
      ],
    ];
    foreach ($terms as $term) {
      if ($term->tid != 1118) { // Exclude "Global" region
        $tabs[] = [
          'data' => l($term->name, $topic_path . '/' . $term->name),
          'class' => !empty($current_region) && $current_region == $term->tid ? ['active'] : [],
        ];
      }
    }
    if (!empty($tabs) && count($tabs) > 1) {
      $block['content'] = [
        '#theme' => 'item_list',
        '#items' => $tabs,
        '#attributes' => ['class' => ['nav nav-tabs']],
      ];
    }
  }
  return $block;
}