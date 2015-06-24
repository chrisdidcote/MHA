(function ($) {
  Drupal.behaviors.mha_res = {
    attach: function (context, settings) {
      $("img").addClass( "img-responsive" );
      
      $("#edit-salutation").change(function () {
        if ($("#edit-salutation").val() == 'Other')
            $(".form-item-salutation-other").show();
        else
            $(".form-item-salutation-other").hide();
      });
      $('.dropdown-toggle').prop('disabled', true);
    }
  };


})(jQuery);