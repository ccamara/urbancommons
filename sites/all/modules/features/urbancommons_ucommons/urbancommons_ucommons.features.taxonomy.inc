<?php
/**
 * @file
 * urbancommons_ucommons.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function urbancommons_ucommons_taxonomy_default_vocabularies() {
  return array(
    'ucommons_beneficiary' => array(
      'name' => 'Ucommons Beneficiary',
      'machine_name' => 'ucommons_beneficiary',
      'description' => 'Urbancommons\' main beneficiaries (people, collective...)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    ),
    'ucommons_category' => array(
      'name' => 'Ucommons category',
      'machine_name' => 'ucommons_category',
      'description' => 'Urban Commons\' categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    ),
    'ucommons_tags' => array(
      'name' => 'Ucommons_tags',
      'machine_name' => 'ucommons_tags',
      'description' => 'Urban Commons\' tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    ),
  );
}