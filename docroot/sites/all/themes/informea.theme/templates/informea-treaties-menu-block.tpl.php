<?php
$treaties = $variables['treaties'];
$topics = $variables['topics'];
$regions = $variables['regions'];
?>
<ul class="treaties-menu dropdown-menu">
  <?php foreach ($topics as $topic): ?>
    <?php if (!empty($treaties['Global']) || !empty($treaties['Regional'])): ?>
    <li class="treaties-menu-topic dropdown">
      <a class="treaties-menu-title">
        <?php print t('Treaties in <b><i>' . $topic . '</i></b>'); ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu">
        <?php if (!empty($treaties['Global'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print t('<b>GLOBAL TREATIES</b> in <i>' . $topic . '</i>'); ?>
          </li>
          <li class="treaties-menu-list-item dropdown">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties['Global'] as $title => $treaty): ?>
                <?php if (in_array($topic, $treaty['topics'])): ?>
                  <li class="treaties-menu-inside-list-item">
                    <?php print '<img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '"><div class="treaties-menu-treaty-link">' . l(t($title), $treaty['url']) . '</div>'; ?>
                  </li>
                <?php endif ?>
              <?php endforeach; ?>
            </ul>
          </li>
        <?php endif ?>

        <?php if (!empty($treaties['Regional'])): ?>
          <li class="treaties-menu-heading dropdown-header">
            <?php print t('<b>REGIONAL TREATIES</b> in <i>' . $topic . '</i></a>'); ?>
          </li>
          <li class="treaties-menu-list-item dropdown">
            <ul class="treaties-menu-inside-list list-unstyled">
              <?php foreach ($treaties['Regional'] as $title => $treaty): ?>
                <?php if (in_array($topic, $treaty['topics'])): ?>
                  <li class="treaties-menu-inside-list-item">
                    <?php print '<img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '"><div class="treaties-menu-treaty-link">' . l(t($title), $treaty['url']) . '</div>'; ?>
                    <?php foreach ($treaty['regions'] as $idx => $region): ?><?php if ($idx != 0): ?><?php print ", "; ?><?php endif ?><?php print trim($region); ?><?php endforeach; ?>
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
    <li class="treaties-menu-region dropdown">
      <a class="treaties-menu-title">
        <?php print t('Treaties in <i>' . $region . '</i>'); ?>
      </a>
      <ul class="treaties-menu-list dropdown-menu">
        <li class="treaties-menu-heading dropdown-header">
          <?php print t('<b>TREATIES</b> in <i>' . $region . '</i>'); ?>
        </li>
        <li class="treaties-menu-list-item dropdown">
          <ul class="treaties-menu-inside-list list-unstyled">
          <?php foreach ($treaties[$region] as $title => $treaty): ?>
            <li class="treaties-menu-inside-list-item list-unstyled">
              <?php print '<img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '"><div class="treaties-menu-treaty-link">' . l(t($title), $treaty['url']) . '</div>'; ?>
              <?php foreach ($treaty['topics'] as $idx => $topic): ?><?php if ($idx != 0): ?><?php print ", "; ?><?php endif ?><?php print trim($topic); ?><?php endforeach; ?>
            </li>
          <?php endforeach; ?>
          </ul>
        </li>
      </ul>
    </li>
  <?php endforeach; ?>
</ul>
