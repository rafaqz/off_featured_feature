<?php
/**
 * @file
 * featured_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function featured_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__featured';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_flagging__featured'] = $strongarm;

  return $export;
}
