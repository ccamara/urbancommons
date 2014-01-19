<?php

/**
 * @file
 * Display Suite 2 Columns 70/30 configuration.
 */

function ds_2_columns_7030() {
  return array(
    'label' => t('2 Columns 70/30'),
    'regions' => array(
      'left' => t('Left'),
      'right' => t('Right'),
    ),
    // Uncomment if you want to include a CSS file for this layout (2_columns_7030.css)
    'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (2_columns_7030.png)
    'image' => TRUE,
  );
}
