<?php
/**
 * @file
 * informea_topics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function informea_topics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
