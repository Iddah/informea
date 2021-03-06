<?php if (isset($goal)): ?>
  <?php
  $aw = entity_metadata_wrapper('node', $goal->nid);
  $tags = $aw->field_informea_tags->value();
  $expanded = isset($_GET['goal']) ? $_GET['goal'] == $goal->nid : FALSE;
  ?>
  <div class="panel <?php print $expanded ? 'panel-warning' : 'panel-default'; ?>">
    <div class="panel-heading smallipop" role="tab" id="heading-<?php echo $goal->nid; ?>">
      <ul class="list-inline actions">
        <li class="action-hover">
          <?php
          print l('<i class="glyphicon glyphicon-link"></i>', $base_goal_url, array(
            'attributes' => array(
              'data-toggle' => 'tooltip', 'data-placement' => 'top',
              'title' => t('Permalink'),
              'class' => array('permalink'),
              'target' => '_blank'
            ),
            'fragment' => 'goal-' . $goal->nid,
            'html' => TRUE,
            'query' => array('goal' => $goal->nid)
          ));
          ?>
        </li>
        <?php if (user_access('edit any goal content')): ?>
          <li class="action-hover">
            <?php
            print l('<i class="glyphicon glyphicon-pencil"></i>', 'node/' . $goal->nid . '/edit', array(
              'attributes' => array('data-toggle' => 'tooltip', 'data-placement' => 'top', 'title' => t('Edit goal')),
              'html' => TRUE
            ));
            ?>
          </li>
        <?php endif; ?>
        <?php if (!empty($tags) && is_array($tags)): ?>
          <li>
            <span class="glyphicon glyphicon-tag" data-toggle="tooltip" data-placement="top" title="<?php print t('Tagged terms'); ?>"></span>
          </li>
        <?php endif; ?>
      </ul><!-- .list-inline .actions -->
      <i class="glyphicon glyphicon-plus-sign <?php print $expanded ? '' : ' collapsed' ;?>" data-toggle="collapse" data-target="#goal-<?php echo $goal->nid; ?>" aria-expanded="<?php print $expanded ? 'true' : 'false' ;?>" aria-controls="article-<?php echo $goal->nid; ?>"></i>
      <h4 class="panel-title">
        <?php
        $summary = $aw->label();
        if (!empty($aw->field_summary->value())) {
          $summary .= ': ' . $aw->field_summary->value();
        }
        print l(strip_tags($summary), "node/{$goal->nid}", array('html' => TRUE));
        ?>
      </h4><!-- .panel-title -->
      <?php print theme('goal_text_tags', array('tags' => $tags)); ?>
    </div><!-- .panel-heading .smallipop -->
    <div id="goal-<?php echo $goal->nid; ?>" class="accordion panel-group panel-collapse collapse<?php print $expanded ? ' in' : '' ;?>" role="tabpanel" aria-labelledby="heading-<?php echo $goal->nid; ?>">
      <div class="goal">
        <?php if (!empty($goal->targets)): ?>
          <?php foreach ($goal->targets as $target): ?>
            <?php print theme('goal_target', array('goal' => $goal, 'target' => $target, 'base_goal_url' => $base_goal_url)); ?>
          <?php endforeach; ?>
        <?php endif; ?>
      </div><!-- .article -->
    </div><!-- .panel-collapse .collapse -->
  </div><!-- .panel .panel-default -->
<?php endif; ?>
