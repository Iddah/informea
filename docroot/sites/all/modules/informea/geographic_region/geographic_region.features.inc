<?php
/**
 * @file
 * geographic_region.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geographic_region_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function geographic_region_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function geographic_region_image_default_styles() {
  $styles = array();

  // Exported image style: medium_wide.
  $styles['medium_wide'] = array(
    'label' => 'Medium wide (260x150)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 260,
          'height' => 150,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function geographic_region_default_mailchimp_signup() {
  $items = array();
  $items['subscribe_to_newsletter'] = entity_import('mailchimp_signup', '{
    "name" : "subscribe_to_newsletter",
    "mc_lists" : { "b11dca30d3" : "b11dca30d3" },
    "mode" : "1",
    "title" : "Subscribe to newsletter",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "FNAME" : 0,
        "LNAME" : 0
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 0,
      "placeholder" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
