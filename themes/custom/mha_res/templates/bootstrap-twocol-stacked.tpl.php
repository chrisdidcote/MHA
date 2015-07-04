<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row">
    <?php print $content['top']; ?>
  </div>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12">
        <div class="row"> <!-- @TODO: Add extra classes -->
          <div class="col-md-6">
            <?php print $content['left']; ?>
          </div>
          <div class="col-md-6">
            <?php print $content['right']; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="row">
    <?php print $content['bottom']; ?>
  </div>
</div>
