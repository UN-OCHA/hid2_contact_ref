<?php
/**
 * @file
 * hid2_contact_ref.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hid2_contact_ref_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hid_contact_ref'
  $field_bases['field_hid_contact_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hid_contact_ref',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'cid' => array(
        0 => 'cid',
      ),
    ),
    'locked' => 0,
    'module' => 'hid2_contact_ref',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => NULL,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'hid2_contact_ref',
  );


  return $field_bases;
}
