<?php
/**
 * @file
 * mha_permission.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mha_permission_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_membership_log_entry';
  $strongarm->value = 0;
  $export['comment_anonymous_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_membership_log_entry';
  $strongarm->value = 1;
  $export['comment_default_mode_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_membership_log_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_membership_log_entry';
  $strongarm->value = 1;
  $export['comment_form_location_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_membership_log_entry';
  $strongarm->value = '1';
  $export['comment_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_membership_log_entry';
  $strongarm->value = '1';
  $export['comment_preview_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_membership_log_entry';
  $strongarm->value = 1;
  $export['comment_subject_field_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__membership_log_entry';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_api_key';
  $strongarm->value = '5b6827b67bcfdcdb934e0894f0fd01e2-us3';
  $export['mailchimp_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_batch_limit';
  $strongarm->value = '100';
  $export['mailchimp_batch_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_cron';
  $strongarm->value = 1;
  $export['mailchimp_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailsystem_theme';
  $strongarm->value = 'current';
  $export['mailsystem_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MandrillMailSystem',
    'mandrill_test' => 'MandrillMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_analytics_campaign';
  $strongarm->value = '';
  $export['mandrill_analytics_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_analytics_domains';
  $strongarm->value = '';
  $export['mandrill_analytics_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_api_key';
  $strongarm->value = '0rWOsaPS1L16OeOmcEoGyQ';
  $export['mandrill_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_batch_log_queued';
  $strongarm->value = 1;
  $export['mandrill_batch_log_queued'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_filter_format';
  $strongarm->value = 'full_html';
  $export['mandrill_filter_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_from';
  $strongarm->value = 'chris.didcote@manorhallassociation.co.uk';
  $export['mandrill_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_from_name';
  $strongarm->value = 'Manor Hall Association';
  $export['mandrill_from_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_log_defaulted_sends';
  $strongarm->value = 0;
  $export['mandrill_log_defaulted_sends'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_mail_key_blacklist';
  $strongarm->value = 'user_password_reset';
  $export['mandrill_mail_key_blacklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_process_async';
  $strongarm->value = 0;
  $export['mandrill_process_async'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_queue_worker_timeout';
  $strongarm->value = '15';
  $export['mandrill_queue_worker_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_track_clicks';
  $strongarm->value = 1;
  $export['mandrill_track_clicks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_track_opens';
  $strongarm->value = 1;
  $export['mandrill_track_opens'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mandrill_url_strip_qs';
  $strongarm->value = 0;
  $export['mandrill_url_strip_qs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_membership_log_entry';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_membership_log_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_application';
  $strongarm->value = 'Dear !title !surname,

Thank you for your recent application for membership of the Manor Hall Association. If you have opted to pay online you will receive another email shortly to let you know that the payment has been successful. It is also possible, for those who would prefer, to pay by cheque or bank transfer. Cheques should be made payable to \'Manor Hall Association\' and sent to:

The Treasurer
Manor Hall Association
Manor Hall
Lower Clifton Hill
Bristol, BS8 1BU

Bank transfer can be made using the following details (please be sure to include the correct reference so we have a record of your payment):

Account Number: 12345678
Sort Code: 12-34-56
Reference: !reference
 
If you opt to use one of these methods of payment it would be helpful if you could reply to this email to let us know payment is on it\'s way.

Once your payment has been received your application will be put before the next meeting of the Executive Committee just to verify your detail after which we\'ll email you to let you know your membership is now fully active. Your membership period will be three years from the date of final approval.

If you have any questions please don\'t hesitate to get in touch.

With very best wishes,

Kieran Freear
<strong>Membership Secretary</strong>';
  $export['mha_permission_application'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_approval';
  $strongarm->value = 'Dear !realname,

Thank you for your recent application to join the Manor Hall Association. As required by our constitution I am emailing to confirm that your application has now been approved by the Executive Committee and as such you are now a !class member of the Association.

Your membership will expire on !date and you can update your contact details at anytime by either emailing the Membership Secretary or loggin into our website. Likewise, if you would like to contribute anything towards any of our newsletters or an article for our website then please do get in touch.

With very best wishes,

Kieran Freear
<strong>Membership Secretary</strong>';
  $export['mha_permission_approval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_cost';
  $strongarm->value = '20';
  $export['mha_permission_cost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_duration';
  $strongarm->value = '3';
  $export['mha_permission_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_email';
  $strongarm->value = 'payments@manorhallassociation.co.uk';
  $export['mha_permission_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_introduction';
  $strongarm->value = 'Please ensure your details are correct being proceeding.';
  $export['mha_permission_introduction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_payment_application';
  $strongarm->value = 'Dear !title !surname,

This is to confirm that your payment has been successfully and your application is now ready to be approved by the Executive Committee at our next meeting. This process is just to fulfil the requirements laid down in our constitution to make sure you are eligible for the class of membership you have applied for. Once this has been approved you will receive a final confirmation email along with instruction on how you can log in to our website to make sure the details we hold about you are up-to-date.

Thank you for your application and we\'ll be in touch shortly with the final confirmation.

With very best wishes,

Kieran Freear
<strong>Membership Secretary</strong>';
  $export['mha_permission_payment_application'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_paypal_email';
  $strongarm->value = 'vice-chairman@manorhallassociation.co.uk';
  $export['mha_permission_paypal_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_renewal';
  $strongarm->value = 'Dear !realname,

According to our records your current membership of the Manor Hall Association is due to lapse on !date. We very much hope you will want to continue your membership of the Association and as such I am emailing to give you a little more information on how you can do so.

Members are now able to manage their membership online via our website and you can visit !link and login using your email address and password, once logged in you will see a link that will allow you to renew your membership. If you have forgotten your password then simply request a new one using the \'Request New Password\' link on the login screen.

It is also possible to pay by cheque or bank transfer if you would prefer. Cheques should be made payable to \'Manor Hall Association\' and sent to:

The Treasurer
Manor Hall Association
Manor Hall
Lower Clifton Hill
Bristol, BS8 1BU

Bank transfer can be made using the following details (please be sure to include the correct reference so we have a record of your payment):

Account Number: 12345678
Sort Code: 12-34-56
Reference: !reference

As well as providing members concessionary rates to an ever growing number of events throughout the year our members also allow us to continue the work we doing trying to keep Manorites connected and looking after the interests of the Hall in the Convocation of the University, so we very much hope you will consider renewing your membership.

If you would like any further information or assistance on how best to pay for your next three year membership period then please do get in touch by replying to this email and we\'ll be happy to help.

With very best wishes,

Kieran Freear
<strong>Membership Secretary</strong>';
  $export['mha_permission_renewal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mha_permission_return';
  $strongarm->value = 'www.manorhallassociation.co.uk';
  $export['mha_permission_return'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_membership_log_entry';
  $strongarm->value = array();
  $export['node_options_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_membership_log_entry';
  $strongarm->value = '0';
  $export['node_preview_membership_log_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_membership_log_entry';
  $strongarm->value = 1;
  $export['node_submitted_membership_log_entry'] = $strongarm;

  return $export;
}
