<?php
$wrapper = entity_metadata_wrapper('node', $node);
$url = url('node/' . $node->nid);
$img = theme('image', array(
  'path' => drupal_get_path('theme', 'informea_theme') . '/img/flags/flag-' . strtolower($wrapper->field_country_iso2->value()) . '.png',
  'attributes' => array('class' => array('flag', 'flag-medium'))
));
?>
<div class="countries-list-item">
  <span class="country-flag">
    <?php print $img; ?>
  </span>
  <span class="label">
    <a href="<?php print $url; ?>">
      <?php print $wrapper->label(); ?>
    </a>
  </span>
</div>
