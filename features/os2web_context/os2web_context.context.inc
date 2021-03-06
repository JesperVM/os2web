<?php
/**
 * @file
 * os2web_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'borgerblokke';
  $context->description = 'Borger sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/4' => 'taxonomy/term/4',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_2' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger sider');
  $export['borgerblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'erhvervblokke';
  $context->description = 'Erhverv sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5' => 'taxonomy/term/5',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'referat' => 'referat',
        'sektionsside' => 'sektionsside',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_3' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_3',
          'region' => 'sidebar_first',
          'weight' => '-74',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '16',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erhverv sider');
  $export['erhvervblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footerblokke';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-footer_menuer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_menuer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['footerblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forside';
  $context->description = 'Forside blokke';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'foside',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forside blokke');
  $export['forside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Globale højre blokke';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'news' => 'news',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-redaktoer_info-block' => array(
          'module' => 'views',
          'delta' => 'redaktoer_info-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'delta_blocks-action-links' => array(
          'module' => 'delta_blocks',
          'delta' => 'action-links',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-selvbetjening-block_6' => array(
          'module' => 'views',
          'delta' => 'selvbetjening-block_6',
          'region' => 'sidebar_second',
          'weight' => '-69',
        ),
        'views-kontaktblok-block' => array(
          'module' => 'views',
          'delta' => 'kontaktblok-block',
          'region' => 'sidebar_second',
          'weight' => '-68',
        ),
        'views-spot_view-block_1' => array(
          'module' => 'views',
          'delta' => 'spot_view-block_1',
          'region' => 'sidebar_second',
          'weight' => '-67',
        ),
        'views-kle_lonks_boks-kle_links_boks' => array(
          'module' => 'views',
          'delta' => 'kle_lonks_boks-kle_links_boks',
          'region' => 'sidebar_second',
          'weight' => '-66',
        ),
        'menu-menu-erhverv-genveje' => array(
          'module' => 'menu',
          'delta' => 'menu-erhverv-genveje',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale højre blokke');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_second_sidebar';
  $context->description = 'Skjul højre kolonne på iframesider';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'meeting' => 'meeting',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
        'brugers-indhold' => 'brugers-indhold',
        'meeting*' => 'meeting*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Skjul højre kolonne på iframesider');
  $export['hide_second_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_second_sidebar_indholdssider';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 1;
  $export['hide_second_sidebar_indholdssider'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'planer_og_fritid_blokke';
  $context->description = 'Planer og fritid sider';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/6' => 'taxonomy/term/6',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_4' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => 3,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Planer og fritid sider');
  $export['planer_og_fritid_blokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portalforside';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'borger' => 'borger',
        'erhverv' => 'erhverv',
        'politik-og-planer' => 'politik-og-planer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_1' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => 11,
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
  );
  $context->condition_mode = 1;
  $export['portalforside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sektionsforside';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
  );
  $context->condition_mode = 0;
  $export['sektionsforside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'venstre_menu_2';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'esdh_dokument' => 'esdh_dokument',
        'esdh_sag' => 'esdh_sag',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'referat' => 'referat',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'site_struktur' => 'site_struktur',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'standard',
    ),
  );
  $context->condition_mode = 0;
  $export['venstre_menu_2'] = $context;

  return $export;
}
