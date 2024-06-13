# PDUSessionInformation

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**NetworkSlicingInfo** | Pointer to [**NetworkSlicingInfo**](NetworkSlicingInfo.md) |  | [optional] 
**PduSessionID** | **int32** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | 
**PduType** | Pointer to [**PduSessionType**](PduSessionType.md) |  | [optional] 
**SscMode** | Pointer to [**SscMode**](SscMode.md) |  | [optional] 
**HPlmnId** | Pointer to [**PlmnId**](PlmnId.md) |  | [optional] 
**ServingNetworkFunctionID** | Pointer to [**ServingNetworkFunctionID**](ServingNetworkFunctionID.md) |  | [optional] 
**RatType** | Pointer to [**RatType**](RatType.md) |  | [optional] 
**MAPDUNon3GPPRATType** | Pointer to [**RatType**](RatType.md) |  | [optional] 
**DnnId** | **string** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**ChargingCharacteristics** | Pointer to **string** |  | [optional] 
**ChargingCharacteristicsSelectionMode** | Pointer to [**ChargingCharacteristicsSelectionMode**](ChargingCharacteristicsSelectionMode.md) |  | [optional] 
**StartTime** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**StopTime** | Pointer to **time.Time** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**Var3gppPSDataOffStatus** | Pointer to [**Model3GPPPSDataOffStatus**](Model3GPPPSDataOffStatus.md) |  | [optional] 
**SessionStopIndicator** | Pointer to **bool** |  | [optional] 
**PduAddress** | Pointer to [**PDUAddress**](PDUAddress.md) |  | [optional] 
**Diagnostics** | Pointer to **int32** |  | [optional] 
**AuthorizedQoSInformation** | Pointer to [**AuthorizedDefaultQos**](AuthorizedDefaultQos.md) |  | [optional] 
**SubscribedQoSInformation** | Pointer to [**SubscribedDefaultQos**](SubscribedDefaultQos.md) |  | [optional] 
**AuthorizedSessionAMBR** | Pointer to [**Ambr**](Ambr.md) |  | [optional] 
**SubscribedSessionAMBR** | Pointer to [**Ambr**](Ambr.md) |  | [optional] 
**ServingCNPlmnId** | Pointer to [**PlmnId**](PlmnId.md) |  | [optional] 
**MAPDUSessionInformation** | Pointer to [**MAPDUSessionInformation**](MAPDUSessionInformation.md) |  | [optional] 
**EnhancedDiagnostics** | Pointer to [**[]RanNasRelCause**](RanNasRelCause.md) |  | [optional] 

## Methods

### NewPDUSessionInformation

`func NewPDUSessionInformation(pduSessionID int32, dnnId string, ) *PDUSessionInformation`

NewPDUSessionInformation instantiates a new PDUSessionInformation object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPDUSessionInformationWithDefaults

`func NewPDUSessionInformationWithDefaults() *PDUSessionInformation`

NewPDUSessionInformationWithDefaults instantiates a new PDUSessionInformation object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetNetworkSlicingInfo

`func (o *PDUSessionInformation) GetNetworkSlicingInfo() NetworkSlicingInfo`

GetNetworkSlicingInfo returns the NetworkSlicingInfo field if non-nil, zero value otherwise.

### GetNetworkSlicingInfoOk

`func (o *PDUSessionInformation) GetNetworkSlicingInfoOk() (*NetworkSlicingInfo, bool)`

GetNetworkSlicingInfoOk returns a tuple with the NetworkSlicingInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNetworkSlicingInfo

`func (o *PDUSessionInformation) SetNetworkSlicingInfo(v NetworkSlicingInfo)`

SetNetworkSlicingInfo sets NetworkSlicingInfo field to given value.

### HasNetworkSlicingInfo

`func (o *PDUSessionInformation) HasNetworkSlicingInfo() bool`

HasNetworkSlicingInfo returns a boolean if a field has been set.

### GetPduSessionID

`func (o *PDUSessionInformation) GetPduSessionID() int32`

GetPduSessionID returns the PduSessionID field if non-nil, zero value otherwise.

### GetPduSessionIDOk

`func (o *PDUSessionInformation) GetPduSessionIDOk() (*int32, bool)`

GetPduSessionIDOk returns a tuple with the PduSessionID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduSessionID

`func (o *PDUSessionInformation) SetPduSessionID(v int32)`

