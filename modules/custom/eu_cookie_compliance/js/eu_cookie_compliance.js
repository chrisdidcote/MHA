(function ($) { 

  Drupal.behaviors.eu_cookie_compliance_popup = {
    attach : function(){
      var enabled = Drupal.settings.eu_cookie_compliance.popup_enabled;
      if(!enabled) {
        return;
      }
      var status = Drupal.eu_cookie_compliance.getCurrentStatus();
      if (status == 0) {
        Drupal.eu_cookie_compliance.createPopup(Drupal.settings.eu_cookie_compliance.popup_html_info);
      } 
      else {
        return;
      }
    }
  };

  Drupal.eu_cookie_compliance = {};

  Drupal.eu_cookie_compliance.createPopup = function(html) {
    var popup = $(html)
      .attr({"id": "sliding-popup"})
      .height(Drupal.settings.eu_cookie_compliance.popup_height)
      .width(Drupal.settings.eu_cookie_compliance.popup_width)
      .hide();
    if(Drupal.settings.eu_cookie_compliance.popup_position) {
      popup.prependTo("body");
      var height = popup.height();
      popup.show()
        .attr({"class": "sliding-popup-top"})
        .css({"top": -1 * height})
        .animate({top: 0}, Drupal.settings.eu_cookie_compliance.popup_delay);
    } else {
      popup.appendTo("body");
      height = popup.height();
      popup.show()
        .attr({"class": "sliding-popup-bottom"})
        .css({"bottom": -1 * height})
        .animate({bottom: 0}, Drupal.settings.eu_cookie_compliance.popup_delay)
    }
    Drupal.eu_cookie_compliance.attachEvents();
  }

  Drupal.eu_cookie_compliance.attachEvents = function() {
    $('.cookie-button.close').click(function(){
      Drupal.eu_cookie_compliance.changeStatus(2);
    });
    $('.cookie-button.accept').click(function(){
      Drupal.eu_cookie_compliance.changeStatus(3);
    });
  }

  Drupal.eu_cookie_compliance.getCurrentStatus = function() {
    var search = 'cookie-agreed-'+Drupal.settings.eu_cookie_compliance.popup_language+'=';
    var offset = document.cookie.indexOf(search);
    if (offset < 0) {
      return 0;
    }
    offset += search.length;
    var end = document.cookie.indexOf(';', offset);
    if (end == -1) {
      end = document.cookie.length;
    }
    var value = document.cookie.substring(offset, end);
    return parseInt(value);
  }

  Drupal.eu_cookie_compliance.changeStatus = function(value) {
    var status = Drupal.eu_cookie_compliance.getCurrentStatus();
    if (status == value) return;
    if(Drupal.settings.eu_cookie_compliance.popup_position) {
      $(".sliding-popup-top").animate({top: $("#sliding-popup").height() * -1}, Drupal.settings.eu_cookie_compliance.popup_delay, function () {
        if(status == 0) {
          Drupal.eu_cookie_compliance.attachEvents();
        }
      })
    } else {
      $(".sliding-popup-bottom").fadeOut(Drupal.settings.eu_cookie_compliance.popup_delay, function () {
        if(status == 0) {
          Drupal.eu_cookie_compliance.attachEvents();
        }
      ;})
    }
    if (value == 2){
      var date = new Date();
      date.setDate(date.getDate() + 100);
      document.cookie = "cookie-agreed-"+Drupal.settings.eu_cookie_compliance.popup_language + "="+value+";path=/";  
    }
    else{
      var date = new Date();
      date.setDate(date.getDate() + 100);
      document.cookie = "cookie-agreed-"+Drupal.settings.eu_cookie_compliance.popup_language + "="+value+";expires=" + date.toUTCString() + ";path=/";        
    }
  }


  Drupal.eu_cookie_compliance.hasAgreed = function() {
    var status = Drupal.eu_cookie_compliance.getCurrentStatus();
    if(status == 1 || status == 2 || status == 3 ) {
      return true;
    }
    return false;
  }

})(jQuery);
