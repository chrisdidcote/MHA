<?php

/**
 * @file
 *
 */

/**
 * Implements hook_views_data_alter().
 */
function views_area_options_views_data_alter(&$data) {
  $data['views']['block'] = array(
    'title' => t('Block'),
    'help' => t('Embed a block in an Area, such as Header, Footer, Empty Text.'),
    'area' => array(
      'handler' => 'views_area_options_block_handler_area_view',
    ),
  );
}