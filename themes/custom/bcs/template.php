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

function bcs_theme() {
  $items = array();
  
  $items['views_view_email'] = array(
    'variables' => array('view_array' => array(), 'view' => NULL),
    'template' => 'views-view-email',
    'path' => drupal_get_path('theme', 'bcs') . '/templates/views',
  );
  
  return $items;
}

/**
 * Output breadcrumb as an unorderd list with unique and first/last classes
 */
function bcs_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('Your location:') . '</h2>';
    $output .= '<p>'. t('Your location:') . '</p>';
    $separator = '<div class="breadcrumb-separator"></div>';

    $crumbs = '<ul class="breadcrumbs clearfix">';
    $array_size = count($breadcrumb);
    $i = 0;
    while ( $i < $array_size) {
      $crumbs .= '<li class="breadcrumb-' . $i;
      if ($i == 0) {
        $crumbs .= ' first';
      }
      if ($i+1 == $array_size) {
        $crumbs .= ' last';
      }
      $crumbs .=  '">' . $breadcrumb[$i] . '</li>';
      if ($i+1 == $array_size) {

      }
      $crumbs .= $separator;
      $i++;
    }

    $crumbs .= '<li class="breadcrumb-activepage">' . drupal_get_title() . '</li>';
    $crumbs .= '</ul>';
    $output .= $crumbs;

    return $output;
  }
}

function bcs_preprocess_zone(&$vars) {
  if ($vars['zone']== 'content') {
    $theme = alpha_get_theme();
    if (isset($theme->page['page']['#excluded']['above_content'])) {
      $vars['above_content'] = $theme->page['page']['#excluded']['above_content'];
    }
  }
}

function bcs_views_load_more_pager($vars) {
  global $pager_page_array, $pager_total;

  drupal_add_js(drupal_get_path('module', 'views_load_more').'/views_load_more.js');

  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];

  $li_next = theme('pager_next',
    array(
      'text' => (isset($tags[3]) ? $tags[3] : t($vars['more_button_text'])),
      'element' => $element,
      'interval' => 1,
      'parameters' => $parameters,
    )
  );
  if (!empty($li_next)) {
    $items[] = array(
      'class' => array('pager-next'),
      'data' => $li_next,
    );
  }

  if (!empty($items) && $pager_total[$element] > 1) {
    return theme('item_list',
      array(
        'items' => $items,
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array('class' => array('pager', 'pager-load-more')),
      )
    );
  }
}

/**
 * Node-specific links theme function.
 */
function bcs_links__node($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
           && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  if (!empty($output)) {
    $output = '<nav class="links node-links clearfix">' . $output . '</nav>';
  }
  return $output;
}

/**
 * Implements hook_preprocess_node().
 */
function bcs_preprocess_node(&$vars) {
  if ($vars['view_mode'] != 'teaser') {
    if ($vars['view_mode'] == 'highlighted') {
      $vars['classes_array'][] = 'node-teaser';
    }
    $vars['attributes_array']['class'][] = 'node-' . $vars['view_mode'];
  }

  $node = $vars['node'];
  if ($vars['view_mode'] == 'email') {
    if ($vars['type'] != 'event') {
      // Add in the speech bubble image.
      $vars['speech_bubble'] = theme('image', array('alt' => t('Number of comments: '), 'title' => t('Number of comments'), 'path' => drupal_get_path('theme', 'bcs') . '/images/speech-bubble.png'));
    }
    
    if ($vars['type'] == 'event') {
      
      // Construct each line, since it's all inline.
      $vars['content']['group_left']['field_event_date'][0]['#no_link_please'] = TRUE;
      $vars['left_side'] = str_replace("\n", '', render($vars['content']['group_left']['field_event_date'][0]));
      $vars['line_one'] = array();
      $vars['line_one'][] = render($vars['elements']['group_right']['field_event_venue'][0]);
      $vars['line_one'][] = render($vars['elements']['group_right']['field_event_location'][0]);
      $vars['line_one'] = str_replace("\n", '', implode(', ', $vars['line_one']));
      
      $vars['line_two'] = array();
      $value = field_view_field('node', $node, 'field_event_date', array('label' => 'hidden', 'settings' => array('format_type' => 'tiny')));
      $vars['line_two'][] = render($value[0]);
      if (($city = trim($vars['elements']['group_right']['field_event_location'][0]['#location']['city'])) && !empty($city)) {
        $vars['line_two'][] = check_plain($city);
      }
      $value = field_view_field('node', $node, 'field_event_organiser', array('label' => 'hidden'));
      $vars['line_two'][] = render($value[0]) . ' ' . t('event');
      $vars['line_two'] = str_replace("\n", '', implode(', ', $vars['line_two']));
    }
  }
}

