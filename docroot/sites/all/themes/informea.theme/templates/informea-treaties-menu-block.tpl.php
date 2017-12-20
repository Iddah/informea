<?php

$treaties = $variables['treaties'];
$topics = [
  'Biodiversity',
  'Chemicals and Wastes',
  'Climate Change and Atmosphere',
  'Drylands',
  'Financing & Trade',
  'International cooperation',
  'Species',
  'Water',
  'Wetlands & National heritage sites',
];

$regions = [
  'Africa',
  'Asia and the Pacific',
  'Europe',
  'Global',
  'Latin America and the Caribbean',
  'North America',
  'Polar: Arctic',
  'West Asia',
]

?>
<ul class="dropdown-menu">
<?php
foreach ($topics as $topic) {

  print '<li class="treaties-menu-topic dropdown"><a class="treaties-menu-title">' . t('Treaties in <b><i>' . $topic . '</i></b></a>');
  print '<ul class="treaties-menu-list">';

  print '<li class="treaties-menu-list-item"><a class="treaties-menu-heading">' . t('<b>GLOBAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
  print '<ul class="treaties-menu-inside-list">';
  if (!empty($treaties['Global'][$topic])) {
    foreach ($treaties['Global'][$topic] as $title => $treaty) {
      print '<li class="treaties-menu-insite-list-item"><img src="' . file_create_url($treaty['logo_uri']) . '">' .  l(t($title), $treaty['url']) . '</li>';
    }
  }
  print '</ul>';
  print '</li>';

  print '<li class="treaties-menu-list-item"><a class="treaties-menu-heading">' . t('<b>REGIONAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
  print '<ul class="treaties-menu-inside-list">';
  foreach ($regions as $region) {
    if ($region != 'Global' && !empty($treaties[$region][$topic])) {
      foreach ($treaties[$region][$topic] as $title => $treaty) {
        print '<li class="treaties-menu-insite-list-item"><img class="treaties-menu-logo" src="' . file_create_url($treaty['logo_uri']) . '">' .  l(t($title), $treaty['url']) . '</li>';
      }
    }
  }
  print '</ul>';
  print '</li>';


  print '</ul>';
  print '</li>';
}
?>

<li role="separator" class="divider"></li>

<?php
foreach ($regions as $region) {
  if (!empty($treaties[$region])) {
    print '<li class="treaties-menu-topic dropdown"><a class="treaties-menu-title">' . t('Treaties in <b><i>' . $region . '</i></b></a>');
    print '<ul class="treaties-menu-list">';

    foreach ($topics as $topic) {
      if (!empty($treaties[$region][$topic])) {
        print '<li class="treaties-menu-list-item"><a class="treaties-menu-heading">' . t('<b>TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
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