<?php
/**
 * @file
 * urbancommons_ucommons.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function urbancommons_ucommons_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|urbancommon|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'urbancommon';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|urbancommon|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function urbancommons_ucommons_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|urbancommon|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'urbancommon';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = '2_columns_7030';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_ucommons_highlighted_media',
        1 => 'body',
        2 => 'field_ucommons_leaflet_map',
        3 => 'field_ucommons_media',
      ),
      'right' => array(
        4 => 'field_link',
        5 => 'field_ucommons_date',
        6 => 'field_ucommons_scale',
        7 => 'field_ucommons_category',
        8 => 'field_ucommons_beneficiaries',
        9 => 'field_ucommons_tags',
        10 => 'field_ucommons_area_effect',
        11 => 'field_ucommons_promoter',
        12 => 'field_ucommons_promoter_type',
        13 => 'field_ucommons_managers',
        14 => 'field_ucommons_related',
      ),
    ),
    'fields' => array(
      'field_ucommons_highlighted_media' => 'left',
      'body' => 'left',
      'field_ucommons_leaflet_map' => 'left',
      'field_ucommons_media' => 'left',
      'field_link' => 'right',
      'field_ucommons_date' => 'right',
      'field_ucommons_scale' => 'right',
      'field_ucommons_category' => 'right',
      'field_ucommons_beneficiaries' => 'right',
      'field_ucommons_tags' => 'right',
      'field_ucommons_area_effect' => 'right',
      'field_ucommons_promoter' => 'right',
      'field_ucommons_promoter_type' => 'right',
      'field_ucommons_managers' => 'right',
      'field_ucommons_related' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|urbancommon|default'] = $ds_layout;

  return $export;
}
