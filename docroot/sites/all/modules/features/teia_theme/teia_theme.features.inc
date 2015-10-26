<?php
/**
 * @file
 * teia_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teia_theme_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teia_theme_node_info() {
  $items = array(
    'block' => array(
      'name' => t('區塊'),
      'base' => 'node_content',
      'description' => t('提供可以給編輯修改的區塊內容，由各模組所提供的區塊取用。'),
      'has_title' => '1',
      'title_label' => t('區塊標題'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
