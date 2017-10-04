<?php

class FacetapiWidgetCheckboxLinksInformea extends FacetapiWidgetCheckboxLinks {

  public function __construct($id, array $realm, \FacetapiFacet $facet, \stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
  }

  public function buildListItems($build) {
    switch ($this->getKey()) {
      case 'field_goal_source':
        foreach ($build as $tid => &$item) {
          unset($item['#count']);
          switch ($tid) {
            case 1753:
              $item['#markup'] = t('Sustainable Development Goals (SDG)');
              $item['#weight'] = 1;
              break;

            case 1739:
              $item['#markup'] = t('Global Environmental Goals (GEG)');
              $item['#weight'] = 2;
              break;

            case 1738:
              $item['#markup'] = t('Strategic Plans');
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
            '#uncheck_query' => [],
            '#weight' => 1,
          ],
          'target' => [
            '#markup' => t('Target'),
            '#html' => FALSE,
            '#active ' => 0,
            '#theme' => 'facetapi_link_inactive',
            '#uncheck_query' => [],
            '#weight' => 2,
          ],
        ];

        foreach ($build as $tid => &$item) {
          unset($item['#count']);
          $filter = "field_goal_type:{$tid}";
          switch ($tid) {
            case 1733:
            case 1734:
            case 1736:
              // Goal
              $customBuild['goal']['#path'] = $item['#path'];
              $customBuild['goal']['#query']['f'][] = $filter;
              if (!empty($item['#active'])) {
                $customBuild['goal']['#theme'] = $item['#theme'];
                $customBuild['goal']['#active'] = 1;
                $customBuild['target']['#query']['f'][] = $filter;
                $customBuild['target']['#uncheck_query'][] = $filter;
              }
              break;

            case 1732:
            case 1737:
              // Target
              $customBuild['target']['#path'] = $item['#path'];
              $customBuild['target']['#query']['f'][] = $filter;
              if (!empty($item['#active'])) {
                $customBuild['target']['#theme'] = $item['#theme'];
                $customBuild['target']['#active'] = 1;
                $customBuild['goal']['#query']['f'][] = $filter;
                $customBuild['goal']['#uncheck_query'][] = $filter;
              }
              break;

            default:
              // Indicator
              if (!empty($item['#active'])) {
                $customBuild['goal']['#query']['f'][] = $filter;
                $customBuild['goal']['#uncheck_query'][] = $filter;
                $customBuild['target']['#query']['f'][] = $filter;
                $customBuild['target']['#uncheck_query'][] = $filter;
              }
              $item['#weight'] = 3;
          }
        }

        foreach ([1732, 1733, 1734, 1736, 1737] as $key) {
          unset($build[$key]);
        }

        foreach ($customBuild as &$item) {
          if (!empty($item['#active'])) {
            $item['#query']['f'] = $item['#uncheck_query'];
          }
          $item['#query']['f'] = array_unique($item['#query']['f']);
          $build[] = $item;
        }
        break;
    }
    usort($build, function ($a, $b) {
      $aw = !empty($a['#weight']) ? $a['#weight'] : 100;
      $bw = !empty($b['#weight']) ? $b['#weight'] : 100;
      return ($aw < $bw) ? -1 : 1;
    });
    $build = parent::buildListItems($build);
    return $build;
  }
}