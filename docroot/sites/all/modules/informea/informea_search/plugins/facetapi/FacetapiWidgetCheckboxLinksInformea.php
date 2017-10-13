<?php

class FacetapiWidgetCheckboxLinksInformea extends FacetapiWidgetCheckboxLinks {

  public function __construct($id, array $realm, \FacetapiFacet $facet, \stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
  }

  public function buildListItems($build) {
    switch ($this->getKey()) {
      case 'field_goal_source':
        foreach ($build as $tid => &$item) {
          $item['#count'] = 'hidden';
          switch ($tid) {
            case 1753:
              $item['#markup'] = t('SDG');
              $item['#weight'] = 1;
              break;

            case 1739:
              $item['#markup'] = t('GEG');
              $item['#weight'] = 2;
              break;

            case 1738:
              $item['#markup'] = t('Aichi');
              $item['#weight'] = 3;
              break;
          }
        }
        break;

      case 'field_goal_type':
        $customBuild = [
          'goal' => [
            '#markup' => t('Goal'),
            '#html' => FALSE,
            '#active ' => 0,
            '#theme' => 'facetapi_link_inactive',
            '#query' => ['f' => []],
            '#check_query' => [],
            '#uncheck_query' => [],
            '#count' => 'hidden',
            '#weight' => 1,
          ],
          'target' => [
            '#markup' => t('Target'),
            '#html' => FALSE,
            '#active ' => 0,
            '#theme' => 'facetapi_link_inactive',
            '#check_query' => [],
            '#uncheck_query' => [],
            '#count' => 'hidden',
            '#weight' => 2,
          ],
        ];

        foreach ($build as $tid => &$item) {
          $item['#count'] = 'hidden';
          $filter = "field_goal_type:{$tid}";
          switch ($tid) {
            case 1733:
            case 1734:
            case 1736:
              $type = 'goal';
              break;

            case 1732:
            case 1737:
              $type = 'target';
              break;

            default:
              // Indicator
              $type = NULL;
              $item['#weight'] = 3;
          }
          if (!empty($type)) {
            $customBuild[$type]['#path'] = $item['#path'];

            $customBuild[$type]['#check_query'] = array_merge($customBuild[$type]['#check_query'], $item['#query']['f']);
            $customBuild[$type]['#uncheck_query'][] = $filter;

            if (!empty($item['#active'])) {
              $customBuild[$type]['#theme'] = $item['#theme'];
              $customBuild[$type]['#active'] = 1;
            }
          }
        }

        foreach ([1732, 1733, 1734, 1736, 1737] as $key) {
          unset($build[$key]);
        }

        foreach ($customBuild as &$item) {
          if (!empty($item['#active'])) {
            $item['#query']['f'] = array_unique(array_diff($item['#check_query'], $item['#uncheck_query']));
          }
          else {
            $item['#active'] = 0;
            $item['#query']['f'] = array_unique($item['#check_query']);
          }
          $build[] = $item;
        }
        break;
    }
    usort($build, function ($a, $b) {
      $aw = !empty($a['#weight']) ? $a['#weight'] : 100;
      $bw = !empty($b['#weight']) ? $b['#weight'] : 100;
      return ($aw < $bw) ? -1 : 1;
    });
    return parent::buildListItems($build);
  }
}