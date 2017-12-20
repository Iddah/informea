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
<div class="secondary-nav visible-lg">
  <div class="container">
      <?php print render($page['above_nav']); ?>
  </div>
</div>
<?php endif; ?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="container">
    <div class="navbar-header header-brand">
      <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a><!-- .logo .navbar-btn .pull-left -->
      <?php endif; ?>
    </div><!-- .navbar-header -->
    <div class="navbar-header header-content">
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button><!-- .navbar-toggle -->
    </div><!-- .navbar-header -->
    <nav class="navbar-collapse collapse navbar-left" role="navigation">
        <div class="secondary-nav-mobile hidden-lg row container-fluid">
            <!-- <div class="container"> -->
              <?php print render($page['above_nav']); ?>
            <!-- </div> -->
        </div>
      <ul class="nav navbar-nav">
        <li class="dropdown dropdown-full-width">
          <?php print l(t('Treaties') . ' <span class="caret"></span>', 'treaties', array('attributes' => array('class' => array('dropdown-toggle'), 'id' => 'treaties-menu-link'), 'absolute' => TRUE, 'html' => TRUE)); ?>
            <?php $block = block_load('informea', 'informea_treaties_block');
            $block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
            $output = drupal_render($block_array);
            print $output; ?>
        </li><!-- .dropdown -->
        <li><?php print l(t('Parties'), 'countries', array('attributes' => array('id' => 'parties-menu-link'))); ?></li>
        <li><?php print l(t('Glossary'), 'terms', array('attributes' => array('id' => 'glossary-menu-link'))); ?></li>
        <li><?php print l(t('Documents'), 'documents', array('attributes' => array('id' => 'documents-menu-link'))); ?></li>
        <li><?php print l(t('Goals'), 'goals', array('attributes' => array('id' => 'goals-menu-link'))); ?></li>
        <li><?php print l(t('Learning'), 'http://e-learning.informea.org/', array('attributes' => array('target' => '_blank', 'id' => 'learning-menu-link'))); ?></li>
      </ul><!-- .nav .navbar-nav -->
      </nav><!-- .navbar-collapse .collapse -->
  </div><!-- .container -->
</header><!-- #navbar -->
<div class="search-block">
  <div class="container">
    <?php if (!empty($page['navigation'])): ?>
      <?php print render($page['navigation']); ?>
    <?php endif; ?>
  </div>
</div>
