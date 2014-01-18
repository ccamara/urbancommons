<?php
/**
 * @file
 * urbancommons_ucommons.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function urbancommons_ucommons_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'ucommons_ol_marker';
  $openlayers_styles->title = 'Urban Commons marker';
  $openlayers_styles->description = 'Small black marker provided by the OpenLayers module.';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/all/modules/contrib/openlayers/themes/default_dark/markers/marker-black-small.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 16,
    'graphicHeight' => 26,
    'graphicOpacity' => 1,
    'graphicXOffset' => -8,
    'graphicYOffset' => -26,
    'labelAlign' => 'cm',
  );
  $export['ucommons_ol_marker'] = $openlayers_styles;

  return $export;
}
