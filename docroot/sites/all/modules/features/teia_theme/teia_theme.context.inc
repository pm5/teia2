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
  $context->description = '除了自然谷以外的全站設定。';
  $context->tag = 'TEIA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~natural-valley' => '~natural-valley',
        '~natural-valley/*' => '~natural-valley/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'teia_theme-teia_donate_now' => array(
          'module' => 'teia_theme',
          'delta' => 'teia_donate_now',
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),
        'teia_theme-teia_footer_copyright' => array(
          'module' => 'teia_theme',
          'delta' => 'teia_footer_copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TEIA');
  t('除了自然谷以外的全站設定。');
  $export['teia_theme'] = $context;

  return $export;
}
