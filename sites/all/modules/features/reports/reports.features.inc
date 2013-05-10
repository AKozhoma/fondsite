<?php
/**
 * @file
 * reports.features.inc
 */

/**
 * Implements hook_views_api().
 */
function reports_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function reports_node_info() {
  $items = array(
    'report' => array(
      'name' => t('Отчет'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
