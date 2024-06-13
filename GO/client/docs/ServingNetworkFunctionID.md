# ServingNetworkFunctionID

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServingNetworkFunctionInformation** | [**NFIdentification**](NFIdentification.md) |  | 
**AMFId** | Pointer to **string** | String identifying the AMF ID composed of AMF Region ID (8 bits), AMF Set ID (10 bits) and AMF  Pointer (6 bits) as specified in clause 2.10.1 of 3GPP TS 23.003. It is encoded as a string of  6 hexadecimal characters (i.e., 24 bits).   | [optional] 

## Methods

### NewServingNetworkFunctionID

`func NewServingNetworkFunctionID(servingNetworkFunctionInformation NFIdentification, ) *ServingNetworkFunctionID`

NewServingNetworkFunctionID instantiates a new ServingNetworkFunctionID object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServingNetworkFunctionIDWithDefaults

`func NewServingNetworkFunctionIDWithDefaults() *ServingNetworkFunctionID`

NewServingNetworkFunctionIDWithDefaults instantiates a new ServingNetworkFunctionID object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServingNetworkFunctionInformation

`func (o *ServingNetworkFunctionID) GetServingNetworkFunctionInformation() NFIdentification`

GetServingNetworkFunctionInformation returns the ServingNetworkFunctionInformation field if non-nil, zero value otherwise.

### GetServingNetworkFunctionInformationOk

`func (o *ServingNetworkFunctionID) GetServingNetworkFunctionInformationOk() (*NFIdentification, bool)`

GetServingNetworkFunctionInformationOk returns a tuple with the ServingNetworkFunctionInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServingNetworkFunctionInformation

`func (o *ServingNetworkFunctionID) SetServingNetworkFunctionInformation(v NFIdentification)`

SetServingNetworkFunctionInformation sets ServingNetworkFunctionInformation field to given value.


### GetAMFId

`func (o *ServingNetworkFunctionID) GetAMFId() string`

GetAMFId returns the AMFId field if non-nil, zero value otherwise.

### GetAMFIdOk

`func (o *ServingNetworkFunctionID) GetAMFIdOk() (*string, bool)`

GetAMFIdOk returns a tuple with the AMFId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAMFId

`func (o *ServingNetworkFunctionID) SetAMFId(v string)`

SetAMFId sets AMFId field to given value.

### HasAMFId

`func (o *ServingNetworkFunctionID) HasAMFId() bool`

HasAMFId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


