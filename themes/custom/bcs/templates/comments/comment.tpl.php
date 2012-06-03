<div class=<?php print 'comment-'.$zebra;?>>
  <article<?php print $attributes;  ?>>
    <div class="pre-header">
      <div class="comment-number">
        <?php print $id.'.'; ?>
      </div>
    </div>
    <div class="comment-body">
      <header>
        <?php print render($content['author_teaser']); ?>
        <div class="comment-submitted">
         <?php
            print t('!username said on !datetime',
            array('!username' => $author, '!datetime' => '<time datetime="' . $datetime . '">' . $created . '</time>'));
          ?>
        </div>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h3<?php print $title_attributes; ?>><?php print $title ?></h3>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if (!empty($unpublished)): ?>
          <em class="unpublished"><?php print $unpublished; ?></em>
        <?php endif; ?>
      </header>

      <div<?php print $content_attributes; ?>>
        <?php
          hide($content['links']);
          print render($content);
        ?>
      </div>

      <?php if ($signature): ?>
        <div class="user-signature"><?php print $signature ?></div>
      <?php endif; ?>

      <?php if (!empty($content['links'])): ?>
        <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
      <?php endif; ?>
    </div>
  </article>
</div>