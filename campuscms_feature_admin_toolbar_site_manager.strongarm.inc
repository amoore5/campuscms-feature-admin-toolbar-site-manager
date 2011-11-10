<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_site_manager.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campuscms_feature_admin_toolbar_site_manager_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_extras_settings_site-manager';
  $strongarm->value = array(
    'menu' => array(
      'mlid_202' => 'left',
      'mlid_203' => 'left',
      'mlid_204' => 'left',
      'mlid_205' => 'left',
      'mlid_207' => 'left',
      'mlid_206' => 'left',
      'mlid_208' => 'right',
    ),
    'show_username' => 1,
    'show_username_prefix' => 'Hello, ',
    'show_username_suffix' => '',
    'show_username_link' => 1,
  );
  $export['quickbar_extras_settings_site-manager'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_site-manager';
  $strongarm->value = array(
    'iconset' => 'quickbar',
    'sticky' => 0,
    'float' => 0,
    'secondary_menu_visibility' => 0,
    'nofollow' => 0,
  );
  $export['quickbar_settings_site-manager'] = $strongarm;

  return $export;
}
