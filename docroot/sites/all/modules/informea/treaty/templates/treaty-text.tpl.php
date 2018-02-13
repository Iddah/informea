<?php
/**
 * @file
 * treaty-text.tpl.php
 */
?>
<?php
/** @var array $variables */
$node = $variables['node'];
$node_wrapper = entity_metadata_wrapper('node', $node);
$odata_identifier = $node_wrapper->field_odata_identifier->value();
$print = $download = NULL;
if ($odata_identifier) {
  $print = sprintf('/treaties/%s/print', $odata_identifier);
  $download = sprintf('/treaties/%s/download', $odata_identifier);
}
else {
  $print = sprintf('/node/%d/print', $node->nid);
  $download = sprintf('/node/%d/download', $node->nid);
}
?>
<?php if (isset($articles) && is_array($articles)): ?>
  <?php if (!empty($articles)): ?>
    <p class="text-right">
      <button class="btn btn-default" rel="nofollow" data-toggle="group" data-target="#treaty-text">
        <?php print t('Expand all'); ?>
      </button>
      <?php if ($print): ?>
      <a class="btn btn-primary" rel="nofollow" href="<?php print url($print); ?>" target="_blank">
        <i class="glyphicon glyphicon-print"></i>
        <?php print t('Print treaty text'); ?>
      </a>
      <?php endif; ?>
      <?php if ($download): ?>
      <a class="btn btn-primary" rel="nofollow" href="<?php print url($download); ?>">
        <i class="glyphicon glyphicon-download"></i>
        <?php print t('Download'); ?>
      </a>
      <?php endif; ?>
    </p>
  <?php endif; ?>
  <div class="panel-group tagged-content" id="treaty-text" role="tablist" aria-multiselectable="true">
    <?php foreach ($articles as $article) : ?>
      <?php print theme('treaty_text_article', array('article' => $article, 'odata_identifier' => $odata_identifier)); ?>
    <?php endforeach; ?>
  </div>
<?php endif; ?>
<?php
if (user_access('create treaty_article content')):

  $query = array(
    'destination' => sprintf('node/%s/text', $node->nid)
  );
  if (isset($node->nid)) {
    $query['edit'] = array(
      'field_treaty' => array('und' => $node->nid)
    );
  }
  print l('<i class="glyphicon glyphicon-plus"></i> ' . t('Add article'), 'node/add/treaty-article', array(
    'attributes' => array('class' => array('btn', 'btn-default')),
    'html' => TRUE,
    'query' => $query,
  ));
endif;
?>

<ul class="text-right list-inline grey-777">
    <li class="first"> <em><?php print t('Last updated'); ?></em>: <?php print gmdate("d M Y", $node->last_modification_date) ?> </li>
</ul>
