<?php
  $link_new = url('node/add/-need');
  if (in_array('administrator', $user->roles)): ?>
    <a class="new_data_report" href=<?php print $link_new; ?>>Добавить новую Нужду</a>
  <?php endif; ?>
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
$vocabulary = taxonomy_vocabulary_machine_name_load('_category_need');
$terms = taxonomy_get_tree($vocabulary->vid);
$term_sos = $terms[0]->tid; //taxonomy_get_term_by_name('1. SOS');
$term_actual_need = $terms[1]->tid; //taxonomy_get_term_by_name('2. Актуальные нужды');
$term_paided_need = $terms[2]->tid; //taxonomy_get_term_by_name('3. Оплаченные нужды');
$term_archiv = $terms[3]->tid; //taxonomy_get_term_by_name('4. Архив');
?>
<?php $i = 0; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="<?php print $class; ?>"<?php print $attributes; ?>>
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <tr <?php if ($row_classes[$row_number]) {
        print 'class="' . $row_classes[$row_number] .'"';  } ?>>
      <?php foreach ($columns as $column_number => $item): ?>
        <?php if (!empty($view->result[$i]->field_data_field_category_need_field_category_need_tid)) { 
          $tid_term = $view->result[$i]->field_data_field_category_need_field_category_need_tid;
          $i++;?>
          <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  }?> id=<?php
            if($tid_term == $term_sos) { print "sos_need"; }
            elseif ($tid_term == $term_actual_need) { print "actual_need"; }
            elseif ($tid_term == $term_paided_need) { print "paided_need"; }
            elseif ($tid_term == $term_archiv) { print "archiv_need"; } 
            else { print "empty_need"; } ?>>
              <?php if($tid_term == $term_sos)  { ?>
                <div class="statusSosNeed">Срочно</div>
              <?php } ?>
              <?php if($tid_term == $term_actual_need)  { ?>
                <div class="statusActualNeed">Актуально</div>
              <?php } ?>
              <?php if($tid_term == $term_paided_need)  { ?>
                <div class="statusPaidedNeed">Оплачено</div>
              <?php } ?>
              <?php print $item; ?>
          </td>
        <?php } ?>
      <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>