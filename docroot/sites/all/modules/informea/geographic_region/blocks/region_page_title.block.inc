<?php

/**
 * Page title for regional page.
 */
function geographic_region_region_page_title_block_view() {
  $block = [];
  $region_id = _geographic_region_page_get_region_argument();
  if (!empty($region_id)) {
    $vocabulary = taxonomy_vocabulary_machine_name_load('geographical_region');
    $terms = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);
    $options = [];
    foreach ($terms as $term) {
      if ($term->tid != 1118) { // Exclude "Global" region
        if ($term->tid == $region_id) {
          $title = sprintf('%s <span class="sr-only">%s</span>', t('Discover Environmental Information Concerning'), $term->name);
        }
        $options[url('/taxonomy/term/' . $term->tid)] = $term->name;
      }
    }
    if (!empty($options)) {
      $block['content'] = [
        '#type' => 'select',
        '#options' => $options,
        '#default_value' => url('/taxonomy/term/' . $region_id),
        '#prefix' => '<h1>' . $title . '</h1>',
        '#attributes' => ['onChange' => 'window.location.href=this.value'],
        '#select2' => [
          'width' => 'auto',
        ],
      ];
    }
  }
  return $block;
}