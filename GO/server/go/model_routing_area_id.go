// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

/*
 * Nchf_OfflineOnlyCharging
 *
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.2.0-alpha.1
 */

package openapi




// RoutingAreaId - Contains a Routing Area Identification as defined in 3GPP TS 23.003, clause 4.2.
type RoutingAreaId struct {

	PlmnId PlmnId `json:"plmnId"`

	// Location Area Code
	Lac string `json:"lac"`

	// Routing Area Code
	Rac string `json:"rac"`
}

// AssertRoutingAreaIdRequired checks if the required fields are not zero-ed
func AssertRoutingAreaIdRequired(obj RoutingAreaId) error {
	elements := map[string]interface{}{
		"plmnId": obj.PlmnId,
		"lac": obj.Lac,
		"rac": obj.Rac,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertPlmnIdRequired(obj.PlmnId); err != nil {
		return err
	}
	return nil
}

// AssertRoutingAreaIdConstraints checks if the values respects the defined constraints
func AssertRoutingAreaIdConstraints(obj RoutingAreaId) error {
	return nil
}
