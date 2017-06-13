<div id="terms-listing-tabs">

  <!-- Nav tabs -->
  <ul class="nav nav-tabs" role="tablist">
    <li role="presentation" class="active"><a href="#AtoZ" aria-controls="AtoZ" role="tab" data-toggle="tab">A-Z</a></li>
    <li role="presentation"><a href="#hierarchical" aria-controls="hierarchical" role="tab" data-toggle="tab">Hierarchical</a></li>
  </ul>

  <!-- Tab panes -->
  <div class="tab-content">
    <div role="tabpanel" class="tab-pane active" id="AtoZ">
      <input id="terms-atoz-filter" placeholder="<?php print t('Type to filter'); ?>">
      <div class="tab-pane-content">
        <ul class="list-tree" id="terms-atoz">
          <?php
          foreach($terms_atoz as $term):
            ?>
            <li>
              <a href="<?php print thesaurus_url_term($term) ;?>"><?php print $term->name; ?></a>
              <span class="hidden synonyms">
                <?php
                  print render(field_view_field('taxonomy_term', $term, 'field_term_synonyms', ['label' => 'hidden']));
                ?>
              </span>
            </li>
            <?php
          endforeach;
          ?>
        </ul><!-- .list-tree #terms-substantive -->
      </div>
    </div>
    <div role="tabpanel" class="tab-pane" id="hierarchical">
      <div class="tab-pane-content full-height">
        <button type="button" class="btn btn-default pull-right" data-toggle="tree" data-target="#terms-substantive">Show all</button>
        <ul class="list-tree" id="terms-substantive">
          <?php
          foreach($terms_hierarchical as $term):
            print theme('term-tree', array('term' => $term));
          endforeach;
          ?>
        </ul>
      </div>
    </div>
  </div>

</div>
