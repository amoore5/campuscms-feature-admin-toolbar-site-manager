<?php
/**
 * @file
 * admin_toolbar_site_manager.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function admin_toolbar_site_manager_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-toolbar-site-manager
  $menus['menu-toolbar-site-manager'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'title' => 'Toolbar - Site Manager',
    'description' => 'This is the administration toolbar for site managers.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('This is the administration toolbar for site managers.');
  t('Toolbar - Site Manager');


  return $menus;
}
