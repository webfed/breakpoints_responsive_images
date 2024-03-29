<?php
/**
 * @file
 * responsive_images.default_resp_img_suffixs.inc
 */

/**
 * Implements hook_default_resp_img_suffixs().
 */
function responsive_images_default_resp_img_suffixs() {
  $export = array();

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'narrow';
  $resp_img_suffix->label = 'Narrow';
  $resp_img_suffix->suffix = '_narrow';
  $resp_img_suffix->breakpoint = 740;
  $export['narrow'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'normal';
  $resp_img_suffix->label = 'Normal';
  $resp_img_suffix->suffix = '_normal';
  $resp_img_suffix->breakpoint = 979;
  $export['normal'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'smartphone_portrait';
  $resp_img_suffix->label = 'Smartphone portrait';
  $resp_img_suffix->suffix = '_smartport';
  $resp_img_suffix->breakpoint = 0;
  $export['smartphone_portrait'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'wide';
  $resp_img_suffix->label = 'Wide';
  $resp_img_suffix->suffix = '_wide';
  $resp_img_suffix->breakpoint = 1219;
  $export['wide'] = $resp_img_suffix;

  return $export;
}
