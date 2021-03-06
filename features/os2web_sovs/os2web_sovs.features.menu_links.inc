<?php
/**
 * @file
 * os2web_sovs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2web_sovs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:taxonomy/term/4
  $menu_links['main-menu:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => 'mega_menu_borger',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '30',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '970',
            'max' => '970',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '782',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/5
  $menu_links['main-menu:taxonomy/term/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => 'mega_menu_for_erhverv',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '0',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '970',
            'max' => '970',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '783',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/6
  $menu_links['main-menu:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik og planer',
    'options' => array(
      'minipanel' => 'mega_menu_for_politik_og_planer',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '0',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '970',
            'max' => '970',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '784',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-erhverv-genveje:<front>
  $menu_links['menu-erhverv-genveje:<front>'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-mega-menu-borger:<front>
  $menu_links['menu-mega-menu-borger:<front>'] = array(
    'menu_name' => 'menu-mega-menu-borger',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Arbejde',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-mega-menu-erhverv:<front>
  $menu_links['menu-mega-menu-erhverv:<front>'] = array(
    'menu_name' => 'menu-mega-menu-erhverv',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Arbejdskraft',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-overordnet-sitemenu:taxonomy/term/4
  $menu_links['menu-overordnet-sitemenu:taxonomy/term/4'] = array(
    'menu_name' => 'menu-overordnet-sitemenu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => 'mega_menu_borger',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'fixed' => 'true',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '960',
            'max' => '960',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '864',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-overordnet-sitemenu:taxonomy/term/5
  $menu_links['menu-overordnet-sitemenu:taxonomy/term/5'] = array(
    'menu_name' => 'menu-overordnet-sitemenu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => 'mega_menu_erhverv',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'fixed' => 'true',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '960',
            'max' => '960',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-overordnet-sitemenu:taxonomy/term/6
  $menu_links['menu-overordnet-sitemenu:taxonomy/term/6'] = array(
    'menu_name' => 'menu-overordnet-sitemenu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik og planer',
    'options' => array(
      'minipanel' => 'mega_menu_politikogplaner',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'fixed' => 'true',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '960',
            'max' => '960',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '866',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-selvbetjening:taxonomy/term/4
  $menu_links['menu-selvbetjening:taxonomy/term/4'] = array(
    'menu_name' => 'menu-selvbetjening',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borgere',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-selvbetjening:taxonomy/term/5
  $menu_links['menu-selvbetjening:taxonomy/term/5'] = array(
    'menu_name' => 'menu-selvbetjening',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-top-menu:http://www.adgangforalle.dk/
  $menu_links['menu-top-menu:http://www.adgangforalle.dk/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.adgangforalle.dk/',
    'router_path' => '',
    'link_title' => 'Læs højt',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-top-menu:user/logout
  $menu_links['menu-top-menu:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log ud',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: user-menu:admin/workbench
  $menu_links['user-menu:admin/workbench'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: user-menu:node/add/contentpage
  $menu_links['user-menu:node/add/contentpage'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/contentpage',
    'router_path' => 'node/add/contentpage',
    'link_title' => 'Opret indhold',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: user-menu:node/add/esdh-dokument
  $menu_links['user-menu:node/add/esdh-dokument'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/esdh-dokument',
    'router_path' => 'node/add/esdh-dokument',
    'link_title' => 'Opret ESDH dokument',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: user-menu:node/add/esdh-sag
  $menu_links['user-menu:node/add/esdh-sag'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/esdh-sag',
    'router_path' => 'node/add/esdh-sag',
    'link_title' => 'Opret ESDH sag',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: user-menu:node/add/galleri
  $menu_links['user-menu:node/add/galleri'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/galleri',
    'router_path' => 'node/add/galleri',
    'link_title' => 'Opret galleri',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: user-menu:node/add/iframe-selvbetjeningsl-sning-mm
  $menu_links['user-menu:node/add/iframe-selvbetjeningsl-sning-mm'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/iframe-selvbetjeningsl-sning-mm',
    'router_path' => 'node/add/iframe-selvbetjeningsl-sning-mm',
    'link_title' => 'Opret iframe/selvbetjeningsløsning m.m.',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: user-menu:node/add/news
  $menu_links['user-menu:node/add/news'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'Opret nyhed',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: user-menu:node/add/rotating-image
  $menu_links['user-menu:node/add/rotating-image'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/rotating-image',
    'router_path' => 'node/add/rotating-image',
    'link_title' => 'Opret billedkarrusel',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Arbejde');
  t('Arbejdskraft');
  t('Borger');
  t('Borgere');
  t('Erhverv');
  t('Kontakt');
  t('Log out');
  t('Log ud');
  t('Læs højt');
  t('Opret ESDH dokument');
  t('Opret ESDH sag');
  t('Opret billedkarrusel');
  t('Opret galleri');
  t('Opret iframe/selvbetjeningsløsning m.m.');
  t('Opret indhold');
  t('Opret nyhed');
  t('Politik og planer');
  t('User account');
  t('Workbench');


  return $menu_links;
}
