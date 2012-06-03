<?php
// This is really nasty way to wrap the search block and login masthead
// information in a wrapping div. It is closed in the template file for the user
// block in the masthead.
?>
<!-- Opening masthead tag -->
<div class="masthead-group">
  <div<?php print $attributes; ?>>
      <?php print $content ?>
  </div>
<?php if (!user_is_logged_in()): ?>
</div>
<!-- / Closing masthead tag -->
<?php endif; ?>