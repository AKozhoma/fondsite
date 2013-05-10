<?php
/**
 * @file
 * reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Отчеты';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_report' => 'field_date_report',
    'field_account' => 'field_account',
    'field_destination' => 'field_destination',
    'field_report_project' => 'field_report_project',
    'field_remarks' => 'field_remarks',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_report';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_destination' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_report_project' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Поле: Содержимое: Дата */
  $handler->display->display_options['fields']['field_date_report']['id'] = 'field_date_report';
  $handler->display->display_options['fields']['field_date_report']['table'] = 'field_data_field_date_report';
  $handler->display->display_options['fields']['field_date_report']['field'] = 'field_date_report';
  $handler->display->display_options['fields']['field_date_report']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_report']['settings'] = array(
    'format_type' => 'reports_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Поле: Содержимое: Сумма */
  $handler->display->display_options['fields']['field_account']['id'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['table'] = 'field_data_field_account';
  $handler->display->display_options['fields']['field_account']['field'] = 'field_account';
  $handler->display->display_options['fields']['field_account']['element_label_colon'] = FALSE;
  /* Поле: Содержимое: Назначение */
  $handler->display->display_options['fields']['field_destination']['id'] = 'field_destination';
  $handler->display->display_options['fields']['field_destination']['table'] = 'field_data_field_destination';
  $handler->display->display_options['fields']['field_destination']['field'] = 'field_destination';
  $handler->display->display_options['fields']['field_destination']['element_label_colon'] = FALSE;
  /* Поле: Содержимое: Проект */
  $handler->display->display_options['fields']['field_report_project']['id'] = 'field_report_project';
  $handler->display->display_options['fields']['field_report_project']['table'] = 'field_data_field_report_project';
  $handler->display->display_options['fields']['field_report_project']['field'] = 'field_report_project';
  $handler->display->display_options['fields']['field_report_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_project']['delta_offset'] = '0';
  /* Поле: Содержимое: Примечание */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['element_label_colon'] = FALSE;
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
    'report' => 'report',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Отчеты';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['reports'] = array(
    t('Master'),
    t('Отчеты'),
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
    t('Дата'),
    t('Сумма'),
    t('Назначение'),
    t('Проект'),
    t('Примечание'),
    t('Page'),
  );
  $export['reports'] = $view;

  return $export;
}
