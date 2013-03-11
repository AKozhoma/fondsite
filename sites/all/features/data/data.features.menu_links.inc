<?php
/**
 * @file
 * data.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function data_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/14
  $menu_links['main-menu:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'О нас',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/17
  $menu_links['main-menu:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Отчеты',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: main-menu:node/18
  $menu_links['main-menu:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Контакты',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: main-menu:partners
  $menu_links['main-menu:partners'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'partners',
    'router_path' => 'partners',
    'link_title' => 'Партнеры',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: main-menu:projects
  $menu_links['main-menu:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Наши программы',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: main-menu:proteges
  $menu_links['main-menu:proteges'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'proteges',
    'router_path' => 'proteges',
    'link_title' => 'Наши подопечные',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:proteges_help
  $menu_links['main-menu:proteges_help'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'proteges_help',
    'router_path' => 'proteges_help',
    'link_title' => 'Наши подопечные',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: management:admin/structure/menu/manage/main-menu
  $menu_links['management:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Главное меню',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: navigation:node/add/-event
  $menu_links['navigation:node/add/-event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/-event',
    'router_path' => 'node/add/-event',
    'link_title' => 'События',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/-need
  $menu_links['navigation:node/add/-need'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/-need',
    'router_path' => 'node/add/-need',
    'link_title' => 'Нужды',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/-partner
  $menu_links['navigation:node/add/-partner'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/-partner',
    'router_path' => 'node/add/-partner',
    'link_title' => 'Партнеры',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/-project
  $menu_links['navigation:node/add/-project'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/-project',
    'router_path' => 'node/add/-project',
    'link_title' => 'Проекты',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/-protege
  $menu_links['navigation:node/add/-protege'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/-protege',
    'router_path' => 'node/add/-protege',
    'link_title' => 'Подопечные',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Главное меню');
  t('Контакты');
  t('Наши подопечные');
  t('Наши программы');
  t('Нужды');
  t('О нас');
  t('Отчеты');
  t('Партнеры');
  t('Подопечные');
  t('Проекты');
  t('События');


  return $menu_links;
}
