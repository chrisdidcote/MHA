<?php
/**
 * @file
 * mha_permission.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function mha_permission_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_address_1'
  $fields['user-user-field_address_1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address_1',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_address_1',
      'label' => 'Address 1',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'user-user-field_address_2'
  $fields['user-user-field_address_2'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address_2',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_address_2',
      'label' => 'Address 2',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'user-user-field_committee_position'
  $fields['user-user-field_committee_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_committee_position',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'portfolio',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_committee_position',
      'label' => 'Committee Position',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'user-user-field_country'
  $fields['user-user-field_country'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_country',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'AX' => 'ÅLAND ISLANDS',
          'DZ' => 'ALGERIA',
          'AD' => 'ANDORRA',
          'AI' => 'ANGUILLA',
          'AG' => 'ANTIGUA AND BARBUDA',
          'AM' => 'ARMENIA',
          'AU' => 'AUSTRALIA',
          'AZ' => 'AZERBAIJAN',
          'BH' => 'BAHRAIN',
          'BB' => 'BARBADOS',
          'BE' => 'BELGIUM',
          'BJ' => 'BENIN',
          'BT' => 'BHUTAN',
          'BQ' => 'BONAIRE, SINT EUSTATIUS AND SABA',
          'BW' => 'BOTSWANA',
          'BR' => 'BRAZIL',
          'BN' => 'BRUNEI DARUSSALAM',
          'BF' => 'BURKINA FASO',
          'KH' => 'CAMBODIA',
          'CA' => 'CANADA',
          'KY' => 'CAYMAN ISLANDS',
          'TD' => 'CHAD',
          'CN' => 'CHINA',
          'CC' => 'COCOS (KEELING) ISLANDS',
          'KM' => 'COMOROS',
          'CD' => 'CONGO, THE DEMOCRATIC REPUBLIC OF THE',
          'CR' => 'COSTA RICA',
          'HR' => 'CROATIA',
          'CW' => 'CURAÇAO',
          'CZ' => 'CZECH REPUBLIC',
          'DJ' => 'DJIBOUTI',
          'DO' => 'DOMINICAN REPUBLIC',
          'EG' => 'EGYPT',
          'GQ' => 'EQUATORIAL GUINEA',
          'EE' => 'ESTONIA',
          'FK' => 'FALKLAND ISLANDS (MALVINAS)',
          'FJ' => 'FIJI',
          'FR' => 'FRANCE',
          'PF' => 'FRENCH POLYNESIA',
          'GA' => 'GABON',
          'GE' => 'GEORGIA',
          'GH' => 'GHANA',
          'GR' => 'GREECE',
          'GD' => 'GRENADA',
          'GU' => 'GUAM',
          'GG' => 'GUERNSEY',
          'GW' => 'GUINEA-BISSAU',
          'HT' => 'HAITI',
          'VA' => 'HOLY SEE (VATICAN CITY STATE)',
          'HK' => 'HONG KONG',
          'IS' => 'ICELAND',
          'ID' => 'INDONESIA',
          'IQ' => 'IRAQ',
          'IM' => 'ISLE OF MAN',
          'IT' => 'ITALY',
          'JP' => 'JAPAN',
          'JO' => 'JORDAN',
          'KE' => 'KENYA',
          'KP' => 'KOREA, DEMOCRATIC PEOPLE\'S REPUBLIC OF',
          'KW' => 'KUWAIT',
          'LA' => 'LAO PEOPLE\'S DEMOCRATIC REPUBLIC',
          'LB' => 'LEBANON',
          'LR' => 'LIBERIA',
          'LI' => 'LIECHTENSTEIN',
          'LU' => 'LUXEMBOURG',
          'MK' => 'MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF',
          'MW' => 'MALAWI',
          'MV' => 'MALDIVES',
          'MT' => 'MALTA',
          'MQ' => 'MARTINIQUE',
          'MU' => 'MAURITIUS',
          'MX' => 'MEXICO',
          'MD' => 'MOLDOVA, REPUBLIC OF',
          'MN' => 'MONGOLIA',
          'MS' => 'MONTSERRAT',
          'MZ' => 'MOZAMBIQUE',
          'NA' => 'NAMIBIA',
          'NP' => 'NEPAL',
          'NC' => 'NEW CALEDONIA',
          'NI' => 'NICARAGUA',
          'NG' => 'NIGERIA',
          'NF' => 'NORFOLK ISLAND',
          'NO' => 'NORWAY',
          'PK' => 'PAKISTAN',
          'PS' => 'PALESTINIAN TERRITORY, OCCUPIED',
          'PG' => 'PAPUA NEW GUINEA',
          'PE' => 'PERU',
          'PN' => 'PITCAIRN',
          'PT' => 'PORTUGAL',
          'QA' => 'QATAR',
          'RO' => 'ROMANIA',
          'RW' => 'RWANDA',
          'SH' => 'SAINT HELENA, ASCENSION AND TRISTAN DA CUNHA',
          'LC' => 'SAINT LUCIA',
          'PM' => 'SAINT PIERRE AND MIQUELON',
          'WS' => 'SAMOA',
          'ST' => 'SAO TOME AND PRINCIPE',
          'SN' => 'SENEGAL',
          'SC' => 'SEYCHELLES',
          'SG' => 'SINGAPORE',
          'SK' => 'SLOVAKIA',
          'SB' => 'SOLOMON ISLANDS',
          'ZA' => 'SOUTH AFRICA',
          'SS' => 'SOUTH SUDAN',
          'LK' => 'SRI LANKA',
          'SR' => 'SURINAME',
          'SZ' => 'SWAZILAND',
          'CH' => 'SWITZERLAND',
          'TW' => 'TAIWAN, PROVINCE OF CHINA',
          'TZ' => 'TANZANIA, UNITED REPUBLIC OF',
          'TL' => 'TIMOR-LESTE',
          'TK' => 'TOKELAU',
          'TT' => 'TRINIDAD AND TOBAGO',
          'TR' => 'TURKEY',
          'TC' => 'TURKS AND CAICOS ISLANDS',
          'UG' => 'UGANDA',
          'AE' => 'UNITED ARAB EMIRATES',
          'US' => 'UNITED STATES',
          'UY' => 'URUGUAY',
          'VU' => 'VANUATU',
          'VN' => 'VIET NAM',
          'VI' => 'VIRGIN ISLANDS, U.S.',
          'EH' => 'WESTERN SAHARA',
          'ZM' => 'ZAMBIA',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_country',
      'label' => 'Country',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'user-user-field_county'
  $fields['user-user-field_county'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_county',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_county',
      'label' => 'County',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'user-user-field_first_name'
  $fields['user-user-field_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_first_name',
      'label' => 'First Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'user-user-field_last_name'
  $fields['user-user-field_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_last_name',
      'label' => 'Last Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'user-user-field_post_code'
  $fields['user-user-field_post_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_post_code',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_post_code',
      'label' => 'Post Code',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'user-user-field_town'
  $fields['user-user-field_town'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_town',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_town',
      'label' => 'Town',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'user-user-field_years_in_hall'
  $fields['user-user-field_years_in_hall'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_years_in_hall',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter a comma separated list of the years you were resident in Manor Hall, if weren\'t a Manor Hall resident and are applying for affiliate membership then you can leave this field blank.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_years_in_hall',
      'label' => 'Years in Hall',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address 1');
  t('Address 2');
  t('Committee Position');
  t('Country');
  t('County');
  t('Enter a comma separated list of the years you were resident in Manor Hall, if weren\'t a Manor Hall resident and are applying for affiliate membership then you can leave this field blank.');
  t('First Name');
  t('Last Name');
  t('Post Code');
  t('Town');
  t('Years in Hall');

  return $fields;
}
