<?php
/**
 * @file
 * data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '_need_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Текущие нужды';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Текущие нужды';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Содержимое: Категория (field_category_need) */
  $handler->display->display_options['relationships']['field_category_need_tid']['id'] = 'field_category_need_tid';
  $handler->display->display_options['relationships']['field_category_need_tid']['table'] = 'field_data_field_category_need';
  $handler->display->display_options['relationships']['field_category_need_tid']['field'] = 'field_category_need_tid';
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Содержимое: Проекты */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['delta_offset'] = '0';
  /* Поле: Содержимое: Стоимость */
  $handler->display->display_options['fields']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['table'] = 'field_data_field_cost';
  $handler->display->display_options['fields']['field_cost']['field'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cost']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Поле: Содержимое: Общее количество */
  $handler->display->display_options['fields']['field_total_number']['id'] = 'field_total_number';
  $handler->display->display_options['fields']['field_total_number']['table'] = 'field_data_field_total_number';
  $handler->display->display_options['fields']['field_total_number']['field'] = 'field_total_number';
  $handler->display->display_options['fields']['field_total_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Поле: Содержимое: Уже купленно */
  $handler->display->display_options['fields']['field_purchased_quantity']['id'] = 'field_purchased_quantity';
  $handler->display->display_options['fields']['field_purchased_quantity']['table'] = 'field_data_field_purchased_quantity';
  $handler->display->display_options['fields']['field_purchased_quantity']['field'] = 'field_purchased_quantity';
  $handler->display->display_options['fields']['field_purchased_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_purchased_quantity']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Поле: Content revision: Ссылка */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_to_revision']['text'] = 'подробнее...';
  /* Sort criterion: Содержимое: Категория (field_category_need) */
  $handler->display->display_options['sorts']['field_category_need_tid']['id'] = 'field_category_need_tid';
  $handler->display->display_options['sorts']['field_category_need_tid']['table'] = 'field_data_field_category_need';
  $handler->display->display_options['sorts']['field_category_need_tid']['field'] = 'field_category_need_tid';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_need' => '_need',
  );
  /* Filter criterion: Содержимое: Категория (field_category_need) */
  $handler->display->display_options['filters']['field_category_need_tid']['id'] = 'field_category_need_tid';
  $handler->display->display_options['filters']['field_category_need_tid']['table'] = 'field_data_field_category_need';
  $handler->display->display_options['filters']['field_category_need_tid']['field'] = 'field_category_need_tid';
  $handler->display->display_options['filters']['field_category_need_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_category_need_tid']['value'] = array(
    36 => '36',
  );
  $handler->display->display_options['filters']['field_category_need_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_need_tid']['vocabulary'] = '_category_need';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = ' »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'need_block';
  $translatables['_need_content'] = array(
    t('Master'),
    t('Текущие нужды'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('term from field_category_need'),
    t('Проекты'),
    t('Стоимость'),
    t('Общее количество'),
    t('Уже купленно'),
    t('подробнее...'),
    t('Block'),
    t('« '),
    t('‹ '),
    t(' ›'),
    t(' »'),
    t('need_block'),
  );
  $export['_need_content'] = $view;

  $view = new view();
  $view->name = 'events_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'events_main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'События';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Поле: Content revision: Ссылка */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_to_revision']['text'] = 'подробнее...';
  /* Sort criterion: Содержимое: Отобразить га Главной (field_fixer) */
  $handler->display->display_options['sorts']['field_fixer_value']['id'] = 'field_fixer_value';
  $handler->display->display_options['sorts']['field_fixer_value']['table'] = 'field_data_field_fixer';
  $handler->display->display_options['sorts']['field_fixer_value']['field'] = 'field_fixer_value';
  $handler->display->display_options['sorts']['field_fixer_value']['order'] = 'DESC';
  /* Sort criterion: Содержимое: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_event' => '_event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'События';
  $translatables['events_main'] = array(
    t('Master'),
    t('События'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('подробнее...'),
    t('Block'),
  );
  $export['events_main'] = $view;

  $view = new view();
  $view->name = 'partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Наши партнеры';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
  );
  /* Поле: Content revision: Ссылка */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_to_revision']['text'] = 'подробнее...';
  /* Sort criterion: Содержимое: Категория (field_category_partner) */
  $handler->display->display_options['sorts']['field_category_partner_tid']['id'] = 'field_category_partner_tid';
  $handler->display->display_options['sorts']['field_category_partner_tid']['table'] = 'field_data_field_category_partner';
  $handler->display->display_options['sorts']['field_category_partner_tid']['field'] = 'field_category_partner_tid';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_partner' => '_partner',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'partners';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Партнеры';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['partners'] = array(
    t('Master'),
    t('Наши партнеры'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('подробнее...'),
    t('Random'),
    t('Page'),
  );
  $export['partners'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
  );
  /* Поле: Содержимое: Ссылка */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'подробнее...';
  /* Sort criterion: Содержимое: Категория (field_category) */
  $handler->display->display_options['sorts']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['sorts']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['sorts']['field_category_tid']['field'] = 'field_category_tid';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_project' => '_project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Наши программы';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['projects'] = array(
    t('Master'),
    t('projects'),
    t('more'),
    t('Apply'),
    t('Сбросить'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('подробнее...'),
    t('Page'),
  );
  $export['projects'] = $view;

  $view = new view();
  $view->name = 'protege_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'proteges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'proteges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Отсортировать';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировка по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'по алфавиту';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'в обратном порядке';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Содержимое: Дата рождения */
  $handler->display->display_options['fields']['field_date_birth']['id'] = 'field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['table'] = 'field_data_field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['field'] = 'field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['label'] = 'Возраст';
  $handler->display->display_options['fields']['field_date_birth']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date_birth']['settings'] = array(
    'interval' => '1',
    'interval_display' => 'raw time ago',
  );
  /* Поле: Содержимое: Диагноз */
  $handler->display->display_options['fields']['field_diagnos']['id'] = 'field_diagnos';
  $handler->display->display_options['fields']['field_diagnos']['table'] = 'field_data_field_diagnos';
  $handler->display->display_options['fields']['field_diagnos']['field'] = 'field_diagnos';
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Поле: Content revision: Ссылка */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_to_revision']['text'] = 'подробнее...';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_protege' => '_protege',
  );
  /* Filter criterion: Содержимое: Категория (field_category_protege) */
  $handler->display->display_options['filters']['field_category_protege_tid']['id'] = 'field_category_protege_tid';
  $handler->display->display_options['filters']['field_category_protege_tid']['table'] = 'field_data_field_category_protege';
  $handler->display->display_options['filters']['field_category_protege_tid']['field'] = 'field_category_protege_tid';
  $handler->display->display_options['filters']['field_category_protege_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_category_protege_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_protege_tid']['vocabulary'] = '_category_protege';
  /* Filter criterion: Содержимое: Проекты (field_projects) */
  $handler->display->display_options['filters']['field_projects_nid']['id'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['table'] = 'field_data_field_projects';
  $handler->display->display_options['filters']['field_projects_nid']['field'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_projects_nid']['expose']['operator_id'] = 'field_projects_nid_op';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['label'] = 'Проекты';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['operator'] = 'field_projects_nid_op';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['identifier'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_projects_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'proteges';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Наши подопечные';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page2 */
  $handler = $view->new_display('page', 'Page2', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'proteges_help';
  $handler->display->display_options['menu']['title'] = 'Наши подопечные';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['protege_page'] = array(
    t('Master'),
    t('proteges'),
    t('more'),
    t('Отсортировать'),
    t('Сбросить'),
    t('Сортировка по'),
    t('по алфавиту'),
    t('в обратном порядке'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('Возраст'),
    t('Диагноз'),
    t('подробнее...'),
    t('Проекты'),
    t('Page'),
    t('Page2'),
  );
  $export['protege_page'] = $view;

  $view = new view();
  $view->name = 'proteges_help';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'proteges_help';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'proteges_help';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Сортировать';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'по алфавиту';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'в обратном порядке';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Поле: Содержимое: Фото */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'preview',
    'image_link' => 'content',
  );
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Содержимое: Дата рождения */
  $handler->display->display_options['fields']['field_date_birth']['id'] = 'field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['table'] = 'field_data_field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['field'] = 'field_date_birth';
  $handler->display->display_options['fields']['field_date_birth']['label'] = 'Возраст';
  $handler->display->display_options['fields']['field_date_birth']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date_birth']['settings'] = array(
    'interval' => '1',
    'interval_display' => 'raw time ago',
  );
  /* Поле: Содержимое: Диагноз */
  $handler->display->display_options['fields']['field_diagnos']['id'] = 'field_diagnos';
  $handler->display->display_options['fields']['field_diagnos']['table'] = 'field_data_field_diagnos';
  $handler->display->display_options['fields']['field_diagnos']['field'] = 'field_diagnos';
  /* Поле: Содержимое: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Поле: Content revision: Ссылка */
  $handler->display->display_options['fields']['link_to_revision']['id'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['table'] = 'node_revision';
  $handler->display->display_options['fields']['link_to_revision']['field'] = 'link_to_revision';
  $handler->display->display_options['fields']['link_to_revision']['label'] = '';
  $handler->display->display_options['fields']['link_to_revision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link_to_revision']['text'] = 'подробнее...';
  /* Sort criterion: Содержимое: Заголовок */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Имя';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_protege' => '_protege',
  );
  /* Filter criterion: Содержимое: Категория (field_category_protege) */
  $handler->display->display_options['filters']['field_category_protege_tid']['id'] = 'field_category_protege_tid';
  $handler->display->display_options['filters']['field_category_protege_tid']['table'] = 'field_data_field_category_protege';
  $handler->display->display_options['filters']['field_category_protege_tid']['field'] = 'field_category_protege_tid';
  $handler->display->display_options['filters']['field_category_protege_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_category_protege_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_protege_tid']['vocabulary'] = '_category_protege';
  /* Filter criterion: Content revision: Заголовок */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node_revision';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Содержимое: Язык */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'ru' => 'ru',
  );
  /* Filter criterion: Содержимое: Проекты (field_projects) */
  $handler->display->display_options['filters']['field_projects_nid']['id'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['table'] = 'field_data_field_projects';
  $handler->display->display_options['filters']['field_projects_nid']['field'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_projects_nid']['expose']['operator_id'] = 'field_projects_nid_op';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['label'] = 'Проекты';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['operator'] = 'field_projects_nid_op';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['identifier'] = 'field_projects_nid';
  $handler->display->display_options['filters']['field_projects_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_projects_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'proteges_help';
  $handler->display->display_options['menu']['title'] = 'Наши подопечные';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['proteges_help'] = array(
    t('Master'),
    t('proteges_help'),
    t('more'),
    t('Сортировать'),
    t('Сбросить'),
    t('Сортировать по'),
    t('по алфавиту'),
    t('в обратном порядке'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« первая'),
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('Возраст'),
    t('Диагноз'),
    t('подробнее...'),
    t('Имя'),
    t('Проекты'),
    t('Page'),
  );
  $export['proteges_help'] = $view;

  return $export;
}
