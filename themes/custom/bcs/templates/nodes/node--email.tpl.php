<div<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a><?php if ($comment_count > 0): ?>
      <span class="comments"><?php echo $speech_bubble . ' ' . $comment_count; ?></span>
    <?php endif; ?>
    </h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="picture"><?php print render($content['author_image']); ?></div>

  <div<?php print $content_attributes; ?>>
    <?php
      print render($content);
    ?>
  </div>

  <div class="submitted">By <?php print $name; ?></div>
</div>
