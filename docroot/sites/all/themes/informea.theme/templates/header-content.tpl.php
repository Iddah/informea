<?php
/**
 * @file
 * header-content.tpl.php
 */
?>
<div class="navbar-header header-content">
  <?php if (!empty($page['navigation'])): ?>
    <?php print render($page['navigation']); ?>
  <?php endif; ?>
  <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
    <span class="sr-only">Toggle navigation</span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
  </button><!-- .navbar-toggle -->
</div><!-- .header-content -->
