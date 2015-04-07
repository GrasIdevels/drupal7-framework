<?php
/**
 * @file
 * marquettelaw_hero_space_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function marquettelaw_hero_space_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function marquettelaw_hero_space_content_type_node_info() {
  $items = array(
    'hero_space' => array(
      'name' => t('Hero Space'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
