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



// QosCharacteristics - Contains QoS characteristics for a non-standardized or a non-configured 5QI.
type QosCharacteristics struct {

	// Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255. 
	Var5qi int32 `json:"5qi"`

	ResourceType QosResourceType `json:"resourceType"`

	// Unsigned integer indicating the 5QI Priority Level (see clauses 5.7.3.3 and 5.7.4 of 3GPP TS 23.501, within the range 1 to 127.Values are ordered in decreasing order of priority,  i.e. with 1 as the highest priority and 127 as the lowest priority.  
	PriorityLevel int32 `json:"priorityLevel"`

	// Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds. 
	PacketDelayBudget int32 `json:"packetDelayBudget"`

	// String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \"scalar x 10-k\" where the scalar and the exponent k are each encoded as one decimal digit. 
	PacketErrorRate string `json:"packetErrorRate"`

	// Unsigned integer indicating Averaging Window (see clause 5.7.3.6 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds.  
	AveragingWindow int32 `json:"averagingWindow,omitempty"`

	// Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.  
	MaxDataBurstVol int32 `json:"maxDataBurstVol,omitempty"`

	// Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.  
	ExtMaxDataBurstVol int32 `json:"extMaxDataBurstVol,omitempty"`
}

// AssertQosCharacteristicsRequired checks if the required fields are not zero-ed
func AssertQosCharacteristicsRequired(obj QosCharacteristics) error {
	elements := map[string]interface{}{
		"5qi": obj.Var5qi,
		"resourceType": obj.ResourceType,
		"priorityLevel": obj.PriorityLevel,
		"packetDelayBudget": obj.PacketDelayBudget,
		"packetErrorRate": obj.PacketErrorRate,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertQosResourceTypeRequired(obj.ResourceType); err != nil {
		return err
	}
	return nil
}

// AssertQosCharacteristicsConstraints checks if the values respects the defined constraints
func AssertQosCharacteristicsConstraints(obj QosCharacteristics) error {
	if obj.Var5qi < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.Var5qi > 255 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.PriorityLevel < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.PriorityLevel > 127 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.PacketDelayBudget < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.AveragingWindow < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.AveragingWindow > 4095 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.MaxDataBurstVol < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.MaxDataBurstVol > 4095 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.ExtMaxDataBurstVol < 4096 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.ExtMaxDataBurstVol > 2000000 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	return nil
}
