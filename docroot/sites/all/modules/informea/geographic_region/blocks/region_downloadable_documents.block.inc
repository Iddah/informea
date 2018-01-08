<?php

/**
 * Downloadable documents block.
 */
function geographic_region_region_downloadable_documents_block_view() {
  $block = [];
  $region_id = _geographic_region_page_get_region_argument();
  if (!empty($region_id)) {
    $page = page_manager_get_current_page();
    $topic = $page['contexts']['argument_term_2']->argument;
    $sections = _region_downloadable_documents_block_get_sections();
    $list = [];
    foreach ($sections as $section) {
      $subList = [['data' => $section['title'], 'class' => ['section-title']]];
      foreach ($section['items'] as $title => $options) {
        $count = _get_content_count_by_region($options['type'], $region_id, $topic, !empty($options['fieldConditions']) ? $options['fieldConditions'] : []);
        if (!empty($count)) {
          $subList[] = ['data' => _geographic_region_build_search_link($region_id, $topic, $options, $title, $count)];
        }
      }
      if (count($subList) > 1) {
        $list = array_merge($list, $subList);
      }
    }
    if (!empty($list)) {
      $block['content'] = [
        '#theme' => 'item_list',
        '#items' => $list,
        '#attributes' => [
          'class' => [
            'list-unstyled',
            'region-downloadable-documents-list',
          ],
        ],
      ];
    }
    else {
      $block['content'] = t('There are no downloadable documents for current filters.');
    }
  }
  return $block;
}

/**
 * Executes an entity field count query and returns the count of nodes filtered
 * by region and other fields.
 *
 * @param string $content_type
 *  The value of the bundle query condition.
 * @param int $region_id
 *  Region term tid.
 * @param null|int $topic_id
 *  Topic term tid.
 * @param array $fieldConditions
 *  Array of extra field conditions. Each item needs to be an array containing
 * the following keys:
 *    - field
 *    - column (optional)
 *    - value (optional)
 *    - operator (optional)
 *
 * @return int
 *  The count query result.
 */
function _get_content_count_by_region($content_type, $region_id, $topic_id = NULL, $fieldConditions = []) {
  // @todo: refactor this function after all content types have field_region and field_mea_topic.
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', $content_type)
    ->propertyCondition('status', NODE_PUBLISHED);
  switch ($content_type) {
    case 'decision':
    case 'document':
      $regional_treaties = _get_regional_treaties($region_id, $topic_id) + [-1];
      $query->fieldCondition('field_treaty', 'target_id', $regional_treaties, 'IN');
      break;

    default:
      $query->fieldCondition('field_region', 'tid', $region_id);
      if (!empty($topic_id)) {
        $query->fieldCondition('field_mea_topic', 'tid', $topic_id);
      }
  }
  foreach ($fieldConditions as $condition) {
    $column = !empty($condition['column']) ? $condition['column'] : NULL;
    $value = !empty($condition['value']) ? $condition['value'] : NULL;
    $operator = !empty($condition['operator']) ? $condition['operator'] : NULL;
    $query->fieldCondition($condition['field'], $column, $value, $operator);
  }
  return $query->count()->execute();
}

/**
 * Builds the query for solr-based views.
 */
function _geographic_region_build_search_link($region_id, $topic_id, $item, $link_title, $count) {
  $f = [
    "field_region:{$region_id}",
    "field_topic:{$topic_id}",
  ];

  switch ($item['type']) {
    case 'legislation':
      $path = 'search-legislation';
      break;

    default:
      $path = 'search';
      $f = array_merge($f, ['type:' . $item['type']]);
  }

  return l(
    sprintf('%s (%s)', $link_title, $count),
    $path,
    ['query' => ['f' => $f]]
  );

}

function _region_downloadable_documents_block_get_sections() {
  return [
    [
      'title' => t('Treaties documents'),
      'items' => [
        t('Meetings decisions') => ['type' => 'decision'],
        t('COP Reports') => [
          'type' => 'document',
          'fieldConditions' => [
            [
              'field' => 'field_document_type',
              'column' => 'tid',
              'value' => [3131, 3132],
              'operator' => 'IN',
            ],
          ],
        ],
      ],
    ],
    [
      'title' => t('National submissions'),
      'items' => [
        t('National Action Plans') => ['type' => 'action_plan'],
        t('National Reports') => ['type' => 'national_report'],
      ],
    ],
    [
      'title' => t('National legislation and cases'),
      'items' => [
        t('National Legislation') => ['type' => 'legislation'],
        t('Court Decisions') => ['type' => 'court_decisions'],
      ],
    ],
    [
      'title' => t('Literature documents'),
      'items' => [
        t('Publications') => ['type' => 'literature'],
        t('Manuals') => [
          'type' => 'document',
          'fieldConditions' => [
            [
              'field' => 'field_document_type',
              'column' => 'tid',
              'value' => 3178,
            ],
          ],
        ],
        t('Technical Series') => [
          'type' => 'document',
          'fieldConditions' => [
            [
              'field' => 'field_document_type',
              'column' => 'tid',
              'value' => 2817,
            ],
          ],
        ],
      ],
    ],
  ];
}
