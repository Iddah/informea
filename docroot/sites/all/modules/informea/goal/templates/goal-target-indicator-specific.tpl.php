<?php
$pw = entity_metadata_wrapper('node', $specific_indicator->nid);
$tags = $pw->field_informea_tags->value();
$highlight = isset($_GET['specific_indicator']) ? $_GET['specific_indicator'] == $specific_indicator->nid : FALSE;
?>
<div style="margin-left: 0;" class="indicator smallipop <?php print $highlight ? 'highlight' : '' ;?>" id="specific_indicator-<?php print $specific_indicator->nid; ?>">
    <h4 class="panel-title panel-title-target"><p class="_title">

        <?php
        $summary = $pw->label();
        if (!empty($pw->field_summary->value())) {
          $summary .= ': ' . $pw->field_summary->value();
        }
        print l(strip_tags($summary), "node/{$specific_indicator->nid}", array(
          'attributes' => array(
            'data-toggle' => 'tooltip', 'data-placement' => 'top',
            'title' => t('View indicator page'),
          ),
          'html' => TRUE,
        ));
        ?></p></h4>
  <?php print theme('goal_text_tags', array('tags' => $tags)); ?>
</div><!-- .indicator .smallipop -->
