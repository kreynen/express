<?php
/**
 * @file
 * cu_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cu_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pc2tr40fz12bx';
  $context->description = 'Sitewide context - name hashed for security by obscurity.';
  $context->tag = 'locked';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~user' => '~user',
        '~user/*' => '~user/*',
        '~node/*/edit' => '~node/*/edit',
        '~block/*/edit' => '~block/*/edit',
        '~taxonomy/term/*/edit' => '~taxonomy/term/*/edit',
        '~node/*/delete' => '~node/*/delete',
        '~block/*/delete' => '~block/*/delete',
        '~taxonomy/term/*/delete' => '~taxonomy/term/*/delete',
        '~node/*/webform*' => '~node/*/webform*',
        '~node/*/webform-results' => '~node/*/webform-results',
        '~media/browser/' => '~media/browser',
        '~node/*/blocks' => '~node/*/blocks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'google_appliance-ga_block_search_form' => array(
          'module' => 'google_appliance',
          'delta' => 'ga_block_search_form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'cu_site_info-site_info' => array(
          'module' => 'cu_site_info',
          'delta' => 'site_info',
          'region' => 'site_info',
          'weight' => '0',
        ),
        'cu_alerts-cu_alerts' => array(
          'module' => 'cu_alerts',
          'delta' => 'cu_alerts',
          'region' => 'alerts',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context - name hashed for security by obscurity.');
  t('locked');
  $export['pc2tr40fz12bx'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Active across the entire site.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~/user' => '~/user',
        '~/user/*' => '~/user/*',
        '~node/*/edit' => '~node/*/edit',
        '~block/*/edit' => '~block/*/edit',
        '~/axonomy/term/*/edit' => '~taxonomy/term/*/edit',
        '~node/*/delete' => '~node/*/delete',
        '~block/*/delete' => '~block/*/delete',
        '~taxonomy/term/*/delete' => '~taxonomy/term/*/delete',
        '~node/*/webform*' => '~node/*/webform*',
        '~node/*/webform-results' => '~node/*/webform-results',
        '~media/browser/' => '~media/browser',
        '~node/*/blocks' => '~node/*/blocks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-site_navigation_menus-1' => array(
          'module' => 'menu_block',
          'delta' => 'site_navigation_menus-1',
          'region' => 'sidebar_second',
          'weight' => '-99',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active across the entire site.');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide-except-homepage';
  $context->description = 'Active across entire site, except for the homepage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~/user' => '~/user',
        '~/user/*' => '~/user/*',
        '~node/*/edit' => '~node/*/edit',
        '~block/*/edit' => '~block/*/edit',
        '~taxonomy/term/*/edit' => '~taxonomy/term/*/edit',
        '~node/*/delete' => '~node/*/delete',
        '~block/*/delete' => '~block/*/delete',
        '~taxonomy/term/*/delete' => '~taxonomy/term/*/delete',
        '~node/*/webform*' => '~node/*/webform*',
        '~node/*/webform-results' => '~node/*/webform-results',
        '~media/browser' => '~media/browser',
        '~node/*/blocks' => '~node/*/blocks',
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active across entire site, except for the homepage');
  $export['sitewide-except-homepage'] = $context;

  return $export;
}
