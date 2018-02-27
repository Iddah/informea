<?php
/**
 * @file custom Search API ranges Min/Max UI slider widget
 */
?>
<div class="ion-range-slider">
  <?php print drupal_render($form['text-range']); ?>
  <div class="ion-range-slider-box">
    <?php print drupal_render($form['range-slider']); ?>
  </div>
  <div class="ion-range-slider-form">
    <div class="ion-range-box ion-range-box-left">
      <?php print drupal_render($form['range-from']); ?>
    </div>
    <div class="ion-range-box ion-range-box-right">
      <?php print drupal_render($form['range-to']); ?>
    </div>
  </div>
  <?php print drupal_render($form['submit']); ?>
  <?php
    // Render required hidden fields.
    print drupal_render_children($form);
  ?>
</div>
