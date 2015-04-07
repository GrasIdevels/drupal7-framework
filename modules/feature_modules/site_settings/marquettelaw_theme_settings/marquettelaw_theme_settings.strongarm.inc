<?php
/**
 * @file
 * marquettelaw_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function marquettelaw_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_marquettelaw_omega_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'omega_toggle_front_page_content' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => TRUE,
    'omega_toggle_extension_development' => 0,
    'omega_enable_export_reminder' => NULL,
    'omega_rebuild_theme_registry' => NULL,
    'omega_rebuild_aggregates' => NULL,
    'omega_browser_width_indicator' => NULL,
    'omega_livereload' => NULL,
    'omega_livereload_script' => NULL,
    'omega_livereload_host' => NULL,
    'omega_livereload_port' => NULL,
    'omega_demo_regions' => NULL,
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_user_scaleable' => 1,
    'omega_chrome_edge' => 1,
    'omega_toggle_extension_layouts' => 0,
    'omega_layout' => NULL,
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 0,
      ),
    ),
  );
  $export['theme_marquettelaw_omega_settings'] = $strongarm;

  return $export;
}
