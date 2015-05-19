(function ($) {
  Drupal.behaviors.mha_res = {
    attach: function (context, settings) {
      $("img").addClass( "img-responsive" );
    }
  };


})(jQuery);