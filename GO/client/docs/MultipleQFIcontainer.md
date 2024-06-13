# MultipleQFIcontainer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Triggers** | Pointer to [**[]Trigger**](Trigger.md) |  | [optional] 
**TriggerTimestamp** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**Time** | Pointer to **int32** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**TotalVolume** | Pointer to **int32** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**UplinkVolume** | Pointer to **int32** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**LocalSequenceNumber** | **int32** |  | 
**QFIContainerInformation** | Pointer to [**QFIContainerInformation**](QFIContainerInformation.md) |  | [optional] 

## Methods

### NewMultipleQFIcontainer

`func NewMultipleQFIcontainer(localSequenceNumber int32, ) *MultipleQFIcontainer`

NewMultipleQFIcontainer instantiates a new MultipleQFIcontainer object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMultipleQFIcontainerWithDefaults

`func NewMultipleQFIcontainerWithDefaults() *MultipleQFIcontainer`

NewMultipleQFIcontainerWithDefaults instantiates a new MultipleQFIcontainer object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTriggers

`func (o *MultipleQFIcontainer) GetTriggers() []Trigger`

GetTriggers returns the Triggers field if non-nil, zero value otherwise.

### GetTriggersOk

`func (o *MultipleQFIcontainer) GetTriggersOk() (*[]Trigger, bool)`

GetTriggersOk returns a tuple with the Triggers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTriggers

`func (o *MultipleQFIcontainer) SetTriggers(v []Trigger)`

SetTriggers sets Triggers field to given value.

### HasTriggers

`func (o *MultipleQFIcontainer) HasTriggers() bool`

HasTriggers returns a boolean if a field has been set.

### GetTriggerTimestamp

`func (o *MultipleQFIcontainer) GetTriggerTimestamp() time.Time`

GetTriggerTimestamp returns the TriggerTimestamp field if non-nil, zero value otherwise.

### GetTriggerTimestampOk

`func (o *MultipleQFIcontainer) GetTriggerTimestampOk() (*time.Time, bool)`

GetTriggerTimestampOk returns a tuple with the TriggerTimestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTriggerTimestamp

`func (o *MultipleQFIcontainer) SetTriggerTimestamp(v time.Time)`

SetTriggerTimestamp sets TriggerTimestamp field to given value.

### HasTriggerTimestamp

`func (o *MultipleQFIcontainer) HasTriggerTimestamp() bool`

HasTriggerTimestamp returns a boolean if a field has been set.

### GetTime

`func (o *MultipleQFIcontainer) GetTime() int32`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *MultipleQFIcontainer) GetTimeOk() (*int32, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *MultipleQFIcontainer) SetTime(v int32)`

SetTime sets Time field to given value.

### HasTime

`func (o *MultipleQFIcontainer) HasTime() bool`

HasTime returns a boolean if a field has been set.

### GetTotalVolume

`func (o *MultipleQFIcontainer) GetTotalVolume() int32`

GetTotalVolume returns the TotalVolume field if non-nil, zero value otherwise.

### GetTotalVolumeOk

`func (o *MultipleQFIcontainer) GetTotalVolumeOk() (*int32, bool)`

GetTotalVolumeOk returns a tuple with the TotalVolume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalVolume

`func (o *MultipleQFIcontainer) SetTotalVolume(v int32)`

SetTotalVolume sets TotalVolume field to given value.

### HasTotalVolume

`func (o *MultipleQFIcontainer) HasTotalVolume() bool`

HasTotalVolume returns a boolean if a field has been set.

### GetUplinkVolume

`func (o *MultipleQFIcontainer) GetUplinkVolume() int32`

GetUplinkVolume returns the UplinkVolume field if non-nil, zero value otherwise.

### GetUplinkVolumeOk

`func (o *MultipleQFIcontainer) GetUplinkVolumeOk() (*int32, bool)`

GetUplinkVolumeOk returns a tuple with the UplinkVolume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUplinkVolume

`func (o *MultipleQFIcontainer) SetUplinkVolume(v int32)`

SetUplinkVolume sets UplinkVolume field to given value.

### HasUplinkVolume

`func (o *MultipleQFIcontainer) HasUplinkVolume() bool`

HasUplinkVolume returns a boolean if a field has been set.

### GetLocalSequenceNumber

`func (o *MultipleQFIcontainer) GetLocalSequenceNumber() int32`

GetLocalSequenceNumber returns the LocalSequenceNumber field if non-nil, zero value otherwise.

### GetLocalSequenceNumberOk

`func (o *MultipleQFIcontainer) GetLocalSequenceNumberOk() (*int32, bool)`

GetLocalSequenceNumberOk returns a tuple with the LocalSequenceNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocalSequenceNumber

`func (o *MultipleQFIcontainer) SetLocalSequenceNumber(v int32)`

SetLocalSequenceNumber sets LocalSequenceNumber field to given value.


### GetQFIContainerInformation

`func (o *MultipleQFIcontainer) GetQFIContainerInformation() QFIContainerInformation`

GetQFIContainerInformation returns the QFIContainerInformation field if non-nil, zero value otherwise.

### GetQFIContainerInformationOk

`func (o *MultipleQFIcontainer) GetQFIContainerInformationOk() (*QFIContainerInformation, bool)`

GetQFIContainerInformationOk returns a tuple with the QFIContainerInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQFIContainerInformation

`func (o *MultipleQFIcontainer) SetQFIContainerInformation(v QFIContainerInformation)`

SetQFIContainerInformation sets QFIContainerInformation field to given value.

### HasQFIContainerInformation

`func (o *MultipleQFIcontainer) HasQFIContainerInformation() bool`

HasQFIContainerInformation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


