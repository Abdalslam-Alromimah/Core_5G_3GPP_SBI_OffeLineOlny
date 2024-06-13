# NFIdentification

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**NFName** | Pointer to **string** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**NFIPv4Address** | Pointer to **string** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**NFIPv6Address** | Pointer to [**Ipv6Addr**](Ipv6Addr.md) |  | [optional] 
**NFPLMNID** | Pointer to [**PlmnId**](PlmnId.md) |  | [optional] 
**NodeFunctionality** | [**NodeFunctionality**](NodeFunctionality.md) |  | 
**NFFqdn** | Pointer to **string** |  | [optional] 

## Methods

### NewNFIdentification

`func NewNFIdentification(nodeFunctionality NodeFunctionality, ) *NFIdentification`

NewNFIdentification instantiates a new NFIdentification object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewNFIdentificationWithDefaults

`func NewNFIdentificationWithDefaults() *NFIdentification`

NewNFIdentificationWithDefaults instantiates a new NFIdentification object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetNFName

`func (o *NFIdentification) GetNFName() string`

GetNFName returns the NFName field if non-nil, zero value otherwise.

### GetNFNameOk

`func (o *NFIdentification) GetNFNameOk() (*string, bool)`

GetNFNameOk returns a tuple with the NFName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFName

`func (o *NFIdentification) SetNFName(v string)`

SetNFName sets NFName field to given value.

### HasNFName

`func (o *NFIdentification) HasNFName() bool`

HasNFName returns a boolean if a field has been set.

### GetNFIPv4Address

`func (o *NFIdentification) GetNFIPv4Address() string`

GetNFIPv4Address returns the NFIPv4Address field if non-nil, zero value otherwise.

### GetNFIPv4AddressOk

`func (o *NFIdentification) GetNFIPv4AddressOk() (*string, bool)`

GetNFIPv4AddressOk returns a tuple with the NFIPv4Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFIPv4Address

`func (o *NFIdentification) SetNFIPv4Address(v string)`

SetNFIPv4Address sets NFIPv4Address field to given value.

### HasNFIPv4Address

`func (o *NFIdentification) HasNFIPv4Address() bool`

HasNFIPv4Address returns a boolean if a field has been set.

### GetNFIPv6Address

`func (o *NFIdentification) GetNFIPv6Address() Ipv6Addr`

GetNFIPv6Address returns the NFIPv6Address field if non-nil, zero value otherwise.

### GetNFIPv6AddressOk

`func (o *NFIdentification) GetNFIPv6AddressOk() (*Ipv6Addr, bool)`

GetNFIPv6AddressOk returns a tuple with the NFIPv6Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFIPv6Address

`func (o *NFIdentification) SetNFIPv6Address(v Ipv6Addr)`

SetNFIPv6Address sets NFIPv6Address field to given value.

### HasNFIPv6Address

`func (o *NFIdentification) HasNFIPv6Address() bool`

HasNFIPv6Address returns a boolean if a field has been set.

### GetNFPLMNID

`func (o *NFIdentification) GetNFPLMNID() PlmnId`

GetNFPLMNID returns the NFPLMNID field if non-nil, zero value otherwise.

### GetNFPLMNIDOk

`func (o *NFIdentification) GetNFPLMNIDOk() (*PlmnId, bool)`

GetNFPLMNIDOk returns a tuple with the NFPLMNID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFPLMNID

`func (o *NFIdentification) SetNFPLMNID(v PlmnId)`

SetNFPLMNID sets NFPLMNID field to given value.

### HasNFPLMNID

`func (o *NFIdentification) HasNFPLMNID() bool`

HasNFPLMNID returns a boolean if a field has been set.

### GetNodeFunctionality

`func (o *NFIdentification) GetNodeFunctionality() NodeFunctionality`

GetNodeFunctionality returns the NodeFunctionality field if non-nil, zero value otherwise.

### GetNodeFunctionalityOk

`func (o *NFIdentification) GetNodeFunctionalityOk() (*NodeFunctionality, bool)`

GetNodeFunctionalityOk returns a tuple with the NodeFunctionality field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNodeFunctionality

`func (o *NFIdentification) SetNodeFunctionality(v NodeFunctionality)`

SetNodeFunctionality sets NodeFunctionality field to given value.


### GetNFFqdn

`func (o *NFIdentification) GetNFFqdn() string`

GetNFFqdn returns the NFFqdn field if non-nil, zero value otherwise.

### GetNFFqdnOk

`func (o *NFIdentification) GetNFFqdnOk() (*string, bool)`

GetNFFqdnOk returns a tuple with the NFFqdn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFFqdn

`func (o *NFIdentification) SetNFFqdn(v string)`

SetNFFqdn sets NFFqdn field to given value.

### HasNFFqdn

`func (o *NFIdentification) HasNFFqdn() bool`

HasNFFqdn returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


