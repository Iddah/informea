<?php
$pw = entity_metadata_wrapper('node', $indicator->nid);
$tags = $pw->field_informea_tags->value();
$highlight = isset($_GET['indicator']) ? $_GET['indicator'] == $indicator->nid : FALSE;
$expanded = isset($_GET['indicator']) ? $_GET['indicator'] == $indicator->nid : FALSE;
?>
<div class="panel <?php print $expanded ? 'panel-warning' : 'panel-default'; ?>">
<div class="panel-heading indicator clearfix smallipop <?php print $expanded ? '' : ' collapsed' ;?> <?php print $highlight ? 'highlight' : '' ;?>"
     id="heading-<?php print $indicator->nid; ?>"
     data-toggle="collapse"
     data-target="#indicator-<?php echo $indicator->nid; ?>"
     aria-expanded="<?php print $expanded ? 'true' : 'false' ;?>"
>
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
  <?php if (!empty($indicator->specific_indicators)): ?>
    <i class="glyphicon glyphicon-plus-sign"></i>
  <?php endif; ?>
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

<div id="indicator-<?php echo $indicator->nid; ?>" class="panel-collapse collapse<?php print $expanded ? ' in' : '' ;?>" role="tabpanel" aria-labelledby="heading-<?php echo $indicator->nid; ?>">
    <div class="target">
      <?php if (!empty($indicator->specific_indicators)): ?>
          <h4><?php print t('Specific indicators:'); ?></h4>
        <?php foreach ($indicator->specific_indicators as $specific_indicator): ?>
          <?php print theme('goal_target_indicator_specific', array('goal' => $goal, 'target' => $target, 'indicator' => $indicator, 'specific_indicator' => $specific_indicator, 'base_goal_url' => $base_goal_url)); ?>
        <?php endforeach; ?>
      <?php endif; ?>
    </div><!-- .target -->
</div><!-- .panel-collapse .collapse -->
</div><!-- .panel .panel-default -->
