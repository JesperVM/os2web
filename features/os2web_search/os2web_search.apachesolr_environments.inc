<?php
/**
 * @file
 * os2web_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function os2web_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 0,
  );
  $export['solr'] = $environment;

  return $export;
}
