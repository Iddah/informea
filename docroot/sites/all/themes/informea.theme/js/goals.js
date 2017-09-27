(function ($) {
  $(document).ready(function() {
    $('h2 a').each(function() {
      if (this.text === 'GEG') {
        $(this).css({ 'color' : '#c0c0c0' });
        $(this).on('click', function() { return false; });
        $(this).attr('href', '#');
      }
      if (this.text === 'Aichi Targets') {
        $(this).css({ 'color' : '#c0c0c0' });
        $(this).on('click', function() { return false; });
        $(this).attr('href', '#');
      }
    });
  })
})(jQuery);