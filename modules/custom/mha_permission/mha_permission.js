(function ($) {

  Drupal.behaviors.mha_permission = {
    attach: function (context, settings) {
      //Initialise using JS so it degrades gracefully
      $('#edit-grade-full').hide();
      $('#edit-grade-affiliate').hide();
      $('#edit-student-fields').hide();
      $("#mha-permission-membership-apply-form .form-item-grade select").change( function() {
        $membership = $(this).val();
        
        if($membership == 'Full'){ //Full
          $('#edit-grade-full').slideDown('slow');
          $('#edit-grade-affiliate').hide();
        }
        
        if($membership == 'Affiliate'){ //Associate
          $('#edit-grade-affiliate').slideDown('slow');
          $('#edit-grade-full').hide();
        }
      });
      
      $("#mha-permission-membership-apply-form .form-item-student select").change( function() {
        $student = $(this).val();
        
        if($student == 0){ 
          $('#edit-student-fields').slideDown('slow');
        }
        
        if($student == 1){ //No
          $('#edit-student-fields').slideUp();
        }
      });
    }
  };

})(jQuery);