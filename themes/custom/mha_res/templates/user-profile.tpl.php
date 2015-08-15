<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>
<div class="profile"<?php print $attributes; ?>>
  <?php //print_r ($user_profile); ?>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12">
        <div class="row"> <!-- @TODO: Add extra classes -->
          <div class="col-md-3">
            <?php print render ($user_profile['field_profile_picture']); ?>
          </div>
          <div class="col-md-5">
            <?php if(render ($user_profile['field_biography'])): ?>
              <h2>Biography</h2>
              <?php print render ($user_profile['field_biography']); ?>
            <?php endif; ?>
            <div class="container-fluid">
              <div class="row">
                <div class="col-md-12">
                  <div class="row"> <!-- @TODO: Add extra classes -->
                    <div class="col-md-6">
                      <h2>Address</h2>
                      <?php print render ($user_profile['field_address_1']) . '<br />' ? render ($user_profile['field_address_1']) : ''?> 
                      <?php print render ($user_profile['field_address_2']) . '<br />' ? render ($user_profile['field_address_2']) : ''?> 
                      <?php print render ($user_profile['field_town']) . '<br />' ? render ($user_profile['field_town']) : ''?>
                      <?php print render ($user_profile['field_county']) . '<br />' ? render ($user_profile['field_county']) : ''?>
                      <?php print render ($user_profile['field_post_code']) . '<br />' ? render ($user_profile['field_post_code']) : ''?>
                      <?php print render ($user_profile['field_country']) . '<br />' ? render ($user_profile['field_country']) : ''?>
                    </div>
                    <div class="col-md-6">
                      <h2>Telephone Number</h2>
                      <?php print render ($user_profile['field_phone_number']) . '<br />' ? render ($user_profile['field_phone_number']) : 'None Provided'?>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="col-md-3">
            <h2>Membership Details</h2>
            <?php print render ($user_profile['field_membership_class']) . '<br />' ? render ($user_profile['field_membership_class']) : ''?>
            <?php print render ($user_profile['field_years_in_hall']) . '<br />' ? render ($user_profile['field_years_in_hall']) : ''?>
            <?php print render ($user_profile['field_affiliation_to_hall']) . '<br />' ? render ($user_profile['field_affiliation_to_hall']) : ''?>
            <?php print render ($user_profile['field_expected_date_of_completio']) . '<br />' ? render ($user_profile['field_expected_date_of_completio']) : ''?>
            <h2 class="user-expiry">Membership Expiry Date</h2>
            <?php print render ($user_profile['field_expiry_']) . '<br />' ? render ($user_profile['field_expiry_']) : ''?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
