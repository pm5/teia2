<?php
/**
 * @file
 * teia_reef_check_tw.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_reef_check_tw_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teia_reef_check_tw_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teia_reef_check_tw_node_info() {
  $items = array(
    'reef_check_tw_column' => array(
      'name' => t('珊瑚礁體檢專欄'),
      'base' => 'node_content',
      'description' => t('海洋文選。'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reef_check_tw_event' => array(
      'name' => t('珊瑚礁體檢活動'),
      'base' => 'node_content',
      'description' => t('珊瑚礁體檢活動。'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'reef_check_tw_report' => array(
      'name' => t('珊瑚礁體檢活動成果'),
      'base' => 'node_content',
      'description' => t('珊瑚礁體檢活動成果文章。'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
