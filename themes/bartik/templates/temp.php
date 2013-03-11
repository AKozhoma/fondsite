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
$term_sos = taxonomy_get_term_by_name('1. SOS');
$term_actual_need = taxonomy_get_term_by_name('2. Актуальные нужды');
$term_paided_need = taxonomy_get_term_by_name('3. Оплаченные нужды');
$term_archiv = taxonomy_get_term_by_name('4. Архив');
?>

  <table class="<?php print $class; ?>"<?php print $attributes; ?>>
    <tbody><?php dpm($view); for($i = 0; $i < $view->total_rows; $i++) {
      $count_tr = ceil($view->total_rows);
      $tid_term = $view->result[$i]->field_data_field_category_need_field_category_need_tid;
?>
      <?php for ($tr = $i+1; $tr <= $count_tr; $tr=$tr + 3) { ?>
      <tr class="row-1 row-first">
            <td <?php if ($tid_term == '33') { print 'id="sos_need"'; } ?> class="col-1 col-first">
              <div class="views-field views-field-title">
                <span class="field-content">
                  <a href="<?php echo url(drupal_get_path_alias('node/'.$view->result[$i]->nid)); ?>">
                    <?php print $view->result[$i]->node_title; ?>
                  </a>
                </span>
              </div>
              <div class="views-field views-field-field-image">
                <div class="field-content">
                  <a href="<?php echo url(drupal_get_path_alias('node/'.$view->result[$i]->nid)); ?>">
                    <img src="<?php print "http://sitefond/sites/default/files/styles/preview/public/sites/all/modules/files/need/" . $view->result[$i]->field_field_image[0]['raw']['filename']; ?>">
                  </a>
                </div>
              </div>
              <div class="views-field views-field-field-cost">
                <span class="views-label views-label-field-cost">
                  <?php print ("Стоимость:"); ?>
                </span>
                <div class="field-content">
                  <?php print ($view->result[$i]->field_field_cost[0]['raw']['value']." грн."); ?>
                </div>
              </div>
              <div class="views-field views-field-field-total-number">
                <span class="views-label views-label-field-total-number">
                  <?php print ("Общее количество:"); ?>
                </span>
                <div class="field-content">
                  <?php print ($view->result[$i]->field_field_total_number[0]['raw']['value']." шт."); ?>
                </div>
              </div>
              <div class="views-field views-field-field-purchased-quantity">
                <span class="views-label views-label-field-purchased-quantity">
                  <?php print ("Уже куплено:"); ?>
                </span>
                <div class="field-content">
                  <?php print ($view->result[$i]->field_field_purchased_quantity[$i]['raw']['value']." шт."); ?>
                </div>
              </div>
              <div class="views-field views-field-body">
                <div class="field-content">
                  <p><?php print ($view->result[$i]->field_body[0]['raw']['value']); ?></p>
                </div>
              </div>
              <div class="views-field views-label-field-project">
                <span class="views-label views-label-field-project">
                  <?php print ("Проекты:"); ?>
                </span>
                <div class="field-content">
                  <?php  foreach ($view->result[$i]->field_field_project as $project => $items) { if ($view->result[$i]->field_field_project[$project]['rendered']['#title']) { ?>
                  <a href="<?php echo url(drupal_get_path_alias($view->result[$i]->field_field_project[$project]['rendered']['#href'])); ?>">
                    
                    <?php print ($view->result[$i]->field_field_project[$project]['rendered']['#title']); } ?>
                  </a>
                  <?php } ?>
                </div>
              </div>
            </td>
        </tr><?php } ?>
      </tr>
    </tbody>
  </table>