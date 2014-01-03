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
projects[admin_menu][version] = "3.0-rc4"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.1"

projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta3"

projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta3"

projects[block_class][subdir] = "contrib"
projects[block_class][download][type] = "git"
projects[block_class][download][url] = "git://git.drupal.org/project/block_class.git"
projects[block_class][download][revision] = "b0959d085e2b978277504bcd33b8363f7e86bff9"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.1"

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.0-beta2"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "2.5"

projects[content_access][subdir] = "contrib"
projects[content_access][version] = "1.2-beta2"

projects[context][subdir] = "contrib"
projects[context][version] = "3.1"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.3"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[devel][subdir] = "development"
projects[devel][version] = "1.0"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0-beta2"

projects[email][subdir] = "contrib"
projects[email][version] = "1.0-beta1"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.2"

projects[fboauth][subdir] = "contrib"
projects[fboauth][version] = "1.5"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha8"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.0"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.8"

projects[galleryformatter][subdir] = "contrib"
projects[galleryformatter][version] = "1.2"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.2"

projects[hint][subdir] = "contrib"
projects[hint][version] = "1.2"
projects[hint][patch][] = "http://drupal.org/files/issues/hint-multiple-hints.patch"

projects[imagefield_crop][subdir] = "contrib"
projects[imagefield_crop][version] = "1.1"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_colorpicker][subdir] = "contrib"
projects[jquery_colorpicker][version] = "1.0-beta2"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-alpha3"

projects[maillog][subdir] = "development"
projects[maillog][download][type] = "git"
projects[maillog][download][url] = "git://git.drupal.org/project/maillog.git"
projects[maillog][download][revision] = "09367219c3c1f4b7ec174438b457ae1e3813d49e"
projects[maillog][patch][] = "http://drupal.org/files/issues/d7-port-hook_theme-1107988-10-no-prefix.patch"
projects[maillog][patch][] = "http://drupal.org/files/issues/maillog-format-body-no-prefix.patch"

projects[media][subdir] = "contrib"
projects[media][version] = "1.2"

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = "1.0-beta3"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.3"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.0-beta1"

projects[oauth][subdir] = "contrib"
projects[oauth][version] = "3.0"

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"

projects[onecomment][subdir] = "contrib"
projects[onecomment][download][type] = "git"
projects[onecomment][download][url] = "git://git.drupal.org/project/onecomment.git"
projects[onecomment][download][revision] = "0eaf6bb8a19c6376a44b9fea393123cb3d1ef95c"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.3"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[plup][subdir] = "contrib"
projects[plup][version] = "1.0-alpha1"

projects[quicktabs][subdir] = "contrib"
projects[quicktabs][version] = "3.6"

projects[realname][subdir] = "contrib"
projects[realname][version] = "1.1"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = "1.7"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[references][subdir] = "contrib"
projects[references][download][type] = "git"
projects[references][download][url] = "git://git.drupal.org/project/references.git"
projects[references][download][revision] = "4e50d062f19328755ab32610c41acca3f4e7ac12"

projects[rpx][subdir] = "contrib"
projects[rpx][version] = "2.2"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.3"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[styles][subdir] = "contrib"
projects[styles][version] = "2.0-alpha8"

projects[token][subdir] = "contrib"
projects[token][version] = "1.3"

projects[twitter][subdir] = "contrib"
projects[twitter][version] = "5.8"

projects[varnish][subdir] = "contrib"
projects[varnish][type] = "module"
projects[varnish][download][type] = "git"
projects[varnish][download][url] = "git://git.drupal.org/project/varnish.git"
projects[varnish][download][revision] = "7ce48ffb1d5adc612406da8c3f1f79d65e504dbf"
projects[varnish][patch][] = "http://drupal.org/files/issues/varnish-drupal-7-upgrade-927860-3.patch"

projects[video_filter][subdir] = "contrib"
projects[video_filter][version] = "3.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[views_area_options][subdir] = "contrib"
projects[views_area_options][type] = "module"
projects[views_area_options][download][type] = "git"
projects[views_area_options][download][url] = "git://git.drupal.org/project/views_area_options.git"
projects[views_area_options][download][revision] = "b83068ccbb48a27f6530b024772586a73107b075"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = "3.0-beta6"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.1"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.19"

projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.1"

projects[widgets][subdir] = "contrib"
projects[widgets][version] = "1.0-rc1"

projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][version] = "1.1"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "git://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "fdd1be3d9d34898d073aaae5035655f13a3d958b"
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/624018-138-wysiwyg-entity-exportables.patch"

; Libraries
; ==============================================================================



; Themes
; ==============================================================================



