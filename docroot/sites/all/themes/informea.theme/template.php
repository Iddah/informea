<?php
/**
 * @file
 * template.php
 */

/**
 * Preprocesses variables for page template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function informea_theme_preprocess_page(&$variables) {

  global $base_url;
  // Add elearning SVG icon.
  $elearning_icon_path = $base_url . '/' . drupal_get_path('theme', 'informea_theme') . '/img/elearning.svg';
  $variables['elearning_icon'] = theme('image', array('path' => $elearning_icon_path, 'attributes' => array('class' => array('elearning-icon'), 'height' => '20', 'width' => '27')));

  // Add Informea Treaties Block.
  $block = block_load('informea', 'informea_treaties_block');
  $block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
  $informea_treaties_block = drupal_render($block_array);
  $variables['informea_treaties_block'] = $informea_treaties_block;


  // Add Informea Browse All Block.
  $block = block_load('informea', 'informea_browse_all_block');
  $block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
  $informea_browse_all_block = drupal_render($block_array);
  $variables['informea_browse_all_block'] = $informea_browse_all_block;

  $variant = variable_get('select2_compression_type', 'minified');
  libraries_load('select2', $variant);

  $breadcrumbs = array();
  // Add the autocomplete library.
  drupal_add_library('system', 'ui.autocomplete');
  menu_secondary_local_tasks();
  if (current_path() == 'goals') {
    drupal_add_js(drupal_get_path('theme', 'informea_theme') . '/js/goals.js');
  }
  if (arg(0) == 'taxonomy') {
    // Unset related terms in taxonomy page.
    unset($variables['page']['content']['system_main']['nodes']);
    unset($variables['page']['content']['system_main']['pager']);
    unset($variables['page']['content']['system_main']['no_content']);
  }

  // Handle language prefix in urls.
  global $language;
  $path = request_path();
  $path_no_language_prefix = language_url_split_prefix($path, array($language))[1];

  switch ($path_no_language_prefix) {
    case 'countries':
      $breadcrumbs[] = t('Parties');
      break;

    case 'terms':
      $breadcrumbs[] = t('Glossary');
      break;

    case 'events':
      $breadcrumbs[] = t('Events');
      break;

    case 'events/past':
      $breadcrumbs[] = t('Past events');
      break;

    case 'news':
      $breadcrumbs[] = t('News');
      break;

    case 'about':
      $breadcrumbs[] = t('About InforMEA');
      break;

    case 'about/api':
      $breadcrumbs[] = t('API documentation');
      break;

    case 'search':
      $variables['page']['sidebar_first']['#no_well'] = TRUE;
      break;
  }

  if (isset($variables['node'])) {
    $node = $variables['node'];
    switch ($node->type) {
      case 'event_calendar':
        $variables['page']['above_content'] = array(
          '#type' => 'container',
          '#attributes' => array(
            'id' => array('meeting-date-title'),
          ),
        );
        if (!empty($node->event_calendar_date)) {
          $variables['title_prefix'] = date('Y', strtotime($node->event_calendar_date[LANGUAGE_NONE][0]['value']));
          $variables['page']['above_content']['date'] = array(
            '#type' => 'item',
            '#title' => t('Date'),
            '#markup' => date('d-m-Y', strtotime($node->event_calendar_date[LANGUAGE_NONE][0]['value'])),
            '#prefix' => '<div class="field-name-field-sorting-date"><div class="container">',
            '#suffix' => '</div></div>',
          );
        };
        $variables['classes_array'][] = 'meeting-page';
        if (!empty($node->field_treaty[LANGUAGE_NONE][0]['target_id'])) {
          $treaty_node = node_load($node->field_treaty[LANGUAGE_NONE][0]['target_id']);
          $variables['page']['above_content']['tabs'] = _decision_get_treaty_links($treaty_node, array('un-treaty-collection-link'));
          $variables['page']['above_content']['tabs']['#prefix'] = '<div class="decision-treaty-tabs"><div class="container">';
          $variables['page']['above_content']['tabs']['#suffix'] = '</div></div>';
        }
        break;

      case 'country':
        //See #285 hide party block on country contacts hub page.
        /*if (!empty($variables['page']['sidebar_first'])) {
          foreach ($variables['page']['sidebar_first'] as $key => $value) {
            if ($value['#settings']->facet == 'field_country') {
              $remove = $key;
              break;
            }
          }
          if (!empty($remove)) {
            unset($variables['page']['sidebar_first'][$remove]);
          }
        }*/
        $countries = country_get_countries_select_options();
        $countries1 = $countries;
        // array_unshift($countries1, t('View another party'));
        $variables['content_column_class'] = ' class="col-sm-9"';
        $variables['countries'] = $countries;

        $variables['select-switch-countries'] = array(
          '#attributes' => array('class' => array('form-control', 'node-switcher', 'country-switcher', 'use-select-2'), 'id'=> 'country-switcher'),
          '#options' => $countries1,
          '#type' => 'select',
          '#value' => country_get_url_by_iso2($node->field_country_iso2[LANGUAGE_NONE][0]['value'])
        );
        $variables['page']['sidebar_first']['#no_well'] = TRUE;
        array_unshift($variables['page']['sidebar_first'], menu_secondary_local_tasks());
        break;

      case 'treaty':
