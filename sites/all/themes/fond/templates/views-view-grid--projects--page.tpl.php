<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
  $vocabulary = taxonomy_vocabulary_machine_name_load('_category_project');
  $terms = taxonomy_get_tree($vocabulary->vid);
  foreach ($terms as $key => $value) {
    $terms2[] = $value->tid;
  }
?>
<?php $i = 0; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="<?php print $class; ?>"<?php print $attributes; ?>>
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <tr <?php if ($row_classes[$row_number]) { print 'class="' . $row_classes[$row_number] .'"';  } ?>>
        <?php foreach ($columns as $column_number => $item): ?>
          <?php if (!empty($view->result[$i]->field_data_field_category_field_category_tid)) { 
            $tid_term = $view->result[$i]->field_data_field_category_field_category_tid;
            $i++;?>
            <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  } ?> id=<?php
            if (in_array($tid_term, $terms2)) { print "view_project"; }
            else { print "empty_project"; } ?>>
              <?php print $item; ?>
            </td>
          <?php } ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
