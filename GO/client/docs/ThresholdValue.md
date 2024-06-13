# ThresholdValue

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**RttThres** | Pointer to **NullableInt32** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**PlrThres** | Pointer to **NullableInt32** | This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 

## Methods

### NewThresholdValue

`func NewThresholdValue() *ThresholdValue`

NewThresholdValue instantiates a new ThresholdValue object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewThresholdValueWithDefaults

`func NewThresholdValueWithDefaults() *ThresholdValue`

NewThresholdValueWithDefaults instantiates a new ThresholdValue object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRttThres

`func (o *ThresholdValue) GetRttThres() int32`

GetRttThres returns the RttThres field if non-nil, zero value otherwise.

### GetRttThresOk

`func (o *ThresholdValue) GetRttThresOk() (*int32, bool)`

GetRttThresOk returns a tuple with the RttThres field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRttThres

`func (o *ThresholdValue) SetRttThres(v int32)`

SetRttThres sets RttThres field to given value.

### HasRttThres

`func (o *ThresholdValue) HasRttThres() bool`

HasRttThres returns a boolean if a field has been set.

### SetRttThresNil

`func (o *ThresholdValue) SetRttThresNil(b bool)`

 SetRttThresNil sets the value for RttThres to be an explicit nil

### UnsetRttThres
`func (o *ThresholdValue) UnsetRttThres()`

UnsetRttThres ensures that no value is present for RttThres, not even an explicit nil
### GetPlrThres

`func (o *ThresholdValue) GetPlrThres() int32`

GetPlrThres returns the PlrThres field if non-nil, zero value otherwise.

### GetPlrThresOk

`func (o *ThresholdValue) GetPlrThresOk() (*int32, bool)`

GetPlrThresOk returns a tuple with the PlrThres field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlrThres

`func (o *ThresholdValue) SetPlrThres(v int32)`

SetPlrThres sets PlrThres field to given value.

### HasPlrThres

`func (o *ThresholdValue) HasPlrThres() bool`

HasPlrThres returns a boolean if a field has been set.

### SetPlrThresNil

`func (o *ThresholdValue) SetPlrThresNil(b bool)`

 SetPlrThresNil sets the value for PlrThres to be an explicit nil

### UnsetPlrThres
`func (o *ThresholdValue) UnsetPlrThres()`

UnsetPlrThres ensures that no value is present for PlrThres, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


