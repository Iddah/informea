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
          <img src="<?php print $logo; ?>" width="226" height="54" alt="<?php print t('Home'); ?>" />
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
        <li class="dropdown dropdown-full-width dropdown-treaties-menu">
          <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false"><b></b></a>
          <?php print '<a class="menu-title" href="/treaties">' . t('Treaties') . ' <span class="caret"></span></a>'; ?>
          <?php print $informea_treaties_menu_block; ?>
        </li><!-- .dropdown -->
        <li><?php print l(t('Parties'), 'countries', array('attributes' => array('class' => array('menu-title'), 'id' => 'parties-menu-link'))); ?></li>
        <li><?php print l(t('Law and Cases'), 'search', array('query' => array('f[0]' => 'type:court_decisions', 'f[1]' => 'type:legislation'), 'attributes' => array('class' => array('menu-title'), 'id' => 'laws-and-cases-menu-lin'))); ?></li>
        <li><?php print l(t('Events'), 'search', array('query' => array('f[0]' => 'type:event_calendar', 'f[1]' => 'year_of_text:[* TO ' . date('Y') . ']', 'sort_bef_combine' => 'field_sorting_date DESC'), 'attributes' => array('class' => array('menu-title'), 'id' => 'events-menu-link'))); ?></li>
        <li><?php print l(t('Goals'), 'goals', array('attributes' => array('class' => array('menu-title'), 'id' => 'goals-menu-link'))); ?></li>
          <li class="dropdown">
          <a tabindex="0" class="dropdown-toggle menu-title" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
            <?php print t('More') . ' <span>+</span>'; ?>
            <b></b>
          </a>
          <ul class="dropdown-menu more-menu">
            <li><?php print l(t('Documents and Literature'), 'search', array('query' => array('f[0]' => 'type:document', 'f[1]' => 'type:literature'), 'attributes' => array('class' => array('menu-title'), 'id' => 'documents-menu-link'))); ?></li>
            <li><?php print l(t('Glossary'), 'terms', array('attributes' => array('class' => array('menu-title'), 'id' => 'terms-menu-link'))); ?></li>
            <li><?php print l(t('Contacts Hub'), 'search', array('query' => array('f[0]' => 'type:contact_person'), 'attributes' => array('class' => array('menu-title'), 'id' => 'contacts-hub-menu-link'))); ?></li>
            <li class="divider" role="separator"></li>
            <li><?php print l(t('About InforMEA'), 'about', array('attributes' => array('class' => array('menu-title'), 'id' => 'about-menu-link'))); ?></li>
            <li><?php print l(t('Contact'), 'contact', array('attributes' => array('class' => array('menu-title'), 'id' => 'contact-menu-link'))); ?></li>
            <li><?php print l(t('Get Involved'), '', array('attributes' => array('class' => array('menu-title'), 'id' => 'get-involved-menu-link'))); ?></li>
          </ul>
        </li><!-- .dropdown -->
        <li><?php print l((!empty($elearning_icon) ? $elearning_icon : '') . t('Free online courses'), 'http://e-learning.informea.org/', array('attributes' => array('target' => '_blank', 'class' => array('free-online-courses'), 'id' => 'free-online-courses-menu-link'), 'html' => TRUE)); ?>
        </li>
        </li>
        <li class="dropdown">
          <a tabindex="0" class="dropdown-toggle menu-title" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
            <?php print t('Browse all …') . ' <span class="caret"></span>'; ?>
            <b></b>
          </a>
          <?php print $informea_browse_all_block; ?>
        </li><!-- .dropdown -->
        <?php print render($page['inside_nav']); ?>
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
