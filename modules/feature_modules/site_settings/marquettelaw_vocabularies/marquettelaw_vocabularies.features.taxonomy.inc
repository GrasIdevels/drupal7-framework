<?php
/**
 * @file
 * marquettelaw_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function marquettelaw_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'argument_category' => array(
      'name' => 'Argument Category',
      'machine_name' => 'argument_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'grouping_category' => array(
      'name' => 'Grouping Category',
      'machine_name' => 'grouping_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'news_event_categories' => array(
      'name' => 'News & Event Categories',
      'machine_name' => 'news_event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'site_sections' => array(
      'name' => 'Site Sections',
      'machine_name' => 'site_sections',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
