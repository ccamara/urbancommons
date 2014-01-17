<?php
/**
 * @file
 * urbancommons_ucommons.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function urbancommons_ucommons_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-urbancommon-body'
  $field_instances['node-urbancommon-body'] = array(
    'bundle' => 'urbancommon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-urbancommon-field_address'
  $field_instances['node-urbancommon-field_address'] = array(
    'bundle' => 'urbancommon',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|urbancommon|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'administrative_area' => '',
        'country' => 'ES',
        'name_line' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'name-oneline' => 'name-oneline',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-urbancommon-field_ucommons_highlighted_media'
  $field_instances['node-urbancommon-field_ucommons_highlighted_media'] = array(
    'bundle' => 'urbancommon',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ucommons_highlighted_media',
    'label' => 'Highlighted Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'ucommons',
      'file_extensions' => 'jpg png gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-urbancommon-field_ucommons_location'
  $field_instances['node-urbancommon-field_ucommons_location'] = array(
    'bundle' => 'urbancommon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ucommons_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'delta_handling' => 'default',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'openlayers_map' => 'geofield_widget_map',
        'use_geocoder' => 1,
      ),
      'type' => 'geofield_openlayers',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-urbancommon-field_ucommons_media'
  $field_instances['node-urbancommon-field_ucommons_media'] = array(
    'bundle' => 'urbancommon',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ucommons_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'ucommons/media',
      'file_extensions' => 'jpg png gif pdf odt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'flickr' => 'flickr',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 'default',
          'image' => 'image',
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-urbancommon-field_ucommons_related'
  $field_instances['node-urbancommon-field_ucommons_related'] = array(
    'bundle' => 'urbancommon',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'relation_add',
        'settings' => array(),
        'type' => 'relation_add_endpoints_and_fields',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ucommons_related',
    'label' => 'Related',
    'required' => 0,
    'settings' => array(
      'relation_type' => array(
        'related_urbancommon' => 'related_urbancommon',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'relation_add',
      'settings' => array(
        'relation_endpoint_custom_label' => '',
        'relation_endpoint_label' => 'none',
        'relation_endpoint_label_delta' => 0,
        'relation_endpoint_search_by_id' => 1,
      ),
      'type' => 'relation_add',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Highlighted Media');
  t('Location');
  t('Media');
  t('Related');

  return $field_instances;
}
