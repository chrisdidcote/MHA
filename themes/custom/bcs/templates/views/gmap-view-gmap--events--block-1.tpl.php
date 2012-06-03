<?php
/**
 * @file gmap-view-gmap.tpl.php
 * Default view template for a gmap.
 *
 * - $map contains a themed map object.
 * - $map_object contains an unthemed map object.
 * - $search_form contains our custom search form
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php print $map; ?>