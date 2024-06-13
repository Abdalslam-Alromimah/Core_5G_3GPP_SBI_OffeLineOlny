# ChargingDataRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriberIdentifier** | Pointer to **string** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**NfConsumerIdentification** | [**NFIdentification**](NFIdentification.md) |  | 
**InvocationTimeStamp** | **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | 
**InvocationSequenceNumber** | **int32** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | 
**RetransmissionIndicator** | Pointer to **bool** |  | [optional] 
**ServiceSpecificationInfo** | Pointer to **string** |  | [optional] 
**MultipleUnitUsage** | Pointer to [**[]MultipleUnitUsage**](MultipleUnitUsage.md) |  | [optional] 
**Triggers** | Pointer to [**[]Trigger**](Trigger.md) |  | [optional] 
**PDUSessionChargingInformation** | Pointer to [**PDUSessionChargingInformation**](PDUSessionChargingInformation.md) |  | [optional] 
**RoamingQBCInformation** | Pointer to [**RoamingQBCInformation**](RoamingQBCInformation.md) |  | [optional] 

## Methods

### NewChargingDataRequest

`func NewChargingDataRequest(nfConsumerIdentification NFIdentification, invocationTimeStamp time.Time, invocationSequenceNumber int32, ) *ChargingDataRequest`

NewChargingDataRequest instantiates a new ChargingDataRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewChargingDataRequestWithDefaults

`func NewChargingDataRequestWithDefaults() *ChargingDataRequest`

NewChargingDataRequestWithDefaults instantiates a new ChargingDataRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriberIdentifier

`func (o *ChargingDataRequest) GetSubscriberIdentifier() string`

GetSubscriberIdentifier returns the SubscriberIdentifier field if non-nil, zero value otherwise.

### GetSubscriberIdentifierOk

`func (o *ChargingDataRequest) GetSubscriberIdentifierOk() (*string, bool)`

GetSubscriberIdentifierOk returns a tuple with the SubscriberIdentifier field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriberIdentifier

`func (o *ChargingDataRequest) SetSubscriberIdentifier(v string)`

SetSubscriberIdentifier sets SubscriberIdentifier field to given value.

### HasSubscriberIdentifier

`func (o *ChargingDataRequest) HasSubscriberIdentifier() bool`

HasSubscriberIdentifier returns a boolean if a field has been set.

### GetNfConsumerIdentification

`func (o *ChargingDataRequest) GetNfConsumerIdentification() NFIdentification`

GetNfConsumerIdentification returns the NfConsumerIdentification field if non-nil, zero value otherwise.

### GetNfConsumerIdentificationOk

`func (o *ChargingDataRequest) GetNfConsumerIdentificationOk() (*NFIdentification, bool)`

GetNfConsumerIdentificationOk returns a tuple with the NfConsumerIdentification field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNfConsumerIdentification

`func (o *ChargingDataRequest) SetNfConsumerIdentification(v NFIdentification)`

SetNfConsumerIdentification sets NfConsumerIdentification field to given value.


### GetInvocationTimeStamp

`func (o *ChargingDataRequest) GetInvocationTimeStamp() time.Time`

GetInvocationTimeStamp returns the InvocationTimeStamp field if non-nil, zero value otherwise.

### GetInvocationTimeStampOk

`func (o *ChargingDataRequest) GetInvocationTimeStampOk() (*time.Time, bool)`

GetInvocationTimeStampOk returns a tuple with the InvocationTimeStamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvocationTimeStamp

`func (o *ChargingDataRequest) SetInvocationTimeStamp(v time.Time)`

SetInvocationTimeStamp sets InvocationTimeStamp field to given value.


### GetInvocationSequenceNumber

`func (o *ChargingDataRequest) GetInvocationSequenceNumber() int32`

GetInvocationSequenceNumber returns the InvocationSequenceNumber field if non-nil, zero value otherwise.

### GetInvocationSequenceNumberOk

`func (o *ChargingDataRequest) GetInvocationSequenceNumberOk() (*int32, bool)`

GetInvocationSequenceNumberOk returns a tuple with the InvocationSequenceNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvocationSequenceNumber

`func (o *ChargingDataRequest) SetInvocationSequenceNumber(v int32)`

SetInvocationSequenceNumber sets InvocationSequenceNumber field to given value.


### GetRetransmissionIndicator

`func (o *ChargingDataRequest) GetRetransmissionIndicator() bool`

GetRetransmissionIndicator returns the RetransmissionIndicator field if non-nil, zero value otherwise.

### GetRetransmissionIndicatorOk

`func (o *ChargingDataRequest) GetRetransmissionIndicatorOk() (*bool, bool)`

