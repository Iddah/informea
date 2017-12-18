<?php
/**
 * @file
 * geographic_region.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function geographic_region_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'mailchimp_signup_subscribe_block_subscribe_to_newsletter_form';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['mailchimp_signup_subscribe_block_subscribe_to_newsletter_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_418241';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_418241'] = $captcha;

  return $export;
}
