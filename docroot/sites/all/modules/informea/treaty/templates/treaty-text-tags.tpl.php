<?php
/**
 * @file
 * treaty-text-content.tpl.php
 */
?>
<?php if (!empty($tags) && is_array($tags)): ?>
  <span class="smallipop-hint">
    <?php print t('Tagged terms:'); ?>
    <?php
    $terms = array();

    foreach ($tags as $tag) {
      $tw = entity_metadata_wrapper('taxonomy_term', $tag);
      $terms[] = l($tw->label(), '/taxonomy/term/' . $tw->getIdentifier(),
        array('attributes' => array(
          'data-toggle' => 'tooltip', 'data-placement' => 'top',
          'title' => t('Permalink'),
          'target' => '_blank',

        ),)
      );
    }
    ?>
    <?php print implode(', ', $terms); ?>
  </span><!-- .smallipop-hint -->
<?php endif; ?>
