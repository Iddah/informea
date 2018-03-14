<?php
$treaties = $variables['treaties'];
$topics = $variables['topics'];
$regions = $variables['regions'];
?>
<div class="treaties-menu">
  <?php foreach ($topics as $tid => $topic): ?>
    <div class="col">
      <h5 class="footer-section-title"><?php print $topic; ?></h5>
      <?php if (!empty($treaties[$tid]['global'])): ?>
        <h6 class="footer-section-subtitle">
          <?php print t('Global treaties'); ?>
        </h6>
        <ul class="nav">
          <?php $counter = 0; ?>
          <?php foreach ($treaties[$tid]['global'] as $treaty): ?>
            <?php if($counter == 5) { break; } ?>
            <li>
              <?php print l(
                '<span>' . $treaty['title'] . '</span>',
                $treaty['url'], array('html' => TRUE)); ?>
            </li>
            <?php $counter++; ?>
          <?php endforeach; ?>
        </ul>
      <?php endif ?>

      <?php if (!empty($treaties[$tid]['regional'])): ?>
        <h6 class="footer-section-subtitle">
          <?php print t('Regional treaties'); ?>
        </h6>
        <ul class="nav">
          <?php $counter = 0; ?>
          <?php foreach ($treaties[$tid]['regional'] as $treaty): ?>
            <?php if (in_array($topic, $treaty['topics'])): ?>
              <?php if($counter == 5) { break; } ?>
              <li>
                <?php print l(
                  '<span>' . $treaty['title'] . '</span>',
                  $treaty['url'], array('html' => TRUE)); ?>
              </li>
              <?php $counter++; ?>
            <?php endif ?>
          <?php endforeach; ?>
        </ul>
      <?php endif ?>
    </div>
  <?php endforeach; ?>
</div>
