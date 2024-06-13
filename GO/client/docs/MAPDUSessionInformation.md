# MAPDUSessionInformation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**MAPDUSessionIndicator** | Pointer to [**MaPduIndication**](MaPduIndication.md) |  | [optional] 
**ATSSSCapability** | Pointer to [**AtsssCapability**](AtsssCapability.md) |  | [optional] 

## Methods

### NewMAPDUSessionInformation

`func NewMAPDUSessionInformation() *MAPDUSessionInformation`

NewMAPDUSessionInformation instantiates a new MAPDUSessionInformation object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMAPDUSessionInformationWithDefaults

`func NewMAPDUSessionInformationWithDefaults() *MAPDUSessionInformation`

NewMAPDUSessionInformationWithDefaults instantiates a new MAPDUSessionInformation object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMAPDUSessionIndicator

`func (o *MAPDUSessionInformation) GetMAPDUSessionIndicator() MaPduIndication`

GetMAPDUSessionIndicator returns the MAPDUSessionIndicator field if non-nil, zero value otherwise.

### GetMAPDUSessionIndicatorOk

`func (o *MAPDUSessionInformation) GetMAPDUSessionIndicatorOk() (*MaPduIndication, bool)`

GetMAPDUSessionIndicatorOk returns a tuple with the MAPDUSessionIndicator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMAPDUSessionIndicator

`func (o *MAPDUSessionInformation) SetMAPDUSessionIndicator(v MaPduIndication)`

SetMAPDUSessionIndicator sets MAPDUSessionIndicator field to given value.

### HasMAPDUSessionIndicator

`func (o *MAPDUSessionInformation) HasMAPDUSessionIndicator() bool`

HasMAPDUSessionIndicator returns a boolean if a field has been set.

### GetATSSSCapability

`func (o *MAPDUSessionInformation) GetATSSSCapability() AtsssCapability`

GetATSSSCapability returns the ATSSSCapability field if non-nil, zero value otherwise.

### GetATSSSCapabilityOk

`func (o *MAPDUSessionInformation) GetATSSSCapabilityOk() (*AtsssCapability, bool)`

GetATSSSCapabilityOk returns a tuple with the ATSSSCapability field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetATSSSCapability

`func (o *MAPDUSessionInformation) SetATSSSCapability(v AtsssCapability)`

SetATSSSCapability sets ATSSSCapability field to given value.

### HasATSSSCapability

`func (o *MAPDUSessionInformation) HasATSSSCapability() bool`

HasATSSSCapability returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


