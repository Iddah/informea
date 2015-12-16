<?php
/**
 * @file
 * treaty-decisions.tpl.php
 */
?>
<?php
/** @var array $variables */
$decisions = $variables['decisions'];
global $language;
?>
<table class="table table-hover">
  <tbody>
  <?php
    foreach ($decisions as $nid => $decision):
        $number = !empty($decision->field_decision_number[LANGUAGE_NONE][0]['value']) ? $decision->field_decision_number[LANGUAGE_NONE][0]['value'] : '&nbsp;';
        $title = !empty($decision->title_field[$language->language][0]['value']) ? $decision->title_field[$language->language][0]['value'] : $decision->title;
  ?>
      <tr id="decision-<?php print $nid ?>">
        <td class="col-sm-1 text-center"><?php print $number; ?></td>
        <td>
          <?php
          print l($title, 'node/' . $nid, array(
            'attributes' => array(
              'data-toggle' => 'modal',
              'data-target' => '#dialog-modal-ajax',
              'data-remote' => url('ajax/modal/node/' . $nid)
            )
          ));
          if (user_access('edit any decision content')):
              print '&nbsp;&nbsp;' . l('<i class="glyphicon small glyphicon-pencil"></i>', 'node/' . $nid . '/edit', array('attributes' => array('title' => t('Edit')), 'html' => TRUE));
          endif;
          ?>
        </td>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table><!-- .table .table-hover -->
