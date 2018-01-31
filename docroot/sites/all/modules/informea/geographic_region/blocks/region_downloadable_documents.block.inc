<?php

/**
 * Downloadable documents block.
 */
function geographic_region_region_downloadable_documents_block_view() {
  $block = [];
  $block['content'] = t('There are no downloadable documents for current filters.');
  $region_id = _geographic_region_page_get_region_argument();
  $topic = _geographic_region_page_get_argument('topic');
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
function _get_content_count_by_region($content_type, $region_id = NULL, $topic_id = NULL, $fieldConditions = []) {
  if (!empty($region_id)) {
    $fieldConditions['field_region'] = [
      'field' => 'field_region',
      'value' => $region_id,
    ];
  }
  if (!empty($topic_id)) {
    $fieldConditions['field_mea_topic'] = [
      'field' => 'field_mea_topic',
      'value' => $topic_id,
    ];
  }
  $view = views_get_view('search');
  $view->set_display('page');
  $view->init_query();
  /** @var \SearchApiViewsQuery $query */
  $query = $view->query;
  foreach ($fieldConditions as $condition) {
    if (!empty($condition['field']) && !empty($condition['value'])) {
      $filter = $query->createFilter('AND', ['facet:' . $condition['field']]);
      if (is_array($condition['value'])) {
        foreach ($condition['value'] as $value) {
          $filter->condition($condition['field'], $value);
        }
      }
      else {
        $filter->condition($condition['field'], $condition['value']);
      }
      $query->filter($filter);
    }
  }
  $view->query = $query;
  $view->execute();
  return $view->total_rows;
}

/**
 * Builds the query for solr-based views.
 */
function _geographic_region_build_search_link($region_id = NULL, $topic_id = NULL, $item, $link_title, $count) {
  $f = [];
  if (!empty($region_id)) {
    $f[] = "field_region:{$region_id}";
  }
  if (!empty($topic_id)) {
    $f[] = "field_topic:{$topic_id}";
  }

  if (!empty($item['fieldConditions'])) {
    foreach ($item['fieldConditions'] as $condition) {
      if (is_array($condition['value'])) {
        foreach ($condition['value'] as $value) {
          $f[] = "{$condition['field']}:{$value}";
        }
      }
      else {
        $f[] = "{$condition['field']}:{$condition['value']}";
      }
    }
  }

  return l(
    sprintf('%s (%s)', $link_title, $count),
    'search',
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
      'title' => t('Law and cases'),
      'items' => [
        t('National Legislation') => [
          'type' => 'legislation',
        ],
        t('Court Decisions') => ['type' => 'court_decisions'],
      ],
    ],
    [
      'title' => t('Literature documents'),
      'items' => [
        t('Publications') => [
          'type' => 'literature',
        ],
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
