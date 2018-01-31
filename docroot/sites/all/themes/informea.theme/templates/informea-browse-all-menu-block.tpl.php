<?php
$topics = $variables['topics'];
$regions = $variables['regions'];
$global_region_url = $variables['global_region_url'];
?>

<ul class="dropdown-menu browse-all-menu dropdown-menu-right">
  <li class="dropdown-header"><?php print t('BROWSE ALL by <b><i>Environmental Topic</i></b>'); ?></li>
  <?php foreach ($topics as $topic): ?>
    <li class="browse-all-menu-topic">
      <?php print l(
        '<b><i>' . $topic['title'] . '</i></b>',
        $topic['url'], array('attributes' => array('class' => array('browse-all-menu-title', 'menu-title')), 'html' => TRUE)); ?>
    </li>
  <?php endforeach; ?>
  <li class="dropdown-header"><?php print t('BROWSE ALL by <b><i>Regions</i></b>'); ?></li>
  <?php foreach ($regions as $region): ?>
    <li class="browse-all-menu-region">
      <?php print l(
        '<i>' . $region['title'] . '</i>',
        $region['url'], array('attributes' => array('class' => array('browse-all-menu-title', 'menu-title')), 'html' => TRUE)); ?>
    </li>
  <?php endforeach; ?>
  <?php if ($global_region_url != ''): ?>
  <li class="browse-all-menu-region">
    <?php print l(
      '<i>' . t('GLOBAL') . '</i>',
      $global_region_url, array('attributes' => array('class' => array('browse-all-menu-title', 'menu-title')), 'html' => TRUE)); ?>
  </li>
  <?php endif; ?>
</ul>
