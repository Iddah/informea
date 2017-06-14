<?php
/**
 * @file
 * header.tpl.php
 */
?>
<div class="modal fade" id="dialog-modal-ajax" tabindex="-1" role="dialog" aria-labelledby="modal-label" aria-hidden="true">
  <div class="modal-dialog modal-lg">
    <div class="modal-content"></div>
  </div><!-- .modal-dialog .modal-lg -->
</div><!-- .modal .fade #dialog-modal-ajax -->
<?php if (!empty($page['above_nav'])): ?>
<div class="secondary-nav">
  <div class="container">
      <?php print render($page['above_nav']); ?>
  </div>
</div>
<?php endif; ?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container">
    <?php
      if(drupal_is_front_page()) {
        include 'header-brand.tpl.php';
        include 'header-content.tpl.php';
        ?>
        <div class="search-divider">
          <div><?php print t('or browse by category') ?></div>
        </div>
        <?php
        include 'header-navbar-collapse.tpl.php';
      }
      else {
        include 'header-brand.tpl.php';
        include 'header-content.tpl.php';
        include 'header-navbar-collapse.tpl.php';
      }
    ?>
  </div><!-- .container -->
</header><!-- #navbar -->
