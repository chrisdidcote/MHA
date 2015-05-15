<?php

/**
 * @file
 * template.php
 */
function mha_res_preprocess_image_style(&$vars) {
  $vars['attributes']['class'][] = 'img-responsive'; // can be 'img-rounded', 'img-circle', or 'img-thumbnail'
}