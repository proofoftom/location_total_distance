<?php
/**
 * @file Contains the admin form for setting the API key
 * Created by PhpStorm.
 * User: Tommy
 * Date: 7/29/14
 * Time: 7:51 AM
 */

/**
 * Admin form for setting Google API key
 * @return array
 */
function location_total_distance_admin () {
  $form = array();
  $form['location_total_distance_google_api_key'] = array(
    '#type' => 'textfield',
    '#title' => 'Google API Key',
    '#description' => l(
      'Google Directions API Key documentation',
      'https://developers.google.com/maps/documentation/directions/#api_key',
      array(
        'attributes' => array(
          'target' => '_blank'
        )
      )),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => TRUE,
  );
  // Pass the form array through system_settings_form()
  return system_settings_form($form);
}