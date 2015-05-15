<?php
/**
 * @file
 * This is a template file for a pop-up prompting user to give their consent for
 * the website to set cookies.
 *
 * When overriding this template it is important to note that jQuery will use
 * the following classes to assign actions to buttons:
 *
 * agree-button      - agree to setting cookies
 * find-more-button  - link to an information page
 *
 * Variables available:
 * - $message:  Contains the text that will be display whithin the pop-up
 * - $link:     Contains a link to an information page (not used in the original
 *              template as JQuery redirects to the information page on clinking
 *              the find-more button. $link is available though in case you want
 *              to overrride the template and display the link another way.
 */
?>

<div>
  <div class ="popup-content info">
    <div id="popup-text">
      <?php print $message ?>
    </div>
    <div id="popup-buttons">
      <div class="cookie-button-row"><div class="cookie-button close"><?php print t('Close')?></div><?php print t('Set a temporary cookie for this visit only')?></div>
      <div class="cookie-button-row"><div class="cookie-button accept"><?php print t('Accept')?></div><?php print t('Remember my decision with a permanent cookie')?></div>
    </div>
  </div>
</div>
