<?php

/**
 * Implements hook_panels_layouts()
 */
function bcs_bcs_contentpage_panels_layouts() {
  $items['bcs_contentpage'] = array(
    'title' => t('BCS Content Page'),
    'category' => t('BCS'),
    'icon' => 'bcs_contentpage.png',
    'theme' => 'bcs_contentpage',
    'admin css' => 'bcs_contentpage.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side')
    ),
  );

  return $items;
}