SetPduSessionID sets PduSessionID field to given value.


### GetPduType

`func (o *PDUSessionInformation) GetPduType() PduSessionType`

GetPduType returns the PduType field if non-nil, zero value otherwise.

### GetPduTypeOk

`func (o *PDUSessionInformation) GetPduTypeOk() (*PduSessionType, bool)`

GetPduTypeOk returns a tuple with the PduType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduType

`func (o *PDUSessionInformation) SetPduType(v PduSessionType)`

SetPduType sets PduType field to given value.

### HasPduType

`func (o *PDUSessionInformation) HasPduType() bool`

HasPduType returns a boolean if a field has been set.

### GetSscMode

`func (o *PDUSessionInformation) GetSscMode() SscMode`

GetSscMode returns the SscMode field if non-nil, zero value otherwise.

### GetSscModeOk

`func (o *PDUSessionInformation) GetSscModeOk() (*SscMode, bool)`

GetSscModeOk returns a tuple with the SscMode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSscMode

`func (o *PDUSessionInformation) SetSscMode(v SscMode)`

SetSscMode sets SscMode field to given value.

### HasSscMode

`func (o *PDUSessionInformation) HasSscMode() bool`

HasSscMode returns a boolean if a field has been set.

### GetHPlmnId

`func (o *PDUSessionInformation) GetHPlmnId() PlmnId`

GetHPlmnId returns the HPlmnId field if non-nil, zero value otherwise.

### GetHPlmnIdOk

`func (o *PDUSessionInformation) GetHPlmnIdOk() (*PlmnId, bool)`

GetHPlmnIdOk returns a tuple with the HPlmnId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHPlmnId

`func (o *PDUSessionInformation) SetHPlmnId(v PlmnId)`

SetHPlmnId sets HPlmnId field to given value.

### HasHPlmnId

`func (o *PDUSessionInformation) HasHPlmnId() bool`

HasHPlmnId returns a boolean if a field has been set.

### GetServingNetworkFunctionID

`func (o *PDUSessionInformation) GetServingNetworkFunctionID() ServingNetworkFunctionID`

GetServingNetworkFunctionID returns the ServingNetworkFunctionID field if non-nil, zero value otherwise.

### GetServingNetworkFunctionIDOk

`func (o *PDUSessionInformation) GetServingNetworkFunctionIDOk() (*ServingNetworkFunctionID, bool)`

GetServingNetworkFunctionIDOk returns a tuple with the ServingNetworkFunctionID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServingNetworkFunctionID

`func (o *PDUSessionInformation) SetServingNetworkFunctionID(v ServingNetworkFunctionID)`

SetServingNetworkFunctionID sets ServingNetworkFunctionID field to given value.

### HasServingNetworkFunctionID

`func (o *PDUSessionInformation) HasServingNetworkFunctionID() bool`

HasServingNetworkFunctionID returns a boolean if a field has been set.

### GetRatType

`func (o *PDUSessionInformation) GetRatType() RatType`

GetRatType returns the RatType field if non-nil, zero value otherwise.

### GetRatTypeOk

`func (o *PDUSessionInformation) GetRatTypeOk() (*RatType, bool)`

GetRatTypeOk returns a tuple with the RatType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRatType

`func (o *PDUSessionInformation) SetRatType(v RatType)`

SetRatType sets RatType field to given value.

### HasRatType

`func (o *PDUSessionInformation) HasRatType() bool`

HasRatType returns a boolean if a field has been set.

### GetMAPDUNon3GPPRATType

`func (o *PDUSessionInformation) GetMAPDUNon3GPPRATType() RatType`

GetMAPDUNon3GPPRATType returns the MAPDUNon3GPPRATType field if non-nil, zero value otherwise.

### GetMAPDUNon3GPPRATTypeOk

`func (o *PDUSessionInformation) GetMAPDUNon3GPPRATTypeOk() (*RatType, bool)`

GetMAPDUNon3GPPRATTypeOk returns a tuple with the MAPDUNon3GPPRATType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMAPDUNon3GPPRATType

`func (o *PDUSessionInformation) SetMAPDUNon3GPPRATType(v RatType)`

SetMAPDUNon3GPPRATType sets MAPDUNon3GPPRATType field to given value.

### HasMAPDUNon3GPPRATType

`func (o *PDUSessionInformation) HasMAPDUNon3GPPRATType() bool`

