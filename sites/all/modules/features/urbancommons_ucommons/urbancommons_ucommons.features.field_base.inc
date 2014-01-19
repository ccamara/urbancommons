<?php
/**
 * @file
 * urbancommons_ucommons.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function urbancommons_ucommons_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_link'
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_ucommons_area_effect'
  $field_bases['field_ucommons_area_effect'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_area_effect',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ucommons_area_effect',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_ucommons_beneficiaries'
  $field_bases['field_ucommons_beneficiaries'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_beneficiaries',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ucommons_beneficiary',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_ucommons_category'
  $field_bases['field_ucommons_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_category',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ucommons_category',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_ucommons_highlighted_media'
  $field_bases['field_ucommons_highlighted_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_highlighted_media',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_ucommons_leaflet_map'
  $field_bases['field_ucommons_leaflet_map'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_leaflet_map',
    'foreign keys' => array(),
    'indexes' => array(
      'locative_field_name' => array(
        0 => 'locative_field_name',
      ),
    ),
    'locked' => 0,
    'module' => 'getlocations_leaflet',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'getlocations_leaflet',
  );

  // Exported field_base: 'field_ucommons_location'
  $field_bases['field_ucommons_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_location',
    'foreign keys' => array(),
    'indexes' => array(
      'glid' => array(
        0 => 'glid',
      ),
    ),
    'locked' => 0,
    'module' => 'getlocations_fields',
    'settings' => array(
      'autocomplete_bias' => 0,
      'baselayers' => array(
        'Hybrid' => 1,
        'Map' => 1,
        'OpenStreetMap' => 1,
        'Physical' => 1,
        'Satellite' => 1,
      ),
      'circles_apply' => 0,
      'circles_clickable' => 0,
      'circles_coords' => '',
      'circles_enable' => 0,
      'circles_fillcolor' => '#FF0000',
      'circles_fillopacity' => 0.35,
      'circles_message' => '',
      'circles_radius' => 0,
      'circles_strokecolor' => '#FF0000',
      'circles_strokeopacity' => 0.8,
      'circles_strokeweight' => 3,
      'city_autocomplete' => 1,
      'comment_map_marker' => 'drupal',
      'controltype' => 'small',
      'country' => 'ES',
      'draggable' => 1,
      'entity_translation_sync' => FALSE,
      'fullscreen' => 0,
      'geojson_data' => '',
      'geojson_enable' => 0,
      'geojson_options' => '',
      'highlight_enable' => 0,
      'highlight_fillcolor' => '#FF0000',
      'highlight_fillopacity' => 0.35,
      'highlight_radius' => 10,
      'highlight_strokecolor' => '#FF0000',
      'highlight_strokeopacity' => 0.8,
      'highlight_strokeweight' => 3,
      'input_additional_required' => 4,
      'input_additional_weight' => 0,
      'input_additional_width' => 40,
      'input_address_width' => 40,
      'input_city_required' => 0,
      'input_city_weight' => 0,
      'input_city_width' => 40,
      'input_country_required' => 0,
      'input_country_weight' => 0,
      'input_country_width' => 40,
      'input_fax_required' => 4,
      'input_fax_weight' => 0,
      'input_fax_width' => 20,
      'input_geobutton_weight' => 0,
      'input_geolocation_button_weight' => 0,
      'input_latitude_weight' => 0,
      'input_latitude_width' => 20,
      'input_longitude_weight' => 0,
      'input_longitude_width' => 20,
      'input_map_marker' => 'webiconset-pins-24 pin2',
      'input_map_show' => 1,
      'input_map_weight' => 0,
      'input_marker_weight' => 0,
      'input_mobile_required' => 4,
      'input_mobile_weight' => 0,
      'input_mobile_width' => 20,
      'input_name_required' => 4,
      'input_name_weight' => 0,
      'input_name_width' => 40,
      'input_phone_required' => 0,
      'input_phone_weight' => 0,
      'input_phone_width' => 20,
      'input_postal_code_required' => 0,
      'input_postal_code_weight' => 0,
      'input_postal_code_width' => 40,
      'input_province_required' => 0,
      'input_province_weight' => 0,
      'input_province_width' => 40,
      'input_smart_ip_button_weight' => 0,
      'input_street_required' => 0,
      'input_street_weight' => 0,
      'input_street_width' => 40,
      'jquery_colorpicker_enabled' => 0,
      'kml_group' => array(
        'kml_url' => '',
        'kml_url_button' => 0,
        'kml_url_button_label' => 'Kml Layer',
        'kml_url_button_state' => 0,
        'kml_url_click' => 1,
        'kml_url_infowindow' => 0,
        'kml_url_viewport' => 1,
      ),
      'latlon_warning' => 0,
      'latlong' => '40,0',
      'map_backgroundcolor' => '',
      'map_marker' => 'drupal',
      'map_settings_allow' => 0,
      'mapcontrolposition' => '',
      'mapheight' => '200px',
      'maptype' => 'OpenStreetMap',
      'mapwidth' => '90%',
      'maxzoom_map' => -1,
      'minzoom_map' => -1,
      'mtc' => 'standard',
      'node_map_marker' => 'drupal',
      'nodoubleclickzoom' => 0,
      'nokeyboard' => 0,
      'only_continents' => '',
      'only_countries' => '',
      'overview' => 0,
      'overview_opened' => 0,
      'pancontrol' => 0,
      'pancontrolposition' => '',
      'per_item_marker' => 0,
      'polygons_clickable' => 0,
      'polygons_coords' => '',
      'polygons_enable' => 0,
      'polygons_fillcolor' => '#FF0000',
      'polygons_fillopacity' => 0.35,
      'polygons_message' => '',
      'polygons_strokecolor' => '#FF0000',
      'polygons_strokeopacity' => 0.8,
      'polygons_strokeweight' => 3,
      'polylines_clickable' => 0,
      'polylines_coords' => '',
      'polylines_enable' => 0,
      'polylines_message' => '',
      'polylines_strokecolor' => '#FF0000',
      'polylines_strokeopacity' => 0.8,
      'polylines_strokeweight' => 3,
      'province_autocomplete' => 1,
      'rectangles_apply' => 0,
      'rectangles_clickable' => 0,
      'rectangles_coords' => '',
      'rectangles_dist' => 0,
      'rectangles_enable' => 0,
      'rectangles_fillcolor' => '#FF0000',
      'rectangles_fillopacity' => 0.35,
      'rectangles_message' => '',
      'rectangles_strokecolor' => '#FF0000',
      'rectangles_strokeopacity' => 0.8,
      'rectangles_strokeweight' => 3,
      'restrict_by_country' => 0,
      'scale' => 0,
      'scalecontrolposition' => '',
      'scrollwheel' => 0,
      'search_country' => 'ES',
      'search_places' => 0,
      'search_places_dd' => 0,
      'search_places_label' => 'Google Places Search',
      'search_places_list' => 0,
      'search_places_placeholder' => '',
      'search_places_position' => 'outside_above',
      'search_places_size' => 40,
      'show_bubble_on_one_marker' => 0,
      'show_maplinks' => 0,
      'street_num_pos' => 1,
      'streetview_settings_allow' => 0,
      'sv_addresscontrol' => 1,
      'sv_addresscontrolposition' => '',
      'sv_clicktogo' => 1,
      'sv_enable' => 0,
      'sv_heading' => 0,
      'sv_imagedatecontrol' => 0,
      'sv_linkscontrol' => 1,
      'sv_pancontrol' => 1,
      'sv_pancontrolposition' => '',
      'sv_pitch' => 0,
      'sv_scrollwheel' => 1,
      'sv_showfirst' => 0,
      'sv_zoom' => 1,
      'sv_zoomcontrol' => 'default',
      'sv_zoomcontrolposition' => '',
      'svcontrolposition' => '',
      'use_address' => 2,
      'use_country_dropdown' => 1,
      'use_geolocation_button' => 0,
      'use_smart_ip_button' => 0,
      'use_smart_ip_latlon' => 0,
      'user_map_marker' => 'drupal',
      'vocabulary_map_marker' => 'drupal',
      'zoom' => 3,
      'zoomcontrolposition' => '',
    ),
    'translatable' => 0,
    'type' => 'getlocations_fields',
  );

  // Exported field_base: 'field_ucommons_media'
  $field_bases['field_ucommons_media'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_media',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_ucommons_related'
  $field_bases['field_ucommons_related'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_related',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'relation_add',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'relation_add',
  );

  // Exported field_base: 'field_ucommons_tags'
  $field_bases['field_ucommons_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ucommons_tags',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ucommons_tags',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
