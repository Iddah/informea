<?php

class SemanticTurkey {

  public $server_url = 'http://vocbench.edw.ro';
  public $servlet_url = 'http://vocbench.edw.ro/semanticturkey/resources/stserver/STServer';

  public function __construct($server_url) {
    $this->server_url = $server_url;
    $this->servlet_url = $this->server_url . '/semanticturkey/resources/stserver/STServer';
  }

  function exportRDF($ontology_name, $destination) {
    $ret = FALSE;
    $st_url = $this->servlet_url . "?service=inputOutput&request=saveRDF&file=%s&format=rdf&allNGs=false&ctx_project=%s";
    $url = sprintf($st_url, $destination, $ontology_name);
    $curl = curl_init();
    curl_setopt_array($curl, array(
      CURLOPT_RETURNTRANSFER => 1,
      CURLOPT_FAILONERROR => 1,
      CURLOPT_URL => $url,
    ));
    if ($resp = curl_exec($curl)) {
      if (!preg_match('/type="exception"/', $resp)) {
        $ret = TRUE;
      }
    }
    else {
      watchdog('thesaurus', 'Failed to contact ST server @ !url', array('!url' => $url), WATCHDOG_ERROR);
    }
    curl_close($curl);
    return $ret;
  }

  public static function slugify($string) {
    $result = strtolower($string);
    $result = preg_replace("/[^a-z0-9\s-]/", "", $result);
    $result = trim(preg_replace("/[\s-]+/", " ", $result));
    $result = preg_replace("/\s/", "-", $result);
    return $result;
  }
}
