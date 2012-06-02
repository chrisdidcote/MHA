core = 7.x
api = 2

projects[drupal][type] = core

; Taxonomy terms disappear from node preview if previewed more than once
; see http://drupal.org/node/844388
projects[drupal][patch][] = "http://drupal.org/files/issues/844388-clone-node_1.patch"


projects[my_conservatives][type] = profile
projects[my_conservatives][download][type] = git
projects[my_conservatives][download][url] = git@github.com:computerminds/my_conservatives.git
projects[my_conservatives][download][branch] = master
