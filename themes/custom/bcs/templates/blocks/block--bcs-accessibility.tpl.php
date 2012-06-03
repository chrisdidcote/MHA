<div<?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <div<?php print $title_attributes; ?>><?php print $block->subject; ?></div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  
    <?php print $content ?>
</div>