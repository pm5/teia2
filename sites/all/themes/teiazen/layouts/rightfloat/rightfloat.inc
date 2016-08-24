<?php

// Plugin definition
$plugin = array(
  'title' => t('Right floated column'),
  'category' => t('Columns: 2'),
  'icon' => 'rightfloat.png',
  'theme' => 'rightfloat',
  'css' => 'rightfloat.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right floated')
  ),
);
