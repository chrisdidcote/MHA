<table border="0" cellpadding="0" cellspacing="0" width="580" id="node-<?php print $node->nid; ?>">
  <tr>
    <td align="center" valign="top" width="10%" class="group-left">
      <?php print $left_side; ?>
    </td>
    <td align="left" valign="top" width="90%" class="group-right">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h3<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h3>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <strong><?php print render($line_one); ?></strong>
      <?php print render($line_two); ?>
    </td>
  </tr>
</table>