<?php
/**
 * @file
 * informea_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function informea_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function informea_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_server().
 */
function informea_search_default_search_api_server() {
  $items = array();
  $items['apache_solr_news_core'] = entity_import('search_api_server', '{
    "name" : "Apache Solr 4 news core",
    "machine_name" : "apache_solr_news_core",
    "description" : "The news core",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/informea-news",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : [],
    "tes" : { "enable" : false }
  }');
  $items['search_solr_server'] = entity_import('search_api_server', '{
    "name" : "Apache Solr server",
    "machine_name" : "search_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids_form" : [],
      "clean_ids" : false,
      "site_hash_form" : [],
      "site_hash" : false,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/informea",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 1,
      "retrieve_data" : 1,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "http" : { "http_user" : "", "http_pass" : null }
    },
    "enabled" : "1",
    "rdf_mapping" : [],
    "tes" : { "enable" : false }
  }');
  return $items;
}
