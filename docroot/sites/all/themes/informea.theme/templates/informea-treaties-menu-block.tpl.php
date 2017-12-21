<?php

$treaties = $variables['treaties'];
$topics = $variables['topics'];
$regions = $variables['regions'];

?>
<ul class="treaties-menu dropdown-menu">
<?php
foreach ($topics as $topic) {
  if (!empty($treaties['Global'][$topic]) || !empty($treaties['Regional'][$topic])) {
    print '<li class="treaties-menu-topic dropdown"><a class="treaties-menu-title">' . t('Treaties in <b><i>' . $topic . '</i></b></a>');
    print '<ul class="treaties-menu-list dropdown-menu">';

    if (!empty($treaties['Global'][$topic])) {
      print '<li class="treaties-menu-list-item dropdown"><a class="treaties-menu-heading">' . t('<b>GLOBAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
      print '<ul class="treaties-menu-inside-list">';

      foreach ($treaties['Global'][$topic] as $title => $treaty) {
        print '<li class="treaties-menu-insite-list-item"><img src="' . file_create_url($treaty['logo_uri']) . '">' . l(t($title), $treaty['url']) . '</li>';
      }

      print '</ul>';
      print '</li>';
    }

    if (!empty($treaties['Regional'][$topic])) {
      print '<li class="treaties-menu-list-item dropdown"><a class="treaties-menu-heading">' . t('<b>REGIONAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
      print '<ul class="treaties-menu-inside-list">';
      foreach ($regions as $region) {
        if ($region != 'Global' && !empty($treaties[$region][$topic])) {
          foreach ($treaties[$region][$topic] as $title => $treaty) {
            print '<li class="treaties-menu-insite-list-item"><img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '">' . l(t($title), $treaty['url']) . '</li>';
          }
        }
      }
      print '</ul>';
      print '</li>';
    }

    print '</ul>';
    print '</li>';
  }
}
?>

<li role="separator" class="divider"></li>

<?php
foreach ($regions as $region) {
  if (!empty($treaties[$region])) {
    print '<li class="treaties-menu-topic dropdown"><a class="treaties-menu-title">' . t('Treaties in <b><i>' . $region . '</i></b></a>');
    print '<ul class="treaties-menu-list dropdown-menu">';

    foreach ($topics as $topic) {
      if (!empty($treaties[$region][$topic])) {
        print '<li class="treaties-menu-list-item dropdown"><a class="treaties-menu-heading">' . t('<b>TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
        print '<ul class="treaties-menu-inside-list">';

        foreach ($treaties[$region][$topic] as $title => $treaty) {
          print '<li class="treaties-menu-insite-list-item"><img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '">' . l(t($title), $treaty['url']) . '</li>';
        }

        print '</ul>';
        print '</li>';
      }
    }

    print '</ul>';
    print '</li>';
  }
}
?>

</ul>