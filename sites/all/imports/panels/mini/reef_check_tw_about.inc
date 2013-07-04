<?php

$mini = new stdClass();
$mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
$mini->api_version = 1;
$mini->name = 'reef_check_tw_about';
$mini->category = 'TEIA';
$mini->admin_title = '珊瑚礁體檢: 什麼是珊瑚礁體檢';
$mini->admin_description = '';
$mini->requiredcontexts = array();
$mini->contexts = array();
$mini->relationships = array();
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '什麼是珊瑚礁體檢',
    'body' => '珊瑚礁體檢（ReefCheck）顧名思義就是為珊瑚礁進行健康檢查，調查人員將運用水肺潛水的技術潛到海裡，除了了解活珊瑚覆蓋 狀況，也同時記錄魚類、其它無脊椎動物等週邊生態情形。最特別的在於調查是以在地的潛水業者與潛水員作為主力，而非一般科學研究人員。',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-1'] = $pane;
  $display->panels['middle'][0] = 'new-1';
  $pane = new stdClass();
  $pane->pid = 'new-2';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-2'] = $pane;
  $display->panels['middle'][1] = 'new-2';
$display->hide_title = PANELS_TITLE_PANE;
$display->title_pane = 'new-2';
$mini->display = $display;

