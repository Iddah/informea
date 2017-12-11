<?php
/**
 * @file
 * informea.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function informea_taxonomy_default_vocabularies() {
  return array(
    'field_of_work' => array(
      'name' => 'Field of work',
      'machine_name' => 'field_of_work',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'keywords' => array(
      'name' => 'Keywords',
      'machine_name' => 'keywords',
      'description' => 'Arbitrary keywords attached to entity',
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
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
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
    'thesaurus_agrovoc' => array(
      'name' => 'Thesaurus - Agrovoc',
      'machine_name' => 'thesaurus_agrovoc',
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
    'thesaurus_ecolex' => array(
      'name' => 'Thesaurus - ECOLEX',
      'machine_name' => 'thesaurus_ecolex',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
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
          'url' => 'http://informea.org/sites/default/files/export/ecolex.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
          'delete_deprecated_terms' => 0,
          'delete_missing_terms' => 0,
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'field_taxonomy_term_uri' => 'uri',
          'field_term_reference_url' => 'relatedMatch',
          'field_term_synonyms' => 'altLabel',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
    'thesaurus_geg' => array(
      'name' => 'Thesaurus - GEG',
      'machine_name' => 'thesaurus_geg',
      'description' => 'Terms specific to global environmental goals',
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
    'thesaurus_gemet' => array(
      'name' => 'Thesaurus - GEMET',
      'machine_name' => 'thesaurus_gemet',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
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
    'thesaurus_ieg' => array(
      'name' => 'Thesaurus - IEG',
      'machine_name' => 'thesaurus_ieg',
      'description' => 'Terms specific to environmental goals',
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
    'thesaurus_informea' => array(
      'name' => 'Thesaurus - InforMEA',
      'machine_name' => 'thesaurus_informea',
      'description' => 'Main InforMEA thesaurus',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 3,
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
          'url' => 'http://thesaurus.informea.org/export/informea.rdf',
          'id_field' => 'uri',
          'parent_field' => 'broader',
          'delete_deprecated_terms' => 1,
          'delete_missing_terms' => 0,
        ),
        'mappings' => array(
          'description_field' => 'definition',
          'field_definitions' => 'definition',
          'field_ecolex_tags' => '',
          'field_sorting_order' => '',
          'field_taxonomy_term_uri' => 'uri',
          'field_term_geg_url' => '',
          'field_term_popularity' => '',
          'field_term_reference_url' => 'relatedMatch',
          'field_term_related_uri' => 'related',
          'field_term_substantive' => '',
          'field_term_synonyms' => 'altLabel',
          'field_term_tag' => '',
          'field_thesaurus_map_agrovoc' => '',
          'field_thesaurus_map_ecolex' => '',
          'field_thesaurus_map_geg' => '',
          'field_thesaurus_map_gemet' => '',
          'name_field' => 'prefLabel',
        ),
      ),
    ),
  );
}
