core = 7.x
api = 2

projects[drupal][type] = core

; Taxonomy terms disappear from node preview if previewed more than once
; see http://drupal.org/node/844388
projects[drupal][patch][] = "http://drupal.org/files/issues/844388-clone-node_1.patch"


projects[mha][type] = profile
projects[mha][download][type] = git
projects[mha][download][url] = git@github.com:chrisdidcote/MHA.git
projects[mha][download][branch] = master
