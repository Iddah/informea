<?php
/**
 * @file
 * Default theme implementation to display the front page.
 *
 * All the available variables are mirrored in page.tpl.php.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<?php include 'header.tpl.php'; ?>
<?php if(!empty($page['front_page_announcements']) || !empty($page['front_page_hero'])): ?>
  <div class="hero-unit">
    <div class="container">
      <?php if(!empty($page['front_page_announcements'])): ?>
      <div class="broadcast">
        <div class="broadcast-body">
        <?php print render($page['front_page_announcements']); ?>
        </div><!-- .broadcast-body -->
      </div><!-- .broadcast -->
      <?php endif; ?>
      <div class="row">
        <?php if (!empty($page['front_page_hero'])): ?>
          <?php print render($page['front_page_hero']); ?>
        <?php endif; ?>
      </div><!-- .row -->
    </div><!-- .container -->
  </div><!-- .hero-unit -->
<?php endif; ?>
<div>
  <?php if (!user_is_anonymous()) { print $messages; } ?>
  <div id="row-features">
    <?php if (!empty($page['content'])): ?>
      <?php print render($page['front_page_content']); ?>
    <?php endif; ?>
  </div><!-- .row #row-features -->
</div><!-- .container -->
<?php include 'footer.tpl.php'; ?>
