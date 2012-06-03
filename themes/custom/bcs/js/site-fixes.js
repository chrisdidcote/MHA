(function($) {

  /* Fix menu hover bg colour not expanding on last <li> in navigation menu */
  Drupal.behaviors.menu_nav = {};
  Drupal.behaviors.menu_nav.attach = function(context, settings) {
    
    
    //For active menu state
    if($('.navigation ul#main-menu li.last').hasClass('active')){
      $('.navigation ul#main-menu').addClass('menu-bg-fix');
    }

    //For hover state 
    $('.navigation ul#main-menu li.last').hover(
      function() {
        $('.navigation ul#main-menu').addClass('menu-bg-fix');
      },
      function() {
          if($('.navigation ul#main-menu li.last').hasClass('active')){
            //We don't want the class removed on hover out if link has active state!
          }
          else {
            $('.navigation ul#main-menu').removeClass('menu-bg-fix');
          }
      }
    );

    //Fix Windows font rendering expansion of last item on new line (large font)
    $('.navigation ul#main-menu li.last').css('width','95');

  }

})(jQuery);