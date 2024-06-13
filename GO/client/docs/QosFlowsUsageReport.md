# QosFlowsUsageReport

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**QFI** | Pointer to **int32** | Unsigned integer identifying a QoS flow, within the range 0 to 63. | [optional] 
**StartTimestamp** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**EndTimestamp** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**UplinkVolume** | Pointer to **int32** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 
**DownlinkVolume** | Pointer to **int32** | Integer where the allowed values correspond to the value range of an unsigned 64-bit integer.  | [optional] 

## Methods

### NewQosFlowsUsageReport

`func NewQosFlowsUsageReport() *QosFlowsUsageReport`

NewQosFlowsUsageReport instantiates a new QosFlowsUsageReport object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQosFlowsUsageReportWithDefaults

`func NewQosFlowsUsageReportWithDefaults() *QosFlowsUsageReport`

NewQosFlowsUsageReportWithDefaults instantiates a new QosFlowsUsageReport object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetQFI

`func (o *QosFlowsUsageReport) GetQFI() int32`

GetQFI returns the QFI field if non-nil, zero value otherwise.

### GetQFIOk

`func (o *QosFlowsUsageReport) GetQFIOk() (*int32, bool)`

GetQFIOk returns a tuple with the QFI field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQFI

`func (o *QosFlowsUsageReport) SetQFI(v int32)`

SetQFI sets QFI field to given value.

### HasQFI

`func (o *QosFlowsUsageReport) HasQFI() bool`

HasQFI returns a boolean if a field has been set.

### GetStartTimestamp

`func (o *QosFlowsUsageReport) GetStartTimestamp() time.Time`

GetStartTimestamp returns the StartTimestamp field if non-nil, zero value otherwise.

### GetStartTimestampOk

`func (o *QosFlowsUsageReport) GetStartTimestampOk() (*time.Time, bool)`

GetStartTimestampOk returns a tuple with the StartTimestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStartTimestamp

`func (o *QosFlowsUsageReport) SetStartTimestamp(v time.Time)`

SetStartTimestamp sets StartTimestamp field to given value.

### HasStartTimestamp

`func (o *QosFlowsUsageReport) HasStartTimestamp() bool`

HasStartTimestamp returns a boolean if a field has been set.

### GetEndTimestamp

`func (o *QosFlowsUsageReport) GetEndTimestamp() time.Time`

GetEndTimestamp returns the EndTimestamp field if non-nil, zero value otherwise.

### GetEndTimestampOk

`func (o *QosFlowsUsageReport) GetEndTimestampOk() (*time.Time, bool)`

GetEndTimestampOk returns a tuple with the EndTimestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEndTimestamp

`func (o *QosFlowsUsageReport) SetEndTimestamp(v time.Time)`

SetEndTimestamp sets EndTimestamp field to given value.

### HasEndTimestamp

`func (o *QosFlowsUsageReport) HasEndTimestamp() bool`

HasEndTimestamp returns a boolean if a field has been set.

### GetUplinkVolume

`func (o *QosFlowsUsageReport) GetUplinkVolume() int32`

GetUplinkVolume returns the UplinkVolume field if non-nil, zero value otherwise.

### GetUplinkVolumeOk

`func (o *QosFlowsUsageReport) GetUplinkVolumeOk() (*int32, bool)`

GetUplinkVolumeOk returns a tuple with the UplinkVolume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUplinkVolume

`func (o *QosFlowsUsageReport) SetUplinkVolume(v int32)`

SetUplinkVolume sets UplinkVolume field to given value.

### HasUplinkVolume

`func (o *QosFlowsUsageReport) HasUplinkVolume() bool`

HasUplinkVolume returns a boolean if a field has been set.

### GetDownlinkVolume

`func (o *QosFlowsUsageReport) GetDownlinkVolume() int32`

GetDownlinkVolume returns the DownlinkVolume field if non-nil, zero value otherwise.

### GetDownlinkVolumeOk

`func (o *QosFlowsUsageReport) GetDownlinkVolumeOk() (*int32, bool)`

GetDownlinkVolumeOk returns a tuple with the DownlinkVolume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDownlinkVolume

`func (o *QosFlowsUsageReport) SetDownlinkVolume(v int32)`

SetDownlinkVolume sets DownlinkVolume field to given value.

### HasDownlinkVolume

`func (o *QosFlowsUsageReport) HasDownlinkVolume() bool`

HasDownlinkVolume returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


