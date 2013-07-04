<?php

$view = new view();
$view->name = 'reef_check_tw_report';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = '珊瑚礁體檢: 歷年成果';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '歷年成果';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_reef_check_event_target_id']['id'] = 'field_reef_check_event_target_id';
$handler->display->display_options['relationships']['field_reef_check_event_target_id']['table'] = 'field_data_field_reef_check_event';
$handler->display->display_options['relationships']['field_reef_check_event_target_id']['field'] = 'field_reef_check_event_target_id';
$handler->display->display_options['relationships']['field_reef_check_event_target_id']['label'] = '活動';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_type'] = '0';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'reef_check_tw_report' => 'reef_check_tw_report',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'reef_check_tw_report');
$handler->display->display_options['path'] = 'reef-check-tw/report';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = '歷年成果';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'reef_check_tw_report_pane');
$handler->display->display_options['pane_category']['name'] = 'TEIA';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['link_to_view'] = '1';
$handler->display->display_options['inherit_panels_path'] = '0';

/* Display: Content pane: 活動成果 */
$handler = $view->new_display('panel_pane', 'Content pane: 活動成果', 'reef_check_tw_event_report_pane');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = '活動成果';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_reef_check_event_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['pane_category']['name'] = 'TEIA';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 1,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);

