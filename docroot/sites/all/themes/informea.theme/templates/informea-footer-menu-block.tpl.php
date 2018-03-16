<?php
$topics = $variables['topics'];
$regions = $variables['regions'];
$elearning_icon = _informea_theme_get_elearning_icon();
?>
<div class="row">
  <div class="col-sm-3">
    <h5 class="footer-section-title"><?php print t('Get informed'); ?></h5>
    <ul class="nav" aria-hidden="true">
      <li><?php print l(t('Treaties'), 'treaties', array('attributes' => array('class' => array('menu-title'), 'id' => 'treaties-menu-link'))); ?></li>
      <li><?php print l(t('Parties'), 'countries', array('attributes' => array('class' => array('menu-title'), 'id' => 'parties-menu-link'))); ?></li>
      <li><?php print l(t('Law and Cases'), 'search', array('query' => array('f[0]' => 'type:court_decisions', 'f[1]' => 'type:legislation'), 'attributes' => array('class' => array('menu-title'), 'id' => 'laws-and-cases-menu-lin'))); ?></li>
      <li><?php print l(t('Events'), 'search', array('query' => array('f[0]' => 'type:event_calendar'), 'attributes' => array('class' => array('menu-title'), 'id' => 'events-menu-link'))); ?></li>
      <li><?php print l(t('Goals'), 'search', array('query' => array('f[0]' => 'type:goal', 'f[1]' => 'type:declaration'), 'attributes' => array('class' => array('menu-title'), 'id' => 'goals-menu-link'))); ?></li>
      <li><?php print l(t('Documents and Literature'), 'search', array('query' => array('f[0]' => 'type:document', 'f[1]' => 'type:literature'), 'attributes' => array('class' => array('menu-title'), 'id' => 'documents-menu-link'))); ?></li>
      <li><?php print l(t('Glossary'), 'terms', array('attributes' => array('class' => array('menu-title'), 'id' => 'terms-menu-link'))); ?></li>
      <li><?php print l(t('Contacts Hub'), 'search', array('query' => array('f[0]' => 'type:contact_person'), 'attributes' => array('class' => array('menu-title'), 'id' => 'contacts-hub-menu-link'))); ?></li>
    </ul>
  </div>
  <div class="col-sm-3">
    <h5 class="footer-section-title"><?php print t('Browse by environmental topic'); ?></h5>
    <ul class="nav">
      <?php foreach ($topics as $topic): ?>
        <li class="browse-all-menu-topic">
          <?php print l($topic['title'],$topic['url'], array('attributes' => array('class' => array('browse-all-menu-title', 'menu-title')), 'html' => TRUE)); ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="col-sm-3">
    <h5 class="footer-section-title"><?php print t('Browse by regions'); ?></h5>
    <ul class="nav">
      <?php foreach ($regions as $region): ?>
        <li class="browse-all-menu-region">
          <?php print l($region['title'],$region['url'], array('attributes' => array('class' => array('browse-all-menu-title', 'menu-title')), 'html' => TRUE)); ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="col-sm-3">
    <h5 class="footer-section-title"><?php print t('Free courses'); ?></h5>
    <p>Explore our collection of courses on the environmental topics</p>
    <ul class="nav">
      <li><?php print l((!empty($elearning_icon) ? $elearning_icon : '') . t('FREE ONLINE COURSES'), 'http://e-learning.informea.org/', array('attributes' => array('target' => '_blank', 'class' => array('free-online-courses'), 'id' => 'free-online-courses-footer-link'), 'html' => TRUE)); ?>
      </li>
    </ul>
  </div>
</div><!-- .row -->




