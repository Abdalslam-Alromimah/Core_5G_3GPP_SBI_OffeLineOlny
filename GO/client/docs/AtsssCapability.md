# AtsssCapability

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AtsssLL** | Pointer to **bool** | Indicates the support of Access Traffic Steering, Switching and Splitting procedures  using the ATSSS-LL steering functionality (see clauses 4.2.10, 5.32 of 3GPP TS 23.501). true: Supported false (default): Not Supported  | [optional] [default to false]
**Mptcp** | Pointer to **bool** | Indicates the support of Access Traffic Steering, Switching and Splitting procedures using the MPTCP steering functionality (see clauses 4.2.10, 5.32 of 3GPP TS 23.501 true: Supported false (default): Not Supported  | [optional] [default to false]
**Mpquic** | Pointer to **bool** | Indicates the support of Access Traffic Steering, Switching and Splitting procedures  using the MPQUIC steering functionality (see clauses 4.2.10, 5.32 of 3GPP TS 23.501) true: Supported false (default): Not Supported  | [optional] [default to false]
**RttWithoutPmf** | Pointer to **bool** | This IE is only used by the UPF to indicate whether the UPF supports RTT measurement without PMF (see clauses 5.32.2, 6.3.3.3 of 3GPP TS 23.501 true: Supported false (default): Not Supported  | [optional] [default to false]

## Methods

### NewAtsssCapability

`func NewAtsssCapability() *AtsssCapability`

NewAtsssCapability instantiates a new AtsssCapability object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAtsssCapabilityWithDefaults

`func NewAtsssCapabilityWithDefaults() *AtsssCapability`

NewAtsssCapabilityWithDefaults instantiates a new AtsssCapability object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAtsssLL

`func (o *AtsssCapability) GetAtsssLL() bool`

GetAtsssLL returns the AtsssLL field if non-nil, zero value otherwise.

### GetAtsssLLOk

`func (o *AtsssCapability) GetAtsssLLOk() (*bool, bool)`

GetAtsssLLOk returns a tuple with the AtsssLL field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAtsssLL

`func (o *AtsssCapability) SetAtsssLL(v bool)`

SetAtsssLL sets AtsssLL field to given value.

### HasAtsssLL

`func (o *AtsssCapability) HasAtsssLL() bool`

HasAtsssLL returns a boolean if a field has been set.

### GetMptcp

`func (o *AtsssCapability) GetMptcp() bool`

GetMptcp returns the Mptcp field if non-nil, zero value otherwise.

### GetMptcpOk

`func (o *AtsssCapability) GetMptcpOk() (*bool, bool)`

GetMptcpOk returns a tuple with the Mptcp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMptcp

`func (o *AtsssCapability) SetMptcp(v bool)`

SetMptcp sets Mptcp field to given value.

### HasMptcp

`func (o *AtsssCapability) HasMptcp() bool`

HasMptcp returns a boolean if a field has been set.

### GetMpquic

`func (o *AtsssCapability) GetMpquic() bool`

GetMpquic returns the Mpquic field if non-nil, zero value otherwise.

### GetMpquicOk

`func (o *AtsssCapability) GetMpquicOk() (*bool, bool)`

GetMpquicOk returns a tuple with the Mpquic field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMpquic

`func (o *AtsssCapability) SetMpquic(v bool)`

SetMpquic sets Mpquic field to given value.

### HasMpquic

`func (o *AtsssCapability) HasMpquic() bool`

HasMpquic returns a boolean if a field has been set.

### GetRttWithoutPmf

`func (o *AtsssCapability) GetRttWithoutPmf() bool`

GetRttWithoutPmf returns the RttWithoutPmf field if non-nil, zero value otherwise.

### GetRttWithoutPmfOk

`func (o *AtsssCapability) GetRttWithoutPmfOk() (*bool, bool)`

GetRttWithoutPmfOk returns a tuple with the RttWithoutPmf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRttWithoutPmf

`func (o *AtsssCapability) SetRttWithoutPmf(v bool)`

SetRttWithoutPmf sets RttWithoutPmf field to given value.

### HasRttWithoutPmf

`func (o *AtsssCapability) HasRttWithoutPmf() bool`

HasRttWithoutPmf returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


