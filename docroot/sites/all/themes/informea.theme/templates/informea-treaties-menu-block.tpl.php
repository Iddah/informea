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

  print '<li class="treaties-menu-topic dropdown"><a>' . t('Treaties in <b><i>' . $topic . '</i></b></a>');
  print '<ul class="treaties-menu-list">';

  print '<li><a>' . t('<b>GLOBAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
  print '<ul>';
  if (!empty($treaties['Global'][$topic])) {
    foreach ($treaties['Global'][$topic] as $title => $treaty) {
      print '<li><img src="' . file_create_url($treaty['logo_uri']) . '">' .  l(t($title), $treaty['url']) . '</li>';
    }
  }
  print '</ul>';
  print '</li>';

  print '<li><a>' . t('<b>REGIONAL TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
  print '<ul>';
  foreach ($regions as $region) {
    if ($region != 'Global' && !empty($treaties[$region][$topic])) {
      foreach ($treaties[$region][$topic] as $title => $treaty) {
        print '<li><img src="' . file_create_url($treaty['logo_uri']) . '">' .  l(t($title), $treaty['url']) . '</li>';
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
    print '<li class="treaties-menu-topic dropdown"><a>' . t('Treaties in <b><i>' . $region . '</i></b></a>');
    print '<ul class="treaties-menu-list">';

    foreach ($topics as $topic) {
      if (!empty($treaties[$region][$topic])) {
        print '<li><a>' . t('<b>TREATIES</b> in <i>' . $topic . '</i></a>') . '</a>';
        print '<ul>';

        foreach ($treaties[$region][$topic] as $title => $treaty) {
          print '<li><img src="' . file_create_url($treaty['logo_uri']) . '">' . l(t($title), $treaty['url']) . '</li>';
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