<?php
/**
 * @file
 * informea_password_policy.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function informea_password_policy_user_default_roles() {
  $roles = array();

  // Exported role: MEA.
  $roles['MEA'] = array(
    'name' => 'MEA',
    'weight' => 5,
  );

  // Exported role: administer content (unpublish).
  $roles['administer content (unpublish)'] = array(
    'name' => 'administer content (unpublish)',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 4,
  );

  // Exported role: content manager court decisions.
  $roles['content manager court decisions'] = array(
    'name' => 'content manager court decisions',
    'weight' => 11,
  );

  // Exported role: content manager declarations.
  $roles['content manager declarations'] = array(
    'name' => 'content manager declarations',
    'weight' => 8,
  );

  // Exported role: content manager goals and principles.
  $roles['content manager goals and principles'] = array(
    'name' => 'content manager goals and principles',
    'weight' => 9,
  );

  // Exported role: content manager legislation.
  $roles['content manager legislation'] = array(
    'name' => 'content manager legislation',
    'weight' => 10,
  );

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 3,
  );

  // Exported role: user manager.
  $roles['user manager'] = array(
    'name' => 'user manager',
    'weight' => 6,
  );

  return $roles;
}
