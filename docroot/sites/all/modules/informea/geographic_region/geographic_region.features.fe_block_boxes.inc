<?php
/**
 * @file
 * geographic_region.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function geographic_region_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Displays a link to the contact page.';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'engage_with_informea';
  $fe_block_boxes->body = '<p>Share your feedback on our platform by <a href="/contact">contacting us here</a>.</p>';

  $export['engage_with_informea'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Get involved region title';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'involvement_region_title';
  $fe_block_boxes->body = '<p>Find out how you can <b>engage with InforMEA</b> and <b>take part</b> of the volunteers community.</p>';

  $export['involvement_region_title'] = $fe_block_boxes;

  return $export;
}
