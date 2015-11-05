<?php
/**
 * @file
 * teia_base.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function teia_base_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'og:title' => array(
        'value' => '[node:title] - [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'og:image' => array(
        'value' => '[node:field_title_image]',
      ),
      'og:locale' => array(
        'value' => 'zh_TW',
      ),
      'article:author' => array(
        'value' => 'https://www.facebook.com/TEIA.npo/',
      ),
      'article:publisher' => array(
        'value' => 'https://www.facebook.com/TEIA.npo/',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
    ),
  );

  return $config;
}
