<?php
/**
 * @file
 * teia_natural_valley.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function teia_natural_valley_context_default_contexts() {
  $export = array();

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
        'teia_natural_valley-teia_donate_now' => array(
          'module' => 'teia_natural_valley',
          'delta' => 'teia_donate_now',
          'region' => 'sidebar_second',
          'weight' => '-50',
        ),
        'menu_block-teia-natural-valley-support' => array(
          'module' => 'menu_block',
          'delta' => 'teia-natural-valley-support',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu_block-teia-natural-valley-join' => array(
          'module' => 'menu_block',
          'delta' => 'teia-natural-valley-join',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'panels_mini-teia_natural_valley_events' => array(
          'module' => 'panels_mini',
          'delta' => 'teia_natural_valley_events',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
        'teia_natural_valley-teia_footer_left' => array(
          'module' => 'teia_natural_valley',
          'delta' => 'teia_footer_left',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'teia_natural_valley-teia_footer_right' => array(
          'module' => 'teia_natural_valley',
          'delta' => 'teia_footer_right',
          'region' => 'footer_right',
          'weight' => '-10',
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
