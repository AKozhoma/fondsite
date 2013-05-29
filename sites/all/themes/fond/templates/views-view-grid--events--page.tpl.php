<?php
  $link_new = url('node/add/-event');
  if (in_array('administrator', $user->roles)): ?>
    <a class="new_data_report" href=<?php print $link_new; ?>>Добавить новое Событие</a>
  <?php endif; ?>
<?php
  $vocabulary = taxonomy_vocabulary_machine_name_load('_category_event');
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
          <?php if (!empty($view->result[$i]->field_field_category_event[0]['raw']['tid'])) { 
            $tid_term_1 = $view->result[$i]->field_field_category_event[0]['raw']['tid'];
            if (!empty($view->result[$i]->field_field_category_event[1]['raw']['tid'])) { 
              $tid_term_2 = $view->result[$i]->field_field_category_event[1]['raw']['tid'];
            }
            $i++;?>
            <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  } ?> id=<?php
              if (in_array($tid_term_1, $term) || in_array($tid_term_2, $term)) { print "view_event"; }
              else { print "empty_event"; } ?>>
              <?php print $item; ?>
            </td>
          <?php } ?>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
