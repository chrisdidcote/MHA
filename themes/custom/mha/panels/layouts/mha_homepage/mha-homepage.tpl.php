<div class="panel-display omega-grid bcs-layout-homepage clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-12">
    <div class="inside"><?php print $content['top_left']; ?></div>
  </div>
</div>
<div class="panel-display omega-grid bcs-layout-homepage clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['bottom_left']; ?></div>
  </div>

  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['bottom_right']; ?></div>
  </div>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['top_right']; ?></div>
  </div>
</div>
