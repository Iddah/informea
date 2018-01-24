<div class="meta-container">
  <?php foreach($meta as $field => $value): ?>
    <div class="meta meta-<?php print str_replace('_', '-', $field); ?>">
      <?php print render($value); ?>
    </div>
  <?php endforeach; ?>
</div>