/**
 * Implements hook_preprocess_comment_wrapper().
 */
function bcs_preprocess_comment_wrapper(&$vars) {
  if (!empty($vars['content']['comment_form'])) {
    $vars['content']['comment_form']['#title'] = isset($vars['content']['comment_form']['#title']) ? $vars['content']['comment_form']['#title'] : t('Post a comment');
  }
  if (!isset($vars['title'])) {
    $count = isset($vars['node']->comment_count) ? $vars['node']->comment_count : 0;
    if (empty($count)) {
      $vars['title'] = t('Comments');
    }
    else {
      $vars['title'] = format_plural($count, '1 Comment', '@count Comments');
    }
  }
}

/**
 * Implements hook_preprocess_comment().
 */
function bcs_preprocess_comment(&$vars) {
  $comment = $vars['elements']['#comment'];
  $node = $vars['elements']['#node'];

  // Hide comment titles if they're not enabled.
  if (variable_get('comment_subject_field_' . $node->type, 1) == FALSE) {
    $vars['title'] = '';
  }

  $vars['created'] = format_date($comment->created, 'custom', 'j M Y \a\t H.i');

  if ($vars['status'] == 'comment-unpublished') {
    $vars['unpublished'] = '<div class="unpublished">' . filter_xss_admin(variable_get('comment_removed_message_' . $vars['node']->type, 'This comment has been removed by a moderator.')) . '</div>';
    $vars['content']['comment_body']['#access'] = FALSE;
  }
  
  if ($vars['view_mode'] == 'email') {
    $vars['title'] = $node->title;
    $vars['comment_count'] = $node->comment_count;
    $vars['comment_url'] = url('comment/' . $comment->cid, array('fragment' => 'comment-' . $comment->cid));
    
    // Add in the speech bubble image.
    $vars['speech_bubble'] = theme('image', array('alt' => t('Number of comments: '), 'title' => t('Number of comments'), 'path' => drupal_get_path('theme', 'bcs') . '/images/speech-bubble.png'));
  }
  
  if ($_SESSION['comment_sorting'] == 'desc') {
    $vars['id'] = $node->comment_count - $vars['id'] + 1;
  }
}

/**
 * Implements hook_preprocess_block().
 */
function bcs_preprocess_block(&$vars) {
  $vars['block_section_title'] = isset($vars['block_section_title']) ? $vars['block_section_title'] : '';
  if (!empty($vars['block_section_title'])) {
    $vars['attributes_array']['class'][] = 'with-block-section-title';
  }
  $vars['title_tag'] = isset($vars['title_tag']) ? $vars['title_tag'] : 'h2';

  // Ensure that panels that are rendering as per system blocks
  // give their panes extra classes assigned to them
  if (!empty($vars['block']->css_class)) {
    $vars['attributes_array']['class'][] = $vars['block']->css_class;
  }

  // Add useful classes to beans.
  $block = $vars['block'];
  if ($block->module == 'bean') {
    $bean = bean_load_delta($block->delta);
    if (!empty($bean)) {
      $vars['classes_array'][] = 'bean-type--' . $bean->type;
      $vars['attributes_array']['class'][] = drupal_clean_css_identifier('bean_type__' . $bean->type);
    }
  }
}

/**
 * Implements hook_process_region().
 */
function bcs_process_region(&$vars) {
  if (in_array($vars['elements']['#region'], array('content', 'menu', 'branding'))) {
    $theme = alpha_get_theme();

    switch ($vars['elements']['#region']) {

      case 'branding':
        $vars['logo'] = $theme->page['logo'];
        $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="BCS Academy Logo" id="logo" />' : '';
        $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], '<front>', array('attributes' => array('rel' => 'home', 'title' => check_plain($vars['site_name'])), 'html' => TRUE)) : '';
        break;
    }
  }
}