/*        // see #285 hide treaty block on treaty contacts hub page
        if(!empty($variables['page']['sidebar_first'])) {
          foreach ($variables['page']['sidebar_first'] as $key => $value) {
            if(isset($value['#settings']) && $value['#settings']->facet == 'field_treaty') {
              $remove = $key;
              break;
            }
          }
          if(!empty($remove)) {
            unset($variables['page']['sidebar_first'][$remove]);
          }
        }*/
        if ($local_tasks = menu_secondary_local_tasks()) {
          array_unshift($variables['page']['sidebar_first'], menu_secondary_local_tasks());
        }
        $variables['content_column_class'] = !empty($local_tasks) ? ' class="col-sm-9"' : ' class="col-sm-12"';
        $treaties = treaty_get_treaties_as_select_options();
        $variables['treaties'] = $treaties;
        $treaties1 = $treaties;
        $menu_object = menu_get_object();
        if (isset($node->field_odata_identifier[LANGUAGE_NONE][0]['value'])) {
          $selected_treaty = treaty_get_url_by_odata_name($node->field_odata_identifier[LANGUAGE_NONE][0]['value']);
          if (!empty($menu_object->context)) {
            $selected_treaty .= '/' . $menu_object->context;
          }
        }

        $variables['select-switch-treaties'] = array(
          '#attributes' => array(
            'class' => array(
              'form-control',
              'node-switcher',
              'treaty-switcher',
              'use-select-2',
            ),
            'id' => 'treaty-switcher',
          ),
          '#options' => $treaties1,
          '#type' => 'select',
          '#value' => $selected_treaty,
        );
        $variables['page']['sidebar_first']['#no_well'] = TRUE;
        break;

      case 'decision':
        if (!empty($node->field_decision_number[LANGUAGE_NONE][0]['value'])) {
          $variables['classes_array'][] = 'decision-page';
          $variables['title_prefix'] = $node->field_decision_number[LANGUAGE_NONE][0]['value'];
          $variables['page']['above_content'] = array(
            '#type' => 'container',
            '#attributes' => array(
              'id' => array('decision-date-title'),
            ),
            '#attached' => array(
              'js' => array(
                drupal_get_path('theme', 'informea_theme') . '/js/decision.js',
              ),
            ),
          );
          if (!empty($node->field_sorting_date[LANGUAGE_NONE][0]['value'])) {
            $decision_date = date('d-m-Y', strtotime($node->field_sorting_date[LANGUAGE_NONE][0]['value']));
            $variables['page']['above_content']['date'] = array(
              '#type' => 'item',
              '#title' => t('Date'),
              '#markup' => $decision_date,
              '#prefix' => '<div class="field-name-field-sorting-date"><div class="container">',
              '#suffix' => '</div></div>',
            );
          }
          else {
            $variables['page']['above_content']['date'] = array(
              '#type' => 'item',
              '#markup' => '&nbsp;',
              '#prefix' => '<div class="field-name-field-sorting-date empty"><div class="container">',
              '#suffix' => '</div></div>',
            );
          }
          $variables['page']['above_content']['title'] = array(
            '#type' => 'item',
            '#title' => t('Full title'),
            '#markup' => $node->title,
            '#prefix' => '<div class="field-name-title-field"><div class="container">',
            '#suffix' => '</div></div>',
          );
          if (!empty($node->field_treaty[LANGUAGE_NONE][0]['target_id'])) {
            $treaty_node = node_load($node->field_treaty[LANGUAGE_NONE][0]['target_id']);
            $variables['page']['above_content']['tabs'] = _decision_get_treaty_links($treaty_node, array('un-treaty-collection-link'));
            $variables['page']['above_content']['tabs']['#prefix'] = '<div class="decision-treaty-tabs"><div class="container">';
            $variables['page']['above_content']['tabs']['#suffix'] = '</div></div>';
          }
        }
        break;
    }
  }
  if (isset($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }

  if ($variables['is_front']) {
    // Adds the front page JavaScript file to the page.
    drupal_add_js(drupal_get_path('theme', 'informea_theme') . '/js/front.js');
    // Country block from the front page.
    // Replace the <select> at this stage to avoid
    // replacement issue coming from i18n_block_translate_block.
    if (!empty($variables['page']['front_page_content']['block_10'])) {
      $block_data =& $variables['page']['front_page_content']['block_10'];
      $countries = country_get_countries_select_options();
      array_unshift($countries, t('Select a party…'));
      $html = array(
        '#attributes' => array(
          'class' => array(
            'form-control',
            'node-switcher',
            'country-switcher',
          ),
        ),
        '#options' => $countries,
        '#type' => 'select',
      );
      $block_data['#markup'] = preg_replace('/<select.*><\/select>/i', drupal_render($html), $block_data['#markup']);
    }
  }

  if (!empty($breadcrumbs)) {
    informea_theme_set_page_breadcrumb($breadcrumbs);
  }

  $view = views_get_page_view();
  if (!empty($view) && $view->name == 'search' && $view->current_display == 'search_documents') {
    $node = node_load(arg(1));
    $variables['node'] = $node;
    $variables['theme_hook_suggestions'][] = 'page__node__treaty';
    drupal_set_title($node->title);

    $variables['content_column_class'] = ' class="col-sm-9"';
    $treaties = treaty_get_treaties_as_select_options();
    $variables['treaties'] = $treaties;
    $treaties1 = $treaties;
    $menu_object = menu_get_object();
    $selected_treaty = treaty_get_url_by_odata_name($node->field_odata_identifier[LANGUAGE_NONE][0]['value']);
    if (!empty($menu_object->context)) {
      $selected_treaty .= '/' . $menu_object->context;
    }

    $variables['select-switch-treaties'] = array(
      '#attributes' => array(
        'class' => array(
          'form-control',
          'node-switcher',
          'treaty-switcher',
          'use-select-2',
        ),
        'id' => 'treaty-switcher',
      ),
      '#options' => $treaties1,
      '#type' => 'select',
      '#value' => $selected_treaty,
    );
  }
}

