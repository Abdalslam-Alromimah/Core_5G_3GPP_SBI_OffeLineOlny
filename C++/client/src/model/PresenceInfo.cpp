/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/PresenceInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PresenceInfo::PresenceInfo()
{
    m_PraId = utility::conversions::to_string_t("");
    m_PraIdIsSet = false;
    m_AdditionalPraId = utility::conversions::to_string_t("");
    m_AdditionalPraIdIsSet = false;
    m_PresenceStateIsSet = false;
    m_TrackingAreaListIsSet = false;
    m_EcgiListIsSet = false;
    m_NcgiListIsSet = false;
    m_GlobalRanNodeIdListIsSet = false;
    m_GlobaleNbIdListIsSet = false;
}

PresenceInfo::~PresenceInfo()
{
}

void PresenceInfo::validate()
{
    // TODO: implement validation
}

web::json::value PresenceInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PraIdIsSet)
    {
        val[utility::conversions::to_string_t(U("praId"))] = ModelBase::toJson(m_PraId);
    }
    if(m_AdditionalPraIdIsSet)
    {
        val[utility::conversions::to_string_t(U("additionalPraId"))] = ModelBase::toJson(m_AdditionalPraId);
    }
    if(m_PresenceStateIsSet)
    {
        val[utility::conversions::to_string_t(U("presenceState"))] = ModelBase::toJson(m_PresenceState);
    }
    if(m_TrackingAreaListIsSet)
    {
        val[utility::conversions::to_string_t(U("trackingAreaList"))] = ModelBase::toJson(m_TrackingAreaList);
    }
    if(m_EcgiListIsSet)
    {
        val[utility::conversions::to_string_t(U("ecgiList"))] = ModelBase::toJson(m_EcgiList);
    }
    if(m_NcgiListIsSet)
    {
        val[utility::conversions::to_string_t(U("ncgiList"))] = ModelBase::toJson(m_NcgiList);
    }
    if(m_GlobalRanNodeIdListIsSet)
    {
        val[utility::conversions::to_string_t(U("globalRanNodeIdList"))] = ModelBase::toJson(m_GlobalRanNodeIdList);
    }
    if(m_GlobaleNbIdListIsSet)
    {
        val[utility::conversions::to_string_t(U("globaleNbIdList"))] = ModelBase::toJson(m_GlobaleNbIdList);
    }

    return val;
}

bool PresenceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("praId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("praId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPraId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPraId);
            setPraId(refVal_setPraId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("additionalPraId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("additionalPraId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdditionalPraId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdditionalPraId);
            setAdditionalPraId(refVal_setAdditionalPraId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("presenceState"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("presenceState")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PresenceState> refVal_setPresenceState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPresenceState);
            setPresenceState(refVal_setPresenceState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("trackingAreaList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("trackingAreaList")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Tai>> refVal_setTrackingAreaList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrackingAreaList);
            setTrackingAreaList(refVal_setTrackingAreaList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ecgiList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ecgiList")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Ecgi>> refVal_setEcgiList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEcgiList);
            setEcgiList(refVal_setEcgiList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ncgiList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ncgiList")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Ncgi>> refVal_setNcgiList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNcgiList);
            setNcgiList(refVal_setNcgiList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("globalRanNodeIdList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("globalRanNodeIdList")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<GlobalRanNodeId>> refVal_setGlobalRanNodeIdList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGlobalRanNodeIdList);
            setGlobalRanNodeIdList(refVal_setGlobalRanNodeIdList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("globaleNbIdList"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("globaleNbIdList")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<GlobalRanNodeId>> refVal_setGlobaleNbIdList;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGlobaleNbIdList);
            setGlobaleNbIdList(refVal_setGlobaleNbIdList);
        }
    }
    return ok;
}

void PresenceInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PraIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("praId")), m_PraId));
    }
    if(m_AdditionalPraIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("additionalPraId")), m_AdditionalPraId));
    }
    if(m_PresenceStateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("presenceState")), m_PresenceState));
    }
    if(m_TrackingAreaListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("trackingAreaList")), m_TrackingAreaList));
    }
    if(m_EcgiListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ecgiList")), m_EcgiList));
    }
    if(m_NcgiListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ncgiList")), m_NcgiList));
    }
    if(m_GlobalRanNodeIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("globalRanNodeIdList")), m_GlobalRanNodeIdList));
    }
    if(m_GlobaleNbIdListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("globaleNbIdList")), m_GlobaleNbIdList));
    }
}

