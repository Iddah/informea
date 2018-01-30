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
      <ul class="nav navbar-nav" aria-hidden="true">
        <li class="dropdown dropdown-full-width">
          <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false"></a>
          <?php print '<a href="/treaties">' . t('Treaties') . ' <span class="caret"></span></a>'; ?>
          <?php $block = block_load('informea', 'informea_treaties_block');
          $block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
          $output = drupal_render($block_array);
          print $output; ?>
        </li><!-- .dropdown -->
        <li><?php print l(t('Parties'), 'countries', array('attributes' => array('class' => 'menu-title', 'id' => 'parties-menu-link'))); ?></li>
        <li><?php print l(t('Laws and Cases'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'laws-and-cases-menu-link'))); ?></li>
        <li><?php print l(t('Events'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'events-menu-link'))); ?></li>
        <li><?php print l(t('Goals'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'goals-menu-link'))); ?></li>
        <li class="dropdown">
          <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false"></a>
          <?php print '<a class="menu-title">' . t('More') . ' <span>+</span></a>'; ?>
          <ul class="dropdown-menu more-menu">
            <li><?php print l(t('Documents and Literature'), 'documents', array('attributes' => array('class' => 'menu-title', 'id' => 'parties-menu-link'))); ?></li>
            <li><?php print l(t('Glossary'), 'terms', array('attributes' => array('class' => 'menu-title', 'id' => 'glossary-menu-link'))); ?></li>
            <li><?php print l(t('Contacts Hub'), 'documents', array('attributes' => array('class' => 'menu-title', 'id' => 'documents-menu-link'))); ?></li>
            <li class="divider" role="separator"></li>
            <li><?php print l(t('About InforMEA'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'about-informea-menu-link'))); ?></li>
            <li><?php print l(t('Contact'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'contact-menu-link'))); ?></li>
            <li><?php print l(t('Get Involved'), 'goals', array('attributes' => array('class' => 'menu-title', 'id' => 'get-involved-menu-link'))); ?></li>
          </ul>
        </li><!-- .dropdown -->
        <li><?php print l(t('Free online courses'), 'http://e-learning.informea.org/', array('attributes' => array('target' => '_blank', 'id' => 'free-online-courses-menu-link'))); ?>
        </li>
        <li class="dropdown">
          <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false"></a>
          <?php print '<a class="menu-title">' . t('Browse all …') . ' <span class="caret"></span></a>'; ?>

          <?php $block = block_load('informea', 'informea_browse_all_block');
          $block_array = _block_get_renderable_array(_block_render_blocks(array($block)));
          $output = drupal_render($block_array);
          print $output; ?>
        </li><!-- .dropdown -->
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
