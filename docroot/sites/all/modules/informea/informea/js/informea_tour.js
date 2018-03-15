(function($) {
  Drupal.behaviors.informeaTour = {
    attach: function(context) {
      // Auto expand the menu on mobile.
      $('.navbar-toggle').click();

      var changePosition = function (menuItem, op) {
        var dropdown = menuItem.find(".dropdown-menu");
        var itemHeight;
        itemHeight = dropdown.height();
        $("#step-1.tour").css("top", op + itemHeight);
      };

      // Drupal.settings.bootstrapTour.tour = tourConfig;
      // Since we can't place the tour tooltip on the sides of the language switcher we need to place it below.
      // Collapsing the language switcher should push the tour tooltip further down.
      $(".navbar-nav", context).on('show.bs.dropdown', 'li.dropdown.bootstrap-tour-selected:not(.dropdown-full-width)', function () {
        changePosition($(this), "+=");
      });
      $(".navbar-nav", context).on('hide.bs.dropdown', 'li.dropdown.bootstrap-tour-selected:not(.dropdown-full-width)', function () {
        changePosition($(this), "-=");
      });
    }
  }
})(jQuery);