HasMAPDUNon3GPPRATType returns a boolean if a field has been set.

### GetDnnId

`func (o *PDUSessionInformation) GetDnnId() string`

GetDnnId returns the DnnId field if non-nil, zero value otherwise.

### GetDnnIdOk

`func (o *PDUSessionInformation) GetDnnIdOk() (*string, bool)`

GetDnnIdOk returns a tuple with the DnnId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDnnId

`func (o *PDUSessionInformation) SetDnnId(v string)`

SetDnnId sets DnnId field to given value.


### GetChargingCharacteristics

`func (o *PDUSessionInformation) GetChargingCharacteristics() string`

GetChargingCharacteristics returns the ChargingCharacteristics field if non-nil, zero value otherwise.

### GetChargingCharacteristicsOk

`func (o *PDUSessionInformation) GetChargingCharacteristicsOk() (*string, bool)`

GetChargingCharacteristicsOk returns a tuple with the ChargingCharacteristics field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChargingCharacteristics

`func (o *PDUSessionInformation) SetChargingCharacteristics(v string)`

SetChargingCharacteristics sets ChargingCharacteristics field to given value.

### HasChargingCharacteristics

`func (o *PDUSessionInformation) HasChargingCharacteristics() bool`

HasChargingCharacteristics returns a boolean if a field has been set.

### GetChargingCharacteristicsSelectionMode

`func (o *PDUSessionInformation) GetChargingCharacteristicsSelectionMode() ChargingCharacteristicsSelectionMode`

GetChargingCharacteristicsSelectionMode returns the ChargingCharacteristicsSelectionMode field if non-nil, zero value otherwise.

### GetChargingCharacteristicsSelectionModeOk

`func (o *PDUSessionInformation) GetChargingCharacteristicsSelectionModeOk() (*ChargingCharacteristicsSelectionMode, bool)`

GetChargingCharacteristicsSelectionModeOk returns a tuple with the ChargingCharacteristicsSelectionMode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChargingCharacteristicsSelectionMode

`func (o *PDUSessionInformation) SetChargingCharacteristicsSelectionMode(v ChargingCharacteristicsSelectionMode)`

SetChargingCharacteristicsSelectionMode sets ChargingCharacteristicsSelectionMode field to given value.

### HasChargingCharacteristicsSelectionMode

`func (o *PDUSessionInformation) HasChargingCharacteristicsSelectionMode() bool`

HasChargingCharacteristicsSelectionMode returns a boolean if a field has been set.

### GetStartTime

`func (o *PDUSessionInformation) GetStartTime() time.Time`

GetStartTime returns the StartTime field if non-nil, zero value otherwise.

### GetStartTimeOk

`func (o *PDUSessionInformation) GetStartTimeOk() (*time.Time, bool)`

GetStartTimeOk returns a tuple with the StartTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStartTime

`func (o *PDUSessionInformation) SetStartTime(v time.Time)`

SetStartTime sets StartTime field to given value.

### HasStartTime

`func (o *PDUSessionInformation) HasStartTime() bool`

HasStartTime returns a boolean if a field has been set.

### GetStopTime

`func (o *PDUSessionInformation) GetStopTime() time.Time`

GetStopTime returns the StopTime field if non-nil, zero value otherwise.

### GetStopTimeOk

`func (o *PDUSessionInformation) GetStopTimeOk() (*time.Time, bool)`

GetStopTimeOk returns a tuple with the StopTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStopTime

`func (o *PDUSessionInformation) SetStopTime(v time.Time)`

SetStopTime sets StopTime field to given value.

### HasStopTime

`func (o *PDUSessionInformation) HasStopTime() bool`

HasStopTime returns a boolean if a field has been set.

### GetVar3gppPSDataOffStatus

`func (o *PDUSessionInformation) GetVar3gppPSDataOffStatus() Model3GPPPSDataOffStatus`

GetVar3gppPSDataOffStatus returns the Var3gppPSDataOffStatus field if non-nil, zero value otherwise.

### GetVar3gppPSDataOffStatusOk

`func (o *PDUSessionInformation) GetVar3gppPSDataOffStatusOk() (*Model3GPPPSDataOffStatus, bool)`

GetVar3gppPSDataOffStatusOk returns a tuple with the Var3gppPSDataOffStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVar3gppPSDataOffStatus

`func (o *PDUSessionInformation) SetVar3gppPSDataOffStatus(v Model3GPPPSDataOffStatus)`

