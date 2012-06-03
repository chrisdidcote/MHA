<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <?php if (!empty($block_section_title)): ?>
    <span class="block-section-title"><?php print render($block_section_title) ;?></span>
  <?php endif; ?>
  <div class="block-inner clearfix">
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <<?php print $title_tag; ?><?php print $title_attributes; ?>><?php print $block->subject; ?></<?php print $title_tag; ?>>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <div<?php print $content_attributes; ?>>
      <?php print $content ?>
    </div>
  </div>
</<?php print $tag; ?>>