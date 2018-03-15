jQuery(document).ready(function ($) {
  // Auto expand the menu on mobile.
  $('.navbar-toggle').click();

  // Since we can't place the tour tooltip on the sides of the language switcher we need to place it below.
  // Collapsing the language switcher should push the tour tooltip further down.
  $(".navbar-nav").on("click", "#language-switcher.bootstrap-tour-selected", function() {
    var menuItem = $(this);
    var dropdown = menuItem.find(".dropdown-menu");
    var itemHeight;
    itemHeight = dropdown.height();
    if (!menuItem.hasClass("open")) {
      $(".tour").css("top", "+=" + itemHeight);
    }
    else {
      $(".tour").css("top", "-=" + itemHeight);
    }
  });
});
