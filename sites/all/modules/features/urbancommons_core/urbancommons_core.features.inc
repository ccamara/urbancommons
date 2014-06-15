<?php
/**
 * @file
 * urbancommons_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function urbancommons_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function urbancommons_core_image_default_styles() {
  $styles = array();

  // Exported image style: highlighted.
  $styles['highlighted'] = array(
    'name' => 'highlighted',
    'label' => 'Highlighted',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 505,
          'height' => 284,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
