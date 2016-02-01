<?php
/**
 * @file
 * teia_species.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function teia_species_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'field_species_season';
  $feeds_importer->config = array(
    'name' => '自然谷生態資料庫 - 季節',
    'description' => '從「自然谷生態資料庫分類」Google 試算表匯入。',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'flickr',
          1 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '季節',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'species_season',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['field_species_season'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'field_species_sense';
  $feeds_importer->config = array(
    'name' => '自然谷生態資料庫 - 導覽五感',
    'description' => '從「自然谷生態資料庫分類」Google 試算表匯入。',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'flickr',
          1 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '導覽五感',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'species_sense',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['field_species_sense'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'field_species_type';
  $feeds_importer->config = array(
    'name' => '自然谷生態資料庫 - 網站類別',
    'description' => '從「自然谷生態資料庫分類」Google 試算表匯入。',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'flickr',
          1 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => '網站類別',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'species_type',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['field_species_type'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'species';
  $feeds_importer->config = array(
    'name' => '自然谷生態資料庫 - 生態資料',
    'description' => '從「自然谷生態資料庫分類」Google 試算表匯入。',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => '物種名稱',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => '已發表(1有 0無)',
            'target' => 'status',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '特別註記',
            'target' => 'field_species_features',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '別名',
            'target' => 'field_species_alt_names',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '科名',
            'target' => 'field_species_family_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '學名',
            'target' => 'field_scientific_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => '分佈',
            'target' => 'field_species_distrib',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => '生態',
            'target' => 'field_species_life',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => '補充',
            'target' => 'field_species_suppl',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => '網站類別',
            'target' => 'field_species_type',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => '年份/月/序號',
            'target' => 'field_story_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => '季節',
            'target' => 'field_species_season',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => '導覽五感',
            'target' => 'field_species_sense',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => '圖片',
            'target' => 'field_title_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'species',
      ),
    ),
    'content_type' => '',
    'update' => 1,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['species'] = $feeds_importer;

  return $export;
}
