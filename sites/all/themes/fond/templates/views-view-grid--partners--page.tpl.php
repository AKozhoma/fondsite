<?php
  $vocabulary = taxonomy_vocabulary_machine_name_load('_category_partner');
  $terms = taxonomy_get_tree($vocabulary->vid);
  foreach ($terms as $key => $value) {
    $term[]= $value->tid;
  }
  $i = 0;
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="<?php print $class; ?>"<?php print $attributes; ?>>
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <tr <?php if ($row_classes[$row_number]) { print 'class="' . $row_classes[$row_number] .'"';  } ?>>
        <?php foreach ($columns as $column_number => $item): ?>
          <?php if (!empty($view->result[$i]->field_data_field_category_partner_field_category_partner_tid)) { 
            $tid_term = $view->result[$i]->field_data_field_category_partner_field_category_partner_tid;
            $i++;?>
            <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  } ?> id=<?php
            if (in_array($tid_term, $term)) { print "view_partner"; }
            else { print "empty_partner"; } ?>>
              <?php print $item; ?>
            </td>
          <?php } ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