function informea_theme_preprocess_region(&$variables) {
  // Removes bootstrap well classes from region.
  if (!empty($variables['elements']['#no_well']) && $variables['elements']['#no_well'] == TRUE) {
    $classes_to_remove = ['well', 'well well-sm', 'well well-lg'];
    foreach ($classes_to_remove as $class) {
      if (($key = array_search($class, $variables['classes_array'])) !== FALSE) {
        unset($variables['classes_array'][$key]);
      }
    }
  }
}

function informea_theme_theme() {
  return array(
    'informea_bootstrap_collapse' => array(
      'render element' => 'element',
      'template' => 'templates/informea-bootstrap-collapse',
      'variables' => array('elements' => array(), 'id' => 0, 'no-data-parent' => FALSE, 'no-panel-body' => FALSE),
    ),
    'informea_bootstrap_tabs' => array(
      'render element' => 'element',
      'template' => 'templates/informea-bootstrap-tabs',
      'variables' => array('id' => 0, 'elements' => array(), 'active' => FALSE, 'header-attributes' => array()),
      'path' => drupal_get_path('theme', 'informea_theme'),
    ),
    'informea_bootstrap_carousel' => array(
      'render element' => 'element',
      'template' => 'templates/informea-bootstrap-carousel',
      'variables' => array('slides' => array(), 'attributes' => array()),
      'path' => drupal_get_path('theme', 'informea_theme'),
    ),
    'informea_search_categories_tabs_wrapper' => array(
      'render element' => 'element',
    ),
    'informea_search_form_wrapper' => array(
      'render element' => 'element',
    ),
    'bootstrap_btn_dropdown' => array(
      'variables' => array(
        'links' => array(),
        'attributes' => array(),
        'type' => NULL,
      ),
    ),
    'informea_treaties_menu_block' => array(
      'render element' => 'element',
      'template' => 'templates/informea-treaties-menu-block',
      'variables' => array(
        'treaties' => array(),
        'topics' => array(),
        'regions' => array(),
        'global_region_tid' => 0,
      ),
      'path' => drupal_get_path('theme', 'informea_theme'),
    ),
    'informea_browse_all_menu_block' => array(
      'render element' => 'element',
      'template' => 'templates/informea-browse-all-menu-block',
      'variables' => array(
        'topics' => array(),
        'regions' => array(),
        'global_region_url' => 0,
      ),
      'path' => drupal_get_path('theme', 'informea_theme'),
    ),
  );
}

/**
 * Implements theme_bootstrap_btn_dropdown().
 */
function informea_theme_bootstrap_btn_dropdown($variables) {
  $path = drupal_get_path('theme', 'bootstrap');
  require_once $path . '/theme/bootstrap/bootstrap-btn-dropdown.func.php';
  return theme_bootstrap_btn_dropdown($variables);
}


function informea_theme_meeting_type($term) {
  if ($term) {
    switch ($term->name_original) {
      case 'cop':
        return 'COP';
      default:
        return ucfirst($term->name);
    }
  }
  return '';
}

function informea_theme_treaty_logo($node, $style = 'logo-large') {
  $w = entity_metadata_wrapper('node', $node->nid);
  if ($logo = $w->field_logo->value()) {
    return theme('image_style', array('style_name' => $style, 'path' => $logo['uri']));
  }
  return NULL;
}

function informea_theme_country_flag($node, $style = 'logo-large') {
  $w = entity_metadata_wrapper('node', $node->nid);
  if($code = $w->field_country_iso2->value()) {
    $code = strtolower($code);
    global $base_url;
    $img_path = $base_url . '/' . drupal_get_path('theme', 'informea_theme') . '/img/flags/flag-' . $code . '.png';

    return theme('image', array('path' => $img_path, 'attributes' => array('class' => array('flag', 'flag-large'))));
  }
  return NULL;
}

function informea_theme_treaty_logo_link($node) {
  if ($img = informea_theme_treaty_logo($node)) {
    $w = entity_metadata_wrapper('node', $node->nid);
    if ($url = $w->field_treaty_website_url->value()) {
      return l($img, $url['url'], array('absolute' => TRUE, 'html' => TRUE, 'attributes' => array('target' => '_blank', 'class' => array('treaty-logo-large'))));
    }
    else {
      return $img;
    }
  }
  return NULL;
};

