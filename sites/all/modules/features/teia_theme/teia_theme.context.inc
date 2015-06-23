<?php
/**
 * @file
 * teia_theme.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function teia_theme_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teia_theme';
  $context->description = 'TEIA 版型相關設定。';
  $context->tag = 'TEIA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-17' => array(
          'module' => 'menu_block',
          'delta' => '17',
          'region' => 'header',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TEIA');
  t('TEIA 版型相關設定。');
  $export['teia_theme'] = $context;

  return $export;
}
