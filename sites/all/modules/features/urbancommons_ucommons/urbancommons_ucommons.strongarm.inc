<?php
/**
 * @file
 * urbancommons_ucommons.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function urbancommons_ucommons_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_button_urbancommon';
  $strongarm->value = 1;
  $export['addanother_button_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_message_urbancommon';
  $strongarm->value = 1;
  $export['addanother_message_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_edit_urbancommon';
  $strongarm->value = 0;
  $export['addanother_tab_edit_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_urbancommon';
  $strongarm->value = 0;
  $export['addanother_tab_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_urbancommon';
  $strongarm->value = 0;
  $export['comment_anonymous_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_urbancommon';
  $strongarm->value = 1;
  $export['comment_default_mode_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_urbancommon';
  $strongarm->value = '50';
  $export['comment_default_per_page_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_urbancommon';
  $strongarm->value = 1;
  $export['comment_form_location_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_urbancommon';
  $strongarm->value = '1';
  $export['comment_preview_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_urbancommon';
  $strongarm->value = 1;
  $export['comment_subject_field_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_urbancommon';
  $strongarm->value = '2';
  $export['comment_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__urbancommon';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '14',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_relation__related_urbancommon';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_relation__related_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_aggr';
  $strongarm->value = 1;
  $export['getlocations_aggr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_api3_key';
  $strongarm->value = '';
  $export['getlocations_api3_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_default';
  $strongarm->value = array(
    'width' => '100%',
    'height' => '200px',
    'map_resize' => 0,
    'fullscreen_disable' => 0,
    'styles' => '',
    'latlong' => '40.00000000000001,0',
    'zoom' => '3',
    'minzoom_map' => '-1',
    'maxzoom_map' => '-1',
    'controltype' => 'small',
    'zoomcontrolposition' => '',
    'pancontrol' => 0,
    'pancontrolposition' => '',
    'mtc' => 'standard',
    'mapcontrolposition' => '',
    'maptype' => 'OpenStreetMap',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
      'OpenStreetMap' => 1,
    ),
    'scale' => 0,
    'scalecontrolposition' => '',
    'overview' => 0,
    'overview_opened' => 0,
    'scrollwheel' => 0,
    'draggable' => 1,
    'nokeyboard' => 0,
    'nodoubleclickzoom' => 0,
    'map_backgroundcolor' => '',
    'region_bias' => 'ES',
    'jquery_colorpicker_enabled' => 0,
    'sv_show' => 0,
    'svcontrolposition' => '',
    'show_maplinks' => 0,
    'show_bubble_on_one_marker' => 0,
    'fullscreen' => 0,
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'panoramio_use' => 0,
    'panoramio_show' => 0,
    'panoramio_state' => 0,
    'weather_use' => 0,
    'weather_show' => 0,
    'weather_state' => 0,
    'weather_temp' => '1',
    'weather_speed' => '1',
    'weather_label' => '0',
    'weather_clickable' => 1,
    'weather_info' => 1,
    'weather_cloud' => 1,
    'weather_cloud_state' => 0,
    'poi_show' => 1,
    'transit_show' => 1,
    'polygons_enable' => 0,
    'polygons_strokecolor' => '#FF0000',
    'polygons_strokeopacity' => '0.8',
    'polygons_strokeweight' => '3',
    'polygons_fillcolor' => '#FF0000',
    'polygons_fillopacity' => '0.35',
    'polygons_clickable' => 0,
    'polygons_message' => '',
    'polygons_coords' => '',
    'rectangles_enable' => 0,
    'rectangles_strokecolor' => '#FF0000',
    'rectangles_strokeopacity' => '0.8',
    'rectangles_strokeweight' => '3',
    'rectangles_fillcolor' => '#FF0000',
    'rectangles_fillopacity' => '0.35',
    'rectangles_clickable' => 0,
    'rectangles_message' => '',
    'rectangles_apply' => 0,
    'rectangles_dist' => '0',
    'rectangles_coords' => '',
    'circles_enable' => 0,
    'circles_strokecolor' => '#FF0000',
    'circles_strokeopacity' => '0.8',
    'circles_strokeweight' => '3',
    'circles_fillcolor' => '#FF0000',
    'circles_fillopacity' => '0.35',
    'circles_radius' => '0',
    'circles_clickable' => 0,
    'circles_message' => '',
    'circles_apply' => 0,
    'circles_coords' => '',
    'polylines_enable' => 0,
    'polylines_strokecolor' => '#FF0000',
    'polylines_strokeopacity' => '0.8',
    'polylines_strokeweight' => '3',
    'polylines_clickable' => 0,
    'polylines_message' => '',
    'polylines_coords' => '',
    'kml_group' => array(
      'kml_url' => '',
      'kml_url_click' => 1,
      'kml_url_infowindow' => 0,
      'kml_url_viewport' => 1,
      'kml_url_button' => 0,
      'kml_url_button_label' => 'Kml Layer',
      'kml_url_button_state' => 0,
    ),
    'geojson_enable' => 0,
    'geojson_data' => '',
    'geojson_options' => '',
    'highlight_enable' => 0,
    'highlight_strokecolor' => '#FF0000',
    'highlight_strokeopacity' => '0.8',
    'highlight_strokeweight' => '3',
    'highlight_fillcolor' => '#FF0000',
    'highlight_fillopacity' => '0.35',
    'highlight_radius' => '10',
    'search_places' => 0,
    'search_places_size' => '40',
    'search_places_position' => 'outside_above',
    'search_places_label' => 'Google Places Search',
    'search_places_placeholder' => '',
    'search_places_list' => 0,
    'search_places_dd' => 0,
    'places' => 0,
    'node_map_marker' => 'webiconset-pins-24 pin2',
    'user_map_marker' => 'webiconset-pins-24 pin2',
    'vocabulary_map_marker' => 'webiconset-pins-24 pin2',
    'term_map_marker' => 'webiconset-pins-24 pin2',
    'input_map_marker' => 'webiconset-pins-24 pin2',
    'markeractiontype' => '1',
    'markeraction' => '2',
    'preload_data' => 0,
    'nodezoom' => '12',
    'markermanagertype' => '0',
    'usemarkermanager' => 0,
    'minzoom' => '6',
    'maxzoom' => '16',
    'useclustermanager' => 0,
    'markerclusterer_style' => '-1',
    'markerclusterer_title' => 'Click here to see more',
    'markerclusterer_zoom' => '-1',
    'markerclusterer_size' => '-1',
    'markerclusterer_minsize' => '-1',
    'pansetting' => '2',
    'returnlink_page_enable' => 0,
    'returnlink_page_link' => 'Return to Page',
    'returnlink_term_link' => 'Return to Term',
    'getlocations_js_weight' => '0',
  );
  $export['getlocations_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_flush';
  $strongarm->value = 1;
  $export['getlocations_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_leaflet_cloudmade';
  $strongarm->value = array(
    'cloudmade_key' => '',
    'cloudmade_maps' => array(),
  );
  $export['getlocations_leaflet_cloudmade'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_leaflet_defaults';
  $strongarm->value = array(
    'width' => '100%',
    'height' => '200px',
    'latlong' => '40,0',
    'zoom' => '3',
    'minzoom_map' => '-1',
    'maxzoom_map' => '-1',
    'nodezoom' => '12',
    'scrollWheelZoom' => 0,
    'touchZoom' => 1,
    'dragging' => 1,
    'doubleClickZoom' => 1,
    'scaleControl' => 0,
    'scalecontrolunits' => '',
    'scalecontrolposition' => '',
    'zoomControl' => 1,
    'zoomcontrolposition' => '',
    'attributionControl' => 1,
    'attributioncontrolposition' => '',
    'layerControl' => 0,
    'minimap' => 0,
    'layercontrol_mark_ov' => 0,
    'layercontrol_mark_ov_label' => 'Locations',
    'layercontrol_circ_ov' => 0,
    'layercontrol_circ_ov_label' => 'Circles',
    'layercontrol_polyl_ov' => 0,
    'layercontrol_polyl_ov_label' => 'Lines',
    'layercontrol_polyg_ov' => 0,
    'layercontrol_polyg_ov_label' => 'Polygons',
    'layercontrol_rect_ov' => 0,
    'layercontrol_rect_ov_label' => 'Rectangles',
    'layercontrolposition' => '',
    'default_baselayer' => 'OpenStreetMap.Mapnik',
    'baselayers' => array(
      'OpenStreetMap.Mapnik' => 1,
      'OpenStreetMap.BlackAndWhite' => 0,
      'OpenStreetMap.DE' => 0,
      'OpenStreetMap.HOT' => 0,
      'Thunderforest.OpenCycleMap' => 0,
      'Thunderforest.Transport' => 0,
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
      'Acetate.all' => 0,
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
    ),
    'trackResize' => 1,
    'fadeAnimation' => 1,
    'zoomAnimation' => 1,
    'closePopupOnClick' => 1,
    'fullscreen' => 0,
    'fullscreenposition' => '',
    'markercluster' => 1,
    'graticule' => 0,
    'mouseposition' => 0,
    'pancontrol' => 0,
    'zoomslider' => 0,
    'markeraction' => 'popup',
    'polygons_enable' => 0,
    'polygons_strokecolor' => '#FF0000',
    'polygons_strokeopacity' => '0.8',
    'polygons_strokeweight' => '3',
    'polygons_fillcolor' => '#FF0000',
    'polygons_fillopacity' => '0.35',
    'polygons_clickable' => 0,
    'polygons_message' => '',
    'polygons_coords' => '',
    'rectangles_enable' => 0,
    'rectangles_strokecolor' => '#FF0000',
    'rectangles_strokeopacity' => '0.8',
    'rectangles_strokeweight' => '3',
    'rectangles_fillcolor' => '#FF0000',
    'rectangles_fillopacity' => '0.35',
    'rectangles_clickable' => 0,
    'rectangles_message' => '',
    'rectangles_apply' => 0,
    'rectangles_dist' => '0',
    'rectangles_coords' => '',
    'circles_enable' => 0,
    'circles_strokecolor' => '#FF0000',
    'circles_strokeopacity' => '0.8',
    'circles_strokeweight' => '3',
    'circles_fillcolor' => '#FF0000',
    'circles_fillopacity' => '0.35',
    'circles_radius' => '0',
    'circles_clickable' => 0,
    'circles_message' => '',
    'circles_apply' => 0,
    'circles_coords' => '',
    'polylines_enable' => 0,
    'polylines_strokecolor' => '#FF0000',
    'polylines_strokeopacity' => '0.8',
    'polylines_strokeweight' => '3',
    'polylines_clickable' => 0,
    'polylines_message' => '',
    'polylines_coords' => '',
    'geojson_enable' => 0,
    'geojson_data' => '',
    'geojson_options' => '',
    'awesome_icon' => 'fa-home',
    'awesome_icon_color_selector' => 'white',
    'awesome_icon_color' => '',
    'awesome_marker_color' => 'blue',
    'awesome_icon_type' => 'b',
    'awesome_icon_size' => '',
    'awesome_icon_flip' => '',
    'awesome' => 0,
    'returnlink_page_enable' => 0,
    'returnlink_page_link' => 'Return to Page',
  );
  $export['getlocations_leaflet_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_leaflet_flush';
  $strongarm->value = 1;
  $export['getlocations_leaflet_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_leaflet_paths';
  $strongarm->value = array(
    'getlocations_leaflet_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet.js',
    'getlocations_leaflet_circles_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_circles.js',
    'getlocations_leaflet_formatter_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_formatter.js',
    'getlocations_leaflet_polygons_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_polygons.js',
    'getlocations_leaflet_polylines_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_polylines.js',
    'getlocations_leaflet_rectangles_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_rectangles.js',
    'getlocations_leaflet_geojson_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_geojson.js',
    'getlocations_leaflet_providers_path' => 'sites/all/modules/contrib/getlocations/modules/getlocations_leaflet/js/getlocations_leaflet_providers.js',
  );
  $export['getlocations_leaflet_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_leaflet_plugins';
  $strongarm->value = array(
    'markercluster_enable' => 1,
    'fullscreen_enable' => 1,
    'graticule_enable' => 0,
    'pancontrol_enable' => 0,
    'zoomslider_enable' => 0,
    'awesome_enable' => 0,
    'mouseposition_enable' => 0,
    'minimap_enable' => 0,
  );
  $export['getlocations_leaflet_plugins'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_node_marker';
  $strongarm->value = array(
    'enable' => 0,
  );
  $export['getlocations_node_marker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_paths';
  $strongarm->value = array(
    'infobubble_path' => 'sites/all/modules/contrib/getlocations/js/infobubble.js',
    'infobubble_extended_path' => 'sites/all/modules/contrib/getlocations/js/infobubble_extended.js',
    'infowindow_options_path' => 'sites/all/modules/contrib/getlocations/js/infowindow_options.js',
    'infobubble_options_path' => 'sites/all/modules/contrib/getlocations/js/infobubble_options.js',
    'markermanager_path' => 'sites/all/modules/contrib/getlocations/js/markermanager.js',
    'markerclusterer_path' => 'sites/all/modules/contrib/getlocations/js/markerclusterer.js',
    'getlocations_polygons_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_polygons.js',
    'getlocations_rectangles_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_rectangles.js',
    'getlocations_circles_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_circles.js',
    'getlocations_polylines_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_polylines.js',
    'getlocations_categories_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_categories.js',
    'getlocations_search_places_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_search_places.js',
    'getlocations_geo_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_geo.js',
    'getlocations_preview_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_preview.js',
    'getlocations_geojson_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_geojson.js',
    'getlocations_admin_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_admin.js',
    'getlocations_box_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_box.js',
    'getlocations_colorbox_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_colorbox.js',
    'getlocations_marker_box_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_marker_box.js',
    'getlocations_views_path' => 'sites/all/modules/contrib/getlocations/js/getlocations_views.js',
    'getlocations_icons_path' => 'sites/all/modules/contrib/getlocations/js/icons.js',
    'getlocations_path' => 'sites/all/modules/contrib/getlocations/js/getlocations.js',
  );
  $export['getlocations_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_term_marker';
  $strongarm->value = array(
    'enable' => 0,
    'vids' => 0,
    'max_depth' => '',
  );
  $export['getlocations_term_marker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_ua';
  $strongarm->value = array(
    'ua_string' => 'iphone|ipad|android|blackberry|blazer|bolt|symbian|mobile safari|fennec|gobrowser|iemobile|maemo browser|profile midp|minimo|kindle|opera mini|opera mobi|skyfire|teashark|uzardweb',
  );
  $export['getlocations_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_urbancommon';
  $strongarm->value = 1;
  $export['i18n_node_extended_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_urbancommon';
  $strongarm->value = array();
  $export['i18n_node_options_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_urbancommon';
  $strongarm->value = '4';
  $export['language_content_type_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_urbancommon';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_urbancommon';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_urbancommon_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'footer',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'footer',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'language' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Language',
      'hidden' => 0,
    ),
    'body' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_ucommons_highlighted_media' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Highlighted Media',
      'hidden' => 0,
    ),
    'field_ucommons_related' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Related',
      'hidden' => 0,
    ),
    'field_ucommons_media' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Media',
      'hidden' => 0,
    ),
    'field_ucommons_beneficiaries' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Beneficiaries',
      'hidden' => 0,
    ),
    'field_ucommons_category' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Category',
      'hidden' => 0,
    ),
    'field_ucommons_tags' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Tags',
      'hidden' => 0,
    ),
    'field_link' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Link',
      'hidden' => 0,
    ),
    'field_ucommons_location' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Location',
      'hidden' => 0,
    ),
    'field_ucommons_leaflet_map' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Leaflet map',
      'hidden' => 1,
    ),
    'field_ucommons_area_effect' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Area of effect',
      'hidden' => 0,
    ),
    'field_ucommons_promoter' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Promoter',
      'hidden' => 0,
    ),
    'field_ucommons_date' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Date',
      'hidden' => 0,
    ),
    'field_ucommons_promoter_type' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Promoter&#039;s type',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_urbancommon_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_urbancommon';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_urbancommon';
  $strongarm->value = '1';
  $export['node_preview_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_urbancommon';
  $strongarm->value = 1;
  $export['node_submitted_urbancommon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_urbancommon_ca_pattern';
  $strongarm->value = '';
  $export['pathauto_node_urbancommon_ca_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_urbancommon_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_urbancommon_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_urbancommon_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_urbancommon_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_urbancommon_pattern';
  $strongarm->value = 'commons/[node:title]';
  $export['pathauto_node_urbancommon_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_urbancommon_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_urbancommon_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_urbancommon';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_urbancommon'] = $strongarm;

  return $export;
}
