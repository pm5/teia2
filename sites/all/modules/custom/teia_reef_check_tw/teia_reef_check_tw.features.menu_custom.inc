<?php
/**
 * @file
 * teia_reef_check_tw.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function teia_reef_check_tw_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-content-menu.
  $menus['menu-content-menu'] = array(
    'menu_name' => 'menu-content-menu',
    'title' => 'Content menu',
    'description' => '環境資訊中心、環境信託中心、生態工作假期、珊瑚礁體檢內容的選單。',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content menu');
  t('環境資訊中心、環境信託中心、生態工作假期、珊瑚礁體檢內容的選單。');


  return $menus;
}
