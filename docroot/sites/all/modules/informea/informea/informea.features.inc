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
  if ($module == "ds" && $api == "ds") {
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

  // Exported image style: logo-large.
  $styles['logo-large'] = array(
    'label' => 'logo-large',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 60,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      4 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 64,
            'height' => 64,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 3,
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
