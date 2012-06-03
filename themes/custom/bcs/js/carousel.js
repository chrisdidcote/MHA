(function($) {
  
  Drupal.behaviors.viewsSlideshowCycle = Drupal.behaviors.viewsSlideshowCycle || {};
  var original = Drupal.behaviors.viewsSlideshowCycle.attach || function(){};
  Drupal.behaviors.viewsSlideshowCycle.attach = function(context) {
    for (var id in Drupal.settings.viewsSlideshowCycle) {
      var width = $(id).parent().width();
      if (typeof JSON != 'undefined') {
        settings = JSON.parse(Drupal.settings.viewsSlideshowCycle[id].advanced_options);
        settings.width = width;
        settings.fit = true;
        Drupal.settings.viewsSlideshowCycle[id].advanced_options = JSON.stringify(settings);
        
      }
      
    }
    original(context);
  }
  
})(jQuery);