function informea_theme_slider() {
  $max_slides_count = variable_get('informea_max_slides_count', 7);
  $slides = array();
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'entityqueue_subqueue')
    ->entityCondition('bundle', 'front_page_slider');
  $result = $query->execute();
  if (!empty($result['entityqueue_subqueue'])) {
    drupal_add_js('https://www.youtube.com/iframe_api');
    $subqueues = entity_load('entityqueue_subqueue', array_keys($result['entityqueue_subqueue']));
    foreach ($subqueues as $subqueue) {
      $wrapper = entity_metadata_wrapper('entityqueue_subqueue', $subqueue);
      $key = $wrapper->getIdentifier();
      $nodes = $wrapper->eq_node->value();
      foreach ($nodes as $node) {
        $w = entity_metadata_wrapper('node', $node);
        switch ($w->getBundle()) {
          case 'feed_item':
            $url = $w->field_url->value();
            $url = empty($url) ? 'node/' . $w->getIdentifier() : $url['url'];

            break;

          default:
            $url = 'node/' . $w->getIdentifier();

            break;
        }
        $image = NULL;
        try {
          $video = field_view_field('node', $node, 'field_video', 'full');
          $image = drupal_render($video);
        }
        catch(Exception $e) {}
        if (empty($image)) {
          $alt = !empty($w->field_image->value()['alt']) ? $w->field_image->value()['alt'] : $w->label();
          $image = theme('image_style', array(
            'path' => $w->field_image->value()['uri'],
            'style_name' => 'front_page_slider',
            'alt' => $alt,
          ));
        }
        $slide = array(
          'image' => l($image, $url, array('absolute' => TRUE, 'html' => TRUE)),
          'link' => l($w->label(), $url, array('absolute' => TRUE, 'attributes' => array('target' => '_blank')))
        );

        $slides[] = $slide;
      }
    }
  }

  $length = $max_slides_count - count($slides);

  if ($length <= 0) {
    return theme(
      'informea_bootstrap_carousel',
      array(
        'slides' => $slides,
        'attributes' => array(
          'id' => 'col-carousel',
        )
      )
    );
  }

  $images = array(
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/Biological-Diversity.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/african-bush-elephants.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/botanical.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/coral-reef.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/ferns.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/green-crowned.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/guillemot-uria-aalge.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/lingonberries-vaccinium-vitus.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/mu-ko-lanta-marine.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/palmoil-plantage.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/parrothfish-scaridae.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/rottumerplaat-dutch-wadden-sea.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/slide-coral-reef.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'biological-diversity/thompsons-gazelles.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'chemicals-waste/Chemicals-and-Waste-Management.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'chemicals-waste/icebergs.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'chemicals-waste/nickel-smelters.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'climate-change/Climate-Atmosphere-and-Deserts.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'climate-change/icebergs.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'drylands/drylands.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'financing-trade/green-economy.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'financing-trade/international.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'international-cooperation/international.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/african-bush-elephants.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/ferns.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/parrothfish-scaridae.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/rottumerplaat-dutch-wadden-sea.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/slide-bird.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/slide-jaguar.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'species/species.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'wetlands-national-heritage-sites/mangroves.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'wetlands-national-heritage-sites/pechora-delta.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'wetlands-national-heritage-sites/swamp.jpg',
    '/sites/all/themes/informea.theme/img/syndication/' . 'wetlands-national-heritage-sites/wetlands.jpg',
  );
  // Select one upcoming event from each MEA
  /*
   SELECT a.* FROM node a
      INNER JOIN field_data_event_calendar_date b ON a.nid = b.entity_id
      INNER JOIN field_data_field_treaty c ON a.nid = c.entity_id
        WHERE b.event_calendar_date_value >= NOW()
      GROUP BY c.field_treaty_target_id
   */
  $q = db_select('node', 'a')->fields('a', array('nid'))->fields('c', array('field_treaty_target_id'));
  $q->innerJoin('field_data_event_calendar_date', 'b', 'a.nid = b.entity_id');
  $q->innerJoin('field_data_field_treaty', 'c', 'a.nid = c.entity_id');
  $q->where('b.event_calendar_date_value >= NOW()');
  $q->range(0, $length);
  $q->groupBy('c.field_treaty_target_id');
  if ($rows = $q->execute()->fetchAll()) {
    foreach($rows as $ob) {
      $w = entity_metadata_wrapper('node', $ob->nid);
      $tw = entity_metadata_wrapper('node', $ob->field_treaty_target_id);
      $logo = $tw->field_logo->value();
      $url = $w->field_url->value();
      $url = empty($url) ? $url = url('node/' . $ob->nid) : $url = $url['url'];
      $start = $w->event_calendar_date->value();
      $start = format_date(strtotime($start['value']), 'short');
      $image = theme('image', array('path' => $images[array_rand($images)], 'alt' => $w->label()));
      $slide = array(
        'image' => l($image, $url, array('absolute' => TRUE, 'html' => TRUE)),
        'logo' => theme('image', array('path' => $logo['uri'], 'alt' => $tw->label())),
        'date' => $start,
        'link' => l($w->label(), $url, array('absolute' => TRUE, 'attributes' => array('target' => '_blank'))),
      );

      $slides[] = $slide;
    }
  }

  return theme(
    'informea_bootstrap_carousel',
    array(
      'slides' => $slides,
      'attributes' => array(
        'id' => 'col-carousel',
      )
    )
  );
}
/**
 * Implements hook_form_FORM_ID_alter().
 */
