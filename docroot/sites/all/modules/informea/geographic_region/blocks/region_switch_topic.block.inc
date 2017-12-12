<?php

/**
 * Browse by Environmental Topic block.
 */
function geographic_region_region_switch_topic_block_view() {
  $block = [];
  $region_id = _geographic_region_page_get_region_argument();
  if (!empty($region_id)) {
    $page = page_manager_get_current_page();
    $vocabulary = taxonomy_vocabulary_machine_name_load('mea_topic');
    $terms = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);
    usort($terms, function ($a, $b) {
      return strcmp($a->name, $b->name);
    });

    $current_topic = !empty($page['contexts']['argument_term_2']->argument)
      ? $page['contexts']['argument_term_2']->argument
      : NULL;

    $region_path = 'regions/' . $page['contexts']['argument_term_1']->original_argument;
    $tabs = [
      [
        'data' => l(t('All topics'), $region_path),
        'class' => empty($current_topic) ? ['active', 'all-topics'] : ['all-topics'],
      ],
    ];
    foreach ($terms as $term) {
      $tabs[] = [
        'data' => l($term->name, $region_path . '/' . $term->name),
        'class' => !empty($current_topic) && $current_topic == $term->tid ? ['active'] : [],
      ];
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