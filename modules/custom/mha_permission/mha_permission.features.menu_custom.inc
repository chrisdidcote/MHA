<?php
/**
 * @file
 * mha_permission.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mha_permission_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-membership-administration.
  $menus['menu-membership-administration'] = array(
    'menu_name' => 'menu-membership-administration',
    'title' => 'Membership Administration',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Membership Administration');


  return $menus;
}
