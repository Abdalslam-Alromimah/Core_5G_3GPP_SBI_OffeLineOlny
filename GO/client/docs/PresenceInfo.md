# PresenceInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PraId** | Pointer to **string** | Represents an identifier of the Presence Reporting Area (see clause 28.10 of 3GPP  TS 23.003.  This IE shall be present  if the Area of Interest subscribed or reported is a Presence Reporting Area or a Set of Core Network predefined Presence Reporting Areas. When present, it shall be encoded as a string representing an integer in the following ranges: 0 to 8 388 607 for UE-dedicated PRA 8 388 608 to 16 777 215 for Core Network predefined PRA Examples: PRA ID 123 is encoded as \&quot;123\&quot; PRA ID 11 238 660 is encoded as \&quot;11238660\&quot;  | [optional] 
**AdditionalPraId** | Pointer to **string** | This IE may be present if the praId IE is present and if it contains a PRA identifier referring to a set of Core Network predefined Presence Reporting Areas. When present, this IE shall contain a PRA Identifier of an individual PRA within the Set of Core Network predefined Presence Reporting Areas indicated by the praId IE.   | [optional] 
**PresenceState** | Pointer to [**PresenceState**](PresenceState.md) |  | [optional] 
**TrackingAreaList** | Pointer to [**[]Tai**](Tai.md) | Represents the list of tracking areas that constitutes the area. This IE shall be present if the subscription or  the event report is for tracking UE presence in the tracking areas. For non 3GPP access the TAI shall be the N3GPP TAI.   | [optional] 
**EcgiList** | Pointer to [**[]Ecgi**](Ecgi.md) | Represents the list of EUTRAN cell Ids that constitutes the area. This IE shall be present if the Area of Interest subscribed is a list of EUTRAN cell Ids.   | [optional] 
**NcgiList** | Pointer to [**[]Ncgi**](Ncgi.md) | Represents the list of NR cell Ids that constitutes the area. This IE shall be present if the Area of Interest subscribed is a list of NR cell Ids.   | [optional] 
**GlobalRanNodeIdList** | Pointer to [**[]GlobalRanNodeId**](GlobalRanNodeId.md) | Represents the list of NG RAN node identifiers that constitutes the area. This IE shall be present if the Area of Interest subscribed is a list of NG RAN node identifiers.   | [optional] 
**GlobaleNbIdList** | Pointer to [**[]GlobalRanNodeId**](GlobalRanNodeId.md) | Represents the list of eNodeB identifiers that constitutes the area. This IE shall be  present if the Area of Interest subscribed is a list of eNodeB identifiers.  | [optional] 

## Methods

### NewPresenceInfo

`func NewPresenceInfo() *PresenceInfo`

NewPresenceInfo instantiates a new PresenceInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPresenceInfoWithDefaults

`func NewPresenceInfoWithDefaults() *PresenceInfo`

NewPresenceInfoWithDefaults instantiates a new PresenceInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPraId

`func (o *PresenceInfo) GetPraId() string`

GetPraId returns the PraId field if non-nil, zero value otherwise.

### GetPraIdOk

`func (o *PresenceInfo) GetPraIdOk() (*string, bool)`

GetPraIdOk returns a tuple with the PraId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPraId

`func (o *PresenceInfo) SetPraId(v string)`

SetPraId sets PraId field to given value.

### HasPraId

`func (o *PresenceInfo) HasPraId() bool`

HasPraId returns a boolean if a field has been set.

### GetAdditionalPraId

`func (o *PresenceInfo) GetAdditionalPraId() string`

GetAdditionalPraId returns the AdditionalPraId field if non-nil, zero value otherwise.

### GetAdditionalPraIdOk

`func (o *PresenceInfo) GetAdditionalPraIdOk() (*string, bool)`

GetAdditionalPraIdOk returns a tuple with the AdditionalPraId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdditionalPraId

`func (o *PresenceInfo) SetAdditionalPraId(v string)`

SetAdditionalPraId sets AdditionalPraId field to given value.

### HasAdditionalPraId

`func (o *PresenceInfo) HasAdditionalPraId() bool`

HasAdditionalPraId returns a boolean if a field has been set.

### GetPresenceState

`func (o *PresenceInfo) GetPresenceState() PresenceState`

