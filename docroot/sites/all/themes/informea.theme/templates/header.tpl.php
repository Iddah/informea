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
    <div class="navbar-header header-brand">
      <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a><!-- .logo .navbar-btn .pull-left -->
      <?php endif; ?>
    </div><!-- .navbar-header -->
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
    </div><!-- .navbar-header -->
    <nav class="navbar-collapse collapse navbar-left" role="navigation">
      <ul class="nav navbar-nav">
        <li class="dropdown dropdown-full-width">
          <?php print l(t('Treaties') . ' <span class="caret"></span>', 'treaties', array('attributes' => array('class' => array('dropdown-toggle'), 'id' => 'treaties-menu-link'), 'absolute' => TRUE, 'html' => TRUE)); ?>
          <ul class="dropdown-menu row" role="menu">
            <li class="col-sm-3">
              <ul>
                <li class="dropdown-header"><?php print t('Biological Diversity'); ?></li>
                <li><?php print l(t('AEWA'), 'node/264'); ?></li>
                <li><?php print l(t('ASCOBANS'), 'node/304'); ?></li>
                <li>
                  <?php print l(t('CBD'), 'node/255'); ?>
                  <ul>
                    <li><?php print l(t('Cartagena Protocol'), 'node/262'); ?></li>
                    <li><?php print l(t('Nagoya Protocol'), 'node/263'); ?></li>
                  </ul>
                </li>
                <li><?php print l(t('CITES'), 'node/257'); ?></li>
                <li><?php print l(t('CMS'), 'node/258'); ?></li>
                <li><?php print l(t('EUROBATS'), 'node/305'); ?></li>
                <li><?php print l(t('Plant Treaty'), 'node/268'); ?></li>
                <li><?php print l(t('Ramsar'), 'node/272'); ?></li>
                <li><?php print l(t('WHC'), 'node/270'); ?></li>
              </ul>
            </li><!-- .col-sm-3 -->
            <li class="col-sm-3">
              <ul>
                <li class="dropdown-header"><?php print t('Chemicals/Waste'); ?></li>
                <li><?php print l(t('Basel'), 'node/256'); ?></li>
                <li><?php print l(t('Rotterdam'), 'node/274'); ?></li>
                <li><?php print l(t('Stockholm'), 'node/259'); ?></li>
                <li><?php print l(t('Minamata'), 'node/303'); ?></li>
                <li class="dropdown-header"><?php print t('Climate/Atmosphere'); ?></li>
                <li><?php print l(t('UNCCD'), 'node/273'); ?></li>
                <li>
                  <?php print l(t('UNFCCC'), 'node/269'); ?>
                  <ul>
                    <li><?php print l(t('Kyoto Protocol'), 'node/271'); ?></li>
                     <li><?php print l(t('Paris Agreement'), 'node/236208'); ?></li>
                  </ul>
                </li>
                <li>
                  <?php print l(t('Vienna'), 'node/260'); ?>
                  <ul>
                    <li><?php print l(t('Montreal Protocol'), 'node/261'); ?></li>
                  </ul>
                </li>
              </ul>
            </li><!-- .col-sm-3 -->
            <li class="col-sm-3">
              <ul>
                <li>
                  <?php print l(t('Aarhus Convention'), 'node/283'); ?>
                  <ul>
                    <li><?php print l(t('Kiev Protocol'), 'node/298'); ?></li>
                  </ul>
                </li>
                <li>
                  <?php print l(t('Espoo Convention'), 'node/285'); ?>
                  <ul>
                    <li><?php print l(t('The Kyiv Protocol'), 'node/288'); ?></li>
                  </ul>
                </li>
                <li><?php print l(t('Industrial Accidents Convention'), 'node/299'); ?></li>
                <li><?php print l(t('Long-Range Transboundary Air Pollution'), 'node/284'); ?></li>
                <li>
                  <?php print l(t('Water Convention'), 'node/287'); ?>
                  <ul>
                    <li><?php print l(t('Protocol on Water and Health'), 'node/286'); ?></li>
                  </ul>
                </li>
              </ul>
            </li><!-- .col-sm-3 -->
            <li class="col-sm-3">
              <ul>
                <li><?php print l(t('Abidjan Convention'), 'node/289'); ?></li>
                <li><?php print l(t('Antigua Convention'), 'node/295'); ?></li>
                <li><?php print l(t('Apia Convention'), 'node/294'); ?></li>
                <li>
                  <?php print l(t('Barcelona'), 'node/275'); ?>
                  <ul>
                    <li><?php print l(t('Barcelona Dumping Protocol'), 'node/276'); ?></li>
                    <li><?php print l(t('Hazardous Wastes Protocol'), 'node/281'); ?></li>
                    <li><?php print l(t('ICZM Protocol'), 'node/77747'); ?></li>
                    <li><?php print l(t('Land-Based Sources Protocol'), 'node/278'); ?></li>
                    <li><?php print l(t('Offshore Protocol'), 'node/280'); ?></li>
                    <li><?php print l(t('Prevention and Emergency Protocol'), 'node/277'); ?></li>
                    <li><?php print l(t('Specially Protected Areas and Biodiversity Protocol'), 'node/279'); ?></li>
                  </ul>
                </li>
                <li><?php print l(t('Bamako Convention'), 'node/297'); ?></li>
                <li><?php print l(t('Jeddah Convention'), 'node/292'); ?></li>
                <li><?php print l(t('Nairobi Convention'), 'node/293'); ?></li>
                <li><?php print l(t('Cartagena Convention'), 'node/291'); ?></li>
                <li><?php print l(t('Kuwait Regional Convention'), 'node/296'); ?></li>
                <li><?php print l(t('Lusaka Agreement'), 'node/300'); ?></li>
                <li><?php print l(t('Noumea Convention'), 'node/290'); ?></li>
              </ul>
            </li><!-- .col-sm-3 -->
          </ul><!-- .dropdown-menu -->
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
