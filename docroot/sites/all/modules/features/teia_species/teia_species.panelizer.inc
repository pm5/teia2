<?php
/**
 * @file
 * teia_species.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function teia_species_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:species:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'species';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a1e888ba-0a70-46a8-a3fe-b3d16292d984';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04006024-d30c-4408-a854-f130242300ad';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'species_data',
      'context' => 'panelizer',
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
    $pane->uuid = '04006024-d30c-4408-a854-f130242300ad';
    $display->content['new-04006024-d30c-4408-a854-f130242300ad'] = $pane;
    $display->panels['middle'][0] = 'new-04006024-d30c-4408-a854-f130242300ad';
    $pane = new stdClass();
    $pane->pid = 'new-78e25c1c-791a-4824-96c5-aa6d91e20bdd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '生態札記',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78e25c1c-791a-4824-96c5-aa6d91e20bdd';
    $display->content['new-78e25c1c-791a-4824-96c5-aa6d91e20bdd'] = $pane;
    $display->panels['middle'][1] = 'new-78e25c1c-791a-4824-96c5-aa6d91e20bdd';
    $pane = new stdClass();
    $pane->pid = 'new-b31d4dfa-e522-4ee8-9358-04f0f79df554';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_tip';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b31d4dfa-e522-4ee8-9358-04f0f79df554';
    $display->content['new-b31d4dfa-e522-4ee8-9358-04f0f79df554'] = $pane;
    $display->panels['middle'][2] = 'new-b31d4dfa-e522-4ee8-9358-04f0f79df554';
    $pane = new stdClass();
    $pane->pid = 'new-4211786a-6b43-4dfc-9d29-d7056f2570b0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4211786a-6b43-4dfc-9d29-d7056f2570b0';
    $display->content['new-4211786a-6b43-4dfc-9d29-d7056f2570b0'] = $pane;
    $display->panels['middle'][3] = 'new-4211786a-6b43-4dfc-9d29-d7056f2570b0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:species:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:species:default:species_data';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'species';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'species_data';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'rightfloat';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title 檔案';
  $display->uuid = '4fb52871-3094-4923-8cc3-03e8cfbb4237';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5aa52357-e68e-4136-a4fa-726cb8eb330b';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '5aa52357-e68e-4136-a4fa-726cb8eb330b';
    $display->content['new-5aa52357-e68e-4136-a4fa-726cb8eb330b'] = $pane;
    $display->panels['left'][0] = 'new-5aa52357-e68e-4136-a4fa-726cb8eb330b';
    $pane = new stdClass();
    $pane->pid = 'new-56ec8127-9251-432c-8ce4-5a65f655caaf';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_alt_names';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '56ec8127-9251-432c-8ce4-5a65f655caaf';
    $display->content['new-56ec8127-9251-432c-8ce4-5a65f655caaf'] = $pane;
    $display->panels['left'][1] = 'new-56ec8127-9251-432c-8ce4-5a65f655caaf';
    $pane = new stdClass();
    $pane->pid = 'new-fd89387f-cf36-42ca-8d47-0a20d3727e64';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_family_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fd89387f-cf36-42ca-8d47-0a20d3727e64';
    $display->content['new-fd89387f-cf36-42ca-8d47-0a20d3727e64'] = $pane;
    $display->panels['left'][2] = 'new-fd89387f-cf36-42ca-8d47-0a20d3727e64';
    $pane = new stdClass();
    $pane->pid = 'new-4cbf983f-9805-4755-aa2d-ee26616db118';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_scientific_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4cbf983f-9805-4755-aa2d-ee26616db118';
    $display->content['new-4cbf983f-9805-4755-aa2d-ee26616db118'] = $pane;
    $display->panels['left'][3] = 'new-4cbf983f-9805-4755-aa2d-ee26616db118';
    $pane = new stdClass();
    $pane->pid = 'new-c43e9dbf-643c-44f0-bbd0-0961b9880cf6';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_distrib';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c43e9dbf-643c-44f0-bbd0-0961b9880cf6';
    $display->content['new-c43e9dbf-643c-44f0-bbd0-0961b9880cf6'] = $pane;
    $display->panels['left'][4] = 'new-c43e9dbf-643c-44f0-bbd0-0961b9880cf6';
    $pane = new stdClass();
    $pane->pid = 'new-34d9c566-c10c-4305-90a5-5ed2f9478aaf';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_features';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '34d9c566-c10c-4305-90a5-5ed2f9478aaf';
    $display->content['new-34d9c566-c10c-4305-90a5-5ed2f9478aaf'] = $pane;
    $display->panels['left'][5] = 'new-34d9c566-c10c-4305-90a5-5ed2f9478aaf';
    $pane = new stdClass();
    $pane->pid = 'new-a742e83c-bec6-4daf-8f06-6231af4f7e91';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_life';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a742e83c-bec6-4daf-8f06-6231af4f7e91';
    $display->content['new-a742e83c-bec6-4daf-8f06-6231af4f7e91'] = $pane;
    $display->panels['left'][6] = 'new-a742e83c-bec6-4daf-8f06-6231af4f7e91';
    $pane = new stdClass();
    $pane->pid = 'new-3edd553f-6083-4088-8372-bb5af82bc899';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_species_suppl';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '3edd553f-6083-4088-8372-bb5af82bc899';
    $display->content['new-3edd553f-6083-4088-8372-bb5af82bc899'] = $pane;
    $display->panels['left'][7] = 'new-3edd553f-6083-4088-8372-bb5af82bc899';
    $pane = new stdClass();
    $pane->pid = 'new-b9324a32-d9ea-46f2-abb0-28d0422df912';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_title_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'b9324a32-d9ea-46f2-abb0-28d0422df912';
    $display->content['new-b9324a32-d9ea-46f2-abb0-28d0422df912'] = $pane;
    $display->panels['right'][0] = 'new-b9324a32-d9ea-46f2-abb0-28d0422df912';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:species:default:species_data'] = $panelizer;

  return $export;
}