<?php

/**
 * @file
 * Implement a title field formater.
 */


/**
 * Implements hook_field_formatter_info().
 */
function informeax_field_formatter_info() {
  return array(

  );
}



/**
 * Implements hook_field_formatter_settings_summary().
 */
function informeax_field_formatter_settings_summary($field, $instance, $view_mode) {
  $settings = $instance['display'][$view_mode]['settings'];
  $summary = array();

  $tag = isset($settings['title_style']) && $settings['title_style'] != '' && $settings['title_style'] != '_none' ? $settings['title_style'] : t('- None -');
  $summary[] = t('Title wrap tag: @tag', array('@tag' => $tag));

  $link_types = array(
    'content' => t('Linked to content'),
  );
  // Display this setting only if field is linked.
  if (isset($link_types[$settings['title_link']])) {
    $summary[] = $link_types[$settings['title_link']];
  }

  // Display this setting only if wrapper has a class.
  if (isset($settings['title_class']) && $settings['title_class'] != '_none' && $settings['title_class'] != '') {
    $summary[] = t('Wrap tag classes: @classes', array('@classes' => $settings['title_class']));
  }

  return implode('<br />', $summary);
}

/**
 * Implements hook_field_formatter_view().
 */
function informeax_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $settings = $display['settings'];
  $output = '';
  if (isset($items[0]['safe_value'])) {
    $output = $items[0]['safe_value'];
  }
  elseif (isset($items[0]['value'])) {
    $output = _text_sanitize($instance, $langcode, $items[0], 'value');
  }
  $element = array();

  if (!empty($output)) {
    if ($settings['title_link'] == 'content') {
      $uri = entity_uri($entity_type, $entity);
      $options = array('html' => TRUE);
      if (!empty($uri['options'])) {
        $options = array_merge($options, $uri['options']);
      }
      $output = l($output, $uri['path'], $options);
    }

    $wrap_tag = empty($settings['title_style']) ? '_none' : $settings['title_style'];

    if ($wrap_tag != '_none') {
      $variables = array(
        'element' => array(
          '#tag' => $wrap_tag,
          '#value' => $output,
        ),
      );

      if (!empty($settings['title_class'])) {
        $variables['element']['#attributes'] = array('class' => $settings['title_class']);
      }

      $output = theme('html_tag', $variables);
    }

    $element = array(
      array(
        '#markup' => $output,
      ),
    );
  }
  return $element;
}

