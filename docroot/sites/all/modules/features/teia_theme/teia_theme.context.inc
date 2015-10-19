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
  $context->name = 'teia_donate';
  $context->description = '募款鍵';
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TEIA');
  t('募款鍵');
  $export['teia_donate'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'teia_natural_valley';
  $context->description = '自然谷';
  $context->tag = 'TEIA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'natural-valley' => 'natural-valley',
        'natural-valley/*' => 'natural-valley/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'teia_theme-teia_nature_valley_donate_now' => array(
          'module' => 'teia_theme',
          'delta' => 'teia_nature_valley_donate_now',
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TEIA');
  t('自然谷');
  $export['teia_natural_valley'] = $context;

  return $export;
}
