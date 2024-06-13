// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

/*
 * Nchf_OfflineOnlyCharging
 *
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.2.0-alpha.1
 */

package openapi




// TwapId - Contain the TWAP Identifier as defined in clause 4.2.8.5.3 of 3GPP TS 23.501 or the WLAN location information as defined in clause 4.5.7.2.8 of 3GPP TS 23.402. 
type TwapId struct {

	// This IE shall contain the SSID of the access point to which the UE is attached, that is received over NGAP, see IEEE Std 802.11-2012.  
	SsId string `json:"ssId"`

	// When present, it shall contain the BSSID of the access point to which the UE is attached, for trusted WLAN access, see IEEE Std 802.11-2012.  
	BssId string `json:"bssId,omitempty"`

	// string with format 'bytes' as defined in OpenAPI
	CivicAddress string `json:"civicAddress,omitempty"`
}

// AssertTwapIdRequired checks if the required fields are not zero-ed
func AssertTwapIdRequired(obj TwapId) error {
	elements := map[string]interface{}{
		"ssId": obj.SsId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertTwapIdConstraints checks if the values respects the defined constraints
func AssertTwapIdConstraints(obj TwapId) error {
	return nil
}
