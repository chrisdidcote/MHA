<?php
/**
 * @file
 * mha_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mha_permission_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '4',
  );

  // Exported role: Member.
  $roles['Member'] = array(
    'name' => 'Member',
    'weight' => '2',
  );

  // Exported role: Officer.
  $roles['Officer'] = array(
    'name' => 'Officer',
    'weight' => '3',
  );

  return $roles;
}
