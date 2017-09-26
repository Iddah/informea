<?php
/**
 * @file
 * API info
 */

/**
 * Register new GraphQL interface type, object type.
 */
function hook_graphql_api_info() {
  return [
    'types' => [
      'text_formatted' => new ObjectType([
        'name' => 'text_formatted',
        'fields' => [
          'value' => array(
            'type' => Type::string(),
            'description' => t('Text'),
          ),
          'summary' => array(
            'type' => Type::string(),
            'description' => t('Summary'),
          ),
          'format' => array(
            'type' => Type::string(),
            'description' => t('Text format'),
          ),
        ]
      ]),
    ]
  ];
}
// todo Field_page_count
// "Cannot convert Drupal property type 'numeric' -> GraphQL type. Please register this type with hook_graphql_api_info()"


/*
availible keys
_skip
_limit
_sort
_direction
*/
