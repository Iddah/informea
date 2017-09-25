<?php
/**
 * @file
 * informea.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function informea_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_70411';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_70411'] = $captcha;

  return $export;
}
