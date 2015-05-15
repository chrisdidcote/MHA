<?php

/**
 * @file
 *
 */

class views_area_options_block_handler_area_view extends views_handler_area {

  function option_definition() {
    $options = parent::option_definition();
    $options['views_area_options_block'] = array('default' => '', 'translatable' => FALSE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['views_area_options_block'] = array(
      '#type' => 'select',
      '#options' => _views_area_options_get_blocks(),
      '#default_value' => $this->options['views_area_options_block'],
      '#rows' => 6,
    );
  }

  function options_submit(&$form, &$form_state) {
    parent::options_submit($form, $form_state);
  }

  function render($empty = FALSE) {
    if (!$empty) {
      $block = explode(":", $this->options['views_area_options_block']);
      return $this->render_block($block);
    }
  }

  /**
   * Render a text area, using the proper format.
   */
  function render_block($block) {
    $module = $block[0];
    $delta = $block[1];
    $block = block_load($module, $delta);
    return drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
  }
}