//TODO - update this according to Search view displays.
function informea_theme_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'views_exposed_form') {
    if (isset($form['submit'])) {
      $form['submit']['#attributes']['class'][] = 'btn-primary';
      $form['submit']['#value'] = t('Filter');
      $exposed_form_id = $form['#id'];
      if($exposed_form_id == 'views-exposed-form-contacts-hub-country-contacts-hub' || $exposed_form_id == 'views-exposed-form-contacts-hub-treaty-contacts-hub') {
        $form['submit']['#value'] = '<i class="icon glyphicon glyphicon-search" aria-hidden="true"></i>' . '<span class="sr-only">' . t('Filter') . '</span>';
      }
    }

    if (isset($form['reset'])) {
      $form['reset']['#attributes']['class'][] = 'btn-link';
    }

    // Events
    if ($form['#id'] == 'views-exposed-form-events-page') {
      $form['#prefix'] = '<h3 class="lead">' . t('Meeting finder') . '</h3>';
      $form['field_treaty_target_id']['#suffix'] = '<p class="help-block text-right">' . l(t('Select all'), NULL, array('attributes' => array('data-toggle' => 'select'), 'external' => TRUE, 'fragment' => 'edit-field-treaty-target-id')) . '</p>';
      $form['field_event_type_tid']['#suffix'] = '<p class="help-block text-right">' . l(t('Select all'), NULL, array('attributes' => array('data-toggle' => 'select'), 'external' => TRUE, 'fragment' => 'edit-field-event-type-tid')) . '</p>';
    }

    // News
    if (isset($form['search_api_views_fulltext'])) {
      $form['search_api_views_fulltext']['#attributes']['placeholder'] = t('Type some text here…');
    }

    if (isset($form['field_mea_topic'])) {
      $form['field_mea_topic']['#options']['All'] = t('-- All topics --');
    }
  }
}

function informea_theme_informea_search_categories_tabs_wrapper($variables){
  $output = '';
  if( isset($variables['element']['#category-options']) ){
    $output = '<div class="informea-search-horizontal-tabs"><h4>' . t('Browse by Category:') . '</h4><div class="informea-switcher_wrapper">
          <nav id="informeaSwitch" class="informea-switcher">
            <ul id="informeaSwitchContents" class="informea-switcher_contents">';
    $li_opened = FALSE;
    $ul_opened = FALSE;
    $options = $variables['element']['#category-options'];
    foreach ($options as $k => $category) {
      if (!empty($category['is_group_label'])) {
        if ($li_opened) {
          if ($ul_opened) {
            $output .= '</ul>';
            $ul_opened = FALSE;
          }
          $output .= '</li>';
          $li_opened = FALSE;
        }
        $output .= sprintf('<li class="informea-switcher_link js-informea-switcher_link dropdown %s%s">', $category['key'] . '-options', ((isset($category['active']) && $category['active'] === TRUE) ? ' active open' : ''));
        $next_index = $k + 1;
        if (isset($options[$next_index])) {
          if (!empty($options[$next_index]['is_group_label'])) {
            $output .= sprintf('<a href="%s">%s</a>', informea_search_categories_build_link($category['query']), check_plain($category['label']));
          }
          else {
            $output .= sprintf('<a href="%s">%s</a>', informea_search_categories_build_link($category['query']), check_plain($category['label']));
          }
        }
        else {
          $output .= sprintf('<a href="%s">%s</a>', informea_search_categories_build_link($category['query']), check_plain($category['label']));
        }
        $li_opened = TRUE;
      }
      else {
        if ($li_opened && !$ul_opened) {
          $output .= '<ul class="dropdown-menu">';
          $ul_opened = TRUE;
        }
        $output .= sprintf('<li class="%s"><a href="%s">%s</a></li>', ((isset($category['active']) && $category['active'] === TRUE) ? ' active' : ''), informea_search_categories_build_link($category['query']), check_plain($category['label']));
      }
    }
    if ($li_opened) {
      if ($ul_opened) {
        $output .= '</ul>';
        $ul_opened = FALSE;
      }
      $output .= '</li>';
      $li_opened = FALSE;
    }
    $output .= '</ul></nav>
        <button id="informeaSwitchAdvancerLeft" class="informea-switcher_advancer informea-switcher_advancer--left" type="button">
          <svg class="informea-switcher_advancer-icon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 551 1024"><path d="M445.44 38.183L-2.53 512l447.97 473.817 85.857-81.173-409.6-433.23v81.172l409.6-433.23L445.44 38.18z"/></svg>
        </button>
        <button id="informeaSwitchAdvancerRight" class="informea-switcher_advancer informea-switcher_advancer--right" type="button">
          <svg class="informea-switcher_advancer-icon" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 551 1024"><path d="M105.56 985.817L553.53 512 105.56 38.183l-85.857 81.173 409.6 433.23v-81.172l-409.6 433.23 85.856 81.174z"/></svg>
        </button>
      </div>';
    $output .= '</div>';
  }
  return $output;
}


/**
 * Theme function implementation for bootstrap_search_form_wrapper.
 */
