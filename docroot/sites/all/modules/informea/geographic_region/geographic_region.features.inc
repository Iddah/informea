<?php
/**
 * @file
 * geographic_region.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geographic_region_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
