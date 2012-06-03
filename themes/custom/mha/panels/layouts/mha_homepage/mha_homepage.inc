<?php

/**
 * Implements hook_panels_layouts()
 */
function mha_mha_homepage_panels_layouts() {
  $items['mha_homepage'] = array(
    'title' => t('MHA Homepage'),
    'category' => t('MHA'),
    'icon' => 'mha_homepage.png',
    'theme' => 'mha_homepage',
    'admin css' => 'mha_homepage.css',
    'regions' => array(
      'top_left' => t('Top left'),
      'top_right' => t('Top right'),
      'bottom_left' => t('Bottom left (upper)'),
      'bottom_left_under' => t('Bottom left (lower)'),
      'bottom_right' => t('Bottom right'),
      
    ),
  );

  return $items;
}

