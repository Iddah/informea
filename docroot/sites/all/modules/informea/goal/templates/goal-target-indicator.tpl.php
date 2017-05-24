<?php
$pw = entity_metadata_wrapper('node', $indicator->nid);
$tags = $pw->field_informea_tags->value();
$highlight = isset($_GET['indicator']) ? $_GET['indicator'] == $indicator->nid : FALSE;
?>
<div class="indicator clearfix smallipop <?php print $highlight ? 'highlight' : '' ;?>" id="indicator-<?php print $indicator->nid; ?>">
  <!-- Action links are placed at the top and floated right so they sit at the top-right corner -->
  <ul class="list-inline actions pull-right">
    <li class="action-hover">
      <?php
      print l('<i class="glyphicon glyphicon-link"></i>', $base_goal_url, array(
        'attributes' => array(
          'data-toggle' => 'tooltip', 'data-placement' => 'top',
          'title' => t('Permalink'),
          'class' => array('permalink'),
          'target' => '_blank'
        ),
        'fragment' => 'indicator-' . $indicator->nid,
        'html' => TRUE,
        'query' => array('goal' => $goal->nid, 'target' => $target->nid, 'indicator' => $indicator->nid)
      ));
      ?>
    </li>
    <?php if (user_access('edit any goal content')): ?>
      <li class="action-hover">
        <?php
        print l('<i class="glyphicon glyphicon-pencil"></i>', 'node/' . $indicator->nid . '/edit', array(
          'attributes' => array('data-toggle' => 'tooltip', 'data-placement' => 'top', 'title' => t('Edit indicator')),
          'html' => TRUE
        ));
        ?>
      </li>
    <?php endif; ?>
    <?php if (!empty($tags) && is_array($tags)): ?>
      <li>
        <span class="glyphicon glyphicon-tag"></span>
      </li>
    <?php endif; ?>
  </ul><!-- .list-inline .actions -->
  <?php
    print l('<p>' . $pw->label() . '</p>', "node/{$indicator->nid}", array(
      'attributes' => array(
        'data-toggle' => 'tooltip', 'data-placement' => 'top',
        'title' => t('View indicator page'),
      ),
      'html' => TRUE,
    ));
    ?>
  <?php if($pw->body->value()): ?>
    <p>
      <?php print($pw->body->value->value(array('decode' => FALSE))); ?>
    </p>
  <?php endif; ?>
  <?php print theme('goal_text_tags', array('tags' => $tags)); ?>
</div><!-- .indicator .smallipop -->
