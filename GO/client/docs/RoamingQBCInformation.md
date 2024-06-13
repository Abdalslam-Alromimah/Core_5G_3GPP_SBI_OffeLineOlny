# RoamingQBCInformation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**MultipleQFIcontainer** | Pointer to [**[]MultipleQFIcontainer**](MultipleQFIcontainer.md) |  | [optional] 
**UPFID** | Pointer to **string** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**RoamingChargingProfile** | Pointer to [**RoamingChargingProfile**](RoamingChargingProfile.md) |  | [optional] 

## Methods

### NewRoamingQBCInformation

`func NewRoamingQBCInformation() *RoamingQBCInformation`

NewRoamingQBCInformation instantiates a new RoamingQBCInformation object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRoamingQBCInformationWithDefaults

`func NewRoamingQBCInformationWithDefaults() *RoamingQBCInformation`

NewRoamingQBCInformationWithDefaults instantiates a new RoamingQBCInformation object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMultipleQFIcontainer

`func (o *RoamingQBCInformation) GetMultipleQFIcontainer() []MultipleQFIcontainer`

GetMultipleQFIcontainer returns the MultipleQFIcontainer field if non-nil, zero value otherwise.

### GetMultipleQFIcontainerOk

`func (o *RoamingQBCInformation) GetMultipleQFIcontainerOk() (*[]MultipleQFIcontainer, bool)`

GetMultipleQFIcontainerOk returns a tuple with the MultipleQFIcontainer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMultipleQFIcontainer

`func (o *RoamingQBCInformation) SetMultipleQFIcontainer(v []MultipleQFIcontainer)`

SetMultipleQFIcontainer sets MultipleQFIcontainer field to given value.

### HasMultipleQFIcontainer

`func (o *RoamingQBCInformation) HasMultipleQFIcontainer() bool`

HasMultipleQFIcontainer returns a boolean if a field has been set.

### GetUPFID

`func (o *RoamingQBCInformation) GetUPFID() string`

GetUPFID returns the UPFID field if non-nil, zero value otherwise.

### GetUPFIDOk

`func (o *RoamingQBCInformation) GetUPFIDOk() (*string, bool)`

GetUPFIDOk returns a tuple with the UPFID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUPFID

`func (o *RoamingQBCInformation) SetUPFID(v string)`

SetUPFID sets UPFID field to given value.

### HasUPFID

`func (o *RoamingQBCInformation) HasUPFID() bool`

HasUPFID returns a boolean if a field has been set.

### GetRoamingChargingProfile

`func (o *RoamingQBCInformation) GetRoamingChargingProfile() RoamingChargingProfile`

GetRoamingChargingProfile returns the RoamingChargingProfile field if non-nil, zero value otherwise.

### GetRoamingChargingProfileOk

`func (o *RoamingQBCInformation) GetRoamingChargingProfileOk() (*RoamingChargingProfile, bool)`

GetRoamingChargingProfileOk returns a tuple with the RoamingChargingProfile field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoamingChargingProfile

`func (o *RoamingQBCInformation) SetRoamingChargingProfile(v RoamingChargingProfile)`

SetRoamingChargingProfile sets RoamingChargingProfile field to given value.

### HasRoamingChargingProfile

`func (o *RoamingQBCInformation) HasRoamingChargingProfile() bool`

HasRoamingChargingProfile returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


