# MultipleUnitUsage

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**RatingGroup** | **int32** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**UsedUnitContainer** | Pointer to [**[]UsedUnitContainer**](UsedUnitContainer.md) |  | [optional] 
**UPFID** | Pointer to **string** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**MultihomedPDUAddress** | Pointer to [**PDUAddress**](PDUAddress.md) |  | [optional] 

## Methods

### NewMultipleUnitUsage

`func NewMultipleUnitUsage(ratingGroup int32, ) *MultipleUnitUsage`

NewMultipleUnitUsage instantiates a new MultipleUnitUsage object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMultipleUnitUsageWithDefaults

`func NewMultipleUnitUsageWithDefaults() *MultipleUnitUsage`

NewMultipleUnitUsageWithDefaults instantiates a new MultipleUnitUsage object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRatingGroup

`func (o *MultipleUnitUsage) GetRatingGroup() int32`

GetRatingGroup returns the RatingGroup field if non-nil, zero value otherwise.

### GetRatingGroupOk

`func (o *MultipleUnitUsage) GetRatingGroupOk() (*int32, bool)`

GetRatingGroupOk returns a tuple with the RatingGroup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRatingGroup

`func (o *MultipleUnitUsage) SetRatingGroup(v int32)`

SetRatingGroup sets RatingGroup field to given value.


### GetUsedUnitContainer

`func (o *MultipleUnitUsage) GetUsedUnitContainer() []UsedUnitContainer`

GetUsedUnitContainer returns the UsedUnitContainer field if non-nil, zero value otherwise.

### GetUsedUnitContainerOk

`func (o *MultipleUnitUsage) GetUsedUnitContainerOk() (*[]UsedUnitContainer, bool)`

GetUsedUnitContainerOk returns a tuple with the UsedUnitContainer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUsedUnitContainer

`func (o *MultipleUnitUsage) SetUsedUnitContainer(v []UsedUnitContainer)`

SetUsedUnitContainer sets UsedUnitContainer field to given value.

### HasUsedUnitContainer

`func (o *MultipleUnitUsage) HasUsedUnitContainer() bool`

HasUsedUnitContainer returns a boolean if a field has been set.

### GetUPFID

`func (o *MultipleUnitUsage) GetUPFID() string`

GetUPFID returns the UPFID field if non-nil, zero value otherwise.

### GetUPFIDOk

`func (o *MultipleUnitUsage) GetUPFIDOk() (*string, bool)`

GetUPFIDOk returns a tuple with the UPFID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUPFID

`func (o *MultipleUnitUsage) SetUPFID(v string)`

SetUPFID sets UPFID field to given value.

### HasUPFID

`func (o *MultipleUnitUsage) HasUPFID() bool`

HasUPFID returns a boolean if a field has been set.

### GetMultihomedPDUAddress

`func (o *MultipleUnitUsage) GetMultihomedPDUAddress() PDUAddress`

GetMultihomedPDUAddress returns the MultihomedPDUAddress field if non-nil, zero value otherwise.

### GetMultihomedPDUAddressOk

`func (o *MultipleUnitUsage) GetMultihomedPDUAddressOk() (*PDUAddress, bool)`

GetMultihomedPDUAddressOk returns a tuple with the MultihomedPDUAddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMultihomedPDUAddress

`func (o *MultipleUnitUsage) SetMultihomedPDUAddress(v PDUAddress)`

SetMultihomedPDUAddress sets MultihomedPDUAddress field to given value.

### HasMultihomedPDUAddress

`func (o *MultipleUnitUsage) HasMultihomedPDUAddress() bool`

HasMultihomedPDUAddress returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


