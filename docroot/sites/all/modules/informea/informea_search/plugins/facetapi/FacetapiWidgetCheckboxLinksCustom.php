<?php

class FacetapiWidgetCheckboxLinksCustom extends FacetapiWidgetCheckboxLinks {

  public function __construct($id, array $realm, \FacetapiFacet $facet, \stdClass $settings) {
    parent::__construct($id, $realm, $facet, $settings);
  }

  public function buildListItems($build) {
    foreach ($build as $tid => &$item) {
      if ($item['#active']) {
        $item['#theme'] = 'informea_facetapi_link_active';
      }
    }
    return parent::buildListItems($build);
  }
}