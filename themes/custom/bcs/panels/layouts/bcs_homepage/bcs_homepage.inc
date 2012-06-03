<?php

/**
 * Implements hook_panels_layouts()
 */
function bcs_bcs_homepage_panels_layouts() {
  $items['bcs_homepage'] = array(
    'title' => t('BCS Homepage'),
    'category' => t('BCS'),
    'icon' => 'bcs_homepage.png',
    'theme' => 'bcs_homepage',
    'admin css' => 'bcs_homepage.css',
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

