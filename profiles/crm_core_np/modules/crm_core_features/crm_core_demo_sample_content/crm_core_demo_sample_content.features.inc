<?php
/**
 * @file
 * crm_core_demo_sample_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crm_core_demo_sample_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}
