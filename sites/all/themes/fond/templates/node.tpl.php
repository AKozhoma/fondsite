<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
$mas_tag_protege = array();
$mas_tag_need = array ();
$mas_tag_project = array ();
$mas_tag_partner = array ();
$nodemas = array ();
$mas_tag_event_protege = array ();
$mas_tag_event_project = array ();
$mas_tag_event_partner = array ();
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php //if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print $node_url; ?>"><?php print $node->title; ?></a>
    </h2>
  <?php //endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="meta submitted">
      <?php print $user_picture; ?>
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php
    // Remove the "Add new comment" link on the teaser page or if the comment
    // form is being displayed on the same page.
    if ($teaser || !empty($content['comments']['comment_form'])) {
      unset($content['links']['comment']['#links']['comment-add']);
    }
    // Only display the wrapper div if there are links.
    $links = render($content['links']);
    if ($links):
  ?>
    <div class="link-wrapper">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</div>

<?php //Создание массива со всеми тегами для каждой Нужды ?>
<?php if($node->type == "_need") { ?>
  <?php if($mas_tag_need) { unset($mas_tag_need); $mas_tag_need = array(); }?>
  <?php $count_need = count($node->field_tag_need["$node->language"]); ?>
  <?php for ($i = 0; $i < $count_need; $i++) { ?>
    <?php $mas_tag_need[$i] = $node->field_tag_need["$node->language"][$i]['tid'] ?>
  <?php } ?>
<?php } ?>

<?php //Создание массива со всеми тегами для каждого Проекта ?>
<?php if($node->type == "_project") { ?>
  <?php if($mas_tag_project) { unset($mas_tag_project); $mas_tag_project = array(); } ?>
  <?php $count_project = count($node->field_tag_project["$node->language"]); ?>
  <?php for ($i = 0; $i < $count_project; $i++) { ?>
    <?php $mas_tag_project[$i] = $node->field_tag_project["$node->language"][$i]['tid'] ?>
  <?php } ?>
<?php } ?>

<?php //Создание массива со всеми тегами для каждого Подопечного ?>
<?php if($node->type == "_protege") { ?>
  <?php if($mas_tag_protege) { unset($mas_tag_protege); $mas_tag_protege = array(); } ?>
  <?php $count_protege = count($node->field_tag_protege["$node->language"]); ?>
  <?php for ($i = 0; $i < $count_protege; $i++) { ?>
    <?php $mas_tag_protege[$i] = $node->field_tag_protege["$node->language"][$i]['tid'] ?>
  <?php } ?>
<?php } ?>

<?php //Создание массива со всеми тегами для каждого Партнера ?>
<?php if($node->type == "_partner") { ?>
  <?php if($mas_tag_partner) { unset($mas_tag_partner); $mas_tag_partner = array(); } ?>
  <?php $count_partner = count($node->field_tag_partner["$node->language"]); ?>
  <?php for ($i = 0; $i < $count_partner; $i++) { ?>
    <?php $mas_tag_partner[$i] = $node->field_tag_partner["$node->language"][$i]['tid'] ?>
  <?php } ?>
<?php } ?>

<?php //Загрузка всех нод с типом Событие ?>
<?php
  $query = new EntityFieldQuery();
  $entities = $query->entityCondition('entity_type', 'node')
  ->propertyCondition('type', '_event')
  ->propertyCondition('status', 1)
  ->execute();
  if (!empty($entities['node'])) {
    foreach ($entities['node'] as $key => $val) {
      $nodemas[] = node_load($val->nid);
    }
  }
?>

<?php //Сравнение тегов Нужд и Событий и загрузка нужных событий ?>

<div class ="needEvent">
<?php
  foreach ($nodemas as $key => $value1) { 
    $mas_tag_event_need = $value1->field_tag_block_need[$node->language];
    foreach ($mas_tag_event_need as $key2 => $value2) {
      if (in_array($value2['tid'], $mas_tag_need)) {
        $node1 = node_load($value1->nid);
        $rendered_node = node_view($node1, 'teaser', NULL);
        print drupal_render($rendered_node);
        break;?>
<?php
      }
    }
  }
?>
</div>

<?php //Сравнение тегов Подопечных и Событий и загрузка нужных событий ?>

