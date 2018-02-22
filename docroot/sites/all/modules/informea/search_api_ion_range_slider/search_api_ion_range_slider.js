(function($) {
  Drupal.behaviors.search_api_ion_range_slider = {
    attach: function(context, settings) {

      var submitTimeout = '';

      $('div.search-api-ion-range-slider-widget').each(function() {

        var widget = $(this);
        var slider = widget.find('.js-range-slider');
        var rangeMin = widget.find('input[name=range-min]');
        var rangeMax = widget.find('input[name=range-max]');
        var rangeFrom = widget.find('input[name=range-from]');
        var rangeTo = widget.find('input[name=range-to]');
        var options = {
          type: "double",
          min: parseInt(rangeMin.val()),
          max: parseInt(rangeMax.val()),
          from: parseInt(rangeFrom.val()),
          to: parseInt(rangeTo.val()),
          prettify_enabled: false,
          grid: true
        };

        slider.ionRangeSlider($.extend({

          // on change: when clicking somewhere in the bar
          onStart: function(data) {
            widget.find('input[name=range-from]').val(data.from);
            widget.find('input[name=range-to]').val(data.to);
          },

          // on slide: when sliding with the controls
          onChange: function(data) {
            widget.find('input[name=range-from]').val(data.from);
            widget.find('input[name=range-to]').val(data.to);
          },

          onFinish: function(data) {
            clearTimeout(submitTimeout);
            delaySubmit(widget);
          }
        }, options));

        var instance = slider.data("ionRangeSlider");

        rangeFrom.numeric();
        rangeFrom.bind('keyup', function() {
          clearTimeout(submitTimeout);
          if (!isNaN(rangeFrom.val()) && rangeFrom.val() !== '') {
            var value = parseInt(rangeFrom.val());
            if (value > parseInt(rangeTo.val())) {
              value = parseInt(rangeTo.val());
            }
            if (value < parseInt(rangeMin.val())) {
              value = parseInt(rangeMin.val());
            }
            instance.update({ from: value });
            delaySubmit(widget);
          }
        });

        rangeTo.numeric();
        rangeTo.bind('keyup', function() {
          clearTimeout(submitTimeout);
          if (!isNaN(rangeTo.val()) && rangeTo.val() !== '') {
            var value = parseInt(rangeTo.val());
            if (value < parseInt(rangeFrom.val())) {
              value = parseInt(rangeFrom.val());
            }
            if (value > options.max) {
              value = options.max;
            }
            instance.update({ to: value });
            delaySubmit(widget);
          }
        });
      });

      function delaySubmit(widget) {
        var autoSubmitDelay = widget.find('input[name=delay]').val();
        if (autoSubmitDelay != undefined && autoSubmitDelay != 0) {
          submitTimeout = setTimeout(function() {
            widget.find('form').submit();
          }, autoSubmitDelay);
        }
      };
    }
  };
})(jQuery);