GetRetransmissionIndicatorOk returns a tuple with the RetransmissionIndicator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRetransmissionIndicator

`func (o *ChargingDataRequest) SetRetransmissionIndicator(v bool)`

SetRetransmissionIndicator sets RetransmissionIndicator field to given value.

### HasRetransmissionIndicator

`func (o *ChargingDataRequest) HasRetransmissionIndicator() bool`

HasRetransmissionIndicator returns a boolean if a field has been set.

### GetServiceSpecificationInfo

`func (o *ChargingDataRequest) GetServiceSpecificationInfo() string`

GetServiceSpecificationInfo returns the ServiceSpecificationInfo field if non-nil, zero value otherwise.

### GetServiceSpecificationInfoOk

`func (o *ChargingDataRequest) GetServiceSpecificationInfoOk() (*string, bool)`

GetServiceSpecificationInfoOk returns a tuple with the ServiceSpecificationInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceSpecificationInfo

`func (o *ChargingDataRequest) SetServiceSpecificationInfo(v string)`

SetServiceSpecificationInfo sets ServiceSpecificationInfo field to given value.

### HasServiceSpecificationInfo

`func (o *ChargingDataRequest) HasServiceSpecificationInfo() bool`

HasServiceSpecificationInfo returns a boolean if a field has been set.

### GetMultipleUnitUsage

`func (o *ChargingDataRequest) GetMultipleUnitUsage() []MultipleUnitUsage`

GetMultipleUnitUsage returns the MultipleUnitUsage field if non-nil, zero value otherwise.

### GetMultipleUnitUsageOk

`func (o *ChargingDataRequest) GetMultipleUnitUsageOk() (*[]MultipleUnitUsage, bool)`

GetMultipleUnitUsageOk returns a tuple with the MultipleUnitUsage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMultipleUnitUsage

`func (o *ChargingDataRequest) SetMultipleUnitUsage(v []MultipleUnitUsage)`

SetMultipleUnitUsage sets MultipleUnitUsage field to given value.

### HasMultipleUnitUsage

`func (o *ChargingDataRequest) HasMultipleUnitUsage() bool`

HasMultipleUnitUsage returns a boolean if a field has been set.

### GetTriggers

`func (o *ChargingDataRequest) GetTriggers() []Trigger`

GetTriggers returns the Triggers field if non-nil, zero value otherwise.

### GetTriggersOk

`func (o *ChargingDataRequest) GetTriggersOk() (*[]Trigger, bool)`

GetTriggersOk returns a tuple with the Triggers field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTriggers

`func (o *ChargingDataRequest) SetTriggers(v []Trigger)`

SetTriggers sets Triggers field to given value.

### HasTriggers

`func (o *ChargingDataRequest) HasTriggers() bool`

HasTriggers returns a boolean if a field has been set.

### GetPDUSessionChargingInformation

`func (o *ChargingDataRequest) GetPDUSessionChargingInformation() PDUSessionChargingInformation`

GetPDUSessionChargingInformation returns the PDUSessionChargingInformation field if non-nil, zero value otherwise.

### GetPDUSessionChargingInformationOk

`func (o *ChargingDataRequest) GetPDUSessionChargingInformationOk() (*PDUSessionChargingInformation, bool)`

GetPDUSessionChargingInformationOk returns a tuple with the PDUSessionChargingInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPDUSessionChargingInformation

`func (o *ChargingDataRequest) SetPDUSessionChargingInformation(v PDUSessionChargingInformation)`

SetPDUSessionChargingInformation sets PDUSessionChargingInformation field to given value.

### HasPDUSessionChargingInformation

`func (o *ChargingDataRequest) HasPDUSessionChargingInformation() bool`

HasPDUSessionChargingInformation returns a boolean if a field has been set.

### GetRoamingQBCInformation

`func (o *ChargingDataRequest) GetRoamingQBCInformation() RoamingQBCInformation`

GetRoamingQBCInformation returns the RoamingQBCInformation field if non-nil, zero value otherwise.

### GetRoamingQBCInformationOk

`func (o *ChargingDataRequest) GetRoamingQBCInformationOk() (*RoamingQBCInformation, bool)`

GetRoamingQBCInformationOk returns a tuple with the RoamingQBCInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoamingQBCInformation

`func (o *ChargingDataRequest) SetRoamingQBCInformation(v RoamingQBCInformation)`

SetRoamingQBCInformation sets RoamingQBCInformation field to given value.

### HasRoamingQBCInformation

`func (o *ChargingDataRequest) HasRoamingQBCInformation() bool`

HasRoamingQBCInformation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


