<?php
/**
 * @file
 * data.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function data_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array();
  $realm_variables['language']['ru'] = array(
  'site_name' => 'Инициативная группа "Открытые ладони"',
  'site_slogan' => '',
);

return $realm_variables;
}
