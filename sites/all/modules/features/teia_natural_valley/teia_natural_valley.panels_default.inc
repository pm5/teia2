<?php
/**
 * @file
 * teia_natural_valley.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function teia_natural_valley_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'teia_natural_valley_events';
  $mini->category = 'TEIA';
  $mini->admin_title = '自然谷: 立即報名';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '立即報名';
  $display->uuid = 'd8b09c0c-1838-42c5-91b1-c79edf48d3aa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00b5460a-0070-4530-8901-5772f90603c1';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-slider_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'path' => 'taxonomy/term/%',
      'arguments' => array(
        'term_node_tid_depth' => '143',
      ),
      'fields_override' => array(
        'field_title_image' => 1,
        'title_field' => 0,
        'body' => 0,
        'nothing' => 1,
        'view_node' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00b5460a-0070-4530-8901-5772f90603c1';
    $display->content['new-00b5460a-0070-4530-8901-5772f90603c1'] = $pane;
    $display->panels['main'][0] = 'new-00b5460a-0070-4530-8901-5772f90603c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-00b5460a-0070-4530-8901-5772f90603c1';
  $mini->display = $display;
  $export['teia_natural_valley_events'] = $mini;

  return $export;
}
