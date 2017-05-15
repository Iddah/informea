<?php

/** Supports OData v4 specific structures. */
class ODataConsumerV4 extends ODataConsumer {

  public function loadRemoteData($url) {
    $ret = NULL;
    ws_consumer_odata_log(__METHOD__ . ": Retrieving OData result from: " . $url, MigrationBase::MESSAGE_NOTICE);
    list($username, $password) = $this->config->getAuthenticationCredentials();
    $response = ODataMigrationUtil::http_request($url, array('Accept: application/json'), $username, $password);
    if (!empty($response) && $json = json_decode($response)) {
      $ret = (object)['results' => $json->value];
    }
    return $ret;
  }

  /**
   * Does an OData remote entity count, this call is not cached.
   *
   * @return int
   *   Number of entities or zero
   */
  public function countTotal($entity) {
    $ret = 0;
    $base_url = $this->config->getEndpointURL();
    $url = $base_url . '/' . $entity . '/$count';

    ws_consumer_odata_log(get_class($this) . ': Remote counting entities: ' . $url);
    list($username, $password) = $this->config->getAuthenticationCredentials();
    $response = ODataMigrationUtil::http_request($url, array(), $username, $password);

    if (!empty($response)) {
      $ret = intval($response);
    }
    else {
      $url = $base_url . '/' . $entity . '?$inlinecount=allpages';
      $response = ODataMigrationUtil::http_request($url, array(), $username, $password);
      $element_name = 'm:count';
      $found = preg_match(
        '#<'.$element_name.'(?:\s+[^>]+)?>(.*?)'.'</'.$element_name.'>#s',
        $response,
        $matches
      );
      if ($found) {
        $ret = intval($matches[1]);
      }
      else {
        ws_consumer_odata_log('FAIL: ' . get_class($this) . ': Remote counting entities: ' . $url, MigrationBase::MESSAGE_WARNING);
      }
    }
    ws_consumer_odata_log('Total: ' . $ret);
    return $ret;
  }

  /**
   * Return a single page of results
   *
   * @param Migration $migration
   *
   * @return array
   *   Array of stdClass objects
   */
  public function getPage($entity, $start, $migration) {
    $ret = array();
    $pageSize = ODataConsumerConfig::getODataPageSize();
    $base_url = $this->config->getEndpointURL() . '/' . $entity;
    $url = sprintf($base_url . '?$top=%d&$skip=%d', $pageSize, $start);
    $odata_filter = $this->config->getListingQueryString();
    if ($odata_filter) {
      $url .= $odata_filter;
    }
    $previous = NULL;
    $migration->getOption('update');

    if ($rows = $this->parseJSONRemoteListPage($url)) {
      foreach ($rows as $id => $row) {
        $ret[$id] = $row;
      }
    }
    $msg = sprintf(__METHOD__ . '(%s): Remote service returned %d results', $this->config->odata_entity, count($ret), count($ret));
    ws_consumer_odata_log($msg);
    return $ret;
  }

  public function loadNavigationProperty($ob, $property_name) {
    // OData v1, property expanded using $expand=property_name
    // No need for an additional HTTP request, data already there
    $results = array();
    if (!empty($ob->{$property_name})) {
      if (gettype($ob->{$property_name}) == 'object') {
        if (property_exists($ob->{$property_name}, 'results')) {
          $results = $ob->{$property_name};
        }
      }
      else {
        $results = $ob->{$property_name};
      }
      if (!$results) {
        return [];
      }
    }

    if (!empty($ob->{$property_name}) && !empty($results)) {
      return $results;
    }

    return [];
  }
}
