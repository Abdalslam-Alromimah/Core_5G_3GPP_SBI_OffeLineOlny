# PDUAddress

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PduIPv4Address** | Pointer to **string** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**PduIPv6AddresswithPrefix** | Pointer to [**Ipv6Addr**](Ipv6Addr.md) |  | [optional] 
**PduAddressprefixlength** | Pointer to **int32** |  | [optional] 
**IPv4dynamicAddressFlag** | Pointer to **bool** |  | [optional] 
**IPv6dynamicPrefixFlag** | Pointer to **bool** |  | [optional] 

## Methods

### NewPDUAddress

`func NewPDUAddress() *PDUAddress`

NewPDUAddress instantiates a new PDUAddress object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPDUAddressWithDefaults

`func NewPDUAddressWithDefaults() *PDUAddress`

NewPDUAddressWithDefaults instantiates a new PDUAddress object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPduIPv4Address

`func (o *PDUAddress) GetPduIPv4Address() string`

GetPduIPv4Address returns the PduIPv4Address field if non-nil, zero value otherwise.

### GetPduIPv4AddressOk

`func (o *PDUAddress) GetPduIPv4AddressOk() (*string, bool)`

GetPduIPv4AddressOk returns a tuple with the PduIPv4Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduIPv4Address

`func (o *PDUAddress) SetPduIPv4Address(v string)`

SetPduIPv4Address sets PduIPv4Address field to given value.

### HasPduIPv4Address

`func (o *PDUAddress) HasPduIPv4Address() bool`

HasPduIPv4Address returns a boolean if a field has been set.

### GetPduIPv6AddresswithPrefix

`func (o *PDUAddress) GetPduIPv6AddresswithPrefix() Ipv6Addr`

GetPduIPv6AddresswithPrefix returns the PduIPv6AddresswithPrefix field if non-nil, zero value otherwise.

### GetPduIPv6AddresswithPrefixOk

`func (o *PDUAddress) GetPduIPv6AddresswithPrefixOk() (*Ipv6Addr, bool)`

GetPduIPv6AddresswithPrefixOk returns a tuple with the PduIPv6AddresswithPrefix field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduIPv6AddresswithPrefix

`func (o *PDUAddress) SetPduIPv6AddresswithPrefix(v Ipv6Addr)`

SetPduIPv6AddresswithPrefix sets PduIPv6AddresswithPrefix field to given value.

### HasPduIPv6AddresswithPrefix

`func (o *PDUAddress) HasPduIPv6AddresswithPrefix() bool`

HasPduIPv6AddresswithPrefix returns a boolean if a field has been set.

### GetPduAddressprefixlength

`func (o *PDUAddress) GetPduAddressprefixlength() int32`

GetPduAddressprefixlength returns the PduAddressprefixlength field if non-nil, zero value otherwise.

### GetPduAddressprefixlengthOk

`func (o *PDUAddress) GetPduAddressprefixlengthOk() (*int32, bool)`

GetPduAddressprefixlengthOk returns a tuple with the PduAddressprefixlength field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduAddressprefixlength

`func (o *PDUAddress) SetPduAddressprefixlength(v int32)`

SetPduAddressprefixlength sets PduAddressprefixlength field to given value.

### HasPduAddressprefixlength

`func (o *PDUAddress) HasPduAddressprefixlength() bool`

HasPduAddressprefixlength returns a boolean if a field has been set.

### GetIPv4dynamicAddressFlag

`func (o *PDUAddress) GetIPv4dynamicAddressFlag() bool`

GetIPv4dynamicAddressFlag returns the IPv4dynamicAddressFlag field if non-nil, zero value otherwise.

### GetIPv4dynamicAddressFlagOk

`func (o *PDUAddress) GetIPv4dynamicAddressFlagOk() (*bool, bool)`

GetIPv4dynamicAddressFlagOk returns a tuple with the IPv4dynamicAddressFlag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIPv4dynamicAddressFlag

`func (o *PDUAddress) SetIPv4dynamicAddressFlag(v bool)`

SetIPv4dynamicAddressFlag sets IPv4dynamicAddressFlag field to given value.

### HasIPv4dynamicAddressFlag

`func (o *PDUAddress) HasIPv4dynamicAddressFlag() bool`

HasIPv4dynamicAddressFlag returns a boolean if a field has been set.

### GetIPv6dynamicPrefixFlag

`func (o *PDUAddress) GetIPv6dynamicPrefixFlag() bool`

GetIPv6dynamicPrefixFlag returns the IPv6dynamicPrefixFlag field if non-nil, zero value otherwise.

### GetIPv6dynamicPrefixFlagOk

`func (o *PDUAddress) GetIPv6dynamicPrefixFlagOk() (*bool, bool)`

GetIPv6dynamicPrefixFlagOk returns a tuple with the IPv6dynamicPrefixFlag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIPv6dynamicPrefixFlag

`func (o *PDUAddress) SetIPv6dynamicPrefixFlag(v bool)`

SetIPv6dynamicPrefixFlag sets IPv6dynamicPrefixFlag field to given value.

### HasIPv6dynamicPrefixFlag

`func (o *PDUAddress) HasIPv6dynamicPrefixFlag() bool`

HasIPv6dynamicPrefixFlag returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


