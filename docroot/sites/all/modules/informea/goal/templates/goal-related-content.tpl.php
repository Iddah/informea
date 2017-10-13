<div class="related-national-reports-container">
  <?php if (!empty($items)): ?>
    <div class="accordion panel-group tagged-content" role="tablist" aria-multiselectable="true">
      <?php foreach ($items as $treaty) : ?>
        <?php $treaty_w = entity_metadata_wrapper('node', $treaty); ?>
        <div class="panel panel-default">
          <div class="panel-heading collapsed" role="tab" id="heading-<?php print $treaty->nid; ?>" data-target="#content-<?php print $treaty->nid; ?>" data-toggle="collapse" aria-expanded="false">
            <i class="glyphicon glyphicon-plus-sign"></i>
            <h4 class="panel-title">
              <?php print treaty_url_logo($treaty); ?>
              <?php print $treaty_w->label(); ?>
            </h4><!-- .panel-title -->
          </div>
          <div class="accordion panel-group panel-collapse collapse" id="content-<?php print $treaty->nid; ?>" role="tabpanel">
            <div class="national-reports panel-body">
                           <!-- TREATY ARTICLES -->
              <?php if(!empty($treaty->treaty_articles)): ?>
                <h3><?php print t('Treaty articles'); ?></h3>
                <?php foreach($treaty->treaty_articles as $treaty_article): ?>
                  <?php $treaty_article_w = entity_metadata_wrapper('node', $treaty_article); ?>
                    <div class="accordion panel-group tagged-content" role="tablist" aria-multiselectable="true">
                      <div class="panel panel-default">
                        <div class="panel-heading collapsed" role="tab" id="heading-<?php print $treaty_article->nid; ?>" data-target="#content-<?php print $treaty_article->nid; ?>" data-toggle="collapse" aria-expanded="false">
                          <i class="glyphicon glyphicon-plus-sign"></i>
                          <h4 class="panel-title">
                            <?php print $treaty_article_w->label(); ?>
                          </h4><!-- .panel-title -->
                        </div>
                        <div class="accordion panel-group panel-collapse collapse" id="content-<?php print $treaty_article->nid; ?>" role="tabpanel">
                          <div class="national-report-paragraphs panel-body">
                            <?php foreach($treaty_article->children as $treaty_article_paragraph): ?>
                              <?php $treaty_article_paragraph_w = entity_metadata_wrapper('node', $treaty_article_paragraph); ?>
                              <div class="item" id="content-<?php print $treaty_article_paragraph->nid; ?>">
                                <p>
                                  <?php if($treaty_article_paragraph_w->body->value()): ?>
                                      <?php print l('['.t('View').']', 'node/'. $treaty->nid .'/text', array('attributes' => array('class' => array('permalink pull-right'),'target' => '_blank'), 'fragment' => 'article-' . $treaty_article->nid, 'html' => TRUE, 'query' => array('article' => $treaty_article->nid))); ?>
                                    <?php print($treaty_article_paragraph_w->body->value->value(array('decode' => FALSE))); ?>
                                  <?php endif; ?>
                                </p>
                              </div>
                            <?php endforeach; ?>
                          </div>
                        </div>
                      </div>
                    </div>
                <?php endforeach; ?>
              <?php endif; ?>
              <!-- END OF TREATY ARTICLES -->
              <!-- Decision Paragraphs -->
              <?php if(!empty($treaty->decisions)): ?>
                <h3><?php print t('Decisions'); ?></h3>
                <?php foreach($treaty->decisions as $decision): ?>
                  <?php $decision_w = entity_metadata_wrapper('node', $decision); ?>
                    <div class="accordion panel-group tagged-content" role="tablist" aria-multiselectable="true">
                      <div class="panel panel-default">
                        <div class="panel-heading collapsed" role="tab" id="heading-<?php print $decision->nid; ?>" data-target="#content-<?php print $decision->nid; ?>" data-toggle="collapse" aria-expanded="false">
                          <i class="glyphicon glyphicon-plus-sign"></i>
                          <h4 class="panel-title">
                            <?php print $decision_w->label(); ?>
                          </h4><!-- .panel-title -->
                        </div>
                        <div class="accordion panel-group panel-collapse collapse" id="content-<?php print $decision->nid; ?>" role="tabpanel"> <p>
                        <?php print l('['.t('View Source document').']','node/'. $decision->nid, array('attributes' => array('class' => array('permalink'),'target' => '_blank'), 'html' => TRUE)); ?> </p>
                          <div class="national-report-paragraphs panel-body">
                              <?php foreach($decision->children as $decision_paragraph): ?>
                              <?php $decision_paragraph_w = entity_metadata_wrapper('node', $decision_paragraph); ?>
                              <div class="item" id="content-<?php print $decision->nid; ?>">
                                <p>
                                 <?php print l('['.t('View Target').']', 'node/'. $decision_paragraph->nid, array('attributes' => array('class' => array('permalink pull-right'),'target' => '_blank'), 'fragment' => $decision_paragraph->nid, 'html' => TRUE)); ?>
                                    <?php print($decision_paragraph_w->body->value->value(array('decode' => FALSE))); ?>
                                    <?php if($decision_paragraph_w->body->value()): ?>
                                  <?php endif; ?>
                                </p>
                              </div>
                            <?php endforeach; ?>
                          </div>
                        </div>
                      </div>
                    </div>
                <?php endforeach; ?>
              <?php endif; ?>
              <!-- END OF DECISIONS PARAGRAPHS-->
                <!-- NATIONAL REPORTS -->
              <?php if(!empty($treaty->national_reports)): ?>
                <h3><?php print t('National reports'); ?></h3>
                <?php foreach($treaty->national_reports as $national_report): ?>
                  <?php $national_report_w = entity_metadata_wrapper('node', $national_report); ?>
                  <div class="accordion panel-group tagged-content" role="tablist" aria-multiselectable="true">
                    <div class="panel panel-default">
                      <div class="panel-heading collapsed" role="tab" id="heading-<?php print $national_report->nid; ?>" data-target="#content-<?php print $national_report->nid; ?>" data-toggle="collapse" aria-expanded="false">
                        <i class="glyphicon glyphicon-plus-sign"></i>
                        <h4 class="panel-title">
                          <?php if (!empty($country = $national_report_w->field_country->value())): ?>
                            <?php $country = reset($country);?>
                            <?php print informea_theme_country_flag($country); ?>
                          <?php endif; ?>
                          <?php print $national_report_w->label(); ?>
                        </h4><!-- .panel-title -->
                      </div>
                      <div class="accordion panel-group panel-collapse collapse" id="content-<?php print $national_report->nid; ?>" role="tabpanel">
                        <div class="national-report-paragraphs panel-body">
                          <?php foreach($national_report->children as $national_report_paragraph): ?>
                            <?php $national_report_paragraph_w = entity_metadata_wrapper('node', $national_report_paragraph); ?>
                            <div class="item" id="content-<?php print $national_report->nid; ?>">
                              <p>
                                <strong><?php print($national_report_paragraph_w->label()); ?></strong>
                              </p>
                              <p>
                                 <?php if($national_report_paragraph_w->body->value()): ?>
                                   <?php print l('['.t('View').']', 'node/'. $national_report_paragraph->nid, array('attributes' => array('class' => array('permalink pull-right'),'target' => '_blank'), 'fragment' =>  $national_report_paragraph->nid, 'html' => TRUE)); ?>
                                  <?php print($national_report_paragraph_w->body->value->value(array('decode' => FALSE))); ?>
                               <?php endif; ?>
                              </p>
                            </div>
                          <?php endforeach; ?>
                        </div>
                      </div>
                    </div>
                  </div>
                <?php endforeach; ?>
              <?php endif; ?>
              <!-- END OF NATIONAL REPORTS -->
                <!-- DOCUMENTS -->
              <?php if(!empty($treaty->documents)): ?>
                  <h3><?php print t('Documents'); ?></h3>
                <?php foreach($treaty->documents as $document): ?>
                  <?php $document_w = entity_metadata_wrapper('node', $document); ?>
                      <div class="accordion panel-group tagged-content" role="tablist" aria-multiselectable="true">
                          <div class="panel panel-default">
                              <div class="panel-heading collapsed" role="tab" id="heading-<?php print $document->nid; ?>" data-target="#content-<?php print $document->nid; ?>" data-toggle="collapse" aria-expanded="false">
                                  <i class="glyphicon glyphicon-plus-sign"></i>
                                  <h4 class="panel-title">
                                    <?php print $document_w->label(); ?>
                                  </h4><!-- .panel-title -->
                              </div>
                              <div class="accordion panel-group panel-collapse collapse" id="content-<?php print $document->nid; ?>" role="tabpanel">
                                <?php print l('['.t('View Source document').']','node/'. $document->nid, array('attributes' => array('class' => array('permalink'),'target' => '_blank'), 'html' => TRUE)); ?> </p>
                              </div>
                          </div>
                      </div>
                <?php endforeach; ?>
              <?php endif; ?>
                <!-- END OF DOCUMENTS -->
            </div>
          </div>
        </div>
      <?php endforeach; ?>
    </div><!-- .panel-group -->
  <?php endif; ?>
</div>