<?php

/**
 * Implements hook_panels_layouts()
 */
function bcs_bcs_landingpage_panels_layouts() {
  $items['bcs_landingpage'] = array(
    'title' => t('BCS Landing Page'),
    'category' => t('BCS'),
    'icon' => 'bcs_landingpage.png',
    'theme' => 'bcs_landingpage',
    'admin css' => 'bcs_landingpage.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}

