<?php

/**
 * Browse treaties by Environmental Topic block.
 */
function treaty_switch_topic_block_view($all_topics_path = 'treaties') {
  $block = [];
  // $region_id = _geographic_region_page_get_region_argument();
  // if (!empty($region_id)) {
    $page = page_manager_get_current_page();
    $vocabulary = taxonomy_vocabulary_machine_name_load('mea_topic');
    $terms = entity_load('taxonomy_term', FALSE, ['vid' => $vocabulary->vid]);
    usort($terms, function ($a, $b) {
      return strcmp($a->name, $b->name);
    });

    $current_topic = _geographic_region_page_get_argument('topic');
    //$all_topics_path = 'treaties';

    $block['content'] = [
      '#prefix' =>
        '<div class="informea-switcher_wrapper">
          <nav id="informeaSwitch" class="informea-switcher">
            <div id="informeaSwitchContents" class="informea-switcher_contents">',
      '#suffix' => '</div></nav>
        <button id="informeaSwitchAdvancerLeft" class="informea-switcher_advancer informea-switcher_advancer--left" type="button">
          <svg class="informea-switcher_advancer-icon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 551 1024"><path d="M445.44 38.183L-2.53 512l447.97 473.817 85.857-81.173-409.6-433.23v81.172l409.6-433.23L445.44 38.18z"/></svg>
        </button>
        <button id="informeaSwitchAdvancerRight" class="informea-switcher_advancer informea-switcher_advancer--right" type="button">
          <svg class="informea-switcher_advancer-icon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 551 1024"><path d="M105.56 985.817L553.53 512 105.56 38.183l-85.857 81.173 409.6 433.23v-81.172l-409.6 433.23 85.856 81.174z"/></svg>
        </button>
      </div>'
    ];

    // Add all regions item
    $all_topics_classes = ['informea-switcher_link', 'js-informea-switcher_link', 'all-options'];
    if(empty($current_topic)) {
      $all_topics_classes[] = 'active';
    }
    $block['content'][] = [
      '#markup' => l(t('All topics'), $all_topics_path),
      '#prefix' => sprintf('<div class="%s">', implode($all_topics_classes, ' ')),
      '#suffix' => '</div>'
    ];

    foreach ($terms as $term) {
      if (!empty($term->field_published[LANGUAGE_NONE][0]['value'])) {

        $tab_classes = ['informea-switcher_link', 'js-informea-switcher_link'];
        if(!empty($current_topic) && $current_topic == $term->tid) {
          $tab_classes[] = 'active';
        }
        $tab_content = l($term->name, $all_topics_path . '/' . strtolower(str_replace(' ', '-', $term->name)));

        $block['content'][] = [
          '#markup' => $tab_content,
          '#prefix' => sprintf('<div class="%s">', implode($tab_classes, ' ')),
          '#suffix' => '</div>'
        ];

      }
    }

  // }
  return $block;
}
