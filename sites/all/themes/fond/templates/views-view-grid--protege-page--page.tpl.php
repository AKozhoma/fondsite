<?php
  $link_new = url('node/add/-protege');
  if (in_array('administrator', $user->roles)): ?>
    <a class="new_data_report" href=<?php print $link_new; ?>>Добавить нового Подопечного</a>
  <?php endif; ?>
<?php
  $vocabulary = taxonomy_vocabulary_machine_name_load('_category_protege');
  $terms = taxonomy_get_tree($vocabulary->vid);
  foreach ($terms as $key => $value) {
    $term= $terms[0]->tid;
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
          <?php if (!empty($view->result[$i]->field_field_category_protege[0]['raw']['tid'])) { 
            $tid_term = $view->result[$i]->field_field_category_protege[0]['raw']['tid'];
            $i++;?>
            <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  } ?> id=<?php
            if ($term == $tid_term) { print "view_protege"; }
            else { print "empty_protege"; } ?>>
              <?php print $item; ?>
            </td>
          <?php } ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>