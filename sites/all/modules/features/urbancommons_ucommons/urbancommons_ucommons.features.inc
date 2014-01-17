<?php
/**
 * @file
 * urbancommons_ucommons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function urbancommons_ucommons_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function urbancommons_ucommons_node_info() {
  $items = array(
    'urbancommon' => array(
      'name' => t('Urbancommon'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
