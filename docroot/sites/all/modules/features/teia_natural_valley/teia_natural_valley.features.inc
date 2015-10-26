<?php
/**
 * @file
 * teia_natural_valley.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teia_natural_valley_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
