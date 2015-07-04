<?php
/**
 * @file
 * mha_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mha_news_taxonomy_default_vocabularies() {
  return array(
    'news_type' => array(
      'name' => 'News Type',
      'machine_name' => 'news_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
