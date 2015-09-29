<?php
/**
 * @file
 * teia_einfo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function teia_einfo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'einfo';
  $page->task = 'page';
  $page->admin_title = '環境資訊中心';
  $page->admin_description = '';
  $page->path = 'e-info';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '環境資訊中心',
    'name' => 'menu-content-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_einfo__panel';
  $handler->task = 'page';
  $handler->subtask = 'einfo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '環境資訊中心';
  $display->uuid = '852d8f79-7f4a-43cf-b6d9-dd9093f35f80';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7cdd078-107c-4ec9-9c51-18f5262a8f54';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'c7cdd078-107c-4ec9-9c51-18f5262a8f54';
    $display->content['new-c7cdd078-107c-4ec9-9c51-18f5262a8f54'] = $pane;
    $display->panels['left_above'][0] = 'new-c7cdd078-107c-4ec9-9c51-18f5262a8f54';
    $pane = new stdClass();
    $pane->pid = 'new-29ba6dd3-3a62-489d-90c9-1c8ef3375f7d';
    $pane->panel = 'left_below';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29ba6dd3-3a62-489d-90c9-1c8ef3375f7d';
    $display->content['new-29ba6dd3-3a62-489d-90c9-1c8ef3375f7d'] = $pane;
    $display->panels['left_below'][0] = 'new-29ba6dd3-3a62-489d-90c9-1c8ef3375f7d';
    $pane = new stdClass();
    $pane->pid = 'new-a8af737d-428d-4323-85eb-4db25db1e6a8';
    $pane->panel = 'left_below';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a8af737d-428d-4323-85eb-4db25db1e6a8';
    $display->content['new-a8af737d-428d-4323-85eb-4db25db1e6a8'] = $pane;
    $display->panels['left_below'][1] = 'new-a8af737d-428d-4323-85eb-4db25db1e6a8';
    $pane = new stdClass();
    $pane->pid = 'new-08785078-7a45-4d47-84e4-3fc41ebc77fc';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08785078-7a45-4d47-84e4-3fc41ebc77fc';
    $display->content['new-08785078-7a45-4d47-84e4-3fc41ebc77fc'] = $pane;
    $display->panels['right_above'][0] = 'new-08785078-7a45-4d47-84e4-3fc41ebc77fc';
    $pane = new stdClass();
    $pane->pid = 'new-9097f16e-9fa6-4f1e-89ef-1e0e1fd8abf6';
    $pane->panel = 'right_below';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9097f16e-9fa6-4f1e-89ef-1e0e1fd8abf6';
    $display->content['new-9097f16e-9fa6-4f1e-89ef-1e0e1fd8abf6'] = $pane;
    $display->panels['right_below'][0] = 'new-9097f16e-9fa6-4f1e-89ef-1e0e1fd8abf6';
    $pane = new stdClass();
    $pane->pid = 'new-87655771-6077-4214-9f9b-e39f0e27f4d1';
    $pane->panel = 'right_below';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '87655771-6077-4214-9f9b-e39f0e27f4d1';
    $display->content['new-87655771-6077-4214-9f9b-e39f0e27f4d1'] = $pane;
    $display->panels['right_below'][1] = 'new-87655771-6077-4214-9f9b-e39f0e27f4d1';
    $pane = new stdClass();
    $pane->pid = 'new-66059c04-3d58-4bf0-a4df-22260e6df4d4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'teia_slideshow-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'arguments' => array(
        'term_node_tid_depth' => '58',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66059c04-3d58-4bf0-a4df-22260e6df4d4';
    $display->content['new-66059c04-3d58-4bf0-a4df-22260e6df4d4'] = $pane;
    $display->panels['top'][0] = 'new-66059c04-3d58-4bf0-a4df-22260e6df4d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['einfo'] = $page;

  return $pages;

}