GetPresenceState returns the PresenceState field if non-nil, zero value otherwise.

### GetPresenceStateOk

`func (o *PresenceInfo) GetPresenceStateOk() (*PresenceState, bool)`

GetPresenceStateOk returns a tuple with the PresenceState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPresenceState

`func (o *PresenceInfo) SetPresenceState(v PresenceState)`

SetPresenceState sets PresenceState field to given value.

### HasPresenceState

`func (o *PresenceInfo) HasPresenceState() bool`

HasPresenceState returns a boolean if a field has been set.

### GetTrackingAreaList

`func (o *PresenceInfo) GetTrackingAreaList() []Tai`

GetTrackingAreaList returns the TrackingAreaList field if non-nil, zero value otherwise.

### GetTrackingAreaListOk

`func (o *PresenceInfo) GetTrackingAreaListOk() (*[]Tai, bool)`

GetTrackingAreaListOk returns a tuple with the TrackingAreaList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackingAreaList

`func (o *PresenceInfo) SetTrackingAreaList(v []Tai)`

SetTrackingAreaList sets TrackingAreaList field to given value.

### HasTrackingAreaList

`func (o *PresenceInfo) HasTrackingAreaList() bool`

HasTrackingAreaList returns a boolean if a field has been set.

### GetEcgiList

`func (o *PresenceInfo) GetEcgiList() []Ecgi`

GetEcgiList returns the EcgiList field if non-nil, zero value otherwise.

### GetEcgiListOk

`func (o *PresenceInfo) GetEcgiListOk() (*[]Ecgi, bool)`

GetEcgiListOk returns a tuple with the EcgiList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEcgiList

`func (o *PresenceInfo) SetEcgiList(v []Ecgi)`

SetEcgiList sets EcgiList field to given value.

### HasEcgiList

`func (o *PresenceInfo) HasEcgiList() bool`

HasEcgiList returns a boolean if a field has been set.

### GetNcgiList

`func (o *PresenceInfo) GetNcgiList() []Ncgi`

GetNcgiList returns the NcgiList field if non-nil, zero value otherwise.

### GetNcgiListOk

`func (o *PresenceInfo) GetNcgiListOk() (*[]Ncgi, bool)`

GetNcgiListOk returns a tuple with the NcgiList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNcgiList

`func (o *PresenceInfo) SetNcgiList(v []Ncgi)`

SetNcgiList sets NcgiList field to given value.

### HasNcgiList

`func (o *PresenceInfo) HasNcgiList() bool`

HasNcgiList returns a boolean if a field has been set.

### GetGlobalRanNodeIdList

`func (o *PresenceInfo) GetGlobalRanNodeIdList() []GlobalRanNodeId`

GetGlobalRanNodeIdList returns the GlobalRanNodeIdList field if non-nil, zero value otherwise.

### GetGlobalRanNodeIdListOk

`func (o *PresenceInfo) GetGlobalRanNodeIdListOk() (*[]GlobalRanNodeId, bool)`

GetGlobalRanNodeIdListOk returns a tuple with the GlobalRanNodeIdList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGlobalRanNodeIdList

`func (o *PresenceInfo) SetGlobalRanNodeIdList(v []GlobalRanNodeId)`

SetGlobalRanNodeIdList sets GlobalRanNodeIdList field to given value.

### HasGlobalRanNodeIdList

`func (o *PresenceInfo) HasGlobalRanNodeIdList() bool`

HasGlobalRanNodeIdList returns a boolean if a field has been set.

### GetGlobaleNbIdList

`func (o *PresenceInfo) GetGlobaleNbIdList() []GlobalRanNodeId`

GetGlobaleNbIdList returns the GlobaleNbIdList field if non-nil, zero value otherwise.

### GetGlobaleNbIdListOk

`func (o *PresenceInfo) GetGlobaleNbIdListOk() (*[]GlobalRanNodeId, bool)`

GetGlobaleNbIdListOk returns a tuple with the GlobaleNbIdList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGlobaleNbIdList

`func (o *PresenceInfo) SetGlobaleNbIdList(v []GlobalRanNodeId)`

SetGlobaleNbIdList sets GlobaleNbIdList field to given value.

### HasGlobaleNbIdList

`func (o *PresenceInfo) HasGlobaleNbIdList() bool`

HasGlobaleNbIdList returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


