<?php
$treaties = $variables['treaties'];
$topics = $variables['topics'];
$regions = $variables['regions'];
?>
<ul class="treaties-menu dropdown-menu">
  <?php foreach ($topics as $tid => $topic): ?>
    <li class="treaties-menu-topic dropdown" aria-haspopup="true">
      <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"><b></b></a>
      <a class="treaties-menu-title menu-title">
        <?php print sprintf('%s <b><i>%s</i></b>', t('Treaties in'), $topic); ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu" aria-hidden="true">
        <?php if (!empty($treaties[$tid]['global'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print sprintf('<b>%s</b> %s <i>%s</i>',t('GLOBAL TREATIES'), t('in'), $topic); ?>
          </li>
          <li class="treaties-menu-list-item dropdown" aria-haspopup="true">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties[$tid]['global'] as $treaty): ?>
                <li class="treaties-menu-inside-list-item">
                  <?php print l(
                    '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                    '<span class="treaties-menu-treaty-name">' . $treaty['title'] . '</span>',
                    $treaty['url'], array('attributes' => array('class' => array('treaties-menu-treaty')), 'html' => TRUE)); ?>
                </li>
              <?php endforeach; ?>
            </ul>
          </li>
        <?php endif ?>

        <?php if (!empty($treaties[$tid]['regional'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print sprintf('<b>%s</b> %s <i>%s</i>',t('REGIONAL TREATIES'), t('in'), $topic); ?>
          </li>
          <li class="treaties-menu-list-item dropdown" aria-haspopup="true">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties[$tid]['regional'] as $treaty): ?>
                <?php if (in_array($topic, $treaty['topics'])): ?>
                  <li class="treaties-menu-inside-list-item">
                    <?php print l(
                      '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                      '<span class="treaties-menu-treaty-name">' . $treaty['title'] . '</span>'.
                      '<span class="treaties-menu-treaty-info">' . implode(', ', $treaty['regions']) . '</span>',
                      $treaty['url'], array('attributes' => array('class' => array('treaties-menu-treaty')), 'html' => TRUE)); ?>
                  </li>
                <?php endif ?>
              <?php endforeach; ?>
            </ul>
          </li>
        <?php endif ?>

      </ul>
    </li>
  <?php endforeach; ?>
  <li role="separator" class="divider"></li>
  <?php foreach ($regions as $tid => $region): ?>
    <li class="treaties-menu-region dropdown" aria-haspopup="true">
      <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"><b></b></a>
      <a class="treaties-menu-title menu-title">
        <?php
          if ($tid == $variables['global_region_tid']) {
            print sprintf('<i class="text--uppercase">%s</i> %s', $region, t('treaties'));
          }
          else {
            print sprintf('%s <i>%s</i>', t('Treaties in'), $region);
          }
        ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu" aria-hidden="true">
        <li class="treaties-menu-heading dropdown-header">
          <?php
            if ($tid == $variables['global_region_tid']) {
              print sprintf('<i>%s</i> <b>%s</b>', $region, 'TREATIES');
            }
            else {
              print sprintf('<b>%s</b> %s <i>%s</i>',t('TREATIES'), t('in'), $region);
            }
          ?>
        </li>
        <li class="treaties-menu-list-item dropdown" aria-haspopup="true">
          <ul class="treaties-menu-inside-list list-unstyled">
          <?php foreach ($treaties[$tid] as $treaty): ?>
            <li class="treaties-menu-inside-list-item list-unstyled">
              <?php print l(
                '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                '<span class="treaties-menu-treaty-name">' . $treaty['title'] . '</span>' .
                '<span class="treaties-menu-treaty-info">' . implode(', ', $treaty['topics']) . '</span>',
                $treaty['url'], array('attributes' => array('class' => array('treaties-menu-treaty')), 'html' => TRUE)
                ); ?>
            </li>
          <?php endforeach; ?>
          </ul>
        </li>
      </ul>
    </li>
  <?php endforeach; ?>
  <li class="treaties-menu-all" aria-haspopup="true">
    <?php print l(t('See all treaties'), 'treaties', array('attributes' => array('class' => array('treaties-menu-title', 'menu-title', 'treaties-menu-all-link')), 'absolute' => TRUE)); ?>
  </li>
</ul>
