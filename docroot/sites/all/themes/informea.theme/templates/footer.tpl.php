<?php
/**
 * @file
 * footer.tpl.php
 */
?>

<?php if (!empty($page['involvement'])): ?>
    <div class="involvement">
      <div class="container">
          <div class="involvement-section">
            <?php print render($page['involvement']); ?>
          </div><!-- .involvement-section -->
      </div>
    </div>
<?php endif; ?>

<footer class="footer">
    <?php if (!empty($page['footer'])): ?>
      <div class="footer-section">
        <div class="container">
          <?php print render($page['footer']); ?>
        </div>
      </div><!-- .footer-section -->
    <?php endif; ?>
    <div class="footer-section">
      <div class="container">
        <?php print $informea_footer_block; ?>
      </div>
    </div><!-- .footer-section -->
    <div class="footer-section">
      <div class="container">
        <h5 class="footer-section-title"><?php print t('Organizations'); ?></h5>
        <ul class="list-inline">
          <li>
            <a class="brand brand-hover brand-un" href="http://www.un.org/" target="_blank">
              <div class="image"></div>
              <?php print t('UN'); ?>
            </a><!-- .brand .brand-hover .brand-un -->
          </li>
          <li>
            <a class="brand brand-hover brand-unep" href="http://www.unep.org/" target="_blank">
              <div class="image"></div>
              <?php print t('UN Environment'); ?>
            </a><!-- .brand .brand-hover .brand-unep -->
          </li>
          <li>
            <a class="brand brand-hover brand-fao" href="http://www.fao.org/" target="_blank">
              <div class="image"></div>
              <?php print t('FAO'); ?>
            </a><!-- .brand .brand-hover .brand-fao -->
          </li>
          <li>
            <a class="brand brand-hover brand-unesco" href="http://www.unesco.org/" target="_blank">
              <div class="image"></div>
              <?php print t('UNESCO'); ?>
            </a><!-- .brand .brand-hover .brand-unesco -->
          </li>
          <li>
            <a class="brand brand-hover brand-unece" href="http://www.unece.org/env/treaties/welcome.html" target="_blank">
              <div class="image"></div>
              <?php print t('UNECE'); ?>
            </a><!-- .brand .brand-hover .brand-unece -->
          </li>
          <li>
            <a class="brand brand-hover brand-ecolex" href="http://www.ecolex.org/" target="_blank">
              <div class="image"></div>
              <?php print t('ECOLEX'); ?>
            </a><!-- .brand .brand-hover .brand-ecolex -->
          </li>
          <li class="pull-right">
            <a class="brand brand-hover brand-eu" href="http://ec.europa.eu/" target="_blank">
              <div class="image"></div>
              <?php print t('European Union'); ?>
            </a><!-- .brand .brand-hover .brand-eu -->
          </li>
        </ul><!-- .list-inline -->
      </div>
    </div><!-- .footer-section -->
    <div class="footer-section footer-section--treaties">
      <div class="container">
        <?php print $informea_treaties_footer_block; ?>
      </div>
    </div><!-- .footer-section -->
    <div class="footer-section footer-section--info">
      <div class="container">
        <?php if ($logo): ?>
          <a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <img src="<?php print $logo; ?>" width="226" height="54" alt="<?php print t('Home'); ?>" />
          </a><!-- .logo .navbar-btn .pull-left -->
        <?php endif; ?>
        <ul class="nav nav--inline">
          <li><?php print l(t('About InforMEA'), 'about', array('attributes' => array('class' => array('menu-title'), 'id' => 'about-menu-link'))); ?></li>
          <li><?php print l(t('Contact'), 'contact', array('attributes' => array('class' => array('menu-title'), 'id' => 'contact-menu-link'))); ?></li>
          <li><?php print l(t('Get Involved'), '', array('attributes' => array('class' => array('menu-title'), 'id' => 'get-involved-menu-link'))); ?></li>
          <?php print $language_content_block; ?>
        </ul>
      </div>
    </div><!-- .footer-section -->
  </div><!-- .container -->
</footer><!-- .footer -->
<a class="scroll-button scroll-to-top" href="#" title="<?php print t('Scroll to top'); ?>"></a>
<a class="scroll-button scroll-to-bottom" href="#" title="<?php print t('Scroll down'); ?>"></a>
<script type="text/javascript">
  setTimeout(function(){var a=document.createElement("script");
    var b=document.getElementsByTagName("script")[0];
    a.src=document.location.protocol+"//script.crazyegg.com/pages/scripts/0067/5351.js?"+Math.floor(new Date().getTime()/3600000);
    a.async=true;a.type="text/javascript";b.parentNode.insertBefore(a,b)}, 1);
</script>
<script type="text/javascript">
    window.smartlook||(function(d) {
    var o=smartlook=function(){ o.api.push(arguments)},h=d.getElementsByTagName('head')[0];
    var c=d.createElement('script');o.api=new Array();c.async=true;c.type='text/javascript';
    c.charset='utf-8';c.src='https://rec.smartlook.com/recorder.js';h.appendChild(c);
    })(document);
    smartlook('init', '0de702f6d7de31817c785d9aa3f47f68815193da');
</script>
