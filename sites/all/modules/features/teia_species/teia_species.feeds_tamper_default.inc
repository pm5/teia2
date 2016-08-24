<?php
/**
 * @file
 * teia_species.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function teia_species_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'field_species_type-____-convert_case';
  $feeds_tamper->importer = 'field_species_type';
  $feeds_tamper->source = '分類英文';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Convert case';
  $export['field_species_type-____-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'field_species_type-____-find_replace';
  $feeds_tamper->importer = 'field_species_type';
  $feeds_tamper->source = '分類英文';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '-',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['field_species_type-____-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'field_species_type-____-rewrite';
  $feeds_tamper->importer = 'field_species_type';
  $feeds_tamper->source = '分類英文';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'natural-valley/species/[分類英文]',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['field_species_type-____-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'species-__-explode';
  $feeds_tamper->importer = 'species';
  $feeds_tamper->source = '季節';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ' ',
    'limit' => '',
    'real_separator' => ' ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['species-__-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'species-____-explode';
  $feeds_tamper->importer = 'species';
  $feeds_tamper->source = '導覽五感';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ' ',
    'limit' => '',
    'real_separator' => ' ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['species-____-explode'] = $feeds_tamper;

  return $export;
}