function informea_theme_informea_search_form_wrapper($variables) {
  $category_select = '';
  if (!empty($variables['element']['#category-options'])) {
    $category_select = '<select id="edit-search-category" name="category" class="use-select-2">';
    $optgroup_open = false;

    foreach($variables['element']['#category-options'] as $k => $v) {
      if(!empty($v['is_group_label'])) {
        // if one optgroup is already open, close it
        if($optgroup_open) {
          $category_select .= sprintf('</optgroup>');
          $optgroup_open = false;
        }
        // open new optgroup
        $category_select .= sprintf('<optgroup label="%s">', check_plain($v['label']));
        $optgroup_open = true;
      }
      $category_select .= sprintf('<option value="%s" data-optgroup="%s" %s>%s</option>',
        check_plain($k),
        !empty($v['is_group_label']) ? check_plain($v['is_group_label']) : false,
        (isset($v['selected']) && $v['selected'] === true) ? 'selected' : '',

          (isset($v['label']) ? check_plain($v['label']) : ''));
    }
    if($optgroup_open) {
      $category_select .= sprintf('</optgroup>');
      $optgroup_open = false;
    }
    $category_select .= '</select>';
  }

  $output = '<div class="input-group">';
  $output .= $variables['element']['#children'];

  if (!empty($category_select)) {
    $output .= '<span class="edit-search-in">' . t('in:') . '</span>';
    $output .= $category_select;
  }
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-default">';
  $output .= _bootstrap_icon('search');
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div>';
  return $output;
}

function informea_theme_links__locale_block(&$variables) {
  global $user, $language;
  $variables1 = $variables;
  $variables1['attributes']['class'][] = 'dropdown-menu';
  $variables1['attributes']['class'][] = 'dropdown-menu-right';
  $variables1['attributes']['aria-labelledby'] = 'dLanguage';

  $output = '<li class="dropdown">';
  $output .= '<a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false"></a>';
  $output .= '<a class="menu-title">';
  $output .= $language->language;
  $output .= ' <span class="caret"></span></a>';
  $output .= theme_links($variables1);
  $output .= '</li>';

  return $output;
}

/**
 * Preprocesses variables for block template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function informea_theme_preprocess_block(&$variables) {
  if ($variables['block']->module == 'treaty' && $variables['block']->delta == 'treaty_global') {
    $variables['title_attributes_array']['class'][] = 'lead';
    $variables['title_attributes_array']['class'][] = 'text-center';
  }
}

function informea_theme_preprocess_views_view_table(&$variables) {
  if ($variables['view']->name == 'treaty_listing_page') {
    $variables['attributes_array']['id'] = 'table-treaties';
    $variables['classes_array'][] = 'table-bordered';

    foreach ($variables['view']->result as $key => $result) {
      if (isset($result->parent_treaty)) {
        $variables['row_classes'][$key][] = 'active';
      }
    }
  }
}

function informea_theme_preprocess_views_view_fields(&$vars) {
  $view = $vars['view'];
  if (in_array($view->name, array('informea_search_publications', 'taxonomy_term_related_publications'))) {
    // LOGO - use ECOLEX if data comes from ECOLEX
    $source = @$vars['row']->_entity_properties['field_data_source'][0];
    if (!empty($source) && $source == DATA_SOURCE_ECOLEX) {
      $vars['fields']['field_logo']->content = '<span><img class="img-thumbnail" src="/sites/all/themes/informea.theme/img/ecolex-logo.png"></span>';
    }
  }
}

function informea_theme_views_pre_render(&$view) {
  if ($view->name == 'treaty_listing_page' && $view->current_display == 'page') {
    foreach($view->result as &$row) {
      $wrapper = entity_metadata_wrapper('node', $row->_field_data['nid']['entity']);

      if ($parent_treaty = $wrapper->field_parent_treaty->value()) {
        $row->parent_treaty = $parent_treaty->nid;
      }

      $row->total_protocols = treaty_count_child_protocols($row->nid);
    }
  }
}

/**
 * Implements hook_preporcess_image_style().
 */
function informea_theme_preprocess_image_style(&$variables) {
  $variables['attributes']['class'][] = 'img-responsive';
  // Add default width and height attr.
  if (empty($variables['width']) && empty($variables['height'])) {
    $image_info = image_get_info($variables['path']);
    if (!empty($image_info)) {
      $variables['width'] = $image_info['width'];
      $variables['height'] = $image_info['height'];
    }
  }
  // Add an alt attribute.
  if (empty($variables['alt'])) {
    $variables['alt'] = drupal_basename($variables['path']);
  }
}


function informea_theme_set_page_breadcrumb($breadcrumbs = array()) {
  array_unshift($breadcrumbs, l(t('Home'), '<front>'));
  drupal_set_breadcrumb($breadcrumbs);
}

function informea_theme_preprocess_node(&$vars) {
  if ($view_mode = $vars['view_mode']) {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $view_mode;
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__' . $view_mode;
    $vars['theme_hook_suggestions'][] = 'node__view_mode_' . $view_mode;
    $vars['classes_array'][] = 'node--view-mode-' . $view_mode;
  }
}

/**
 * Draw the flexible layout.
 */
function informea_theme_panels_flexible($vars) {
  $css_id = $vars['css_id'];
  $content = $vars['content'];
  $settings = $vars['settings'];
  $display = $vars['display'];
  $layout = $vars['layout'];
  $handler = $vars['renderer'];

  panels_flexible_convert_settings($settings, $layout);

  $renderer = panels_flexible_create_renderer(FALSE, $css_id, $content, $settings, $display, $layout, $handler);

  $output = "<div class=\"panel-flexible " . $renderer->base['canvas'] . " clearfix\" $renderer->id_str>\n";
  $output .= "<div class=\"panel-flexible-inside " . $renderer->base['canvas'] . "-inside\">\n";

  $output .= panels_flexible_render_items($renderer, $settings['items']['canvas']['children'], $renderer->base['canvas']);

  // Wrap the whole thing up nice and snug
  $output .= "</div>\n</div>\n";

  return $output;
}

