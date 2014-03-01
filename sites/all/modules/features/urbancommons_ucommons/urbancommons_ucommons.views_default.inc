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
  $view->description = 'Provides a map of all ucommons nodes.';
  $view->tag = 'ucommons, getlocations view';
  $view->base_table = 'node';
  $view->human_name = 'Ucommons map allnodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'getlocations_leaflet';
  $handler->display->display_options['style_options']['height'] = '500px';
  $handler->display->display_options['style_options']['baselayers'] = array(
    'OpenStreetMap.Mapnik' => 0,
    'OpenStreetMap.BlackAndWhite' => 1,
    'OpenStreetMap.DE' => 0,
    'OpenStreetMap.HOT' => 1,
    'Thunderforest.OpenCycleMap' => 1,
    'Thunderforest.Transport' => 1,
    'Thunderforest.Landscape' => 0,
    'Thunderforest.Outdoors' => 0,
    'MapQuestOpen.OSM' => 0,
    'MapQuestOpen.Aerial' => 0,
    'Stamen.Toner' => 0,
    'Stamen.TonerBackground' => 0,
    'Stamen.TonerHybrid' => 0,
    'Stamen.TonerLines' => 0,
    'Stamen.TonerLabels' => 0,
    'Stamen.TonerLite' => 0,
    'Stamen.Terrain' => 0,
    'Stamen.TerrainBackground' => 0,
    'Stamen.Watercolor' => 0,
    'Esri.WorldStreetMap' => 0,
    'Esri.DeLorme' => 0,
    'Esri.WorldTopoMap' => 0,
    'Esri.WorldImagery' => 0,
    'Esri.WorldTerrain' => 0,
    'Esri.WorldShadedRelief' => 0,
    'Esri.WorldPhysical' => 0,
    'Esri.OceanBasemap' => 0,
    'Esri.NatGeoWorldMap' => 0,
    'Esri.WorldGrayCanvas' => 0,
    'Acetate.all' => 1,
    'Acetate.basemap' => 0,
    'Acetate.terrain' => 0,
    'Acetate.foreground' => 0,
    'Acetate.roads' => 0,
    'Acetate.labels' => 0,
    'Acetate.hillshading' => 0,
    'OpenSeaMap' => 0,
    'OpenWeatherMap.Clouds' => 0,
    'OpenWeatherMap.CloudsClassic' => 0,
    'OpenWeatherMap.Precipitation' => 0,
    'OpenWeatherMap.PrecipitationClassic' => 0,
    'OpenWeatherMap.Rain' => 0,
    'OpenWeatherMap.RainClassic' => 0,
    'OpenWeatherMap.Pressure' => 0,
    'OpenWeatherMap.PressureContour' => 0,
    'OpenWeatherMap.Wind' => 0,
    'OpenWeatherMap.Temperature' => 0,
    'OpenWeatherMap.Snow' => 0,
  );
  $handler->display->display_options['style_options']['fullscreen'] = 1;
  $handler->display->display_options['style_options']['category_method'] = '0';
  $handler->display->display_options['style_options']['category_term_reference_field'] = 'field_tags';
  $handler->display->display_options['style_options']['layerControl'] = 1;
  $handler->display->display_options['style_options']['default_baselayer'] = 'Acetate.all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'map/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_3' => 0,
    'block_4' => 0,
  );
  $translatables['ucommons_map_allnodes'] = array(
    t('Defaults'),
    t('Map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Feed'),
  );
  $export['ucommons_map_allnodes'] = $view;

  return $export;
}
