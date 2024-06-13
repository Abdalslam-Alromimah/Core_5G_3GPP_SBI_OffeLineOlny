# PduSetQosParaRm

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PduSetDelayBudget** | Pointer to **int32** | Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501 [8])), expressed in 0.01 milliseconds.  | [optional] 
**PduSetErrRate** | Pointer to **string** | String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \&quot;scalar x 10-k\&quot; where the scalar and the exponent k are each encoded as one decimal digit.  | [optional] 
**PduSetHandlingInfo** | Pointer to [**PduSetHandlingInfo**](PduSetHandlingInfo.md) |  | [optional] 

## Methods

### NewPduSetQosParaRm

`func NewPduSetQosParaRm() *PduSetQosParaRm`

NewPduSetQosParaRm instantiates a new PduSetQosParaRm object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPduSetQosParaRmWithDefaults

`func NewPduSetQosParaRmWithDefaults() *PduSetQosParaRm`

NewPduSetQosParaRmWithDefaults instantiates a new PduSetQosParaRm object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPduSetDelayBudget

`func (o *PduSetQosParaRm) GetPduSetDelayBudget() int32`

GetPduSetDelayBudget returns the PduSetDelayBudget field if non-nil, zero value otherwise.

### GetPduSetDelayBudgetOk

`func (o *PduSetQosParaRm) GetPduSetDelayBudgetOk() (*int32, bool)`

GetPduSetDelayBudgetOk returns a tuple with the PduSetDelayBudget field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduSetDelayBudget

`func (o *PduSetQosParaRm) SetPduSetDelayBudget(v int32)`

SetPduSetDelayBudget sets PduSetDelayBudget field to given value.

### HasPduSetDelayBudget

`func (o *PduSetQosParaRm) HasPduSetDelayBudget() bool`

HasPduSetDelayBudget returns a boolean if a field has been set.

### GetPduSetErrRate

`func (o *PduSetQosParaRm) GetPduSetErrRate() string`

GetPduSetErrRate returns the PduSetErrRate field if non-nil, zero value otherwise.

### GetPduSetErrRateOk

`func (o *PduSetQosParaRm) GetPduSetErrRateOk() (*string, bool)`

GetPduSetErrRateOk returns a tuple with the PduSetErrRate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduSetErrRate

`func (o *PduSetQosParaRm) SetPduSetErrRate(v string)`

SetPduSetErrRate sets PduSetErrRate field to given value.

### HasPduSetErrRate

`func (o *PduSetQosParaRm) HasPduSetErrRate() bool`

HasPduSetErrRate returns a boolean if a field has been set.

### GetPduSetHandlingInfo

`func (o *PduSetQosParaRm) GetPduSetHandlingInfo() PduSetHandlingInfo`

GetPduSetHandlingInfo returns the PduSetHandlingInfo field if non-nil, zero value otherwise.

### GetPduSetHandlingInfoOk

`func (o *PduSetQosParaRm) GetPduSetHandlingInfoOk() (*PduSetHandlingInfo, bool)`

GetPduSetHandlingInfoOk returns a tuple with the PduSetHandlingInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduSetHandlingInfo

`func (o *PduSetQosParaRm) SetPduSetHandlingInfo(v PduSetHandlingInfo)`

SetPduSetHandlingInfo sets PduSetHandlingInfo field to given value.

### HasPduSetHandlingInfo

`func (o *PduSetQosParaRm) HasPduSetHandlingInfo() bool`

HasPduSetHandlingInfo returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


