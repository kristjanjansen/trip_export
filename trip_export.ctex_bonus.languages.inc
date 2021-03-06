<?php

/**
 * @file
 * Bulk export of languages generated by Drush Ctools Export Bonus.
 * Use drush cbrl modulename to rebuild languages.
 */

/**
 * Implements hook_drush_ctex_bonus_languages().
 */
function trip_export_drush_ctex_bonus_languages() {
  $languages = array();

  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
    'javascript' => '',
  );

  $languages['et'] = array(
    'language' => 'et',
    'name' => 'Estonian',
    'native' => 'Eesti',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'et',
    'weight' => '0',
    'javascript' => '',
  );

  return $languages;
}
