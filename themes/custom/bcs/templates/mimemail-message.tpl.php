<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
  <?php endif; ?>
  <title></title>
</head>

<body leftmargin="0" marginwidth="0" topmargin="0" marginheight="0" offset="0">
  <center>
    <table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%" id="backgroundTable">
      <tr>
        <td align="center" valign="top">
          <table border="0" cellpadding="0" cellspacing="0" width="600" id="templateContainer">
            <tr>
              <td align="center" valign="top">
                <!-- // Begin Template Header \\ -->
                <table border="0" cellpadding="0" cellspacing="0" width="600" id="templateHeader">
                  <tr>
                    <td class="headerContent" style="text-align: left">

                      <!-- // Begin Module: Standard Header Image \\ -->
                      <img src="<?php print $logo; ?>" style="max-width:600px;" id="headerImage campaign-icon">
                      <!-- // End Module: Standard Header Image \\ -->
                    </td>
                  </tr>
                  <tr>
                    <td id="subject">
                      <?php if (!empty($bcs_title)): ?>
                      <table border="0" cellpadding="0" cellspacing="0" width="600" id="subjectInner">
                        <tr>
                          <td align="center" valign="top">
                            <h1><?php print $bcs_title; ?></h1>
                          </td>
                        </tr>
                      </table>
                      <?php endif; ?>
                    </td>
                  </tr>
                </table>
                <!-- // End Template Header \\ -->
              </td>
            </tr>
            <tr>
              <td align="center" valign="top">
                <!-- // Begin Template Body \\ -->
                <table border="0" cellpadding="0" cellspacing="0" width="600" id="templateBody">
                  <tr>
                    <td valign="top" class="bodyContent">
                      <!-- // Begin Module: Standard Content \\ -->
                      <table border="0" cellpadding="10" cellspacing="0" width="100%" id="main">
                        <tr>
                          <td valign="top">
                              <?php print $body ?>
                          </td>
                        </tr>
                      </table>
                      <!-- // End Module: Standard Content \\ -->
                    </td>
                  </tr>
                </table>
                <!-- // End Template Body \\ -->
              </td>
            </tr>
            <tr>
              <td align="center" valign="top">
                <!-- // Begin Template Footer \\ -->
                <table border="0" cellpadding="20" cellspacing="0" width="600" id="templateFooter">
                  <tr>
                    <td valign="top" class="footerContent">

                      <!-- // Begin Module: Standard Footer \\ -->
                      <?php if (!empty($bcs_footer_title) || !empty($bcs_footer)): ?>
                      <table border="0" cellpadding="0" cellspacing="0" width="100%">
                        <tr>
                          <td colspan="2" valign="middle" id="legal">
                            <?php if (!empty($bcs_footer_title)): ?>
                            <div style="text-align: left; "> <strong><?php print $bcs_footer_title; ?></strong>
                            </div>
                            <?php endif; ?>
                            <?php if (!empty($bcs_footer)): ?>
                            <?php foreach (explode("\n", $bcs_footer) as $bcs_footer_line): ?>
                              <div style="text-align: left; ">
                                <?php print $bcs_footer_line; ?>
                              </div>
                            <?php endforeach; ?>
                            <?php endif; ?>
                          </td>
                        </tr>
                      </table>
                      <?php endif; ?>
                      <!-- // End Module: Standard Footer \\ -->
                    </td>
                  </tr>
                </table>
                <!-- // End Template Footer \\ -->
              </td>
            </tr>
          </table>
          <br></td>
      </tr>
    </table>
  </center>
</body>
</html>
