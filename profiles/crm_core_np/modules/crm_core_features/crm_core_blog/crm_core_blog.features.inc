<?php
/**
 * @file
 * crm_core_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crm_core_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crm_core_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crm_core_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => t('Use for multi-user blogs. Every user gets a personal blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
