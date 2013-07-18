<?php
/**
 * @file
 * teia_reef_check_tw.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function teia_reef_check_tw_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-menu:menu-position/1
  $menu_links['menu-content-menu:menu-position/1'] = array(
    'menu_name' => 'menu-content-menu',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => ' 珊瑚礁體檢活動 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'reef-check-tw/event',
  );
  // Exported menu link: menu-content-menu:menu-position/2
  $menu_links['menu-content-menu:menu-position/2'] = array(
    'menu_name' => 'menu-content-menu',
    'link_path' => 'menu-position/2',
    'router_path' => 'menu-position/%',
    'link_title' => ' 珊瑚礁體檢活動成果 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'reef-check-tw/report',
  );
  // Exported menu link: menu-content-menu:menu-position/3
  $menu_links['menu-content-menu:menu-position/3'] = array(
    'menu_name' => 'menu-content-menu',
    'link_path' => 'menu-position/3',
    'router_path' => 'menu-position/%',
    'link_title' => ' 珊瑚礁體檢專欄 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'reef-check-tw/column',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' 珊瑚礁體檢專欄 (menu position rule)');
  t(' 珊瑚礁體檢活動 (menu position rule)');
  t(' 珊瑚礁體檢活動成果 (menu position rule)');


  return $menu_links;
}
