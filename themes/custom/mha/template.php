<?php

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

function mha_preprocess_views_view_summary(&$vars) {
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
