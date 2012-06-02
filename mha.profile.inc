<?php

define ('MC_REVERT_FEATURES_ALL', 'all');
define ('MC_REVERT_FEATURES_OVERRIDDEN', 'overridden');

/**
 * Helper function to revert features.
 *
 *  @param Array $modules
 *   Array keyed by module name that lists all components of each module to revert.
 *   The value against each module name can be one of three things:
 *     - array('component1', 'component2',)   : An array of components to revert
 *     - MC_REVERT_FEATURES_ALL         : Will revert every component
 *     - MC_REVERT_FEATURES_OVERRIDDEN  : Will revert only the overridden/needs review components
 */
function my_conservatives_revert_features(array $modules) {

  module_load_include('inc', 'features', 'features.export');
  features_include();

  foreach ($modules as $module => $components) {
    if (($feature = feature_load($module, TRUE)) && module_exists($module)) {

      if (!is_array ($components)) {
        switch ($components) {

          case MC_REVERT_FEATURES_ALL:
            $components = array();
            foreach (array_keys($feature->info['features']) as $component) {
              if (features_hook($component, 'features_revert')) {
                $components[] = $component;
              }
            }
            break;

          default:
          case MC_REVERT_FEATURES_OVERRIDDEN:
            $components = array();
            $states = features_get_component_states(array($feature->name), FALSE);
            foreach ($states[$feature->name] as $component => $state) {
              if (in_array($state, array(FEATURES_OVERRIDDEN, FEATURES_NEEDS_REVIEW)) && features_hook($component, 'features_revert')) {
                $components[] = $component;
              }
            }
            break;
        }
      }

      // We have now built up a list of components to revert, one way or another
      if (!empty ($components)) {
        features_revert(array($module => $components));
      }
    }
  }
}

/**
 * Helper function to programatically create a box.
 */
function my_conservatives_add_box($machine_name, $admin_description, $title, $body_text, $body_format = 'safe_html', $plugin_key = 'simple') {
  module_load_include('inc', 'boxes', 'boxes.admin');
  $box = boxes_factory($plugin_key, array(
    'plugin_key' => $plugin_key,
    'delta' => $machine_name,
    'description' => $admin_description,
    'title' => $title,
    'body' => array(
      'value' => $body_text,
      'format' => $body_format,
    )
  ));
  $box->save();
}


/**
 * Helper function for creating a new file value on a node.
 * Can only handle files that are already on the server.
 */
function my_conservatives_add_file($source, $destination, $mimetype = 'image/jpeg', $title = '', $alt = '') {
  $file           = new stdClass();
  $file->uid      = 0;
  $file->uri      = $source;
  $file->filemime = $mimetype;
  $file->filename = basename($file->uri);
  if (dirname($file->uri) != $destination) {
    $file = file_copy($file, $destination);
  }
  else {
    // If file is not to be copied, check whether file already exists,
    // as file_save() won't do that for us (compare file_copy() and
    // file_save())
    $existing_files = file_load_multiple(array(), array('uri' => $file->uri));
    if (count($existing_files)) {
      $existing = reset($existing_files);
      $file->fid = $existing->fid;
      $file->filename = $existing->filename;
    }
    file_save($file);
  }
  $file->title = $title;
  $file->alt = $alt;
  return (array) $file;
}


/**
 * Helper function for creating a new location field value on a node.
 * Can only handle specifying postcode
 */
function my_conservatives_add_location($field_name, $postal_code = '', $city = '', $province = '', $name = '', $country = 'gb') {
  $field = field_info_field('field_location');
  $settings = $field['settings']['location_settings'];
  $location = location_empty_location($settings);
  $location['location_settings'] = $settings;
  $location['name'] = $name;
  $location['city'] = $city;
  $location['province'] = $province;
  $location['country'] = $country;
  $location['postal_code'] = $postal_code;
  return $location;
}