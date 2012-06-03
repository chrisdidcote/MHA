<div class="panel-display omega-grid bcs-layout-homepage clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-9">
    <div class="inside"><?php print $content['top_left']; ?></div>
  </div>
  <div class="panel-panel grid-3">
    <div class="inside"><?php print $content['top_right']; ?></div>
  </div>
</div>
<div class="panel-display omega-grid bcs-layout-homepage clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-8">
    <div class="inside"><?php print $content['bottom_left']; ?></div>
    <div class="inside">
      <div class="panel-display omega-grid clearfix">
        <?php print $content['bottom_left_under']; ?>
      </div>
    </div>
  </div>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['bottom_right']; ?></div>
  </div>
</div>
