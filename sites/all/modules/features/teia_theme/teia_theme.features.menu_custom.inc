<?php
/**
 * @file
 * teia_theme.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function teia_theme_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'zh-hant',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-english-main-menu.
  $menus['menu-english-main-menu'] = array(
    'menu_name' => 'menu-english-main-menu',
    'title' => 'English main menu',
    'description' => 'Main menu for English content.',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary menu',
    'description' => '頁首右上角四個選項的選單。',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('English main menu');
  t('Main menu');
  t('Main menu for English content.');
  t('Secondary menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('頁首右上角四個選項的選單。');


  return $menus;
}