SetVar3gppPSDataOffStatus sets Var3gppPSDataOffStatus field to given value.

### HasVar3gppPSDataOffStatus

`func (o *PDUSessionInformation) HasVar3gppPSDataOffStatus() bool`

HasVar3gppPSDataOffStatus returns a boolean if a field has been set.

### GetSessionStopIndicator

`func (o *PDUSessionInformation) GetSessionStopIndicator() bool`

GetSessionStopIndicator returns the SessionStopIndicator field if non-nil, zero value otherwise.

### GetSessionStopIndicatorOk

`func (o *PDUSessionInformation) GetSessionStopIndicatorOk() (*bool, bool)`

GetSessionStopIndicatorOk returns a tuple with the SessionStopIndicator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSessionStopIndicator

`func (o *PDUSessionInformation) SetSessionStopIndicator(v bool)`

SetSessionStopIndicator sets SessionStopIndicator field to given value.

### HasSessionStopIndicator

`func (o *PDUSessionInformation) HasSessionStopIndicator() bool`

HasSessionStopIndicator returns a boolean if a field has been set.

### GetPduAddress

`func (o *PDUSessionInformation) GetPduAddress() PDUAddress`

GetPduAddress returns the PduAddress field if non-nil, zero value otherwise.

### GetPduAddressOk

`func (o *PDUSessionInformation) GetPduAddressOk() (*PDUAddress, bool)`

GetPduAddressOk returns a tuple with the PduAddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPduAddress

`func (o *PDUSessionInformation) SetPduAddress(v PDUAddress)`

SetPduAddress sets PduAddress field to given value.

### HasPduAddress

`func (o *PDUSessionInformation) HasPduAddress() bool`

HasPduAddress returns a boolean if a field has been set.

### GetDiagnostics

`func (o *PDUSessionInformation) GetDiagnostics() int32`

GetDiagnostics returns the Diagnostics field if non-nil, zero value otherwise.

### GetDiagnosticsOk

`func (o *PDUSessionInformation) GetDiagnosticsOk() (*int32, bool)`

GetDiagnosticsOk returns a tuple with the Diagnostics field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDiagnostics

`func (o *PDUSessionInformation) SetDiagnostics(v int32)`

SetDiagnostics sets Diagnostics field to given value.

### HasDiagnostics

`func (o *PDUSessionInformation) HasDiagnostics() bool`

HasDiagnostics returns a boolean if a field has been set.

### GetAuthorizedQoSInformation

`func (o *PDUSessionInformation) GetAuthorizedQoSInformation() AuthorizedDefaultQos`

GetAuthorizedQoSInformation returns the AuthorizedQoSInformation field if non-nil, zero value otherwise.

### GetAuthorizedQoSInformationOk

`func (o *PDUSessionInformation) GetAuthorizedQoSInformationOk() (*AuthorizedDefaultQos, bool)`

GetAuthorizedQoSInformationOk returns a tuple with the AuthorizedQoSInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuthorizedQoSInformation

`func (o *PDUSessionInformation) SetAuthorizedQoSInformation(v AuthorizedDefaultQos)`

SetAuthorizedQoSInformation sets AuthorizedQoSInformation field to given value.

### HasAuthorizedQoSInformation

`func (o *PDUSessionInformation) HasAuthorizedQoSInformation() bool`

HasAuthorizedQoSInformation returns a boolean if a field has been set.

### GetSubscribedQoSInformation

`func (o *PDUSessionInformation) GetSubscribedQoSInformation() SubscribedDefaultQos`

GetSubscribedQoSInformation returns the SubscribedQoSInformation field if non-nil, zero value otherwise.

### GetSubscribedQoSInformationOk

`func (o *PDUSessionInformation) GetSubscribedQoSInformationOk() (*SubscribedDefaultQos, bool)`

GetSubscribedQoSInformationOk returns a tuple with the SubscribedQoSInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscribedQoSInformation

`func (o *PDUSessionInformation) SetSubscribedQoSInformation(v SubscribedDefaultQos)`

SetSubscribedQoSInformation sets SubscribedQoSInformation field to given value.

### HasSubscribedQoSInformation

`func (o *PDUSessionInformation) HasSubscribedQoSInformation() bool`

HasSubscribedQoSInformation returns a boolean if a field has been set.

### GetAuthorizedSessionAMBR

