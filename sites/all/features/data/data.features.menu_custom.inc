<?php
/**
 * @file
 * data.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function data_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Главное меню',
    'description' => 'Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.',
  );
  // Exported menu: management
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Меню управления содержит ссылки на страницы администрирования сайтом.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('Главное меню');
  t('Меню основных ссылок показывает главные разделы сайта. Обычно выводятся в виде горизонтальной полосы вверху страницы.');
  t('Меню управления содержит ссылки на страницы администрирования сайтом.');


  return $menus;
}
