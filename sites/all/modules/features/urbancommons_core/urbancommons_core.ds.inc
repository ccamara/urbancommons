<?php
/**
 * @file
 * urbancommons_core.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function urbancommons_core_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'additional_media';
  $ds_view_mode->label = 'Additional media';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['additional_media'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'highlighted';
  $ds_view_mode->label = 'Highlighted';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['highlighted'] = $ds_view_mode;

  return $export;
}
