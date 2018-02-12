<<?php print $layout_wrapper; print $layout_attributes; ?> class="informea-teaser <?php print $classes;?> clearfix">

<?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<<?php print $left_wrapper ?> class="informea-teaser__left<?php print $left_classes; ?>">
<?php print $left; ?>
</<?php print $left_wrapper ?>>

<<?php print $right_wrapper ?> class="informea-teaser__right<?php print $right_classes; ?>">
<?php print $right; ?>
</<?php print $right_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
<?php endif; ?>