function informea_theme_views_mini_pager($vars) {
  global $pager_page_array, $pager_total;

  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];
  $pager_current = $pager_page_array[$element] + 1;
  $pager_max = $pager_total[$element];

  if ($pager_total[$element] > 1) {
    $li_previous = theme('pager_previous', array(
      'element' => $element,
      'interval' => 1,
      'parameters' => $parameters,
      'text' => (isset($tags[1]) ? $tags[1] : t('‹‹'))
    ));

    $li_next = theme('pager_next', array(
      'element' => $element,
      'interval' => 1,
      'parameters' => $parameters,
      'text' => (isset($tags[3]) ? $tags[3] : t('››'))
    ));

    $items[] = array(
      'class' => array('pager-previous'),
      'data' => $li_previous
    );

    $items[] = array(
      'class' => array('pager-current'),
      'data' => t('@current of @max', array('@current' => $pager_current, '@max' => $pager_max))
    );

    $items[] = array(
      'class' => array('pager-next'),
      'data' => $li_next
    );

    return theme('item_list', array(
      'attributes' => array('class' => array('pager')),
      'items' => $items,
      'title' => NULL,
      'type' => 'ul'
    ));
  }
}

function informea_theme_preprocess_field(&$variables, $hook) {
  switch($variables['element']['#field_name']) {
    case 'field_term_related_uri':
      foreach ($variables['items'] as $key => &$item) {
        $related_term = thesaurus_term_load_by_uri($item['#element']['url'], 'thesaurus_informea');
        if (!empty($related_term)) {
          $name_field = field_get_items('taxonomy_term', $related_term, 'name_field');
          if (!empty($name_field[0]['value'])) {
            // Set the title of the link as the term name instead of displaying the full url
            $item['#element']['title'] = $name_field[0]['value'];
          }
        }
      }
      break;
    case 'field_mea_topic':
      // Add custom CSS classes to topics field elements.
      if(isset($variables['items'][0]['#items'])){
        foreach($variables['items'][0]['#items'] as $key=>$item){
          if(isset($variables['element']['#items'][$key]['tid'])){
             $variables['items'][0]['#items'][$key] = array(
              'data' => $item,
              'class' => array('topic-' . $variables['element']['#items'][$key]['tid']),
            );
          }
        }
      }
      break;
    case 'treaty_links':
       $nid =  $variables['element']['#object']->nid;
       $variables['items'][0]['#markup'] = treaty_links($nid);
       break;
    case 'content_type':
        $content_type_machine_name = $variables['element']['#object']->type;
        switch($content_type_machine_name) {
          case 'event_calendar':
            $content_type_human_readable = t('Event');
            break;
          case 'feed_item':
            $content_type_human_readable = t('News');
            break;
        default:
          $content_type_human_readable = t(ucwords(str_replace('_', ' ', $content_type_machine_name)));
        }
        $content_type = [
          '#theme' => 'item_list',
          '#attributes' => ['class'  => ['field-content-type'],],
          '#items' => [0 => [
              'data' => $content_type_human_readable,
          ],]
        ];
        $variables['items'][0]['#markup'] = drupal_render($content_type);
        break;

    case 'country_flag':
      if (!empty($variables['element']['#object']->field_country_iso2[LANGUAGE_NONE][0]['value'])) {
        $flag = [
          '#theme' => 'image',
          '#path' => drupal_get_path('theme', 'informea_theme') . '/img/flags/flag-' . strtolower($variables['element']['#object']->field_country_iso2[LANGUAGE_NONE][0]['value']) . '.png',
          '#attributes' => ['class' => ['flag']],
          '#alt' => $variables['element']['#object']->title
        ];
        $variables['items'][0]['#markup'] = drupal_render($flag);
      }
     break;
      case 'post_date':
          $variables['items'][0]['value'] = $variables['items'][0]['#markup'];
          $variables['items'][0]['#markup'] = theme_informea_date($variables);
          break;
    case 'field_files':
      if($variables['element']['#view_mode'] == 'search_item') {
        $variables['label'] = t('Download:');
        foreach ($variables['element']['#items'] as $key => $item) {
          $variables['items'][$key]['#prefix'] = '[';
          $variables['items'][$key]['#suffix'] = ']';
        }
      }
      break;
    case 'field_informea_tags':
      $variables['label'] = t('Glossary term(s)');
      break;
    case 'search_excerpt':
      if (!empty($variables['element']['#object']->search_api_excerpt)) {
        $variables['items'][0]['#markup'] = $variables['element']['#object']->search_api_excerpt;
      }
      else {
        $variables['classes_array'][] = 'hidden';
      }
      break;
  }
}

function informea_theme_facetapi_link_inactive($variables) {
  if ($variables['count'] == 'hidden') {
    unset($variables['count']);
  }
  return theme_facetapi_link_inactive($variables);
}

