<?php
$pw = entity_metadata_wrapper('node', $indicator->nid);
$tags = $pw->field_informea_tags->value();
$highlight = isset($_GET['indicator']) ? $_GET['indicator'] == $indicator->nid : FALSE;
$expanded = isset($_GET['indicator']) ? $_GET['indicator'] == $indicator->nid : FALSE;
?>
<div class="panel <?php print $expanded ? 'panel-warning' : 'panel-default'; ?>">
    <div style="padding: 10px 0;" class=" indicator clearfix smallipop <?php print $expanded ? '' : ' collapsed' ;?> <?php print $highlight ? 'highlight' : '' ;?>" id="heading-<?php print $indicator->nid; ?>" data-toggle="collapse" data-target="#indicator-<?php echo $indicator->nid; ?>" aria-expanded="<?php print $expanded ? 'true' : 'false' ;?>">
        <h4 class="panel-title panel-title-target">
            <p class="_title">

              <?php
              $summary = $pw->label();
              if (!empty($pw->field_summary->value())) {
                $summary .= ': ' . $pw->field_summary->value();
              }
              print l(strip_tags($summary), "node/{$indicator->nid}", array(
                'attributes' => array(
                  'data-toggle' => 'tooltip', 'data-placement' => 'top',
                  'title' => t('View indicator page'),
                ),
                'html' => TRUE,
              ));
              ?></p></h4>
      <?php print theme('goal_text_tags', array('tags' => $tags)); ?>
    </div><!-- .indicator .smallipop -->

    <?php if (!empty($indicator->specific_indicators)): ?>
    <div>
        <ul style="padding: 0 0 0 40px;">
          <?php foreach ($indicator->specific_indicators as $specific_indicator): ?>
          <li id="indicator-<?php echo $specific_indicator->nid; ?>" class="indicator">
            <?php print theme('goal_target_indicator_specific', array('goal' => $goal, 'target' => $target, 'indicator' => $indicator, 'specific_indicator' => $specific_indicator, 'base_goal_url' => $base_goal_url)); ?>
          </li>
          <?php endforeach; ?>
        </ul>
    </div><!-- .panel-collapse .collapse -->
    <?php endif; ?>
</div><!-- .panel .panel-default -->
