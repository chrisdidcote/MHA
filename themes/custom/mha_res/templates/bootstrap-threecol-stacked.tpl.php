<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12">
        <?php print $content['top']; ?>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['left'] || $content['middle'] || $content['right']): ?>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12">
        <div class="row"> <!-- @TODO: Add extra classes -->
          <div class="col-md-4">
            <?php print $content['left']; ?>
          </div>
          <div class="col-md-4">
            <?php print $content['middle']; ?>
          </div>
          <div class="col-md-4">
            <?php print $content['right']; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>