<div class ="protegeEvent">
<?php
  foreach ($nodemas as $key => $value1) {
    $mas_tag_event_protege = $value1->field_tag_block_protege[$node->language];
    foreach ($mas_tag_event_protege as $key2 => $value2) {
      if (in_array($value2['tid'], $mas_tag_protege)) {
        $node1 = node_load($value1->nid);
        $rendered_node = node_view($node1, 'teaser', NULL);
        print drupal_render($rendered_node);
        break;
      }
    }
  }
?>
</div>

<?php //Сравнение тегов Проектов и Событий и загрузка нужных событий ?>

<div class ="projectEvent">
<?php
  foreach ($nodemas as $key => $value1) {
    $mas_tag_event_project = $value1->field_tag_block_project[$node->language];
    foreach ($mas_tag_event_project as $key2 => $value2) {
      if (in_array($value2['tid'], $mas_tag_project)) {
        $node1 = node_load($value1->nid);
        $rendered_node = node_view($node1, 'teaser', NULL);
        print drupal_render($rendered_node);
        break;?>
<?php
      }
    }
  }
?>
</div>

<?php //Сравнение тегов Партнеров и Событий и загрузка нужных событий ?>

<div class ="partnerEvent">
<?php
  foreach ($nodemas as $key => $value1) { 
    $mas_tag_event_partner = $value1->field_tag_block_partner[$node->language];
    foreach ($mas_tag_event_partner as $key2 => $value2) {
      if (in_array($value2['tid'], $mas_tag_partner)) {
        $node1 = node_load($value1->nid);
        $rendered_node = node_view($node1, 'teaser', NULL);
        print drupal_render($rendered_node);
        break;?>
<?php
      }
    }
  }
?>
</div>

<?php //Загрузка всех нод с типом Нужды ?>
<?php
  $nodeneedmas = array();
  $nodeprotegemas = array();
  
  $query = new EntityFieldQuery();
  
  $terms_need = array();
  $terms_need['0'] = taxonomy_get_term_by_name('1. SOS');
  $terms_need['1'] = taxonomy_get_term_by_name('2. Актуальные нужды');
  foreach($terms_need as $k => $v) {
    foreach ($v as $key12 => $val12) {
      $mas[] = $key12;
    }
  }

  $entities = $query->entityCondition('entity_type', 'node')
  ->propertyCondition('type', '_need')
  ->propertyCondition('status', 1)
  ->fieldCondition('field_category_need','tid', $mas, 'IN')
  ->execute();
  if (!empty($entities['node'])) {
    foreach ($entities['node'] as $key => $val) {
      $nodeneedmas[] = node_load($val->nid);
    }
  }
?>

<?php if($node->type == "_project") {
  $node_project_nid = $node->nid;?>
<div class ="needProject">
<?php
    foreach ($nodeneedmas as $key => $value1) {
    $mas_need_project = $value1->field_project[$node->language];
    foreach ($mas_need_project as $key2 => $value2) {
      if ($node_project_nid == $value2['nid']) {
        $nodeNeed = node_load($value1->nid);
        $rendered_node = node_view($nodeNeed, 'teaser', NULL);
        print drupal_render($rendered_node);
      }
    }
  }?>
</div>
<?php
} ?>

<?php //Загрузка всех нод с типом Подопечнные ?>
<?php
  $query = new EntityFieldQuery();
  $entities = $query->entityCondition('entity_type', 'node')
  ->propertyCondition('type', '_protege')
  ->execute();
  if (!empty($entities['node'])) {
    foreach ($entities['node'] as $key => $val) {
      $nodeprotegemas[] = node_load($val->nid);
    }
  }
?>

<?php if($node->type == "_project") {
?>
<div class ="protegeProject">
<?php
    foreach ($nodeprotegemas as $key => $value1) {
    $mas_protege_project = $value1->field_projects[$node->language];
    foreach ($mas_protege_project as $key2 => $value2) {
      if ($node_project_nid == $value2['nid']) {
        $nodeProt = node_load($value1->nid);
        $rendered_node = node_view($nodeProt, 'teaser', NULL);
        print drupal_render($rendered_node);
        break;
      }
    }
  }?>
</div>
<?php
}