<?php

/**
 * @file
 * template.php
 */
function mha_res_preprocess_image_style(&$vars) {
  $vars['attributes']['class'][] = 'img-responsive'; // can be 'img-rounded', 'img-circle', or 'img-thumbnail'
}

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function mha_res_preprocess_views_view_summary(&$vars) {
  if($vars['view']->name == 'elton_house_award' && $vars['view']->current_display == 'block_1') {
    $items = array();
    foreach($vars['rows'] as $result){
      if(is_numeric($result->link)) {
        $term_object = taxonomy_term_load($result->link);
        //print_r($term_object);
        //$results = db_query("SELECT * FROM taxonomy_term_data WHERE vid = :tid", array(':tid' => $term_object->field_data_field_academic_year_field_academic_year_tid));
        $result->link = $term_object->name;
        $items[$term_object->weight] = $result;
      }
      else {
        //used for the <no-value> item
        $items[] = $result;
      }
    }
    ksort($items);
  }
  else if($vars['view']->name == 'news' && $vars['view']->current_display == 'block_1') {
    $items = array();
    foreach($vars['rows'] as $result){
      if(is_numeric($result->link)) {
        $term_object = taxonomy_term_load($result->link);
        //print_r($term_object);
        //$results = db_query("SELECT * FROM taxonomy_term_data WHERE vid = :tid", array(':tid' => $term_object->field_data_field_academic_year_field_academic_year_tid));
        $result->link = $term_object->name;
        $items[$term_object->weight] = $result;
      }
      else {
        //used for the <no-value> item
        $items[] = $result;
      }
    }
    ksort($items);
  }
  
  $vars['rows'] = $items;
}

function mha_res_preprocess_page(&$variables){
  if(arg(0) == 'membership'){
    $breadcrumb = array();
    if(arg(1) == 'home'){
      //$breadcrumb[] = l(drupal_get_title(), base_path() . request_uri());
    }
    if(arg(1) == 'bulk-upload'){
      $breadcrumb[] = l('Home', '<front>');
      $breadcrumb[] = l('Membership Dashboard', 'membership/home');
      drupal_set_breadcrumb($breadcrumb);
    }
    if(arg(1) == 'emails'){
      $breadcrumb[] = l('Home', '<front>');
      $breadcrumb[] = l('Membership Dashboard', 'membership/home');
      drupal_set_breadcrumb($breadcrumb);
    }
    if(arg(1) == 'mailing-labels'){
      $breadcrumb[] = l('Home', '<front>');
      $breadcrumb[] = l('Membership Dashboard', 'membership/home');
      drupal_set_breadcrumb($breadcrumb);
    }
    if(arg(1) == 'search'){
      $breadcrumb[] = l('Home', '<front>');
      $breadcrumb[] = l('Membership Dashboard', 'membership/home');
      drupal_set_breadcrumb($breadcrumb);
    }
  }
  if(arg(0) == 'admin' && arg(1) == 'people' && arg(2) == 'create'){
    $breadcrumb[] = l('Home', '<front>');
    $breadcrumb[] = l('Membership Dashboard', 'membership/home');
    drupal_set_title('Manually Add Member');
    drupal_set_breadcrumb($breadcrumb);
  }
  if(arg(0) == 'ereg'){
    $variables['theme_hook_suggestions'][] =  'page__ereg';
  }
}

function mha_res_preprocess_html (&$vars) {
  if(arg(0) == 'ereg'){
    $variables['theme_hook_suggestions'][] =  'html__ereg';
  }
}