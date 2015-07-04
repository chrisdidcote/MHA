<?php
/**
 * @file
 * mha_permission.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mha_permission_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mha_permission_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mha_permission_node_info() {
  $items = array(
    'membership_log_entry' => array(
      'name' => t('Membership Log Entry'),
      'base' => 'node_content',
      'description' => t('A  simple transaction log of everything that happens on a member entity'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
