<?php
/**
 * @file
 * country_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function country_data_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function country_data_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function country_data_node_info() {
  $items = array(
    'contact_person' => array(
      'name' => t('Contact person'),
      'base' => 'node_content',
      'description' => t('Person with a certain role (eg. focal point)'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
    'geographical_site' => array(
      'name' => t('Geographical site'),
      'base' => 'node_content',
      'description' => t('Geographical sites protected by the MEAs'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'member_party' => array(
      'name' => t('Member Party'),
      'base' => 'node_content',
      'description' => t('Member party to a treaty'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
