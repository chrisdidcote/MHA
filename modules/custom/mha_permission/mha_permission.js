(function ($) {

  Drupal.behaviors.mha_permission = {
    attach: function (context, settings) {
      //We hide or show the fields on page load using JS so that it degrades gracefully
      if($('#mha-permission-join-form #edit-personal-details-salutation').val() == 'Other'){
        $('#mha-permission-join-form .form-item-personal-details-salutation-other').show();
      }
      else{
        $('#mha-permission-join-form .form-item-personal-details-salutation-other').hide();
      }
      
      //Show the Other saluation field if Other is selected
      $("#mha-permission-join-form #edit-personal-details-salutation").change( function() {
        if($(this).val() == 'Other'){
          $('#mha-permission-join-form .form-item-personal-details-salutation-other').slideDown('slow');
        }
        else{
          $('#mha-permission-join-form .form-item-personal-details-salutation-other').slideUp('slow');
        }
      });
      
      //We hide or show the fields on page load using JS so that it degrades gracefully
      switch ($('#mha-permission-join-form #edit-membership-details-class').val()) {
        case 'none' :
          $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
          $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
          $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
          break;
        case 'student' :
          $('#mha-permission-join-form .form-item-membership-details-current-student').slideDown('slow');
          $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
          $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
          break;
        case 'full' :
          $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
          $('#mha-permission-join-form .form-item-membership-details-years-in-hall').slideDown('slow');
          $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
          break;
        case 'affiliate' :
          $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
          $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
          $('#mha-permission-join-form .form-item-membership-details-affiliation').slideDown('slow');
          break;
      }
      
      $("#mha-permission-join-form #edit-membership-details-class").change( function() {
        switch ($('#mha-permission-join-form #edit-membership-details-class').val()) {
          case 'none' :
            $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
            $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
            $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
            break;
          case 'student' :
            $('#mha-permission-join-form .form-item-membership-details-current-student').slideDown('slow');
            $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
            $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
            break;
          case 'full' :
            $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
            $('#mha-permission-join-form .form-item-membership-details-years-in-hall').slideDown('slow');
            $('#mha-permission-join-form .form-item-membership-details-affiliation').hide();
            break;
          case 'affiliate' :
            $('#mha-permission-join-form .form-item-membership-details-current-student').hide();
            $('#mha-permission-join-form .form-item-membership-details-years-in-hall').hide();
            $('#mha-permission-join-form .form-item-membership-details-affiliation').slideDown('slow');
            break;
        } 
      });
    }
  };

})(jQuery);