<?php
/**
 * @file
 * mha_permission.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mha_permission_taxonomy_default_vocabularies() {
  return array(
    'portfolio' => array(
      'name' => 'Portfolio',
      'machine_name' => 'portfolio',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
