<?php
/**
 * @file
 * teia_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function teia_event_node_info() {
  $items = array(
    'teia_event' => array(
      'name' => t('活動'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('活動名稱'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
