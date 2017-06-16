<?php
/**
 * @file
 * Settings page
 */

/**
 * Admin form for managing the system variables associated with this module.
 */
function hid2_contact_ref_settings_form($form, &$form_state) {
  $form['hid2_contact_ref_api_endpoint'] = array(
    '#type' => 'textfield',
    '#title' => t('API endpoint'),
    '#description' => t('The base URL for endpoints of Humanitarian ID v2 API.'),
    '#default_value' => variable_get('hid2_contact_ref_api_endpoint', NULL),
    '#required' => FALSE,
  );
  $form['hid2_contact_ref_api_key'] = array(
    '#type' => 'textarea',
    '#title' => t('HID v2 API key'),
    '#description' => t('API key for HID v2'),
    '#default_value' => variable_get('hid2_contact_ref_api_key', NULL),
  );
  return system_settings_form($form);
}
