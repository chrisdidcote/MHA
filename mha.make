core = 7.x
api = 2

;*****************************************************
; HELLO MAKE FILE USERS
; Please use git:// protocol for drupal.git downloads
; (http:// doesn't work for some of us!)
;*****************************************************

; Contrib projects
; ==============================================================================

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc3"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.0"

projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta3"

projects[block_class][subdir] = "contrib"
projects[block_class][download][type] = "git"
projects[block_class][download][url] = "git://git.drupal.org/project/block_class.git"
projects[block_class][download][revision] = "b0959d085e2b978277504bcd33b8363f7e86bff9"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"
projects[boxes][patch][] = "http://drupal.org/files/issues/boxes.1154126.drushmake.patch"

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.0-beta2"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta3"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0"

projects[date][subdir] = "contrib"
projects[date][version] = "2.5"

projects[devel][subdir] = "development"
projects[devel][version] = "1.0"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0-beta2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.0-beta1"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-rc3"

projects[fboauth][subdir] = "contrib"
projects[fboauth][version] = "1.5"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-rc2"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.0"

projects[hint][subdir] = "contrib"
projects[hint][version] = "1.2"
projects[hint][patch][] = "http://drupal.org/files/issues/hint-multiple-hints.patch"

projects[jquery_colorpicker][subdir] = "contrib"
projects[jquery_colorpicker][version] = "1.0-beta2"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "1.0"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-alpha3"

projects[maillog][subdir] = "development"
projects[maillog][download][type] = "git"
projects[maillog][download][url] = "git://git.drupal.org/project/maillog.git"
projects[maillog][download][revision] = "09367219c3c1f4b7ec174438b457ae1e3813d49e"
projects[maillog][patch][] = "http://drupal.org/files/issues/d7-port-hook_theme-1107988-10-no-prefix.patch"
projects[maillog][patch][] = "http://drupal.org/files/issues/maillog-format-body-no-prefix.patch"

projects[media][subdir] = "contrib"
projects[media][version] = "1.1"

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = "1.0-beta3"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.0-beta1"

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"

projects[onecomment][subdir] = "contrib"
projects[onecomment][download][type] = "git"
projects[onecomment][download][url] = "git://git.drupal.org/project/onecomment.git"
projects[onecomment][download][revision] = "0eaf6bb8a19c6376a44b9fea393123cb3d1ef95c"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.2"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.1"

projects[quicktabs][subdir] = "contrib"
projects[quicktabs][version] = "3.4"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = "1.7"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-beta4"

projects[references][subdir] = "contrib"
projects[references][download][type] = "git"
projects[references][download][url] = "git://git.drupal.org/project/references.git"
projects[references][download][revision] = "4e50d062f19328755ab32610c41acca3f4e7ac12"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.0-beta2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-rc1"

projects[styles][subdir] = "contrib"
projects[styles][version] = "2.0-alpha8"

projects[token][subdir] = "contrib"
projects[token][version] = "1.0-beta2"

projects[varnish][subdir] = "contrib"
projects[varnish][type] = "module"
projects[varnish][download][type] = "git"
projects[varnish][download][url] = "git://git.drupal.org/project/varnish.git"
projects[varnish][download][revision] = "7ce48ffb1d5adc612406da8c3f1f79d65e504dbf"
projects[varnish][patch][] = "http://drupal.org/files/issues/varnish-drupal-7-upgrade-927860-3.patch"
projects[varnish][patch][] = "http://dl.dropbox.com/u/5359452/varnish-socket-timeout.patch"

projects[video_filter][subdir] = "contrib"
projects[video_filter][version] = "3.0-beta1"

projects[views][subdir] = "contrib"
projects[views][type] = "module"
projects[views][download][type] = "git"
projects[views][download][url] = "git://git.drupal.org/project/views.git"
projects[views][download][revision] = "32b8ef976430d92468782e2820b42cfba42210d0"
; This patch undoes a fix found at http://drupal.org/node/1205570 which is identified
; at http://drupal.org/node/1207680 as being the reason taxonomy filters are failing.
projects[views][patch][] = "http://dl.dropbox.com/u/1169608/views_1207680_no_valid_values_error_with_taxonomy_filter.patch"

projects[views_area_options][subdir] = "contrib"
projects[views_area_options][type] = "module"
projects[views_area_options][download][type] = "git"
projects[views_area_options][download][url] = "git://git.drupal.org/project/views_area_options.git"
projects[views_area_options][download][revision] = "b83068ccbb48a27f6530b024772586a73107b075"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = "3.0-beta5"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][type] = "module"
projects[views_slideshow][download][type] = "git"
projects[views_slideshow][download][url] = "git://git.drupal.org/project/views_slideshow.git"
projects[views_slideshow][download][revision] = "9a91a5f6459c324568b0146531b8303d02c4b651"

projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.1"

projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][version] = "1.1"
projects[workbench_moderation][patch][] = "http://drupal.org/files/1436260-disable-node-publish-unpublish-action.patch"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "git://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "fdd1be3d9d34898d073aaae5035655f13a3d958b"
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/624018-138-wysiwyg-entity-exportables.patch"

projects[amazon_ses][subdir] = "contrib"
projects[amazon_ses][download][type] = "git"
projects[amazon_ses][download][url] = "git://git.drupal.org/project/amazon_ses.git"
projects[amazon_ses][download][revision] = "30ed60df98420e1f068de6c87187e019c53dd0e7"

; Libraries
; ==============================================================================

libraries[Clusterer2][download][type] = "file"
libraries[Clusterer2][download][url] = "http://acme.com/javascript/Clusterer2.js"
libraries[Clusterer2][destination] = "modules/contrib/gmap/thirdparty"

libraries[facebook-php-sdk][download][type] = "git"
libraries[facebook-php-sdk][download][tag] = "v2.1.2"
libraries[facebook-php-sdk][download][url] = "https://github.com/facebook/php-sdk.git"

libraries[jcycle][download][type] = "file"
libraries[jcycle][download][url] = "http://malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.94"
libraries[jcycle][directory_name] = "jquery.cycle"

libraries[jquery_colorpicker][download][type] = "file"
libraries[jquery_colorpicker][download][url] = "http://www.eyecon.ro/colorpicker/colorpicker.zip"
libraries[jquery_colorpicker][destination] = "modules/contrib/jquery_colorpicker"
libraries[jquery_colorpicker][directory_name] = "colorpicker"

libraries[json2][download][type] = "file"
libraries[json2][download][url] = "http://dl.dropbox.com/u/1169608/douglascrockford-JSON-js-8e0b15c.tar.gz"

libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://cloud.github.com/downloads/tinymce/tinymce/tinymce_3.5.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][destination] = "/libraries/"

; Themes
; ==============================================================================
projects[omega][subdir] = "contrib"
projects[omega][type] = "theme"
projects[omega][version] = "3.1"


