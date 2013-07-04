<?php

$view = new view();
$view->name = 'reef_check_tw_event';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = '珊瑚礁體檢: 歷年活動';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '歷年活動';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  'reef_check_tw_event' => 'reef_check_tw_event',
);

/* Display: Page: 歷年活動 */
$handler = $view->new_display('page', 'Page: 歷年活動', 'reef_check_tw_event');
$handler->display->display_options['path'] = 'reef-check-tw/event';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = '歷年活動';

/* Display: Page: 立即報名 */
$handler = $view->new_display('page', 'Page: 立即報名', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = '立即報名';
$handler->display->display_options['path'] = 'reef-check-tw/register';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = '立即報名';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Content pane: 立即報名 */
$handler = $view->new_display('panel_pane', 'Content pane: 立即報名', 'reef_check_tw_register_pane');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = '立即報名';
$handler->display->display_options['pane_category']['name'] = '環境資訊協會';
$handler->display->display_options['pane_category']['weight'] = '0';

