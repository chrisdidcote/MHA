<?php

/**
* drush make profiles/mha/mha_stub.make --working-copy -y
*/

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function mha_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'The Manor Hall Association';

  // Set the default country to be the UK.
  $form['server_settings']['site_default_country']['#default_value'] = 'GB';

  if (defined('SITE_ENVIRONMENT') && SITE_ENVIRONMENT == 'DEV') {
    $form['site_information']['site_mail']['#default_value']    = 'info@example.com';
    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    $form['admin_account']['account']['mail']['#default_value'] = 'info@example.com';
    $form['admin_account']['account']['pass'] = array(
      '#type' => 'value',
      '#value' => 'admin'
    );
    $form['update_notifications']['update_status_module']['#default_value'] = array(0,0);
  }
}

/**
 * Implements hook_install_tasks().
 */
function mha_install_tasks() {
  $tasks = array();

  if (defined('SITE_ENVIRONMENT') && (SITE_ENVIRONMENT == 'DEV')) {
    $tasks['mha_dev_task'] = array('display_name' => st('Development extras'));
  }

  $tasks['mha_taxonomy_task'] = array();

  $tasks['mha_theme_task'] = array();

  $tasks['mha_misc_task'] = array(
    'display_name' => st('Misc Install Tasks'),
    'type' => 'batch',
  );

  return $tasks;
}

function mha_theme_task() {
  $enable = array(
    'theme_default' => 'omega',
    'admin_theme' => 'seven',
    //'zen'
  );

  theme_enable($enable);

  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }
  variable_set('node_admin_theme', isset($enable['admin_theme']));

  // Disable the default Bartik theme
  theme_disable(array('bartik'));
  $settings = variable_set('theme_settings', array());
  $settings['toggle_slogan'] = FALSE;
  variable_set('theme_settings', $settings);
}

function _mha_taxonomy_task_add_terms($vid, $terms, $parent = 0) {
  foreach ($terms as $term => $children) {
    $drupal_term = array(
      'name' => $term,
      'description' => '',
      'parent' => array($parent),
      'vid' => $vid,
    );
    $drupal_term = (object) $drupal_term;
    taxonomy_term_save($drupal_term);
    _mha_taxonomy_task_add_terms($vid, $children, $drupal_term->tid);
  }

}

function mha_taxonomy_task() {

  /**
   * Add terms to vocabs we've added already in a feature module
   */
  // Add the terms to the categories category vocab
  foreach (taxonomy_get_vocabularies() as $vocabulary) {
    if ($vocabulary->machine_name == 'campaign_category') {
      $terms = array(
        'Politics & Society' => array(),
      );

      _mha_taxonomy_task_add_terms($vocabulary->vid, $terms);
    }
  }
}

function mha_misc_task() {

  $tasks_path = dirname(__FILE__) . '/install_tasks';

  $operations = platform_batch_operations($tasks_path);

  $batch = array(
    'title' => st('Configuring site'),
    'operations' => $operations,
    'error_message' => st('The installation has encountered an error.'),
  );

  return $batch;
}

/**
 * Platform installer Batch API delegator
 */
function platform_batch_delegator($function, $file, $message, $args, &$context) {

  if ($file) {
    require_once $file;
  }

  $args[] = &$context;

  $result = call_user_func_array($function, ($args) ? $args : array(&$context));

  if ($result) {
    $context['results'][] = $result;
  }
  if ($message) {
    $context['message'] = $message;
  }
}

/**
 * Searches a path for all install profile tasks and converts these into
 * a Batch API operations array.
 *
 * This function searches inside the PHP code of each discovered task and
 * attempts to discover the task callback and Batch API message.
 *
 * NOTE: The concept of extracting metadata directly from task files is experimental.
 *       It may well be this isn't a scalable endevour.
 */
function platform_batch_operations($tasks_path) {
  $operations = array();

  foreach (glob($tasks_path . '/*.inc') as $file) {
    $contents = file_get_contents($file);

    // Find first function name, assume this is the callback
    $matches = array();
    preg_match('/function[\s]+([A-Za-z0-9_]+)\(/', $contents, $matches);
    $callback = (isset($matches[1]) && strlen($matches[1]) > 0) ? $matches[1] : FALSE;

    // Find DOxygen @file description, assume this is the task title
    $matches = array();
    preg_match('/\/\*\*[\s]+\*[\s]+\@file[\s]+([A-Za-z0-9-_\.]+)[\s]+\*[\s]+([^\r\n]+)/m', $contents, $matches);
    $message = (isset($matches[2]) && strlen($matches[2]) > 0) ? $matches[2] : NULL;

    if ($callback) {
      $operations[] = array(
        'platform_batch_delegator',
        array(
          $callback,
          $file,
          $message,
          array(), // TODO: Implement argument passing
        )
      );
    }
    else {
      drupal_set_message(st('Could not discover callback in install task file: %file', array('%file' => $file)), 'error');
    }
  }

  return $operations;
}


function mha_dev_task() {
  // Install some module while developing
  module_enable(array('devel', 'devel_generate', 'views_ui', 'context_ui', 'diff', 'maillog'));

  // Don't want varnish in dev
  module_disable(array('varnish'));

  // Set up views to show sql data etc, and maillog to block email sending.
  $variables = array (
    'views_show_additional_queries' =>  0,
    'views_ui_always_live_preview' =>  1,
    'views_ui_show_advanced_column' =>  1,
    'views_ui_show_advanced_help_warning' =>  1,
    'views_ui_show_listing_filters' =>  0,
    'views_ui_show_master_display' =>  1,
    'views_ui_show_performance_statistics' =>  0,
    'views_ui_show_preview_information' =>  1,
    'views_ui_show_sql_query' =>  1,
    'views_ui_show_sql_query_where' =>  "above",
    'maillog_devel' => 1,
    'maillog_log' => 1,
    'maillog_send' => 0,
  );
  foreach ($variables as $name => $val) {
    variable_set($name, $val);
  }

}

/**
 * Helper function to just get the first valid value from a field
 * irrespective of language.
 */
function mc_get_first_field_value($entity, $field_name) {
  if (!empty($entity->{$field_name}) && is_array($entity->{$field_name})) {
    foreach ($entity->{$field_name} as $lang => &$values) {
      if (!empty($values) && is_array($values)) {
        foreach ($values as &$value) {
          return $value;
        }
      }
    }
  }
  return NULL;
}