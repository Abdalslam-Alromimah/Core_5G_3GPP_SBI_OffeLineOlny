# UserInformation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServedGPSI** | Pointer to **string** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**ServedPEI** | Pointer to **string** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**UnauthenticatedFlag** | Pointer to **bool** |  | [optional] 
**RoamerInOut** | Pointer to [**RoamerInOut**](RoamerInOut.md) |  | [optional] 

## Methods

### NewUserInformation

`func NewUserInformation() *UserInformation`

NewUserInformation instantiates a new UserInformation object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUserInformationWithDefaults

`func NewUserInformationWithDefaults() *UserInformation`

NewUserInformationWithDefaults instantiates a new UserInformation object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServedGPSI

`func (o *UserInformation) GetServedGPSI() string`

GetServedGPSI returns the ServedGPSI field if non-nil, zero value otherwise.

### GetServedGPSIOk

`func (o *UserInformation) GetServedGPSIOk() (*string, bool)`

GetServedGPSIOk returns a tuple with the ServedGPSI field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServedGPSI

`func (o *UserInformation) SetServedGPSI(v string)`

SetServedGPSI sets ServedGPSI field to given value.

### HasServedGPSI

`func (o *UserInformation) HasServedGPSI() bool`

HasServedGPSI returns a boolean if a field has been set.

### GetServedPEI

`func (o *UserInformation) GetServedPEI() string`

GetServedPEI returns the ServedPEI field if non-nil, zero value otherwise.

### GetServedPEIOk

`func (o *UserInformation) GetServedPEIOk() (*string, bool)`

GetServedPEIOk returns a tuple with the ServedPEI field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServedPEI

`func (o *UserInformation) SetServedPEI(v string)`

SetServedPEI sets ServedPEI field to given value.

### HasServedPEI

`func (o *UserInformation) HasServedPEI() bool`

HasServedPEI returns a boolean if a field has been set.

### GetUnauthenticatedFlag

`func (o *UserInformation) GetUnauthenticatedFlag() bool`

GetUnauthenticatedFlag returns the UnauthenticatedFlag field if non-nil, zero value otherwise.

### GetUnauthenticatedFlagOk

`func (o *UserInformation) GetUnauthenticatedFlagOk() (*bool, bool)`

GetUnauthenticatedFlagOk returns a tuple with the UnauthenticatedFlag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnauthenticatedFlag

`func (o *UserInformation) SetUnauthenticatedFlag(v bool)`

SetUnauthenticatedFlag sets UnauthenticatedFlag field to given value.

### HasUnauthenticatedFlag

`func (o *UserInformation) HasUnauthenticatedFlag() bool`

HasUnauthenticatedFlag returns a boolean if a field has been set.

### GetRoamerInOut

`func (o *UserInformation) GetRoamerInOut() RoamerInOut`

GetRoamerInOut returns the RoamerInOut field if non-nil, zero value otherwise.

### GetRoamerInOutOk

`func (o *UserInformation) GetRoamerInOutOk() (*RoamerInOut, bool)`

GetRoamerInOutOk returns a tuple with the RoamerInOut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoamerInOut

`func (o *UserInformation) SetRoamerInOut(v RoamerInOut)`

SetRoamerInOut sets RoamerInOut field to given value.

### HasRoamerInOut

`func (o *UserInformation) HasRoamerInOut() bool`

HasRoamerInOut returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


