<?php
/**
 * @file
 * header-brand.tpl.php
 */
?>
<div class="navbar-header header-brand">
  <?php if ($logo): ?>
    <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
      <?php
        $path = drupal_get_path('theme', 'informea_theme');
        $image_path = $path . '/logo-new.svg';
        if(drupal_is_front_page()):
      ?>
        <img src="<?php print $image_path; ?>" alt="<?php print t('Home'); ?>" />
      <?php else: ?>
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      <?php endif; ?>

    </a><!-- .logo .navbar-btn .pull-left -->
  <?php endif; ?>
</div><!-- .header-brand -->