/**
 * Returns HTML for a date element formatted as a range.
 */
function bcs_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];
  $to = t('to');

  // @todo Events certainly show just a dash rather than the word 'to'. I wonder
  // if this should actually be the case across the whole site?
  if ($node = menu_get_object()) {
    if ($node->type == 'event') {
      $to = '-';
    }
  }

  // Wrap the result with the attributes.
  return t('!start-date !to !end-date', array(
    '!start-date' => '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>',
    '!to' => $to,
    '!end-date' => '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>',
  ));
}

/**
 * Theme the username title of the user login form
 * and the user login block.
 */
function bcs_lt_username_title($variables) {
  switch ($variables['form_id']) {
    case 'user_login':
    case 'user_pass':
      // Label text for the username field on the /user/login page.
      return t('Email address');
      break;

    case 'user_login_block':
      // Label text for the username field when shown in a block.
      return t('Username or e-mail');
      break;
  }
}

/**
 * Theme the username description of the user login form
 * and the user login block.
 */
function bcs_lt_username_description($variables) {
  switch ($variables['form_id']) {
    case 'user_login':
      // The username field's description when shown on the /user/login page.
      return NULL;
      break;
    case 'user_login_block':
      return '';
      break;
  }
}

function bcs_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#appear_required']) || (!empty($element['#required']) && !isset($element['#appear_required'])) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Implements template_preprocess_mimemail_message().
 */
function bcs_preprocess_mimemail_message(&$variables) {
  $variables['logo'] = theme_get_setting('logo');
}

/**
 * Implements hook_preprocess_views_view().
 */
function bcs_preprocess_views_view(&$vars) {
  
  // Views which need to be rendered for email.
  $views = array(
    'bcs_subscriptions_discussions_digest' => 1,
    'bcs_subscriptions_comments_digest' => 1,
    'bcs_subscriptions_news_digest' => 1,
    'bcs_subscriptions_blogs_digest' => 1,
    'bcs_subscriptions_events_digest' => 1,
  );
  if (isset($views[$vars['view']->name])) {
    $vars['theme_hook_suggestions'][] = 'views_view_email';
  }
  
}

/**
 * Implements hook_preprocess_views_view_grid().
 */
function bcs_preprocess_views_view_grid(&$vars) {
  
  // Explicitly pop a width attribute when we are rendering for email.
  
  // Views which need to be rendered for email.
  $views = array(
    'bcs_subscriptions_discussions_digest' => 1,
    'bcs_subscriptions_comments_digest' => 1,
    'bcs_subscriptions_news_digest' => 1,
    'bcs_subscriptions_blogs_digest' => 1,
    'bcs_subscriptions_events_digest' => 1,
  );
  if (isset($views[$vars['view']->name])) {

    $vars['attributes_array']['width'] = '100%';

  }
}

/**
 * Theme the calendar title
 */
function bcs_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = !empty($params['link']) ? $params['link'] : FALSE;
  $format = !empty($params['format']) ? $params['format'] : NULL;
  switch ($granularity) {
    case 'year':
      $title = $date_info->year;
      $date_arg = $date_info->year;
      break;
    case 'month':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month);
      break;
    case 'day':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, F j, Y' : 'l, F j');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month) . '-' . date_pad($date_info->day);
      break;
    case 'week':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F j, Y' : 'F j');
      $title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
      $date_arg = $date_info->year . '-W' . date_pad($date_info->week);
      break;
  }

  if (!empty($date_info->mini) || $link) {
    // Month navigation titles are used as links in the mini view.
    $attributes = array(
      'title' => t('View full page month'),
      'class' => array('use-ajax'),
    );
    // We hardcode these mini-calendars to the events view

    $url = 'events/calendar/nojs/' . $date_arg;
    return l($title, $url, array('attributes' => $attributes, 'query' => drupal_get_query_parameters()));
  }
  else {
    return $title;
  }
}
