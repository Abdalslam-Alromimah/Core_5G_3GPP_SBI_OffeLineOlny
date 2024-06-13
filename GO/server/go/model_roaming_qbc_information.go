// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

/*
 * Nchf_OfflineOnlyCharging
 *
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * API version: 1.2.0-alpha.1
 */

package openapi




type RoamingQbcInformation struct {

	MultipleQFIcontainer []MultipleQfIcontainer `json:"multipleQFIcontainer,omitempty"`

	// String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.  
	UPFID string `json:"uPFID,omitempty"`

	RoamingChargingProfile RoamingChargingProfile `json:"roamingChargingProfile,omitempty"`
}

// AssertRoamingQbcInformationRequired checks if the required fields are not zero-ed
func AssertRoamingQbcInformationRequired(obj RoamingQbcInformation) error {
	for _, el := range obj.MultipleQFIcontainer {
		if err := AssertMultipleQfIcontainerRequired(el); err != nil {
			return err
		}
	}
	if err := AssertRoamingChargingProfileRequired(obj.RoamingChargingProfile); err != nil {
		return err
	}
	return nil
}

// AssertRoamingQbcInformationConstraints checks if the values respects the defined constraints
func AssertRoamingQbcInformationConstraints(obj RoamingQbcInformation) error {
	return nil
}
