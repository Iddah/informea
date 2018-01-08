<?php
/**
 * @file
 * informea.features.inc
 */

/**
 * Implements hook_default_bootstrap_tour().
 */
function informea_default_bootstrap_tour() {
  $items = array();
  $items['informea_site_tour'] = entity_import('bootstrap_tour', '{
    "title" : "Informea site tour",
    "name" : "informea_site_tour",
    "description" : "",
    "roles" : "",
    "autorun" : "0",
    "start_path" : "\\u003Cfront\\u003E",
    "enabled" : "1",
    "rdf_mapping" : [],
    "steps" : [
      {"path":"\\u003Cfront\\u003E","selector":"","placement":"top","title":"Welcome","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-4ffa1d2c-d5a4-c784-f2d3-ea0aead8f658\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EWelcome to \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EInforMEA\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E! Please follow the tour to the end. It will only take a few minutes. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"\\u003Cfront\\u003E","selector":"#block-locale-language-content","placement":"bottom","title":"Multilinguality","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-b46209c9-dbb7-52ec-e64d-306b35aa24fe\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EThe InforMEA user interface is currently available in six \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EUN languages\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E. Click here to select your language of preference. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#treaties-menu-link","placement":"bottom","title":"Treaties","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb660a-d5a6-7995-9aa5-6ec4aa972a40\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ESelect \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003ETreaties\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E to view InforMEA\\u2019s database\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties","selector":"#block-treaty-treaty-global .brand.brand-cbd","placement":"right","title":"CBD","content":"\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59ba8e-d5b2-a1e0-34eb-34adebcffe07\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFeatured Treaties\\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003E \\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003Eappear at the top of the page. Alternatively, you may browse a \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Elist \\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003Eof all MEA from the table down below. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\u003Cp\\u003E\\u003Cbr\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59ba8e-d5b2-a1e0-34eb-34adebcffe07\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ELet\\u2019s select \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003ECBD\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties\\/cbd","selector":"#sidebar-first .nav li:nth-child(3)","placement":"right","title":"Treaty text","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-27978aff-d5b6-bcdf-daba-cdd818813c21\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFrom the left menu let us select the \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003ETreaty text. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties\\/cbd\\/text","selector":"#block-system-main .form-group \\u003E p \\u003E button.btn.btn-default","placement":"left","title":"Expand","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-1f83eb4c-d5ba-50f1-dccf-d63e9c32eb7b\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EExpand all allows you to view all articles. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#sidebar-first .nav li:nth-child(5)","placement":"right","title":"Parties","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb6651-d5bc-6f73-6804-06daca016b6d\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFrom the left menu we can also select \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EParties\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties\\/cbd\\/parties","selector":"#block-system-main .form-group .nav li:nth-child(2)","placement":"top","title":"List of parties ","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb6630-d5bf-7ccf-0966-03e2046f8b51\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EYou will have a map indicating ratification status of the MEA. In order to have information on national focal points select \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EList of\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EParties\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties\\/cbd\\/parties?active_bootstrap_tab=1","selector":"#block-system-main #table-parties \\u003E tbody \\u003E tr:nth-child(1) .glyphicon-user","placement":"top","title":"Focal point","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59bb28-d5c1-43a7-13b5-3d09bd191456\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFrom here you find the \\u0026nbsp;designated focal point through the blue icon on the far right\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#sidebar-first .nav li:nth-child(4)","placement":"right","title":"Decisions","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb6687-d5c8-6303-60b9-4367aeb1b87c\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ENext let\\u2019s consult \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EDecisions\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"treaties\\/cbd\\/decisions","selector":"#meeting-75053 .panel-heading a:nth-child(1)","placement":"right","title":"Decision title","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb66a6-d5c9-4757-6c27-ebade8079133\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EMEA Decisions are categorized by the meeting where they were adopted\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"node\\/75053","selector":".view-id-meeting_decisions .view-content .views-row-4 h3 a","placement":"top","title":"Select a decision","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb66c6-d5cd-38b8-8532-108739c1780f\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ESelect the decision you wish to read\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"node\\/76296","selector":".row-26.panels-flexible-row-last .pane-node-field-files","placement":"top","title":"File","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb66e6-d5d0-19ea-0f17-d15265565425\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EThe decision is presented in its original format. From this you move to decisions adopted at the same meeting, to the meeting\\u2019s homepage or its coverage by the Earth Negotiation Bulletin\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"\\u003Cfront\\u003E","selector":"#parties-menu-link","placement":"bottom","title":"Parties","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0f981ec-d5d5-8cd1-916e-915a97731575\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ELet\\u2019s next consult the Parties\\u2019 section.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"countries","selector":".row-31 .col-2 .label","placement":"top","title":"Select Kenya","content":"\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59b650-d5d6-ab2e-0465-1730e62fe646\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EBrowse profiles of \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EParties\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E who are signatory to the MEAs featured on InforMEA.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59b650-d5d6-ab2e-0465-1730e62fe646\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFor example, let\\u2019s click on \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003EKenya\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"countries\\/ke","selector":"#sidebar-first .nav li:nth-child(4)","placement":"right","title":"See National Reports","content":"\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59b655-d5d7-90a9-7c2e-fea416f12eaf\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ESee which MEAs Kenya is a Party to, and find reports and plans it has submitted to different MEAs. \\u0026nbsp;\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59b655-d5d7-90a9-7c2e-fea416f12eaf\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003ELet\\u2019s look at \\u0026nbsp;\\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003ENational Reports.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"countries\\/ke\\/national-reports","selector":"#heading-264 .glyphicon-plus-sign","placement":"top","title":"Plus sign","content":"\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb6706-d5d8-a643-8fe0-e4bb12df50e3\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EYou can access the National Reports submitted to any of the MEAs listed through the plus signs next to each MEA. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\u003Cp dir=\\u0022ltr\\u0022 style=\\u0022line-height:1.2;margin-top:0pt;margin-bottom:0pt;\\u0022\\u003E\\u003Cspan id=\\u0022docs-internal-guid-d0eb6706-d5d8-a643-8fe0-e4bb12df50e3\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EFrom here we move to the search function which also drills into these reports. \\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#edit-basic","placement":"left","title":"Search","content":"\\u003Cp\\u003EVisible from any page, this search bar provides quick access to all documents and content of the Portal.\\u003C\\/p\\u003E\\u003Cp\\u003EFor sake of example, please type \\u003Cem\\u003Eclimate change\\u003C\\/em\\u003E and select the key word in bold from the drop down menu.\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"search\\/climate%20change","selector":".region-sidebar-first section:nth-child(1)","placement":"right","title":"Facets","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-27978a5f-d5dc-b8d9-92e0-25ec73c52b10\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EUse the \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Efilter \\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003Eto narrow down the results based on \\u2018content type\\u2019, \\u2018instrument\\u2019 or \\u2018term\\u2019.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#heading-259 .glyphicon-plus-sign","placement":"top","title":"Plus sign","content":"\\u003Cp\\u003E\\u003Cspan style=\\u0022\\u0022\\u003EThe documents are arranged by type and MEAs.\\u0026nbsp;\\u003C\\/span\\u003ET\\u003Cspan\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003Ehe \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Eplus sign\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E allows you to view content in the results. Every matched word is in bold.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#edit-basic","placement":"bottom","title":"Multiple search","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cf77de51-d5dd-bdc8-7613-5a0988e9769a\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EYou may also choose to search for two terms, such as climate change AND biodiversity, separating them with a comma.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"search\\/climate%20change%2C%20biodiversity","selector":"#edit-keys","placement":"bottom","title":"Multiple search executed","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-72a933c4-d5de-0f4d-7114-1ce3a6f266d9\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EYou find all documents that have the terms \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Eclimate change\\u003C\\/span\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003E and \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; font-style: italic; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Ebiodiversity.\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]},
      {"path":"","selector":"#glossary-menu-link","placement":"bottom","title":"Glossary","content":"\\u003Cp\\u003E\\u003Cspan id=\\u0022docs-internal-guid-cb59be17-d5e0-4f19-3291-b6f5d48ba6c2\\u0022\\u003E\\u003Cspan style=\\u0022white-space: pre-wrap; background-color: transparent;\\u0022\\u003EClick \\u003Ca href=\\u0022http:\\/\\/leo.informea.org?tour=leo_site_tour\\u0022\\u003Ehere\\u003C\\/a\\u003E to access InforMEA\\u2019s glossary \\u003C\\/span\\u003E\\u003Cspan style=\\u0022font-weight: 700; white-space: pre-wrap; background-color: transparent;\\u0022\\u003Ecalled Law and Environment Ontology (LEO).\\u003C\\/span\\u003E\\u003C\\/span\\u003E\\u003C\\/p\\u003E","content_text_format":"full_html","rdf_mapping":[]}
    ]
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function informea_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function informea_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function informea_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function informea_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slider.
  $styles['front_page_slider'] = array(
    'label' => 'Front page slider (500x300)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo.
  $styles['logo'] = array(
    'label' => 'logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 40,
          'height' => 40,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function informea_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function informea_default_search_api_index() {
  $items = array();
  $items['informea_court_decisions'] = entity_import('search_api_index', '{
    "name" : "InforMEA Court Decisions",
    "machine_name" : "informea_court_decisions",
    "description" : null,
    "server" : "search_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "court_decisions" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_files" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_alternative_record_id" : { "type" : "text" },
        "field_available_in" : { "type" : "text" },
        "field_city" : { "type" : "text" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_court_decision_subdivision" : { "type" : "text" },
        "field_court_name" : { "type" : "text" },
        "field_data_source" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_of_entry" : { "type" : "date" },
        "field_date_of_modification" : { "type" : "date" },
        "field_ecolex_decision_status" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ecolex_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_informea_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_isis_number" : { "type" : "text" },
        "field_jurisdiction" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_justices" : { "type" : "list\\u003Ctext\\u003E" },
        "field_notes" : { "type" : "text" },
        "field_number_of_pages" : { "type" : "integer" },
        "field_official_publication" : { "type" : "text" },
        "field_original_id" : { "type" : "text" },
        "field_reference_number" : { "type" : "text" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_territorial_subdivision" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_type_of_text" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_city" : true,
              "field_original_id" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_available_in" : true,
              "field_official_publication" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_court_name" : true,
              "field_justices" : true,
              "field_court_decision_subdivision" : true,
              "field_court_decision_raw" : true,
              "field_ecolex_treaty_raw" : true,
              "field_faolex_reference_raw" : true,
              "field_instance" : true,
              "field_ref_to_eu_legislation_raw" : true,
              "field_title_of_text_other" : true,
              "field_title_of_text_short" : true,
              "field_title_of_text_short_other" : true,
              "field_ref_to_nat_legislation_raw" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_city" : true,
              "field_original_id" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_available_in" : true,
              "field_official_publication" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_court_name" : true,
              "field_justices" : true,
              "field_court_decision_subdivision" : true,
              "field_court_decision_raw" : true,
              "field_ecolex_treaty_raw" : true,
              "field_faolex_reference_raw" : true,
              "field_instance" : true,
              "field_ref_to_eu_legislation_raw" : true,
              "field_title_of_text_other" : true,
              "field_title_of_text_short" : true,
              "field_title_of_text_short_other" : true,
              "field_ref_to_nat_legislation_raw" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_city" : true,
              "field_original_id" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_available_in" : true,
              "field_official_publication" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_court_name" : true,
              "field_justices" : true,
              "field_court_decision_subdivision" : true,
              "field_court_decision_raw" : true,
              "field_ecolex_treaty_raw" : true,
              "field_faolex_reference_raw" : true,
              "field_instance" : true,
              "field_ref_to_eu_legislation_raw" : true,
              "field_title_of_text_other" : true,
              "field_title_of_text_short" : true,
              "field_title_of_text_short_other" : true,
              "field_ref_to_nat_legislation_raw" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_city" : true,
              "field_original_id" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_available_in" : true,
              "field_official_publication" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_court_name" : true,
              "field_justices" : true,
              "field_court_decision_subdivision" : true,
              "field_court_decision_raw" : true,
              "field_ecolex_treaty_raw" : true,
              "field_faolex_reference_raw" : true,
              "field_instance" : true,
              "field_ref_to_eu_legislation_raw" : true,
              "field_title_of_text_other" : true,
              "field_title_of_text_short" : true,
              "field_title_of_text_short_other" : true,
              "field_ref_to_nat_legislation_raw" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : [],
    "tes" : { "enable" : false }
  }');
  $items['informea_legislations'] = entity_import('search_api_index', '{
    "name" : "InforMEA Legislations",
    "machine_name" : "informea_legislations",
    "description" : null,
    "server" : "search_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "legislation" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_files" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_alternative_record_id" : { "type" : "text" },
        "field_amends" : { "type" : "integer", "entity_type" : "node" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_data_source" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_of_consolidation" : { "type" : "date" },
        "field_date_of_entry" : { "type" : "date" },
        "field_date_of_modification" : { "type" : "date" },
        "field_date_of_original_text" : { "type" : "date" },
        "field_ecolex_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_entry_into_force_notes" : { "type" : "text" },
        "field_faolex_id" : { "type" : "text" },
        "field_implements" : { "type" : "integer", "entity_type" : "node" },
        "field_informea_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_isis_number" : { "type" : "text" },
        "field_notes" : { "type" : "text" },
        "field_original_id" : { "type" : "text" },
        "field_reference_number" : { "type" : "text" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_repealed" : { "type" : "boolean" },
        "field_repeals" : { "type" : "integer", "entity_type" : "node" },
        "field_serial_imprint" : { "type" : "text" },
        "field_sub_file_code" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_territorial_subdivision" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_title_abbreviation" : { "type" : "text" },
        "field_type_of_text" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "uuid" : true,
              "field_original_id" : true,
              "title_field" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_title_abbreviation" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_entry_into_force_notes" : true,
              "field_faolex_id" : true,
              "field_serial_imprint" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "field_original_id" : true,
              "title_field" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_title_abbreviation" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_entry_into_force_notes" : true,
              "field_faolex_id" : true,
              "field_serial_imprint" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "field_original_id" : true,
              "title_field" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_title_abbreviation" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_entry_into_force_notes" : true,
              "field_faolex_id" : true,
              "field_serial_imprint" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "field_original_id" : true,
              "title_field" : true,
              "field_abstract" : true,
              "field_alternative_record_id" : true,
              "field_title_abbreviation" : true,
              "field_reference_number" : true,
              "field_isis_number" : true,
              "field_notes" : true,
              "field_entry_into_force_notes" : true,
              "field_faolex_id" : true,
              "field_serial_imprint" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : [],
    "tes" : { "enable" : false }
  }');
  $items['informea_publications'] = entity_import('search_api_index', '{
    "name" : "InforMEA Publications",
    "machine_name" : "informea_publications",
    "description" : null,
    "server" : "search_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "document", "literature" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_files" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_alternative_record_id" : { "type" : "text" },
        "field_author" : { "type" : "list\\u003Ctext\\u003E" },
        "field_author_institution" : { "type" : "list\\u003Ctext\\u003E" },
        "field_collation" : { "type" : "text" },
        "field_country" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_data_source" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_of_entry" : { "type" : "date" },
        "field_date_of_modification" : { "type" : "date" },
        "field_ecolex_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_geographical_scope" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_informea_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_isbn" : { "type" : "text" },
        "field_isis_number" : { "type" : "text" },
        "field_last_update" : { "type" : "date" },
        "field_literature_call_number" : { "type" : "text" },
        "field_literature_paper_title" : { "type" : "text" },
        "field_literature_serial_title" : { "type" : "text" },
        "field_literature_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_organizations" : { "type" : "list\\u003Ctext\\u003E" },
        "field_original_id" : { "type" : "text" },
        "field_publication_place" : { "type" : "string" },
        "field_publisher" : { "type" : "text" },
        "field_region" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_related_literature" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_sorting_order" : { "type" : "integer" },
        "field_territorial_subdivision" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_treaty" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_volume_no" : { "type" : "text" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_original_id" : true,
              "field_alternative_record_id" : true,
              "field_isis_number" : true,
              "field_author" : true,
              "field_author_institution" : true,
              "field_collation" : true,
              "field_isbn" : true,
              "field_literature_call_number" : true,
              "field_literature_paper_title" : true,
              "field_literature_serial_title" : true,
              "field_organizations" : true,
              "field_publication_place" : true,
              "field_publisher" : true,
              "field_volume_no" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_original_id" : true,
              "field_alternative_record_id" : true,
              "field_isis_number" : true,
              "field_author" : true,
              "field_author_institution" : true,
              "field_collation" : true,
              "field_isbn" : true,
              "field_literature_call_number" : true,
              "field_literature_paper_title" : true,
              "field_literature_serial_title" : true,
              "field_organizations" : true,
              "field_publication_place" : true,
              "field_publisher" : true,
              "field_volume_no" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_original_id" : true,
              "field_alternative_record_id" : true,
              "field_isis_number" : true,
              "field_author" : true,
              "field_author_institution" : true,
              "field_collation" : true,
              "field_isbn" : true,
              "field_literature_call_number" : true,
              "field_literature_paper_title" : true,
              "field_literature_serial_title" : true,
              "field_organizations" : true,
              "field_publication_place" : true,
              "field_publisher" : true,
              "field_volume_no" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "uuid" : true,
              "title_field" : true,
              "field_original_id" : true,
              "field_alternative_record_id" : true,
              "field_isis_number" : true,
              "field_author" : true,
              "field_author_institution" : true,
              "field_collation" : true,
              "field_isbn" : true,
              "field_literature_call_number" : true,
              "field_literature_paper_title" : true,
              "field_literature_serial_title" : true,
              "field_organizations" : true,
              "field_publication_place" : true,
              "field_publisher" : true,
              "field_volume_no" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : [],
    "tes" : { "enable" : false }
  }');
  return $items;
}
