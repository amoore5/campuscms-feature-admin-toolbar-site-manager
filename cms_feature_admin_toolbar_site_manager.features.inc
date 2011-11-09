<?php
/**
 * @file
 * cms_feature_admin_toolbar_site_manager.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_feature_admin_toolbar_site_manager_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
