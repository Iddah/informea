(function ($) {
  'use strict';

  $(document).ready(function () {

    var $window = $(window);
    var $scrollButtonToTop = $('.scroll-to-top');
    var $scrollButtonToBottom = $('.scroll-to-bottom');
    var isScrolling = false;
    var scrollDistance = 500;
    var scrollTopThreshold = scrollDistance;
    var scrollBottomThreshold = scrollDistance;

    $('body').on('click', '.scroll-to-top', function (event) {
      event.preventDefault();
      if($(this).hasClass('active') && !isScrolling) {
        isScrolling = true;
        $('html, body').animate({
          scrollTop: 0
        }, 600, function() {
          isScrolling = false;
        });
      }
    });

    $('body').on('click', '.scroll-to-bottom', function (event) {
      event.preventDefault();
      if($(this).hasClass('active') && !isScrolling) {
        isScrolling = true;
        $('html, body').animate({
          scrollTop: $window.scrollTop() + scrollDistance
        }, 600, function() {
          isScrolling = false;
        });
      }
    });

    var timer;

    var setScrollButtonsState = function () {
      if ($window.scrollTop() >= scrollTopThreshold) {
        $scrollButtonToTop.addClass('active');
      } else {
        $scrollButtonToTop.removeClass('active');
      }
      if (document.documentElement.scrollTop + window.innerHeight + scrollBottomThreshold > document.documentElement.scrollHeight) {
        $scrollButtonToBottom.removeClass('active');
      } else {
        $scrollButtonToBottom.addClass('active');
      }
    };

    setScrollButtonsState();

    $window.on('scroll', function () {
      if (!timer) {
        timer = setTimeout(function () {
          setScrollButtonsState();
          timer = null;
        }, 300);
      }
    });
  });
}(jQuery));
