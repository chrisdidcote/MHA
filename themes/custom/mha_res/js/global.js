(function ($) {
  Drupal.behaviors.mha_res = {
    attach: function (context, settings) {
      $("img").addClass( "img-responsive" );
      $("#block-system-main-menu li").addClass( "navbar-left" );
    }
  };


})(jQuery);