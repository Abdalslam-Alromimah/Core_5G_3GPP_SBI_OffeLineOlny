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



type PduSessionInformation struct {

	NetworkSlicingInfo NetworkSlicingInfo `json:"networkSlicingInfo,omitempty"`

	// Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.  
	PduSessionID int32 `json:"pduSessionID"`

	PduType PduSessionType `json:"pduType,omitempty"`

	SscMode SscMode `json:"sscMode,omitempty"`

	HPlmnId PlmnId `json:"hPlmnId,omitempty"`

	ServingNetworkFunctionID ServingNetworkFunctionId `json:"servingNetworkFunctionID,omitempty"`

	RatType RatType `json:"ratType,omitempty"`

	MAPDUNon3GPPRATType RatType `json:"mAPDUNon3GPPRATType,omitempty"`

	// String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \"Label1.Label2.Label3\"). 
	DnnId string `json:"dnnId"`

	ChargingCharacteristics string `json:"chargingCharacteristics,omitempty"`

	ChargingCharacteristicsSelectionMode ChargingCharacteristicsSelectionMode `json:"chargingCharacteristicsSelectionMode,omitempty"`

	// string with format 'date-time' as defined in OpenAPI.
	StartTime time.Time `json:"startTime,omitempty"`

	// string with format 'date-time' as defined in OpenAPI.
	StopTime time.Time `json:"stopTime,omitempty"`

	Var3gppPSDataOffStatus Model3GpppsDataOffStatus `json:"3gppPSDataOffStatus,omitempty"`

	SessionStopIndicator bool `json:"sessionStopIndicator,omitempty"`

	PduAddress PduAddress `json:"pduAddress,omitempty"`

	Diagnostics int32 `json:"diagnostics,omitempty"`

	AuthorizedQoSInformation AuthorizedDefaultQos `json:"authorizedQoSInformation,omitempty"`

	SubscribedQoSInformation SubscribedDefaultQos `json:"subscribedQoSInformation,omitempty"`

	AuthorizedSessionAMBR Ambr `json:"authorizedSessionAMBR,omitempty"`

	SubscribedSessionAMBR Ambr `json:"subscribedSessionAMBR,omitempty"`

	ServingCNPlmnId PlmnId `json:"servingCNPlmnId,omitempty"`

	MAPDUSessionInformation MapduSessionInformation `json:"mAPDUSessionInformation,omitempty"`

	EnhancedDiagnostics []RanNasRelCause `json:"enhancedDiagnostics,omitempty"`
}

// AssertPduSessionInformationRequired checks if the required fields are not zero-ed
func AssertPduSessionInformationRequired(obj PduSessionInformation) error {
	elements := map[string]interface{}{
		"pduSessionID": obj.PduSessionID,
		"dnnId": obj.DnnId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertNetworkSlicingInfoRequired(obj.NetworkSlicingInfo); err != nil {
		return err
	}
	if err := AssertPduSessionTypeRequired(obj.PduType); err != nil {
		return err
	}
	if err := AssertSscModeRequired(obj.SscMode); err != nil {
		return err
	}
	if err := AssertPlmnIdRequired(obj.HPlmnId); err != nil {
		return err
	}
	if err := AssertServingNetworkFunctionIdRequired(obj.ServingNetworkFunctionID); err != nil {
		return err
	}
	if err := AssertRatTypeRequired(obj.RatType); err != nil {
		return err
	}
	if err := AssertRatTypeRequired(obj.MAPDUNon3GPPRATType); err != nil {
		return err
	}
	if err := AssertChargingCharacteristicsSelectionModeRequired(obj.ChargingCharacteristicsSelectionMode); err != nil {
		return err
	}
	if err := AssertModel3GpppsDataOffStatusRequired(obj.Var3gppPSDataOffStatus); err != nil {
		return err
	}
	if err := AssertPduAddressRequired(obj.PduAddress); err != nil {
		return err
	}
	if err := AssertAuthorizedDefaultQosRequired(obj.AuthorizedQoSInformation); err != nil {
		return err
	}
	if err := AssertSubscribedDefaultQosRequired(obj.SubscribedQoSInformation); err != nil {
		return err
	}
	if err := AssertAmbrRequired(obj.AuthorizedSessionAMBR); err != nil {
		return err
	}
	if err := AssertAmbrRequired(obj.SubscribedSessionAMBR); err != nil {
		return err
	}
	if err := AssertPlmnIdRequired(obj.ServingCNPlmnId); err != nil {
		return err
	}
	if err := AssertMapduSessionInformationRequired(obj.MAPDUSessionInformation); err != nil {
		return err
	}
	for _, el := range obj.EnhancedDiagnostics {
		if err := AssertRanNasRelCauseRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertPduSessionInformationConstraints checks if the values respects the defined constraints
func AssertPduSessionInformationConstraints(obj PduSessionInformation) error {
	if obj.PduSessionID < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	if obj.PduSessionID > 255 {
		return &ParsingError{Err: errors.New(errMsgMaxValueConstraint)}
	}
	return nil
}
