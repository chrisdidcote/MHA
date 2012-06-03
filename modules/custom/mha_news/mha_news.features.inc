<?php
/**
 * @file
 * mha_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mha_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mha_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mha_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('A standard news article that will get added to the \'News\' section of the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
