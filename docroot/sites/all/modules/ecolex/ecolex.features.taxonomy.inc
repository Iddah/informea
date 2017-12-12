<?php
/**
 * @file
 * ecolex.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ecolex_taxonomy_default_vocabularies() {
  return array(
    'ecolex_decision_status' => array(
      'name' => 'ECOLEX decision status',
      'machine_name' => 'ecolex_decision_status',
      'description' => 'Status of an ECOLEX Court Decision',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'ecolex_legislation_status' => array(
      'name' => 'ECOLEX legislation status',
      'machine_name' => 'ecolex_legislation_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'ecolex_region' => array(
      'name' => 'ECOLEX region',
      'machine_name' => 'ecolex_region',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'ecolex_subjects' => array(
      'name' => 'ECOLEX Subjects',
      'machine_name' => 'ecolex_subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => TRUE,
        'plugin' => 'Drupal\\taxonomy_external_sync\\plugin\\source\\VocBenchRDFSource',
        'plugin_config' => array(
          'url' => 'https://thesaurus.informea.org/export/ecolex.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
          'delete_deprecated_terms' => 0,
          'delete_missing_terms' => 0,
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
    'geographical_scope' => array(
      'name' => 'Geographical scope',
      'machine_name' => 'geographical_scope',
      'description' => 'Where item applies (i.e. International)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'legislation_sub_file_code' => array(
      'name' => 'Legislation sub-file code',
      'machine_name' => 'legislation_sub_file_code',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'literature_type' => array(
      'name' => 'Literature type',
      'machine_name' => 'literature_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'territorial_subdivision' => array(
      'name' => 'Territorial subdivision',
      'machine_name' => 'territorial_subdivision',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
    'thesaurus_emerging_terms' => array(
      'name' => 'Thesaurus - Emerging terms',
      'machine_name' => 'thesaurus_emerging_terms',
      'description' => 'LEO emerging terms. Imported and synchronized with VocBench DTIE',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'tes' => array(
        'enable' => FALSE,
      ),
    ),
  );
}
