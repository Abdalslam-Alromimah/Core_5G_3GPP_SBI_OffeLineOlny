# ChargingDataResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**InvocationTimeStamp** | **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | 
**InvocationSequenceNumber** | **int32** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**InvocationResult** | Pointer to [**InvocationResult**](InvocationResult.md) |  | [optional] 
**SessionFailover** | Pointer to [**SessionFailover**](SessionFailover.md) |  | [optional] 
**Triggers** | Pointer to [**[]Trigger**](Trigger.md) |  | [optional] 
**PDUSessionChargingInformation** | Pointer to [**PDUSessionChargingInformation**](PDUSessionChargingInformation.md) |  | [optional] 
**RoamingQBCInformation** | Pointer to [**RoamingQBCInformation**](RoamingQBCInformation.md) |  | [optional] 

## Methods

### NewChargingDataResponse

`func NewChargingDataResponse(invocationTimeStamp time.Time, invocationSequenceNumber int32, ) *ChargingDataResponse`

NewChargingDataResponse instantiates a new ChargingDataResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewChargingDataResponseWithDefaults

`func NewChargingDataResponseWithDefaults() *ChargingDataResponse`

NewChargingDataResponseWithDefaults instantiates a new ChargingDataResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetInvocationTimeStamp

`func (o *ChargingDataResponse) GetInvocationTimeStamp() time.Time`

GetInvocationTimeStamp returns the InvocationTimeStamp field if non-nil, zero value otherwise.

### GetInvocationTimeStampOk

`func (o *ChargingDataResponse) GetInvocationTimeStampOk() (*time.Time, bool)`

GetInvocationTimeStampOk returns a tuple with the InvocationTimeStamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvocationTimeStamp

`func (o *ChargingDataResponse) SetInvocationTimeStamp(v time.Time)`

SetInvocationTimeStamp sets InvocationTimeStamp field to given value.


### GetInvocationSequenceNumber

`func (o *ChargingDataResponse) GetInvocationSequenceNumber() int32`

GetInvocationSequenceNumber returns the InvocationSequenceNumber field if non-nil, zero value otherwise.

### GetInvocationSequenceNumberOk

`func (o *ChargingDataResponse) GetInvocationSequenceNumberOk() (*int32, bool)`

GetInvocationSequenceNumberOk returns a tuple with the InvocationSequenceNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvocationSequenceNumber

`func (o *ChargingDataResponse) SetInvocationSequenceNumber(v int32)`

SetInvocationSequenceNumber sets InvocationSequenceNumber field to given value.


### GetInvocationResult

`func (o *ChargingDataResponse) GetInvocationResult() InvocationResult`

GetInvocationResult returns the InvocationResult field if non-nil, zero value otherwise.

### GetInvocationResultOk

`func (o *ChargingDataResponse) GetInvocationResultOk() (*InvocationResult, bool)`

GetInvocationResultOk returns a tuple with the InvocationResult field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvocationResult

`func (o *ChargingDataResponse) SetInvocationResult(v InvocationResult)`

SetInvocationResult sets InvocationResult field to given value.

### HasInvocationResult

`func (o *ChargingDataResponse) HasInvocationResult() bool`

HasInvocationResult returns a boolean if a field has been set.

### GetSessionFailover

`func (o *ChargingDataResponse) GetSessionFailover() SessionFailover`

GetSessionFailover returns the SessionFailover field if non-nil, zero value otherwise.

### GetSessionFailoverOk

`func (o *ChargingDataResponse) GetSessionFailoverOk() (*SessionFailover, bool)`

GetSessionFailoverOk returns a tuple with the SessionFailover field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSessionFailover

`func (o *ChargingDataResponse) SetSessionFailover(v SessionFailover)`

SetSessionFailover sets SessionFailover field to given value.

### HasSessionFailover

`func (o *ChargingDataResponse) HasSessionFailover() bool`

HasSessionFailover returns a boolean if a field has been set.

### GetTriggers

`func (o *ChargingDataResponse) GetTriggers() []Trigger`

GetTriggers returns the Triggers field if non-nil, zero value otherwise.

### GetTriggersOk

`func (o *ChargingDataResponse) GetTriggersOk() (*[]Trigger, bool)`

GetTriggersOk returns a tuple with the Triggers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTriggers

`func (o *ChargingDataResponse) SetTriggers(v []Trigger)`

SetTriggers sets Triggers field to given value.

### HasTriggers

`func (o *ChargingDataResponse) HasTriggers() bool`

HasTriggers returns a boolean if a field has been set.

### GetPDUSessionChargingInformation

`func (o *ChargingDataResponse) GetPDUSessionChargingInformation() PDUSessionChargingInformation`

GetPDUSessionChargingInformation returns the PDUSessionChargingInformation field if non-nil, zero value otherwise.

### GetPDUSessionChargingInformationOk

`func (o *ChargingDataResponse) GetPDUSessionChargingInformationOk() (*PDUSessionChargingInformation, bool)`

GetPDUSessionChargingInformationOk returns a tuple with the PDUSessionChargingInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPDUSessionChargingInformation

`func (o *ChargingDataResponse) SetPDUSessionChargingInformation(v PDUSessionChargingInformation)`

SetPDUSessionChargingInformation sets PDUSessionChargingInformation field to given value.

### HasPDUSessionChargingInformation

`func (o *ChargingDataResponse) HasPDUSessionChargingInformation() bool`

HasPDUSessionChargingInformation returns a boolean if a field has been set.

### GetRoamingQBCInformation

`func (o *ChargingDataResponse) GetRoamingQBCInformation() RoamingQBCInformation`

GetRoamingQBCInformation returns the RoamingQBCInformation field if non-nil, zero value otherwise.

### GetRoamingQBCInformationOk

`func (o *ChargingDataResponse) GetRoamingQBCInformationOk() (*RoamingQBCInformation, bool)`

GetRoamingQBCInformationOk returns a tuple with the RoamingQBCInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoamingQBCInformation

`func (o *ChargingDataResponse) SetRoamingQBCInformation(v RoamingQBCInformation)`

SetRoamingQBCInformation sets RoamingQBCInformation field to given value.

### HasRoamingQBCInformation

`func (o *ChargingDataResponse) HasRoamingQBCInformation() bool`

HasRoamingQBCInformation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


