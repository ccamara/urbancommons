<?php
/**
 * @file
 * urbancommons_ucommons.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function urbancommons_ucommons_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create urbancommon content'.
  $permissions['create urbancommon content'] = array(
    'name' => 'create urbancommon content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any urbancommon content'.
  $permissions['delete any urbancommon content'] = array(
    'name' => 'delete any urbancommon content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own urbancommon content'.
  $permissions['delete own urbancommon content'] = array(
    'name' => 'delete own urbancommon content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any urbancommon content'.
  $permissions['edit any urbancommon content'] = array(
    'name' => 'edit any urbancommon content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own urbancommon content'.
  $permissions['edit own urbancommon content'] = array(
    'name' => 'edit own urbancommon content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
