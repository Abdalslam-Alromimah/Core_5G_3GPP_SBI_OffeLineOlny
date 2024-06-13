# PDUContainerInformation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TimeofFirstUsage** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**TimeofLastUsage** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**QoSInformation** | Pointer to [**NullableQosData**](QosData.md) |  | [optional] 
**QoSCharacteristics** | Pointer to [**QosCharacteristics**](QosCharacteristics.md) |  | [optional] 
**AFCorrelationInformation** | Pointer to **string** |  | [optional] 
**UserLocationInformation** | Pointer to [**UserLocation**](UserLocation.md) |  | [optional] 
**UetimeZone** | Pointer to **string** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**RATType** | Pointer to [**RatType**](RatType.md) |  | [optional] 
**ServingNodeID** | Pointer to [**[]ServingNetworkFunctionID**](ServingNetworkFunctionID.md) |  | [optional] 
**PresenceReportingAreaInformation** | Pointer to [**map[string]PresenceInfo**](PresenceInfo.md) |  | [optional] 
**Var3gppPSDataOffStatus** | Pointer to [**Model3GPPPSDataOffStatus**](Model3GPPPSDataOffStatus.md) |  | [optional] 
**SponsorIdentity** | Pointer to **string** |  | [optional] 
**ApplicationserviceProviderIdentity** | Pointer to **string** |  | [optional] 
**ChargingRuleBaseName** | Pointer to **string** |  | [optional] 
**MAPDUSteeringFunctionality** | Pointer to [**SteeringFunctionality**](SteeringFunctionality.md) |  | [optional] 
**MAPDUSteeringMode** | Pointer to [**SteeringMode**](SteeringMode.md) |  | [optional] 

## Methods

### NewPDUContainerInformation

`func NewPDUContainerInformation() *PDUContainerInformation`

NewPDUContainerInformation instantiates a new PDUContainerInformation object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPDUContainerInformationWithDefaults

`func NewPDUContainerInformationWithDefaults() *PDUContainerInformation`

NewPDUContainerInformationWithDefaults instantiates a new PDUContainerInformation object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTimeofFirstUsage

`func (o *PDUContainerInformation) GetTimeofFirstUsage() time.Time`

GetTimeofFirstUsage returns the TimeofFirstUsage field if non-nil, zero value otherwise.

### GetTimeofFirstUsageOk

`func (o *PDUContainerInformation) GetTimeofFirstUsageOk() (*time.Time, bool)`

GetTimeofFirstUsageOk returns a tuple with the TimeofFirstUsage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeofFirstUsage

`func (o *PDUContainerInformation) SetTimeofFirstUsage(v time.Time)`

SetTimeofFirstUsage sets TimeofFirstUsage field to given value.

### HasTimeofFirstUsage

`func (o *PDUContainerInformation) HasTimeofFirstUsage() bool`

HasTimeofFirstUsage returns a boolean if a field has been set.

### GetTimeofLastUsage

`func (o *PDUContainerInformation) GetTimeofLastUsage() time.Time`

GetTimeofLastUsage returns the TimeofLastUsage field if non-nil, zero value otherwise.

### GetTimeofLastUsageOk

`func (o *PDUContainerInformation) GetTimeofLastUsageOk() (*time.Time, bool)`

GetTimeofLastUsageOk returns a tuple with the TimeofLastUsage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeofLastUsage

`func (o *PDUContainerInformation) SetTimeofLastUsage(v time.Time)`

SetTimeofLastUsage sets TimeofLastUsage field to given value.

### HasTimeofLastUsage

`func (o *PDUContainerInformation) HasTimeofLastUsage() bool`

HasTimeofLastUsage returns a boolean if a field has been set.

### GetQoSInformation

`func (o *PDUContainerInformation) GetQoSInformation() QosData`

GetQoSInformation returns the QoSInformation field if non-nil, zero value otherwise.

### GetQoSInformationOk

