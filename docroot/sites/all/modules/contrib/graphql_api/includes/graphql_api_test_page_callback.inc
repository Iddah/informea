<?php
use Drupal\graphql_api\Schema;
//use GraphQL\GraphQL;

function graphql_api2() {
  if (!$obj = &drupal_static(__FUNCTION__)) {
    $obj = new Schema;
  }
  return $obj;
}

/**
 * Page callback for /graphql
 */
function graphql_api_test_page_callback() {
  has_krumo();
  krumo(__FUNCTION__);
  graphql_api2();
  krumo(__LINE__);
  graphql_api();
  krumo(__LINE__);
  // Define your schema:
  $schemaBuilder = new Schema;
  krumo(__LINE__);
  $schema = $schemaBuilder->build();
  krumo(__LINE__);
  krumo($schema);
  /*  $is_introspec = FALSE;
  $variables = [];
  if (isset($_SERVER['CONTENT_TYPE']) && strpos(strtolower($_SERVER['CONTENT_TYPE']), 'application/json') > -1) {
    $rawBody = file_get_contents('php://input');
    $data = drupal_json_decode($rawBody ?: '');
  } else {
    $data = $_POST;
  }

  $requestString = isset($data['query']) ? $data['query'] : null;
  $operationName = isset($data['operation']) ? $data['operation'] : null;
  $variableValues = isset($data['variables']) ? $data['variables'] : [];

  try {
    if (empty($requestString)) {
      if( user_access('use graphql_api introspection') ) {
        $requestString = file_get_contents(__DIR__ . '/../tests/fixtures/instrospec.graphql');
        $is_introspec = TRUE;

      } else {
        throw new Exception(t("User without permission `use graphql_api introspection` cannot browse the schema"));
      }
    }

    $is_introspec = FALSE; // @FIXME
    if ($is_introspec && $cache = cache_get('graphql_api_introspec') && empty($_GET['nocache'])) {
      $result = $cache->data;
    } else {
      // Define your schema:
      $schemaBuilder = graphql_api();
      $schema = $schemaBuilder->build();

      $result = GraphQL::execute(
        $schema,
        $requestString,
        $variableValues,
        $operationName
      );

      if (!empty($schemaBuilder->errors)) {
        $result['schema_errors'] = $schemaBuilder->errors;
      }

      if ($is_introspec) {
        cache_set('graphql_api_introspec', $result);
      }
    }
  } catch (Exception $exception) {
    $result = [
      'errors' => [
        ['message' => $exception->getMessage(), 'backtrace' => debug_backtrace()]
      ]
    ];
  }

  drupal_json_output($result);*/
  exit;
}
