(function ($) {
  'use strict';

  $(document).ready(function () {

    var $window = $(window);
    var $scrollButton = $('.scroll-button');
    var isScrolling = false;
    var scrollDistance = 300;

    $('body').on('click', '.scroll-to-top', function (event) {
      event.preventDefault();

      // if(!isScrolling) {
      //   isScrolling = true;
        $('html, body').animate({
          scrollTop: 0
        }, 600, function() {
          isScrolling = false;
        });
      // }
    });

    $('body').on('click', '.scroll-to-bottom', function (event) {
      event.preventDefault();

      // if(!isScrolling) {
      //   isScrolling = true;
        $('html, body').animate({
          scrollTop: scrollDistance
        }, 600, function() {
          isScrolling = false;
        });
      // }
    });

    var timer;
    var setScrollType = function () {
      if ($window.scrollTop() >= scrollDistance) {
        $scrollButton.removeClass('scroll-to-bottom').addClass('scroll-to-top');
      } else {
        $scrollButton.removeClass('scroll-to-top').addClass('scroll-to-bottom');
      }
    };

    setScrollType();

    $window.on('scroll', function () {
      if (!timer) {
        timer = setTimeout(function () {
          setScrollType();
          timer = null;
        }, 300);
      }
    });
  });
}(jQuery));
