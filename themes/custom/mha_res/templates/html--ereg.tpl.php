<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">
  <meta name="viewport" content="initial-scale=1.0">
  <meta name="apple-mobile-web-app-capable" content="yes">
  <?php global $base_url; ?>
  <meta name="apple-mobile-web-app-status-bar-style" content="black">
  <link rel="apple-touch-icon" href="<?php print $base_url . '/' . path_to_theme();?>/images/apple/touch-icon-iphone.png">
  <link rel="apple-touch-icon" sizes="76x76" href="<?php print $base_url . '/' . path_to_theme();?>/images/apple/touch-icon-ipad.png">
  <link rel="apple-touch-icon" sizes="120x120" href="<?php print $base_url . '/' . path_to_theme();?>/images/apple/iphone-ret.png">
  <link rel="apple-touch-icon" sizes="152x152" href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/touch-icon-ipad-retina.png">
    
    
<!-- iPhone -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-320x460.png"
      media="(device-width: 320px) and (device-height: 480px)
         and (-webkit-device-pixel-ratio: 1)"
      rel="apple-touch-startup-image">
<!-- iPhone (Retina) -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-640x920.png"
      media="(device-width: 320px) and (device-height: 480px)
         and (-webkit-device-pixel-ratio: 2)"
      rel="apple-touch-startup-image">
<!-- iPhone 5 -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-640x1096.png"
      media="(device-width: 320px) and (device-height: 568px)
         and (-webkit-device-pixel-ratio: 2)"
      rel="apple-touch-startup-image">
<!-- iPad (portrait) -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-768x1004.png"
      media="(device-width: 768px) and (device-height: 1024px)
         and (orientation: portrait)
         and (-webkit-device-pixel-ratio: 1)"
      rel="apple-touch-startup-image">
<!-- iPad (landscape) -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-748x1024.png"
      media="(device-width: 768px) and (device-height: 1024px)
         and (orientation: landscape)
         and (-webkit-device-pixel-ratio: 1)"
      rel="apple-touch-startup-image">
<!-- iPad (Retina, portrait) -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-1536x2008.png"
      media="(device-width: 768px) and (device-height: 1024px)
         and (orientation: portrait)
         and (-webkit-device-pixel-ratio: 2)"
      rel="apple-touch-startup-image">
<!-- iPad (Retina, landscape) -->
<link href="<?php print $base_url . '/' .  path_to_theme();?>/images/apple/apple-touch-startup-image-1496x2048.png"
      media="(device-width: 768px) and (device-height: 1024px)
         and (orientation: landscape)
         and (-webkit-device-pixel-ratio: 2)"
      rel="apple-touch-startup-image">
    
  <!-- iPhone LAUNCHSCREEN-->
  <link href="includes/images/apple-launch-480h.png" sizes="320x480" media="(device-height: 480px)" rel="apple-touch-startup-image">
  <!-- iPhone (Retina) LAUNCHSCREEN-->
  <link href="includes/images/apple-launch-480h2X.png" sizes="640x920" media="(device-height: 480px) and (-webkit-device-pixel-ratio: 2)" rel="apple-touch-startup-image">
  <!-- iPhone 5+ LAUNCHSCREEN-->
  <link href="includes/images/apple-launch-568h.png" sizes="640x1136" media="(device-height: 568px)" rel="apple-touch-startup-image">
  
  <?php print $head; ?>
  <title>eRegistration</title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page; ?>
</body>
</html>
