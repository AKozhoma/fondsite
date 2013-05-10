<?php
/**
 * @file
 * reports.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reports_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:reports
  $menu_links['main-menu:reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reports',
    'router_path' => 'reports',
    'link_title' => 'Отчеты',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Отчеты');


  return $menu_links;
}
