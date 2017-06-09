<?php
/**
 * @file
 * header-brand.tpl.php
 */
?>
<div class="navbar-header header-brand">
  <?php if ($logo): ?>
    <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a><!-- .logo .navbar-btn .pull-left -->
  <?php endif; ?>
</div><!-- .header-brand -->
