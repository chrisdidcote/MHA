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
 * Implements hook_image_default_styles().
 */
function mha_news_image_default_styles() {
  $styles = array();

  // Exported image style: news_grid.
  $styles['news_grid'] = array(
    'name' => 'news_grid',
    'label' => 'news_grid',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '700',
          'height' => '500',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
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