`func (o *PDUContainerInformation) GetQoSInformationOk() (*QosData, bool)`

GetQoSInformationOk returns a tuple with the QoSInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQoSInformation

`func (o *PDUContainerInformation) SetQoSInformation(v QosData)`

SetQoSInformation sets QoSInformation field to given value.

### HasQoSInformation

`func (o *PDUContainerInformation) HasQoSInformation() bool`

HasQoSInformation returns a boolean if a field has been set.

### SetQoSInformationNil

`func (o *PDUContainerInformation) SetQoSInformationNil(b bool)`

 SetQoSInformationNil sets the value for QoSInformation to be an explicit nil

### UnsetQoSInformation
`func (o *PDUContainerInformation) UnsetQoSInformation()`

UnsetQoSInformation ensures that no value is present for QoSInformation, not even an explicit nil
### GetQoSCharacteristics

`func (o *PDUContainerInformation) GetQoSCharacteristics() QosCharacteristics`

GetQoSCharacteristics returns the QoSCharacteristics field if non-nil, zero value otherwise.

### GetQoSCharacteristicsOk

`func (o *PDUContainerInformation) GetQoSCharacteristicsOk() (*QosCharacteristics, bool)`

GetQoSCharacteristicsOk returns a tuple with the QoSCharacteristics field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQoSCharacteristics

`func (o *PDUContainerInformation) SetQoSCharacteristics(v QosCharacteristics)`

SetQoSCharacteristics sets QoSCharacteristics field to given value.

### HasQoSCharacteristics

`func (o *PDUContainerInformation) HasQoSCharacteristics() bool`

HasQoSCharacteristics returns a boolean if a field has been set.

### GetAFCorrelationInformation

`func (o *PDUContainerInformation) GetAFCorrelationInformation() string`

GetAFCorrelationInformation returns the AFCorrelationInformation field if non-nil, zero value otherwise.

### GetAFCorrelationInformationOk

`func (o *PDUContainerInformation) GetAFCorrelationInformationOk() (*string, bool)`

GetAFCorrelationInformationOk returns a tuple with the AFCorrelationInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAFCorrelationInformation

`func (o *PDUContainerInformation) SetAFCorrelationInformation(v string)`

SetAFCorrelationInformation sets AFCorrelationInformation field to given value.

### HasAFCorrelationInformation

`func (o *PDUContainerInformation) HasAFCorrelationInformation() bool`

HasAFCorrelationInformation returns a boolean if a field has been set.

### GetUserLocationInformation

`func (o *PDUContainerInformation) GetUserLocationInformation() UserLocation`

GetUserLocationInformation returns the UserLocationInformation field if non-nil, zero value otherwise.

### GetUserLocationInformationOk

`func (o *PDUContainerInformation) GetUserLocationInformationOk() (*UserLocation, bool)`

GetUserLocationInformationOk returns a tuple with the UserLocationInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserLocationInformation

`func (o *PDUContainerInformation) SetUserLocationInformation(v UserLocation)`

SetUserLocationInformation sets UserLocationInformation field to given value.

### HasUserLocationInformation

`func (o *PDUContainerInformation) HasUserLocationInformation() bool`

HasUserLocationInformation returns a boolean if a field has been set.

### GetUetimeZone

`func (o *PDUContainerInformation) GetUetimeZone() string`

GetUetimeZone returns the UetimeZone field if non-nil, zero value otherwise.

### GetUetimeZoneOk

`func (o *PDUContainerInformation) GetUetimeZoneOk() (*string, bool)`

GetUetimeZoneOk returns a tuple with the UetimeZone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUetimeZone

`func (o *PDUContainerInformation) SetUetimeZone(v string)`

SetUetimeZone sets UetimeZone field to given value.

### HasUetimeZone

`func (o *PDUContainerInformation) HasUetimeZone() bool`

HasUetimeZone returns a boolean if a field has been set.

