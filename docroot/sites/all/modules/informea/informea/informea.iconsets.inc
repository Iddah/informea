<?php

/**
 * Implements hook_social_media_links_iconset_info().
 */
function informea_social_media_links_iconset_info() {
  $icons['informea_social_icons'] = array(
    'name' => 'InforMEA Social Icons',
    'publisher' => 'InforMEA',
    'publisher url' => 'https://www.informea.org/',
    'styles' => array(
      '32' => '32x32',
      '128' => '128x128',
    ),
    'path callback' => 'informea_social_media_links_path_informeasocialicons',
    'download url' => 'https://www.informea.org/',
  );

  return $icons;
}

/**
 * Callback with the informations about the informea_social_icons icon set.
 *
 * @param string $platform
 *   Name of the platform for which the path is returned.
 *
 * @param string $style
 *   Size of the icons.
 *
 * @return string
 *   The image path.
 */
function informea_social_media_links_path_informeasocialicons($platform = 'twitter', $style = '32') {
  $info = social_media_links_iconset('informea_social_icons');
  $path = isset($info['path']) ? $info['path'] . '/' . $style . '/' . $platform . '.png' : '';
  return $path;
}
