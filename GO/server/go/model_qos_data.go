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



// QosData - Contains the QoS parameters.
type QosData struct {

	// Univocally identifies the QoS control policy data within a PDU session.
	QosId string `json:"qosId"`

	// Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255. 
	Var5qi int32 `json:"5qi,omitempty"`

	// This data type is defined in the same way as the 'BitRate' data type, but with the OpenAPI 'nullable: true' property. 
	MaxbrUl *string `json:"maxbrUl,omitempty"`

	// This data type is defined in the same way as the 'BitRate' data type, but with the OpenAPI 'nullable: true' property. 
	MaxbrDl *string `json:"maxbrDl,omitempty"`

	// This data type is defined in the same way as the 'BitRate' data type, but with the OpenAPI 'nullable: true' property. 
	GbrUl *string `json:"gbrUl,omitempty"`

	// This data type is defined in the same way as the 'BitRate' data type, but with the OpenAPI 'nullable: true' property. 
	GbrDl *string `json:"gbrDl,omitempty"`

	Arp Arp `json:"arp,omitempty"`

	// Indicates whether notifications are requested from 3GPP NG-RAN when the GFBR can no longer (or again) be guaranteed for a QoS Flow during the lifetime of the QoS Flow. 
	Qnc bool `json:"qnc,omitempty"`

	// This data type is defined in the same way as the '5QiPriorityLevel' data type, but with the OpenAPI 'nullable: true' property. 
	PriorityLevel *int32 `json:"priorityLevel,omitempty"`

	// This data type is defined in the same way as the 'AverWindow' data type, but with the OpenAPI 'nullable: true' property. 
	AverWindow *int32 `json:"averWindow,omitempty"`

	// This data type is defined in the same way as the 'MaxDataBurstVol' data type, but with the OpenAPI 'nullable: true' property. 
	MaxDataBurstVol *int32 `json:"maxDataBurstVol,omitempty"`

	// Indicates whether the QoS information is reflective for the corresponding service data  flow. 
	ReflectiveQos bool `json:"reflectiveQos,omitempty"`

	// Indicates, by containing the same value, what PCC rules may share resource in downlink  direction. 
	SharingKeyDl string `json:"sharingKeyDl,omitempty"`

	// Indicates, by containing the same value, what PCC rules may share resource in uplink  direction. 
	SharingKeyUl string `json:"sharingKeyUl,omitempty"`

	// This data type is defined in the same way as the 'PacketLossRate' data type, but with the OpenAPI 'nullable: true' property. 
	MaxPacketLossRateDl *int32 `json:"maxPacketLossRateDl,omitempty"`

	// This data type is defined in the same way as the 'PacketLossRate' data type, but with the OpenAPI 'nullable: true' property. 
	MaxPacketLossRateUl *int32 `json:"maxPacketLossRateUl,omitempty"`

	// Indicates that the dynamic PCC rule shall always have its binding with the QoS Flow  associated with the default QoS rule 
	DefQosFlowIndication bool `json:"defQosFlowIndication,omitempty"`

	// This data type is defined in the same way as the 'ExtMaxDataBurstVol' data type, but with the OpenAPI 'nullable: true' property. 
	ExtMaxDataBurstVol *int32 `json:"extMaxDataBurstVol,omitempty"`

	// Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds. 
	PacketDelayBudget int32 `json:"packetDelayBudget,omitempty"`

	// String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \"scalar x 10-k\" where the scalar and the exponent k are each encoded as one decimal digit. 
	PacketErrorRate string `json:"packetErrorRate,omitempty"`

	PduSetQosDl PduSetQosParaRm `json:"pduSetQosDl,omitempty"`

	PduSetQosUl PduSetQosParaRm `json:"pduSetQosUl,omitempty"`
}

// AssertQosDataRequired checks if the required fields are not zero-ed
func AssertQosDataRequired(obj QosData) error {
	elements := map[string]interface{}{
		"qosId": obj.QosId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertArpRequired(obj.Arp); err != nil {
		return err
	}
	if err := AssertPduSetQosParaRmRequired(obj.PduSetQosDl); err != nil {
		return err
	}
	if err := AssertPduSetQosParaRmRequired(obj.PduSetQosUl); err != nil {
		return err
	}
	return nil
}

// AssertQosDataConstraints checks if the values respects the defined constraints
func AssertQosDataConstraints(obj QosData) error {
	if obj.Var5qi < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.Var5qi > 255 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.PriorityLevel != nil && *obj.PriorityLevel < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.PriorityLevel != nil && *obj.PriorityLevel > 127 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.AverWindow != nil && *obj.AverWindow < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.AverWindow != nil && *obj.AverWindow > 4095 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.MaxDataBurstVol != nil && *obj.MaxDataBurstVol < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.MaxDataBurstVol != nil && *obj.MaxDataBurstVol > 4095 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.MaxPacketLossRateDl != nil && *obj.MaxPacketLossRateDl < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.MaxPacketLossRateDl != nil && *obj.MaxPacketLossRateDl > 1000 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.MaxPacketLossRateUl != nil && *obj.MaxPacketLossRateUl < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.MaxPacketLossRateUl != nil && *obj.MaxPacketLossRateUl > 1000 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.ExtMaxDataBurstVol != nil && *obj.ExtMaxDataBurstVol < 4096 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.ExtMaxDataBurstVol != nil && *obj.ExtMaxDataBurstVol > 2000000 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	if obj.PacketDelayBudget < 1 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	return nil
}