`func (o *PDUSessionInformation) GetAuthorizedSessionAMBR() Ambr`

GetAuthorizedSessionAMBR returns the AuthorizedSessionAMBR field if non-nil, zero value otherwise.

### GetAuthorizedSessionAMBROk

`func (o *PDUSessionInformation) GetAuthorizedSessionAMBROk() (*Ambr, bool)`

GetAuthorizedSessionAMBROk returns a tuple with the AuthorizedSessionAMBR field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuthorizedSessionAMBR

`func (o *PDUSessionInformation) SetAuthorizedSessionAMBR(v Ambr)`

SetAuthorizedSessionAMBR sets AuthorizedSessionAMBR field to given value.

### HasAuthorizedSessionAMBR

`func (o *PDUSessionInformation) HasAuthorizedSessionAMBR() bool`

HasAuthorizedSessionAMBR returns a boolean if a field has been set.

### GetSubscribedSessionAMBR

`func (o *PDUSessionInformation) GetSubscribedSessionAMBR() Ambr`

GetSubscribedSessionAMBR returns the SubscribedSessionAMBR field if non-nil, zero value otherwise.

### GetSubscribedSessionAMBROk

`func (o *PDUSessionInformation) GetSubscribedSessionAMBROk() (*Ambr, bool)`

GetSubscribedSessionAMBROk returns a tuple with the SubscribedSessionAMBR field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscribedSessionAMBR

`func (o *PDUSessionInformation) SetSubscribedSessionAMBR(v Ambr)`

SetSubscribedSessionAMBR sets SubscribedSessionAMBR field to given value.

### HasSubscribedSessionAMBR

`func (o *PDUSessionInformation) HasSubscribedSessionAMBR() bool`

HasSubscribedSessionAMBR returns a boolean if a field has been set.

### GetServingCNPlmnId

`func (o *PDUSessionInformation) GetServingCNPlmnId() PlmnId`

GetServingCNPlmnId returns the ServingCNPlmnId field if non-nil, zero value otherwise.

### GetServingCNPlmnIdOk

`func (o *PDUSessionInformation) GetServingCNPlmnIdOk() (*PlmnId, bool)`

GetServingCNPlmnIdOk returns a tuple with the ServingCNPlmnId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServingCNPlmnId

`func (o *PDUSessionInformation) SetServingCNPlmnId(v PlmnId)`

SetServingCNPlmnId sets ServingCNPlmnId field to given value.

### HasServingCNPlmnId

`func (o *PDUSessionInformation) HasServingCNPlmnId() bool`

HasServingCNPlmnId returns a boolean if a field has been set.

### GetMAPDUSessionInformation

`func (o *PDUSessionInformation) GetMAPDUSessionInformation() MAPDUSessionInformation`

GetMAPDUSessionInformation returns the MAPDUSessionInformation field if non-nil, zero value otherwise.

### GetMAPDUSessionInformationOk

`func (o *PDUSessionInformation) GetMAPDUSessionInformationOk() (*MAPDUSessionInformation, bool)`

GetMAPDUSessionInformationOk returns a tuple with the MAPDUSessionInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMAPDUSessionInformation

`func (o *PDUSessionInformation) SetMAPDUSessionInformation(v MAPDUSessionInformation)`

SetMAPDUSessionInformation sets MAPDUSessionInformation field to given value.

### HasMAPDUSessionInformation

`func (o *PDUSessionInformation) HasMAPDUSessionInformation() bool`

HasMAPDUSessionInformation returns a boolean if a field has been set.

### GetEnhancedDiagnostics

`func (o *PDUSessionInformation) GetEnhancedDiagnostics() []RanNasRelCause`

GetEnhancedDiagnostics returns the EnhancedDiagnostics field if non-nil, zero value otherwise.

### GetEnhancedDiagnosticsOk

`func (o *PDUSessionInformation) GetEnhancedDiagnosticsOk() (*[]RanNasRelCause, bool)`

GetEnhancedDiagnosticsOk returns a tuple with the EnhancedDiagnostics field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnhancedDiagnostics

`func (o *PDUSessionInformation) SetEnhancedDiagnostics(v []RanNasRelCause)`

SetEnhancedDiagnostics sets EnhancedDiagnostics field to given value.

### HasEnhancedDiagnostics

`func (o *PDUSessionInformation) HasEnhancedDiagnostics() bool`

HasEnhancedDiagnostics returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


