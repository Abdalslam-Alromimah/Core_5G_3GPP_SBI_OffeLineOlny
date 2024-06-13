// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

/*
 * Nchf_OfflineOnlyCharging
 *
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.2.0-alpha.1
 */

package openapi


import (
	"errors"
)



// ThresholdValue - Indicates the threshold value(s) for RTT and/or Packet Loss Rate.
type ThresholdValue struct {

	// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI 'nullable: true' property. 
	RttThres *int32 `json:"rttThres,omitempty"`

	// This data type is defined in the same way as the 'PacketLossRate' data type, but with the OpenAPI 'nullable: true' property. 
	PlrThres *int32 `json:"plrThres,omitempty"`
}

// AssertThresholdValueRequired checks if the required fields are not zero-ed
func AssertThresholdValueRequired(obj ThresholdValue) error {
	return nil
}

// AssertThresholdValueConstraints checks if the values respects the defined constraints
func AssertThresholdValueConstraints(obj ThresholdValue) error {
	if obj.RttThres != nil && *obj.RttThres < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.PlrThres != nil && *obj.PlrThres < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.PlrThres != nil && *obj.PlrThres > 1000 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	return nil
}
