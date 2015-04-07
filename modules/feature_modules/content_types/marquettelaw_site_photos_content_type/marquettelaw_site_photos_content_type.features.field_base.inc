<?php
/**
 * @file
 * marquettelaw_site_photos_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function marquettelaw_site_photos_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_site_sections'
  $field_bases['field_site_sections'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_site_sections',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'site_sections' => 'site_sections',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
