<?php

/**
 * Display links to treaty sections: text, decisions, etc.
 *
 * @ingroup views_field_handlers
 */
class views_handler_treaty_links extends views_handler_field {

  public function __construct() {
    module_load_include('api.inc', 'decision');
    module_load_include('api.inc', 'country_data');
    module_load_include('api.inc', 'country_deliverable');
    $this->real_field = 'nid';
  }

  protected function getSections() {
    return [
      'default' => 'Summary',
      'protocols' => 'Protocols',
      'text' => 'Treaty text',
      'decisions' => 'Decisions',
      'parties' => 'Parties',
      'national-reports' => 'National reports',
      'action-plans' => 'Action plans',
      'documents' => 'Documents',
      'contacts-hub' => 'Contacts HUB',
    ];
  }

  protected function getSectionCountFunction($section) {
    switch ($section) {
      case 'protocols':
        return 'treaty_count_child_protocols';

      case 'decisions':
        return 'decision_count_treaty_decisions';

      case 'parties':
        return 'country_data_treaty_count_membership';

      case 'national-reports':
        return 'country_deliverable_count_treaty_national_reports';

      case 'action-plans':
        return 'country_deliverable_count_treaty_action_plans';

      case 'documents':
        return 'country_deliverable_count_treaty_documents';
    }
    return NULL;
  }

  /**
   * {@inheritdoc}
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['unavailable_links_options'] = ['default' => 'disable'];
    $options['display_links'] = ['default' => []];
    foreach ($this->getSections() as $menu_context => $title) {
      $options["{$menu_context}_link_title"] = ['default' => $title];
    }
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['unavailable_links_options'] = [
      '#title' => t('Unavailable links action'),
      '#type' => 'select',
      '#options' => [
        'disable' => 'Disable',
        'hide' => 'Hide',
      ],
      '#default_value' => $this->options['unavailable_links_options'],
      '#required' => TRUE,
    ];
    $form['display_links'] = [
      '#title' => t('Display links'),
      '#type' => 'checkboxes',
      '#options' => $this->getSections(),
      '#default_value' => $this->options['display_links'],
    ];
    foreach ($this->getSections() as $menu_context => $title) {
      $form["{$menu_context}_link_title"] = [
        '#title' => t("$title link title"),
        '#type' => 'textfield',
        '#default_value' => $this->options["{$menu_context}_link_title"],
      ];
    }
  }

  /**
   * Render callback handler.
   */
  function render($values) {
    $contextual_menu = ['#theme' => 'item_list'];
    $nid = $values->{$this->field_alias};
    if (!empty($nid)) {
      $node_url = url(drupal_get_path_alias('node/' . $nid), ['absolute' => TRUE]);
      foreach ($this->options['display_links'] as $menu_context => $enabled) {
        if ($enabled && !empty($this->options["{$menu_context}_link_title"])) {
          $count_function = $this->getSectionCountFunction($menu_context);

          if (!empty($count_function) && function_exists($count_function) && $count_function($nid) <= 0) {
            if ($this->options['unavailable_links_options'] == 'hide') {
              continue;
            }
            $link = t($this->options["{$menu_context}_link_title"]);
          }
          else {
            $link = l(t($this->options["{$menu_context}_link_title"]), $node_url . '/' . $menu_context);
          }

          $contextual_menu['#items'][$menu_context] = $link;
        }
      }
    }
    return !empty($contextual_menu['#items']) ? drupal_render($contextual_menu) : NULL;
  }

}