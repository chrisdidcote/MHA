<?php
/**
 * @file
 * mha_permission.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mha_permission_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin
  $menu_links['management:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: management:membership/emails
  $menu_links['management:membership/emails'] = array(
    'menu_name' => 'management',
    'link_path' => 'membership/emails',
    'router_path' => 'membership/emails',
    'link_title' => 'Membership Emails',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'membership/home',
  );
  // Exported menu link: management:membership/home
  $menu_links['management:membership/home'] = array(
    'menu_name' => 'management',
    'link_path' => 'membership/home',
    'router_path' => 'membership/home',
    'link_title' => 'Membership Admin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:membership/mailing-labels
  $menu_links['management:membership/mailing-labels'] = array(
    'menu_name' => 'management',
    'link_path' => 'membership/mailing-labels',
    'router_path' => 'membership/mailing-labels',
    'link_title' => 'Generate Mailing Labels',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'membership/home',
  );
  // Exported menu link: management:membership/register
  $menu_links['management:membership/register'] = array(
    'menu_name' => 'management',
    'link_path' => 'membership/register',
    'router_path' => 'membership/register',
    'link_title' => 'Generate Full Member Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'membership/home',
  );
  // Exported menu link: menu-membership-administration:admin/people/create
  $menu_links['menu-membership-administration:admin/people/create'] = array(
    'menu_name' => 'menu-membership-administration',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Manually Add Member',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-membership-administration:membership/register
  $menu_links['menu-membership-administration:membership/register'] = array(
    'menu_name' => 'menu-membership-administration',
    'link_path' => 'membership/register',
    'router_path' => 'membership/register',
    'link_title' => 'Generate Full Member Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Generate Full Member Register');
  t('Generate Mailing Labels');
  t('Manually Add Member');
  t('Membership Admin');
  t('Membership Emails');


  return $menu_links;
}
