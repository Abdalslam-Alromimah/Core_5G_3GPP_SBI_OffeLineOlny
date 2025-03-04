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
	"time"
	"errors"
)



type MultipleQfIcontainer struct {

	Triggers []Trigger `json:"triggers,omitempty"`

	// string with format 'date-time' as defined in OpenAPI.
	TriggerTimestamp time.Time `json:"triggerTimestamp,omitempty"`

	// Integer where the allowed values correspond to the value range of an unsigned 32-bit integer. 
	Time int32 `json:"time,omitempty"`

	// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
	TotalVolume int32 `json:"totalVolume,omitempty"`

	// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
	UplinkVolume int32 `json:"uplinkVolume,omitempty"`

	LocalSequenceNumber int32 `json:"localSequenceNumber"`

	QFIContainerInformation QfiContainerInformation `json:"qFIContainerInformation,omitempty"`
}

// AssertMultipleQfIcontainerRequired checks if the required fields are not zero-ed
func AssertMultipleQfIcontainerRequired(obj MultipleQfIcontainer) error {
	elements := map[string]interface{}{
		"localSequenceNumber": obj.LocalSequenceNumber,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Triggers {
		if err := AssertTriggerRequired(el); err != nil {
			return err
		}
	}
	if err := AssertQfiContainerInformationRequired(obj.QFIContainerInformation); err != nil {
		return err
	}
	return nil
}

// AssertMultipleQfIcontainerConstraints checks if the values respects the defined constraints
func AssertMultipleQfIcontainerConstraints(obj MultipleQfIcontainer) error {
	if obj.Time < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.Time > 4294967295 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.TotalVolume < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.TotalVolume > -1 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.UplinkVolume < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.UplinkVolume > -1 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	return nil
}
