#Patches

* xmlsitemap
 * Support for translated nodes - store and export url of node translations.
 * /patches/xmlsitemap/xmlsitemap-support-multilingual-nodes.patch

* migrate
  * [PDOException when using highwater field](https://www.drupal.org/node/2635792)
  * migrate/migrate-2635792-2-sql-error-saving-highwater.patch

* search_api_solr
  * Limit search results
  * limit-results.patch  

* search_api_attachments
  * Fixed issue 2503743
  * https://www.drupal.org/node/2503743
  * search_api_attachment-maxAnalyzedChars-2503743-2-7.patch

* date
  * Fix bug for migration date timezone
  * https://www.drupal.org/node/2451027
  * date-migrate-undefined-timezone-2451027-1.patch
