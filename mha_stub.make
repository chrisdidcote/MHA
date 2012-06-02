core = 7.x
api = 2

projects[drupal][type] = core

; Content rendered via AJAX does not respect stylesheets removed in .info files
; see http://drupal.org/node/967166
projects[drupal][patch][] = "http://drupal.org/files/issues/967166-ajax-css-3.patch"

; Object of class stdClass could not be converted to int in _menu_router_build()
; see http://drupal.org/node/972536
projects[drupal][patch][] = "http://drupal.org/files/issues/972536-24.patch"

; Taxonomy terms disappear from node preview if previewed more than once
; see http://drupal.org/node/844388
projects[drupal][patch][] = "http://drupal.org/files/issues/844388-clone-node_1.patch"


projects[my_conservatives][type] = profile
projects[my_conservatives][download][type] = git
projects[my_conservatives][download][url] = git@github.com:computerminds/my_conservatives.git
projects[my_conservatives][download][branch] = master
