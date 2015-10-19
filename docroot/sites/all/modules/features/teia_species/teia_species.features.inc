<?php
/**
 * @file
 * teia_species.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_species_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function teia_species_node_info() {
  $items = array(
    'species' => array(
      'name' => t('生態資料'),
      'base' => 'node_content',
      'description' => t('自然谷「生態資料庫」中的生態資料。'),
      'has_title' => '1',
      'title_label' => t('物種名稱'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
