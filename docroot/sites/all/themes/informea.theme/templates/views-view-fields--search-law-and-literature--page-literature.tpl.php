<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>


<?php if(!empty($row->_entity_properties['field_country'][0])): ?>
  <?php print informea_theme_country_flag($row->_entity_properties['field_country'][0]); ?>
<?php endif; ?>

<?php $title_field = $fields['title_field']; unset($fields['title_field']); ?>
<?php $nid_field = $row->_entity_properties['nid']; ?>

<?php print $title_field->wrapper_prefix; ?>
<?php print $title_field->label_html; ?>
<?php print $title_field->content; ?>
<a href="#collapse-<?php print $nid_field ?>" data-toggle="collapse" aria-expanded="false" class="collapsed" ><i class="glyphicon glyphicon-plus-sign"></i></a>
<?php print $title_field->wrapper_suffix; ?>
<div class="meta search-index">
  <?php $excerpt_field = $fields['search_api_excerpt']; unset($fields['search_api_excerpt']); ?>
  <div class="collapse" id="collapse-<?php print $nid_field; ?>">
    <blockquote>
      <?php print $excerpt_field->wrapper_prefix; ?>
      <?php print $excerpt_field->label_html; ?>
      <?php print $excerpt_field->content; ?>
      <?php print $excerpt_field->wrapper_suffix; ?>
    </blockquote>
  </div>
  <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endforeach; ?>
</div>