bool PresenceInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("praId"))))
    {
        utility::string_t refVal_setPraId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("praId"))), refVal_setPraId );
        setPraId(refVal_setPraId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("additionalPraId"))))
    {
        utility::string_t refVal_setAdditionalPraId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("additionalPraId"))), refVal_setAdditionalPraId );
        setAdditionalPraId(refVal_setAdditionalPraId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("presenceState"))))
    {
        std::shared_ptr<PresenceState> refVal_setPresenceState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("presenceState"))), refVal_setPresenceState );
        setPresenceState(refVal_setPresenceState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("trackingAreaList"))))
    {
        std::vector<std::shared_ptr<Tai>> refVal_setTrackingAreaList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("trackingAreaList"))), refVal_setTrackingAreaList );
        setTrackingAreaList(refVal_setTrackingAreaList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ecgiList"))))
    {
        std::vector<std::shared_ptr<Ecgi>> refVal_setEcgiList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ecgiList"))), refVal_setEcgiList );
        setEcgiList(refVal_setEcgiList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ncgiList"))))
    {
        std::vector<std::shared_ptr<Ncgi>> refVal_setNcgiList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ncgiList"))), refVal_setNcgiList );
        setNcgiList(refVal_setNcgiList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("globalRanNodeIdList"))))
    {
        std::vector<std::shared_ptr<GlobalRanNodeId>> refVal_setGlobalRanNodeIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("globalRanNodeIdList"))), refVal_setGlobalRanNodeIdList );
        setGlobalRanNodeIdList(refVal_setGlobalRanNodeIdList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("globaleNbIdList"))))
    {
        std::vector<std::shared_ptr<GlobalRanNodeId>> refVal_setGlobaleNbIdList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("globaleNbIdList"))), refVal_setGlobaleNbIdList );
        setGlobaleNbIdList(refVal_setGlobaleNbIdList);
    }
    return ok;
}

utility::string_t PresenceInfo::getPraId() const
{
    return m_PraId;
}

void PresenceInfo::setPraId(const utility::string_t& value)
{
    m_PraId = value;
    m_PraIdIsSet = true;
}

bool PresenceInfo::praIdIsSet() const
{
    return m_PraIdIsSet;
}

void PresenceInfo::unsetPraId()
{
    m_PraIdIsSet = false;
}
utility::string_t PresenceInfo::getAdditionalPraId() const
{
    return m_AdditionalPraId;
}

void PresenceInfo::setAdditionalPraId(const utility::string_t& value)
{
    m_AdditionalPraId = value;
    m_AdditionalPraIdIsSet = true;
}

bool PresenceInfo::additionalPraIdIsSet() const
{
    return m_AdditionalPraIdIsSet;
}

void PresenceInfo::unsetAdditionalPraId()
{
    m_AdditionalPraIdIsSet = false;
}
std::shared_ptr<PresenceState> PresenceInfo::getPresenceState() const
{
    return m_PresenceState;
}

void PresenceInfo::setPresenceState(const std::shared_ptr<PresenceState>& value)
{
    m_PresenceState = value;
    m_PresenceStateIsSet = true;
}

bool PresenceInfo::presenceStateIsSet() const
{
    return m_PresenceStateIsSet;
}

void PresenceInfo::unsetPresenceState()
{
    m_PresenceStateIsSet = false;
}
std::vector<std::shared_ptr<Tai>>& PresenceInfo::getTrackingAreaList()
{
    return m_TrackingAreaList;
}

void PresenceInfo::setTrackingAreaList(const std::vector<std::shared_ptr<Tai>>& value)
{
    m_TrackingAreaList = value;
    m_TrackingAreaListIsSet = true;
}

bool PresenceInfo::trackingAreaListIsSet() const
{
    return m_TrackingAreaListIsSet;
}

void PresenceInfo::unsetTrackingAreaList()
{
    m_TrackingAreaListIsSet = false;
}
std::vector<std::shared_ptr<Ecgi>>& PresenceInfo::getEcgiList()
{
    return m_EcgiList;
}

void PresenceInfo::setEcgiList(const std::vector<std::shared_ptr<Ecgi>>& value)
{
    m_EcgiList = value;
    m_EcgiListIsSet = true;
}

bool PresenceInfo::ecgiListIsSet() const
{
    return m_EcgiListIsSet;
}

void PresenceInfo::unsetEcgiList()
{
    m_EcgiListIsSet = false;
}
std::vector<std::shared_ptr<Ncgi>>& PresenceInfo::getNcgiList()
{
    return m_NcgiList;
}

void PresenceInfo::setNcgiList(const std::vector<std::shared_ptr<Ncgi>>& value)
{
    m_NcgiList = value;
    m_NcgiListIsSet = true;
}

bool PresenceInfo::ncgiListIsSet() const
{
    return m_NcgiListIsSet;
}

void PresenceInfo::unsetNcgiList()
{
    m_NcgiListIsSet = false;
}
std::vector<std::shared_ptr<GlobalRanNodeId>>& PresenceInfo::getGlobalRanNodeIdList()
{
    return m_GlobalRanNodeIdList;
}

void PresenceInfo::setGlobalRanNodeIdList(const std::vector<std::shared_ptr<GlobalRanNodeId>>& value)
{
    m_GlobalRanNodeIdList = value;
    m_GlobalRanNodeIdListIsSet = true;
}

bool PresenceInfo::globalRanNodeIdListIsSet() const
{
    return m_GlobalRanNodeIdListIsSet;
}

void PresenceInfo::unsetGlobalRanNodeIdList()
{
    m_GlobalRanNodeIdListIsSet = false;
}
std::vector<std::shared_ptr<GlobalRanNodeId>>& PresenceInfo::getGlobaleNbIdList()
{
    return m_GlobaleNbIdList;
}

void PresenceInfo::setGlobaleNbIdList(const std::vector<std::shared_ptr<GlobalRanNodeId>>& value)
{
    m_GlobaleNbIdList = value;
    m_GlobaleNbIdListIsSet = true;
}

bool PresenceInfo::globaleNbIdListIsSet() const
{
    return m_GlobaleNbIdListIsSet;
}

void PresenceInfo::unsetGlobaleNbIdList()
{
    m_GlobaleNbIdListIsSet = false;
}
}
}
}
}


