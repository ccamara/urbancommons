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
  $view->name = 'ucommons_map';
  $view->description = 'Map displaying Urbancommons';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ucommons Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Highlighted Media */
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['id'] = 'field_ucommons_highlighted_media';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['table'] = 'field_data_field_ucommons_highlighted_media';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['field'] = 'field_ucommons_highlighted_media';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['label'] = '';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ucommons_highlighted_media']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_ucommons_location']['id'] = 'field_ucommons_location';
  $handler->display->display_options['fields']['field_ucommons_location']['table'] = 'field_data_field_ucommons_location';
  $handler->display->display_options['fields']['field_ucommons_location']['field'] = 'field_ucommons_location';
  $handler->display->display_options['fields']['field_ucommons_location']['label'] = '';
  $handler->display->display_options['fields']['field_ucommons_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ucommons_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ucommons_location']['settings'] = array(
    'data' => 'full',
  );
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
    'urbancommon' => 'urbancommon',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'ol_map_ucommons';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'ucommons-map.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_ucommons_location',
    'other_lon' => 'field_ucommons_location',
    'wkt' => 'field_ucommons_location',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_ucommons_highlighted_media',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['ucommons_map'] = array(
    t('Master'),
    t('Map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
    t('OpenLayers Data Overlay'),
  );
  $export['ucommons_map'] = $view;

  return $export;
}