function informea_theme_treaties_menu_block() {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'treaty')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldCondition('field_data_source', 'tid', '815')
    ->fieldCondition('field_show_in_main_menu', 'value', TRUE);
  $results = $query->execute();

  $treaties = [];
  $topics_list = [];
  $regions_list = [];

  $global_region_tid = 1118;
  $global_region = taxonomy_term_load($global_region_tid);

  if (!empty($results['node'])) {
    foreach ($results['node'] as $result) {
      $node = node_load($result->nid);
      $treaty = [
        'title' => $node->title,
        'logo_uri' => !empty($node->field_logo['en'][0]['uri']) ? $node->field_logo['en'][0]['uri'] : '',
        'url' => '/node/' . $result->nid,
        'is_global' => FALSE,
        'regions' => [],
        'topics' => [],
      ];

      if (!empty($node->field_region['und'])) {
        foreach ($node->field_region['und'] as $region) {
          $term = taxonomy_term_load($region['tid']);
          if (!empty($term->field_published[LANGUAGE_NONE][0]['value'])) {
            $regions_list[$term->tid] = $term->name;
            if ($term->tid == $global_region_tid) {
              $treaty['is_global'] = TRUE;
            }
            $treaty['regions'][$term->tid] = $term->name;
          }
        }
      }

      if (!empty($node->field_mea_topic['und'])) {
        foreach ($node->field_mea_topic['und'] as $topic) {
          $term = taxonomy_term_load($topic['tid']);
          if (!empty($term->field_published[LANGUAGE_NONE][0]['value'])) {
            $topics_list[$term->tid] = $term->name;
            $treaty['topics'][$term->tid] = $term->name;
          }
        }
      }

      foreach ($treaty['regions'] as $tid => $name) {
        $treaties[$tid][$node->nid] = $treaty;
      }
      foreach ($treaty['topics'] as $tid => $name) {
        $segment = $treaty['is_global'] ? 'global' : 'regional';
        $treaties[$tid][$segment][$node->nid] = $treaty;
      }
    }
  }

  uasort($regions_list, function ($a, $b) use ($global_region) {
    if ($a == $global_region->name) {
      return 1;
    }
    elseif ($b == $global_region->name) {
      return -1;
    }
    return ($a < $b) ? -1 : 1;
  });
  asort($topics_list);

  return theme(
    'informea_treaties_menu_block',
    array(
      'regions' => $regions_list,
      'topics' => $topics_list,
      'treaties' => $treaties,
      'global_region_tid' => $global_region_tid,
    )
  );

}

function informea_theme_field($variables) {
  $output = '';
  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    // Removed unnecessary colon
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $has_multiple_items = sizeof($variables['items']) >= 2;
  if($has_multiple_items) {
    $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  }

  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ?  'even' : 'odd');
    if(!$has_multiple_items) {
      if(is_array($variables['content_attributes']) && is_array($variables['item_attributes'][$delta])) {
        $variables['item_attributes'][$delta] = drupal_array_merge_deep($variables['content_attributes'], $variables['item_attributes'][$delta]);
      }
    }
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta];
    $output .= '>' . drupal_render($item) . '</div>';
  }

  if($has_multiple_items) {
    $output .= '</div>';
  }

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';
  return $output;
}

/**
 * Overrides theme_pager().
 */
function informea_theme_pager($variables) {
  $output = "";
  $items = array();
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];

  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;
  // First is the first page listed by this pager piece (re quantity).
  $pager_first = $pager_current - $pager_middle + 1;
  // Last is the last page listed by this pager piece (re quantity).
  $pager_last = $pager_current + $quantity - $pager_middle;
  // Max is the maximum page number.
  $pager_max = $pager_total[$element];

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }

  // End of generation loop preparation.
  // @todo add theme setting for this.
  // $li_first = theme('pager_first', array(
  // 'text' => (isset($tags[0]) ? $tags[0] : t('first')),
  // 'element' => $element,
  // 'parameters' => $parameters,
  // ));
  $li_previous = theme('pager_previous', array(
    'text' => (isset($tags[1]) ? $tags[1] : t('previous')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  $li_next = theme('pager_next', array(
    'text' => (isset($tags[3]) ? $tags[3] : t('next')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  // @todo add theme setting for this.
  // $li_last = theme('pager_last', array(
  // 'text' => (isset($tags[4]) ? $tags[4] : t('last')),
  // 'element' => $element,
  // 'parameters' => $parameters,
  // ));
  if ($pager_total[$element] > 1) {
    // @todo add theme setting for this.
    // if ($li_first) {
    // $items[] = array(
    // 'class' => array('pager-first'),
    // 'data' => $li_first,
    // );
    // }
    if ($li_previous) {
      $items[] = array(
        'class' => array('prev'),
        'data' => $li_previous,
      );
    }
    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis', 'disabled'),
          'data' => '<span>…</span>',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            // 'class' => array('pager-item'),
            'data' => theme('pager_previous', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($pager_current - $i),
              'parameters' => $parameters,
            )),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            // Add the active class.
            'class' => array('active'),
            'data' => l($i, '#', array('fragment' => '', 'external' => TRUE)),
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'data' => theme('pager_next', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($i - $pager_current),
              'parameters' => $parameters,
            )),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis', 'disabled'),
          'data' => '<span>…</span>',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('next'),
        'data' => $li_next,
      );
    }
    // @todo add theme setting for this.
    // if ($li_last) {
    // $items[] = array(
    // 'class' => array('pager-last'),
    // 'data' => $li_last,
    // );
    // }
    return '<div class="text-right">' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pagination')),
    )) . '</div>';
  }
  return $output;
}
