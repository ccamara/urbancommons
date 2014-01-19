<?php
/**
 * @file
 * urbancommons_ucommons.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function urbancommons_ucommons_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|urbancommon|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'urbancommon';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_ucommons_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-location field-group-fieldset',
        'description' => 'Open this fieldgrup in order to add one or more locations related to this content',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_location|node|urbancommon|form'] = $field_group;

  return $export;
}
