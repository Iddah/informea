<?php
$treaties = $variables['treaties'];
$topics = $variables['topics'];
$regions = $variables['regions'];
?>
<ul class="treaties-menu dropdown-menu prevent-closing" id="sidemenu" role="menu">
  <?php foreach ($topics as $topic): ?>
    <?php if (!empty($treaties['Global']) || !empty($treaties['Regional'])): ?>
    <li class="treaties-menu-topic dropdown" role="menuitem" aria-haspopup="true">
      <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"></a>
      <a class="treaties-menu-title">
        <?php print t('Treaties in') . ' <b><i>' . $topic . '</i></b>'; ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu" role="menu" aria-hidden="true">
        <?php if (!empty($treaties['Global'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print t('<b>GLOBAL TREATIES</b> in') . ' <i>' . $topic . '</i>'; ?>
          </li>
          <li class="treaties-menu-list-item dropdown" role="menuitem" aria-haspopup="true">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties['Global'] as $title => $treaty): ?>
                <?php if (in_array($topic, $treaty['topics'])): ?>
                  <li class="treaties-menu-inside-list-item">
                    <?php print l(
                      '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                      '<span class="treaties-menu-treaty-name">' . t($title) . '</span>',
                      $treaty['url'], array('attributes' => array('class' => 'treaties-menu-treaty'), 'html' => TRUE)); ?>
                  </li>
                <?php endif ?>
              <?php endforeach; ?>
            </ul>
          </li>
        <?php endif ?>

        <?php if (!empty($treaties['Regional'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print t('<b>REGIONAL TREATIES</b> in') . ' <i>' . $topic . '</i></a>'; ?>
          </li>
          <li class="treaties-menu-list-item dropdown" role="menuitem" aria-haspopup="true">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties['Regional'] as $title => $treaty): ?>
                <?php if (in_array($topic, $treaty['topics'])): ?>
                  <li class="treaties-menu-inside-list-item">
                    <?php $treatyRegions = ''; ?>
                    <?php foreach ($treaty['regions'] as $idx => $region): ?><?php if ($idx != 0): ?><?php $treatyRegions .= ", "; ?><?php endif ?><?php $treatyRegions .= trim($region); ?><?php endforeach; ?>
                    <?php print l(
                      '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                      '<span class="treaties-menu-treaty-name">' . t($title) . '</span>'.
                      '<span class="treaties-menu-treaty-info">' . $treatyRegions . '</span>',
                      $treaty['url'], array('attributes' => array('class' => 'treaties-menu-treaty'), 'html' => TRUE)); ?>
                  </li>
                <?php endif ?>
              <?php endforeach; ?>
            </ul>
          </li>
        <?php endif ?>

      </ul>
    </li>
    <?php endif ?>
  <?php endforeach; ?>
  <li role="separator" class="divider"></li>
  <?php foreach ($regions as $region): ?>
    <li class="treaties-menu-region dropdown" role="menuitem" aria-haspopup="true">
      <a tabindex="0" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false"></a>
      <a class="treaties-menu-title">
        <?php print t('Treaties in') . ' <i>' . $region . '</i>'; ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu" role="menu" aria-hidden="true">
        <li class="treaties-menu-heading dropdown-header">
          <?php print t('<b>TREATIES</b> in') . ' <i>' . $region . '</i>'; ?>
        </li>
        <li class="treaties-menu-list-item dropdown" role="menuitem" aria-haspopup="true">
          <ul class="treaties-menu-inside-list list-unstyled">
          <?php foreach ($treaties[$region] as $title => $treaty): ?>
            <li class="treaties-menu-inside-list-item list-unstyled">
              <?php $treatyTopics = ''; ?>
              <?php foreach ($treaty['topics'] as $idx => $topic): ?><?php if ($idx != 0): ?><?php $treatyTopics .= ", "; ?><?php endif ?><?php $treatyTopics .= trim($topic); ?><?php endforeach; ?>
              <?php print l(
                '<img class="treaties-menu-treaty-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .
                '<span class="treaties-menu-treaty-name">' . t($title) . '</span>' .
                '<span class="treaties-menu-treaty-info">' . $treatyTopics . '</span>',
                $treaty['url'], array('attributes' => array('class' => 'treaties-menu-treaty'), 'html' => TRUE)
                ); ?>
            </li>
          <?php endforeach; ?>
          </ul>
        </li>
      </ul>
    </li>
  <?php endforeach; ?>
  <li class="treaties-menu-all" role="menuitem" aria-haspopup="true">
    <?php print l(t('See all treaties'), 'treaties', array('attributes' => array('class' => array('treaties-menu-title', 'treaties-menu-all-link')), 'absolute' => TRUE)); ?>
  </li>
</ul>
