(function ($, Drupal) {
  $(document).ready(function () {
    // Disable all clicks
    $('.disabled').click(function (event) { event.preventDefault() });

    $('#dialog-modal-ajax').on('loaded.bs.modal', function () {
      $(window).trigger('resize');
    });

    $('#dialog-modal-ajax').on('hidden.bs.modal', function () {
      $(this).removeData('bs.modal');
    });

    $('.permalink').click(function (event) {
      event.stopPropagation();
    });

    $('[data-toggle="select"]').click(function (event) {
      var $element = $(this);
      var target = $element.attr('href');

      event.preventDefault();

      $('option', target).prop('selected', true);
    });

    $.widget('custom.catcomplete', $.ui.autocomplete, {
      _create: function() {
        this._super();
        this.widget().menu('option', 'items', '> :not(.ui-autocomplete-category)');
      },
      _renderMenu: function(ul, items) {
        var that = this,
          currentCategory = '';
        $.each(items, function(index, item) {
          var li;

          if (item.category != currentCategory) {
            ul.append('<li class="ui-autocomplete-category">' + item.category + '</li>');
            currentCategory = item.category;
          }

          li = that._renderItemData(ul, item);

          if (item.category) {
            li.attr('aria-label', item.category + ' : ' + item.label);
          }
        });
      },
      // https://github.com/scottgonzalez/jquery-ui-extensions/blob/master/src/autocomplete/jquery.ui.autocomplete.html.js
      _renderItem: function(ul, item) {
        return $('<li></li>')
          .append($('<a></a>').html(item.label))
          .appendTo(ul);
      }
    });

    $('#edit-keys').catcomplete({
      delay: 0,
      source: function (request, response) {
        var url = Drupal.settings.basePath + 'ajax/search/' + encodeURIComponent(request.term);

        $.get(url, function (data) {
          response(data);
        });

      },
      select: function (event, ui) {
        if (ui.item.link) {
          window.location.href = ui.item.link;
        }
      }
    });

    $('.node-switcher').on('change', function() {
      var val = $(this).val();

      if (val !== 0) {
        window.location.href = val;
      }
    });

    $('[data-toggle="informea-bootstrap-collapse"]').click(function () {
      var $element = $(this);
      var target = $element.data('target');

      if ($element.data('pressed')) {
        $element.data('pressed', false);
        $element.html(Drupal.t('Show all'));
        $('.panel-collapse', target).collapse('hide');
      } else {
        $element.data('pressed', true);
        $element.html(Drupal.t('Hide all'));
        $('.panel-collapse', target).collapse('show');
      }
    });

    $('[data-filter="list"]').keyup(function () {
      var selector = $(this).data('selector');
      var target = $(this).data('target');
      var value = $(this).val();

      $('.panel', target).hide().filter(function () {
        return $('table > tbody > tr', this).hide().filter(function () {
          return $(selector, this).text().toLowerCase().indexOf(value.toLowerCase()) > -1;
        }).show().length > 0;
      }).show();
    });

    $('.back-to-top').on('click', function (event) {
      event.preventDefault();

      $('html, body').animate({
        scrollTop: 0
      }, 600);
    });

    var timer;

    $(window).on('scroll', function () {
      if (!timer) {
        timer = setTimeout(function () {
          if ($(window).scrollTop() > 100) {
            $('.back-to-top').fadeIn();
          } else {
            $('.back-to-top').fadeOut();
          }

          timer = null;
        }, 300);
      }
    });


    var $body = $('body');

    $('.use-select-2')
      .on('select2-open', function(e) {
        $body.addClass('select2-open');
      })
      .on('select2-close', function(e) {
        $body.removeClass('select2-open');
      });

    $('#navbar').on('click touchstart', '.dropdown-menu, dropdown-toggle', function(event) {
      var events = $._data(document, 'events') || {};
      events = events.click || [];
      for(var i = 0; i < events.length; i++) {
          if(events[i].selector) {

              //Check if the clicked element matches the event selector
              if($(event.target).is(events[i].selector)) {
                  events[i].handler.call(event.target, event);
              }

              // Check if any of the clicked element parents matches the
              // delegated event selector (Emulating propagation)
              $(event.target).parents(events[i].selector).each(function(){
                  events[i].handler.call(this, event);
              });
          }
      }
      event.stopPropagation(); //Always stop propagation
    });

    // var active_horizontal_switch = $('.informea-switcher_link.dropdown.open');
    // $('.informea-switcher_link.dropdown').hover(
    //     function() {
    //       active_horizontal_switch.removeClass('open');
    //     }, function() {
    //       active_horizontal_switch.addClass('open');
    //     }
    // );

    /*$('.dropdown').on('shown.bs.dropdown', function() {
      $('.dropdown.active .dropdown-menu').hide();
    });*/

  });

  $(window).load(function() {
    $('.nav-tabs a[href="' + window.location.hash + '"]').tab('show');
  });

  Drupal.behaviors.informeaSelect2 = {
    attach: function (context, settings) {
      $('.informea-select-2', context).once('informea-select2').select2();
    }
  }

  Drupal.behaviors.geographicRegionSelect = {

    attach: function (context, settings) {

      var $geographicRegionSelect = $('#edit-geographic-region', context);

      $geographicRegionSelect.once('geographic-region-select').select2({
        dropdownCssClass: 'edit-geographic-region-drop'
      });

    }

  };

  Drupal.behaviors.searchCategorySelect = {

    attach: function (context, settings) {

      var $searchCategorySelect = $('#edit-search-category', context);

      var searchCategorySelectFormat = function (state) {
         var originalOption = state.element;
          if (!state.id) return state.text; // optgroup

          if($(originalOption).data('optgroup')) {
            return "<div class='category-group-title'>" + state.text + "</div>";
          }
          return "<div class='category-group-inner'>" + state.text + "</div>";
      }

      $searchCategorySelect.once('search-category-select').select2({
          dropdownCssClass: 'edit-search-category-drop',
          formatResult: searchCategorySelectFormat,
          minimumResultsForSearch: -1,
          escapeMarkup: function(m) { return m; }
      });
    }
  };

}(jQuery, Drupal));
