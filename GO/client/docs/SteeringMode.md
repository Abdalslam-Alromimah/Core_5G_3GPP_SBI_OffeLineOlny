# SteeringMode

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SteerModeValue** | [**SteerModeValue**](SteerModeValue.md) |  | 
**Active** | Pointer to [**AccessType**](AccessType.md) |  | [optional] 
**Standby** | Pointer to [**AccessTypeRm**](AccessTypeRm.md) |  | [optional] 
**Var3gLoad** | Pointer to **int32** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**PrioAcc** | Pointer to [**AccessType**](AccessType.md) |  | [optional] 
**ThresValue** | Pointer to [**NullableThresholdValue**](ThresholdValue.md) |  | [optional] 
**SteerModeInd** | Pointer to [**SteerModeIndicator**](SteerModeIndicator.md) |  | [optional] 
**Primary** | Pointer to [**AccessTypeRm**](AccessTypeRm.md) |  | [optional] 

## Methods

### NewSteeringMode

`func NewSteeringMode(steerModeValue SteerModeValue, ) *SteeringMode`

NewSteeringMode instantiates a new SteeringMode object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSteeringModeWithDefaults

`func NewSteeringModeWithDefaults() *SteeringMode`

NewSteeringModeWithDefaults instantiates a new SteeringMode object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSteerModeValue

`func (o *SteeringMode) GetSteerModeValue() SteerModeValue`

GetSteerModeValue returns the SteerModeValue field if non-nil, zero value otherwise.

### GetSteerModeValueOk

`func (o *SteeringMode) GetSteerModeValueOk() (*SteerModeValue, bool)`

GetSteerModeValueOk returns a tuple with the SteerModeValue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSteerModeValue

`func (o *SteeringMode) SetSteerModeValue(v SteerModeValue)`

SetSteerModeValue sets SteerModeValue field to given value.


### GetActive

`func (o *SteeringMode) GetActive() AccessType`

GetActive returns the Active field if non-nil, zero value otherwise.

### GetActiveOk

`func (o *SteeringMode) GetActiveOk() (*AccessType, bool)`

GetActiveOk returns a tuple with the Active field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActive

`func (o *SteeringMode) SetActive(v AccessType)`

SetActive sets Active field to given value.

### HasActive

`func (o *SteeringMode) HasActive() bool`

HasActive returns a boolean if a field has been set.

### GetStandby

`func (o *SteeringMode) GetStandby() AccessTypeRm`

GetStandby returns the Standby field if non-nil, zero value otherwise.

### GetStandbyOk

`func (o *SteeringMode) GetStandbyOk() (*AccessTypeRm, bool)`

GetStandbyOk returns a tuple with the Standby field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStandby

`func (o *SteeringMode) SetStandby(v AccessTypeRm)`

SetStandby sets Standby field to given value.

### HasStandby

`func (o *SteeringMode) HasStandby() bool`

HasStandby returns a boolean if a field has been set.

### GetVar3gLoad

`func (o *SteeringMode) GetVar3gLoad() int32`

GetVar3gLoad returns the Var3gLoad field if non-nil, zero value otherwise.

### GetVar3gLoadOk

`func (o *SteeringMode) GetVar3gLoadOk() (*int32, bool)`

GetVar3gLoadOk returns a tuple with the Var3gLoad field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar3gLoad

`func (o *SteeringMode) SetVar3gLoad(v int32)`

SetVar3gLoad sets Var3gLoad field to given value.

### HasVar3gLoad

`func (o *SteeringMode) HasVar3gLoad() bool`

HasVar3gLoad returns a boolean if a field has been set.

### GetPrioAcc

`func (o *SteeringMode) GetPrioAcc() AccessType`

GetPrioAcc returns the PrioAcc field if non-nil, zero value otherwise.

### GetPrioAccOk

`func (o *SteeringMode) GetPrioAccOk() (*AccessType, bool)`

GetPrioAccOk returns a tuple with the PrioAcc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrioAcc

`func (o *SteeringMode) SetPrioAcc(v AccessType)`

SetPrioAcc sets PrioAcc field to given value.

### HasPrioAcc

`func (o *SteeringMode) HasPrioAcc() bool`

HasPrioAcc returns a boolean if a field has been set.

### GetThresValue

`func (o *SteeringMode) GetThresValue() ThresholdValue`

GetThresValue returns the ThresValue field if non-nil, zero value otherwise.

### GetThresValueOk

`func (o *SteeringMode) GetThresValueOk() (*ThresholdValue, bool)`

GetThresValueOk returns a tuple with the ThresValue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetThresValue

`func (o *SteeringMode) SetThresValue(v ThresholdValue)`

SetThresValue sets ThresValue field to given value.

### HasThresValue

`func (o *SteeringMode) HasThresValue() bool`

HasThresValue returns a boolean if a field has been set.

### SetThresValueNil

`func (o *SteeringMode) SetThresValueNil(b bool)`

 SetThresValueNil sets the value for ThresValue to be an explicit nil

### UnsetThresValue
`func (o *SteeringMode) UnsetThresValue()`

UnsetThresValue ensures that no value is present for ThresValue, not even an explicit nil
### GetSteerModeInd

`func (o *SteeringMode) GetSteerModeInd() SteerModeIndicator`

GetSteerModeInd returns the SteerModeInd field if non-nil, zero value otherwise.

### GetSteerModeIndOk

`func (o *SteeringMode) GetSteerModeIndOk() (*SteerModeIndicator, bool)`

GetSteerModeIndOk returns a tuple with the SteerModeInd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSteerModeInd

`func (o *SteeringMode) SetSteerModeInd(v SteerModeIndicator)`

SetSteerModeInd sets SteerModeInd field to given value.

### HasSteerModeInd

`func (o *SteeringMode) HasSteerModeInd() bool`

HasSteerModeInd returns a boolean if a field has been set.

### GetPrimary

`func (o *SteeringMode) GetPrimary() AccessTypeRm`

GetPrimary returns the Primary field if non-nil, zero value otherwise.

### GetPrimaryOk

`func (o *SteeringMode) GetPrimaryOk() (*AccessTypeRm, bool)`

GetPrimaryOk returns a tuple with the Primary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrimary

`func (o *SteeringMode) SetPrimary(v AccessTypeRm)`

SetPrimary sets Primary field to given value.

### HasPrimary

`func (o *SteeringMode) HasPrimary() bool`

HasPrimary returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


