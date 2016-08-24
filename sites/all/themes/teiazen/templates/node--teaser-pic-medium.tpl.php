<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<div class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render(field_view_field('node', $node, 'field_title_image', array('label' => 'hidden', 'type' => 'file_rendered'))); ?>

  <a href="<?php print $node_url; ?>"><h3 class="field-title-field"><?php print $title; ?></h3></a>

</div>

