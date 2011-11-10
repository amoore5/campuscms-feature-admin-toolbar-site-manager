<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_site_manager.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_admin_toolbar_site_manager_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-site-manager:<front>
  $menu_links['menu-toolbar-site-manager:<front>'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/appearance
  $menu_links['menu-toolbar-site-manager:admin/appearance'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/config
  $menu_links['menu-toolbar-site-manager:admin/config'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Site Configuration',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/config/system/site-information
  $menu_links['menu-toolbar-site-manager:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/content
  $menu_links['menu-toolbar-site-manager:admin/content'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/people
  $menu_links['menu-toolbar-site-manager:admin/people'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/people/create
  $menu_links['menu-toolbar-site-manager:admin/people/create'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Create New Person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/people/all
  $menu_links['menu-toolbar-site-manager:admin/people/all'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/people/all',
    'router_path' => 'admin/people/all',
    'link_title' => 'Manage People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/block
  $menu_links['menu-toolbar-site-manager:admin/structure/block'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/menu
  $menu_links['menu-toolbar-site-manager:admin/structure/menu'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/menu/manage/main-menu
  $menu_links['menu-toolbar-site-manager:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/menu/manage/menu-center-footer
  $menu_links['menu-toolbar-site-manager:admin/structure/menu/manage/menu-center-footer'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/menu/manage/menu-center-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Center Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/menu/manage/menu-right-footer
  $menu_links['menu-toolbar-site-manager:admin/structure/menu/manage/menu-right-footer'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/menu/manage/menu-right-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Right Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-site-manager:caslogout
  $menu_links['menu-toolbar-site-manager:caslogout'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'caslogout',
    'router_path' => 'caslogout',
    'link_title' => 'Logout',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add
  $menu_links['menu-toolbar-site-manager:node/add'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('Appearance');
  t('Blocks');
  t('Center Footer');
  t('Manage People');
  t('Create New Person');
  t('Home');
  t('Logout');
  t('Main menu');
  t('Manage Content');
  t('Menus');
  t('People');
  t('Right Footer');
  t('Site Configuration');
  t('Site Information');


  return $menu_links;
}
