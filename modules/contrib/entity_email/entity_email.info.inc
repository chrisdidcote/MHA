<?php

/**
 * @file
 * Provides Entity metadata integration.
 */

/**
 * Extend the defaults.
 */
class EntityEmailTypeMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    
    $info = parent::entityPropertyInfo();
    /*$properties = &$info[$this->type]['properties'];

    $properties['type'] = array(
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('The entity_email type.'),
      'type' => 'entity_email_type',
    ) + $properties['type'];

    // Unset the uid property, as it is available via the user anyway.
    unset($properties['uid']);
    $properties['user'] = array(
      'label' => t("User"),
      'type' => 'user',
      'description' => t("The user for which to log the message."),
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_setter_method',
      'schema field' => 'uid',
      'required' => TRUE,
    );

    $properties['timestamp'] = array(
      'type' => 'date',
      'setter callback' => 'entity_property_verbatim_set',
      'description' => t('The time the message has been logged.'),
    ) + $properties['timestamp'];
*/

    return $info;
  }
}
