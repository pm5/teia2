<?php
/**
 * @file
 * teia_einfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_einfo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
