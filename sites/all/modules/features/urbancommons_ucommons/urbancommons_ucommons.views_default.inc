<?php
/**
 * @file
 * urbancommons_ucommons.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function urbancommons_ucommons_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ucommons_map_allnodes';
  $view->description = 'Provides a map of all locations_fields enabled nodes.';
  $view->tag = 'getlocations view';
  $view->base_table = 'node';
  $view->human_name = 'Ucommons map allnodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'View all locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Getlocations Fields: Glid */
  $handler->display->display_options['fields']['glid']['id'] = 'glid';
  $handler->display->display_options['fields']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['glid']['field'] = 'glid';
  $handler->display->display_options['fields']['glid']['label'] = '';
  $handler->display->display_options['fields']['glid']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Marker */
  $handler->display->display_options['fields']['marker']['id'] = 'marker';
  $handler->display->display_options['fields']['marker']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['marker']['field'] = 'marker';
  $handler->display->display_options['fields']['marker']['label'] = '';
  $handler->display->display_options['fields']['marker']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Field name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'getlocations_fields_entities';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'urbancommon' => 'urbancommon',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Getlocations Fields: Glid */
  $handler->display->display_options['filters']['glid']['id'] = 'glid';
  $handler->display->display_options['filters']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['glid']['field'] = 'glid';
  $handler->display->display_options['filters']['glid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['glid']['group'] = 1;
  /* Filter criterion: Getlocations Fields: Latitude */
  $handler->display->display_options['filters']['latitude']['id'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['latitude']['field'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['operator'] = '!=';
  $handler->display->display_options['filters']['latitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['latitude']['group'] = 1;
  /* Filter criterion: Getlocations Fields: Longitude */
  $handler->display->display_options['filters']['longitude']['id'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['longitude']['field'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['operator'] = '!=';
  $handler->display->display_options['filters']['longitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['longitude']['group'] = 1;

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'getlocations';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'View: Getlocations allnodes map';

  /* Display: Block 4 */
  $handler = $view->new_display('block', 'Block 4', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List all locations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['block_description'] = 'View: Getlocations allnodes list';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'getlocations_leaflet';
  $handler->display->display_options['style_options']['fullscreen'] = 1;
  $handler->display->display_options['style_options']['category_method'] = '0';
  $handler->display->display_options['style_options']['category_term_reference_field'] = 'field_tags';
  $handler->display->display_options['style_options']['markercluster'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $translatables['ucommons_map_allnodes'] = array(
    t('Defaults'),
    t('View all locations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block 3'),
    t('View: Getlocations allnodes map'),
    t('Block 4'),
    t('List all locations'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('View: Getlocations allnodes list'),
    t('Page'),
  );
  $export['ucommons_map_allnodes'] = $view;

  return $export;
}
