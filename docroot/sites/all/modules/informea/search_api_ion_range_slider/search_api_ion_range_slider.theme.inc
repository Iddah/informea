<?php

/**
 * Theme an Ion Range Slider.
 */
function theme_search_api_ion_range_slider_slider(array $variables) {
  $output = '';
  $output .= '<div class="search-api-ion-range-slider-widget">';
  $output .= render($variables['slider']);
  $output .= '</div>';
  return $output;
}
