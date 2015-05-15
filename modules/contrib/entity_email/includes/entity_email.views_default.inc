<?php
/**
 * Implementation of hook_views_default_views().
 */
function entity_email_views_default_views() {

  $view = new view();
  $view->name = 'entity_email';
  $view->description = 'Display a list of entity email sent.';
  $view->tag = 'default';
  $view->base_table = 'entity_email';
  $view->human_name = 'Entity Email';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Email: Unique ID */
  $handler->display->display_options['fields']['eid']['id'] = 'eid';
  $handler->display->display_options['fields']['eid']['table'] = 'entity_email';
  $handler->display->display_options['fields']['eid']['field'] = 'eid';
  /* Field: Email: Creator */
  $handler->display->display_options['fields']['cuid']['id'] = 'cuid';
  $handler->display->display_options['fields']['cuid']['table'] = 'entity_email';
  $handler->display->display_options['fields']['cuid']['field'] = 'cuid';
  /* Field: Email: Rendered Email */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entity_email';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Email: Subject */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'entity_email';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* Field: Email: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'entity_email';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'privatemsg_current_day';
  /* Field: Email: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'entity_email';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Email: Unique ID */
  $handler->display->display_options['fields']['eid_1']['id'] = 'eid_1';
  $handler->display->display_options['fields']['eid_1']['table'] = 'entity_email';
  $handler->display->display_options['fields']['eid_1']['field'] = 'eid';

  $views[$view->name] = $view;
  return $views;
}