### GetRATType

`func (o *PDUContainerInformation) GetRATType() RatType`

GetRATType returns the RATType field if non-nil, zero value otherwise.

### GetRATTypeOk

`func (o *PDUContainerInformation) GetRATTypeOk() (*RatType, bool)`

GetRATTypeOk returns a tuple with the RATType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRATType

`func (o *PDUContainerInformation) SetRATType(v RatType)`

SetRATType sets RATType field to given value.

### HasRATType

`func (o *PDUContainerInformation) HasRATType() bool`

HasRATType returns a boolean if a field has been set.

### GetServingNodeID

`func (o *PDUContainerInformation) GetServingNodeID() []ServingNetworkFunctionID`

GetServingNodeID returns the ServingNodeID field if non-nil, zero value otherwise.

### GetServingNodeIDOk

`func (o *PDUContainerInformation) GetServingNodeIDOk() (*[]ServingNetworkFunctionID, bool)`

GetServingNodeIDOk returns a tuple with the ServingNodeID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServingNodeID

`func (o *PDUContainerInformation) SetServingNodeID(v []ServingNetworkFunctionID)`

SetServingNodeID sets ServingNodeID field to given value.

### HasServingNodeID

`func (o *PDUContainerInformation) HasServingNodeID() bool`

HasServingNodeID returns a boolean if a field has been set.

### GetPresenceReportingAreaInformation

`func (o *PDUContainerInformation) GetPresenceReportingAreaInformation() map[string]PresenceInfo`

GetPresenceReportingAreaInformation returns the PresenceReportingAreaInformation field if non-nil, zero value otherwise.

### GetPresenceReportingAreaInformationOk

`func (o *PDUContainerInformation) GetPresenceReportingAreaInformationOk() (*map[string]PresenceInfo, bool)`

GetPresenceReportingAreaInformationOk returns a tuple with the PresenceReportingAreaInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPresenceReportingAreaInformation

`func (o *PDUContainerInformation) SetPresenceReportingAreaInformation(v map[string]PresenceInfo)`

SetPresenceReportingAreaInformation sets PresenceReportingAreaInformation field to given value.

### HasPresenceReportingAreaInformation

`func (o *PDUContainerInformation) HasPresenceReportingAreaInformation() bool`

HasPresenceReportingAreaInformation returns a boolean if a field has been set.

### GetVar3gppPSDataOffStatus

`func (o *PDUContainerInformation) GetVar3gppPSDataOffStatus() Model3GPPPSDataOffStatus`

GetVar3gppPSDataOffStatus returns the Var3gppPSDataOffStatus field if non-nil, zero value otherwise.

### GetVar3gppPSDataOffStatusOk

`func (o *PDUContainerInformation) GetVar3gppPSDataOffStatusOk() (*Model3GPPPSDataOffStatus, bool)`

GetVar3gppPSDataOffStatusOk returns a tuple with the Var3gppPSDataOffStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar3gppPSDataOffStatus

`func (o *PDUContainerInformation) SetVar3gppPSDataOffStatus(v Model3GPPPSDataOffStatus)`

SetVar3gppPSDataOffStatus sets Var3gppPSDataOffStatus field to given value.

### HasVar3gppPSDataOffStatus

`func (o *PDUContainerInformation) HasVar3gppPSDataOffStatus() bool`

HasVar3gppPSDataOffStatus returns a boolean if a field has been set.

### GetSponsorIdentity

`func (o *PDUContainerInformation) GetSponsorIdentity() string`

GetSponsorIdentity returns the SponsorIdentity field if non-nil, zero value otherwise.

### GetSponsorIdentityOk

`func (o *PDUContainerInformation) GetSponsorIdentityOk() (*string, bool)`

GetSponsorIdentityOk returns a tuple with the SponsorIdentity field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSponsorIdentity

`func (o *PDUContainerInformation) SetSponsorIdentity(v string)`

