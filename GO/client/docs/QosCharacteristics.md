# QosCharacteristics

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Var5qi** | **int32** | Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255.  | 
**ResourceType** | [**QosResourceType**](QosResourceType.md) |  | 
**PriorityLevel** | **int32** | Unsigned integer indicating the 5QI Priority Level (see clauses 5.7.3.3 and 5.7.4 of 3GPP TS 23.501, within the range 1 to 127.Values are ordered in decreasing order of priority,  i.e. with 1 as the highest priority and 127 as the lowest priority.   | 
**PacketDelayBudget** | **int32** | Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds.  | 
**PacketErrorRate** | **string** | String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \&quot;scalar x 10-k\&quot; where the scalar and the exponent k are each encoded as one decimal digit.  | 
**AveragingWindow** | Pointer to **int32** | Unsigned integer indicating Averaging Window (see clause 5.7.3.6 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds.   | [optional] [default to 2000]
**MaxDataBurstVol** | Pointer to **int32** | Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.   | [optional] 
**ExtMaxDataBurstVol** | Pointer to **int32** | Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.   | [optional] 

## Methods

### NewQosCharacteristics

`func NewQosCharacteristics(var5qi int32, resourceType QosResourceType, priorityLevel int32, packetDelayBudget int32, packetErrorRate string, ) *QosCharacteristics`

NewQosCharacteristics instantiates a new QosCharacteristics object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQosCharacteristicsWithDefaults

`func NewQosCharacteristicsWithDefaults() *QosCharacteristics`

NewQosCharacteristicsWithDefaults instantiates a new QosCharacteristics object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVar5qi

`func (o *QosCharacteristics) GetVar5qi() int32`

GetVar5qi returns the Var5qi field if non-nil, zero value otherwise.

### GetVar5qiOk

`func (o *QosCharacteristics) GetVar5qiOk() (*int32, bool)`

GetVar5qiOk returns a tuple with the Var5qi field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar5qi

`func (o *QosCharacteristics) SetVar5qi(v int32)`

SetVar5qi sets Var5qi field to given value.


### GetResourceType

`func (o *QosCharacteristics) GetResourceType() QosResourceType`

GetResourceType returns the ResourceType field if non-nil, zero value otherwise.

### GetResourceTypeOk

`func (o *QosCharacteristics) GetResourceTypeOk() (*QosResourceType, bool)`

GetResourceTypeOk returns a tuple with the ResourceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResourceType

`func (o *QosCharacteristics) SetResourceType(v QosResourceType)`

SetResourceType sets ResourceType field to given value.


### GetPriorityLevel

`func (o *QosCharacteristics) GetPriorityLevel() int32`

GetPriorityLevel returns the PriorityLevel field if non-nil, zero value otherwise.

### GetPriorityLevelOk

`func (o *QosCharacteristics) GetPriorityLevelOk() (*int32, bool)`

GetPriorityLevelOk returns a tuple with the PriorityLevel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriorityLevel

`func (o *QosCharacteristics) SetPriorityLevel(v int32)`

SetPriorityLevel sets PriorityLevel field to given value.


### GetPacketDelayBudget

`func (o *QosCharacteristics) GetPacketDelayBudget() int32`

GetPacketDelayBudget returns the PacketDelayBudget field if non-nil, zero value otherwise.

### GetPacketDelayBudgetOk

`func (o *QosCharacteristics) GetPacketDelayBudgetOk() (*int32, bool)`

GetPacketDelayBudgetOk returns a tuple with the PacketDelayBudget field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPacketDelayBudget

`func (o *QosCharacteristics) SetPacketDelayBudget(v int32)`

SetPacketDelayBudget sets PacketDelayBudget field to given value.


### GetPacketErrorRate

`func (o *QosCharacteristics) GetPacketErrorRate() string`

GetPacketErrorRate returns the PacketErrorRate field if non-nil, zero value otherwise.

### GetPacketErrorRateOk

`func (o *QosCharacteristics) GetPacketErrorRateOk() (*string, bool)`

GetPacketErrorRateOk returns a tuple with the PacketErrorRate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPacketErrorRate

`func (o *QosCharacteristics) SetPacketErrorRate(v string)`

SetPacketErrorRate sets PacketErrorRate field to given value.


### GetAveragingWindow

`func (o *QosCharacteristics) GetAveragingWindow() int32`

GetAveragingWindow returns the AveragingWindow field if non-nil, zero value otherwise.

### GetAveragingWindowOk

`func (o *QosCharacteristics) GetAveragingWindowOk() (*int32, bool)`

GetAveragingWindowOk returns a tuple with the AveragingWindow field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAveragingWindow

`func (o *QosCharacteristics) SetAveragingWindow(v int32)`

SetAveragingWindow sets AveragingWindow field to given value.

### HasAveragingWindow

`func (o *QosCharacteristics) HasAveragingWindow() bool`

HasAveragingWindow returns a boolean if a field has been set.

### GetMaxDataBurstVol

`func (o *QosCharacteristics) GetMaxDataBurstVol() int32`

GetMaxDataBurstVol returns the MaxDataBurstVol field if non-nil, zero value otherwise.

### GetMaxDataBurstVolOk

`func (o *QosCharacteristics) GetMaxDataBurstVolOk() (*int32, bool)`

GetMaxDataBurstVolOk returns a tuple with the MaxDataBurstVol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxDataBurstVol

`func (o *QosCharacteristics) SetMaxDataBurstVol(v int32)`

SetMaxDataBurstVol sets MaxDataBurstVol field to given value.

### HasMaxDataBurstVol

`func (o *QosCharacteristics) HasMaxDataBurstVol() bool`

HasMaxDataBurstVol returns a boolean if a field has been set.

### GetExtMaxDataBurstVol

`func (o *QosCharacteristics) GetExtMaxDataBurstVol() int32`

GetExtMaxDataBurstVol returns the ExtMaxDataBurstVol field if non-nil, zero value otherwise.

### GetExtMaxDataBurstVolOk

`func (o *QosCharacteristics) GetExtMaxDataBurstVolOk() (*int32, bool)`

GetExtMaxDataBurstVolOk returns a tuple with the ExtMaxDataBurstVol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtMaxDataBurstVol

`func (o *QosCharacteristics) SetExtMaxDataBurstVol(v int32)`

SetExtMaxDataBurstVol sets ExtMaxDataBurstVol field to given value.

### HasExtMaxDataBurstVol

`func (o *QosCharacteristics) HasExtMaxDataBurstVol() bool`

HasExtMaxDataBurstVol returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


