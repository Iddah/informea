<?php
/**
 * @file
 * informea_password_policy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function informea_password_policy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_password_policy_features_default_policies().
 */
function informea_password_policy_password_policy_features_default_policies() {
  return array(
    'informea' => array(
      'name' => 'informea',
      'description' => '',
      'enabled' => 1,
      'constraints' => array(
        'alphanumeric' => 8,
        'character_types' => 2,
        'delay' => 1,
        'digit' => 0,
        'digit_placement' => 0,
        'history' => 3,
        'length' => 8,
        'username' => 1,
      ),
      'created' => 0,
      'expiration' => 0,
      'warning' => '',
      'weight' => 0,
      'roles' => array(
        0 => 'administrator',
        1 => 'translator',
        2 => 'content manager',
        3 => 'MEA',
        4 => 'user manager',
        5 => 'administer content (unpublish)',
        6 => 'content manager declarations',
        7 => 'content manager goals and principles',
        8 => 'content manager legislation',
        9 => 'content manager court decisions',
      ),
    ),
  );
}