SetSponsorIdentity sets SponsorIdentity field to given value.

### HasSponsorIdentity

`func (o *PDUContainerInformation) HasSponsorIdentity() bool`

HasSponsorIdentity returns a boolean if a field has been set.

### GetApplicationserviceProviderIdentity

`func (o *PDUContainerInformation) GetApplicationserviceProviderIdentity() string`

GetApplicationserviceProviderIdentity returns the ApplicationserviceProviderIdentity field if non-nil, zero value otherwise.

### GetApplicationserviceProviderIdentityOk

`func (o *PDUContainerInformation) GetApplicationserviceProviderIdentityOk() (*string, bool)`

GetApplicationserviceProviderIdentityOk returns a tuple with the ApplicationserviceProviderIdentity field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetApplicationserviceProviderIdentity

`func (o *PDUContainerInformation) SetApplicationserviceProviderIdentity(v string)`

SetApplicationserviceProviderIdentity sets ApplicationserviceProviderIdentity field to given value.

### HasApplicationserviceProviderIdentity

`func (o *PDUContainerInformation) HasApplicationserviceProviderIdentity() bool`

HasApplicationserviceProviderIdentity returns a boolean if a field has been set.

### GetChargingRuleBaseName

`func (o *PDUContainerInformation) GetChargingRuleBaseName() string`

GetChargingRuleBaseName returns the ChargingRuleBaseName field if non-nil, zero value otherwise.

### GetChargingRuleBaseNameOk

`func (o *PDUContainerInformation) GetChargingRuleBaseNameOk() (*string, bool)`

GetChargingRuleBaseNameOk returns a tuple with the ChargingRuleBaseName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChargingRuleBaseName

`func (o *PDUContainerInformation) SetChargingRuleBaseName(v string)`

SetChargingRuleBaseName sets ChargingRuleBaseName field to given value.

### HasChargingRuleBaseName

`func (o *PDUContainerInformation) HasChargingRuleBaseName() bool`

HasChargingRuleBaseName returns a boolean if a field has been set.

### GetMAPDUSteeringFunctionality

`func (o *PDUContainerInformation) GetMAPDUSteeringFunctionality() SteeringFunctionality`

GetMAPDUSteeringFunctionality returns the MAPDUSteeringFunctionality field if non-nil, zero value otherwise.

### GetMAPDUSteeringFunctionalityOk

`func (o *PDUContainerInformation) GetMAPDUSteeringFunctionalityOk() (*SteeringFunctionality, bool)`

GetMAPDUSteeringFunctionalityOk returns a tuple with the MAPDUSteeringFunctionality field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMAPDUSteeringFunctionality

`func (o *PDUContainerInformation) SetMAPDUSteeringFunctionality(v SteeringFunctionality)`

SetMAPDUSteeringFunctionality sets MAPDUSteeringFunctionality field to given value.

### HasMAPDUSteeringFunctionality

`func (o *PDUContainerInformation) HasMAPDUSteeringFunctionality() bool`

HasMAPDUSteeringFunctionality returns a boolean if a field has been set.

### GetMAPDUSteeringMode

`func (o *PDUContainerInformation) GetMAPDUSteeringMode() SteeringMode`

GetMAPDUSteeringMode returns the MAPDUSteeringMode field if non-nil, zero value otherwise.

### GetMAPDUSteeringModeOk

`func (o *PDUContainerInformation) GetMAPDUSteeringModeOk() (*SteeringMode, bool)`

GetMAPDUSteeringModeOk returns a tuple with the MAPDUSteeringMode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMAPDUSteeringMode

`func (o *PDUContainerInformation) SetMAPDUSteeringMode(v SteeringMode)`

SetMAPDUSteeringMode sets MAPDUSteeringMode field to given value.

### HasMAPDUSteeringMode

`func (o *PDUContainerInformation) HasMAPDUSteeringMode() bool`

HasMAPDUSteeringMode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


