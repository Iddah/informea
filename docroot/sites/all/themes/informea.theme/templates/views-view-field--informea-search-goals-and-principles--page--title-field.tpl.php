<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php

$prepend = NULL;
if (!empty($row->_entity_properties['field_goal_source'])) {
  $source = $row->_entity_properties['field_goal_source'];
  $type = $row->_entity_properties['field_goal_type'];
  // Add "SDG" in front of the SDG goals (in search results), as it is now for
  // GEG. Same for AICHI strategic goals (call it "Strategic goal").
  if ($source == 1753) {
    // SDG
    if ($type == 1734) {
      $prepend = 'SDG ';
    }
    elseif ($type == 1737) {
      $prepend = 'SDG Target ';
    }
    elseif ($type == 1735) {
      $prepend = 'SDG Indicator ';
    }
  }
  if ($source == 1738) {
    // Aichi
    if ($type == 1736) {
      $prepend = 'Strategic ';
    }
  }
}
if (!empty($prepend)) {
  $output = preg_replace('/(\<a\shref\=\".*\"\>)/', "$1{$prepend}", $output);
}
print $output;

?>
