<?php
/**
 * @file views-view.tpl.php
 * Main view template, designed for emailing.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%" class="<?php print $classes; ?>">

  <?php if ($title): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-title">
        <?php print render($title_prefix); ?>
          <?php print $title; ?>
        <?php print render($title_suffix); ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($header): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-header">
        <?php print $header; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($attachment_before): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="attachment attachment-before">
        <?php print $attachment_before; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($rows): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-content">
        <?php print $rows; ?>
      </td>
    </tr>
  <?php elseif ($empty): ?>
    <td align="left" valign="top" width="100%" class="view-empty">
      <?php print $empty; ?>
    </td>
  <?php endif; ?>
  
  <?php if ($pager): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-pager">
        <?php print $pager; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($attachment_after): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="attachment attachment-after">
        <?php print $attachment_after; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($more): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-more">
        <?php print $more; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($footer): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="view-footer">
        <?php print $footer; ?>
      </td>
    </tr>
  <?php endif; ?>
  
  <?php if ($feed_icon): ?>
    <tr>
      <td align="left" valign="top" width="100%" class="feed-icon">
        <?php print $feed_icon; ?>
      </td>
    </tr>
  <?php endif; ?>
</table><?php /* class view */ ?>
