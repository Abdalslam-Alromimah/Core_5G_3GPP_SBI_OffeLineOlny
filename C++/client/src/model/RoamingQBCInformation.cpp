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



#include "CppRestOpenAPIClient/model/RoamingQBCInformation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RoamingQBCInformation::RoamingQBCInformation()
{
    m_MultipleQFIcontainerIsSet = false;
    m_UPFID = utility::conversions::to_string_t("");
    m_UPFIDIsSet = false;
    m_RoamingChargingProfileIsSet = false;
}

RoamingQBCInformation::~RoamingQBCInformation()
{
}

void RoamingQBCInformation::validate()
{
    // TODO: implement validation
}

web::json::value RoamingQBCInformation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MultipleQFIcontainerIsSet)
    {
        val[utility::conversions::to_string_t(U("multipleQFIcontainer"))] = ModelBase::toJson(m_MultipleQFIcontainer);
    }
    if(m_UPFIDIsSet)
    {
        val[utility::conversions::to_string_t(U("uPFID"))] = ModelBase::toJson(m_UPFID);
    }
    if(m_RoamingChargingProfileIsSet)
    {
        val[utility::conversions::to_string_t(U("roamingChargingProfile"))] = ModelBase::toJson(m_RoamingChargingProfile);
    }

    return val;
}

bool RoamingQBCInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("multipleQFIcontainer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("multipleQFIcontainer")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<MultipleQFIcontainer>> refVal_setMultipleQFIcontainer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMultipleQFIcontainer);
            setMultipleQFIcontainer(refVal_setMultipleQFIcontainer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("uPFID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("uPFID")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUPFID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUPFID);
            setUPFID(refVal_setUPFID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("roamingChargingProfile"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("roamingChargingProfile")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RoamingChargingProfile> refVal_setRoamingChargingProfile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRoamingChargingProfile);
            setRoamingChargingProfile(refVal_setRoamingChargingProfile);
        }
    }
    return ok;
}

void RoamingQBCInformation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MultipleQFIcontainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("multipleQFIcontainer")), m_MultipleQFIcontainer));
    }
    if(m_UPFIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uPFID")), m_UPFID));
    }
    if(m_RoamingChargingProfileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("roamingChargingProfile")), m_RoamingChargingProfile));
    }
}

bool RoamingQBCInformation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("multipleQFIcontainer"))))
    {
        std::vector<std::shared_ptr<MultipleQFIcontainer>> refVal_setMultipleQFIcontainer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("multipleQFIcontainer"))), refVal_setMultipleQFIcontainer );
        setMultipleQFIcontainer(refVal_setMultipleQFIcontainer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("uPFID"))))
    {
        utility::string_t refVal_setUPFID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uPFID"))), refVal_setUPFID );
        setUPFID(refVal_setUPFID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("roamingChargingProfile"))))
    {
        std::shared_ptr<RoamingChargingProfile> refVal_setRoamingChargingProfile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("roamingChargingProfile"))), refVal_setRoamingChargingProfile );
        setRoamingChargingProfile(refVal_setRoamingChargingProfile);
    }
    return ok;
}

std::vector<std::shared_ptr<MultipleQFIcontainer>>& RoamingQBCInformation::getMultipleQFIcontainer()
{
    return m_MultipleQFIcontainer;
}

void RoamingQBCInformation::setMultipleQFIcontainer(const std::vector<std::shared_ptr<MultipleQFIcontainer>>& value)
{
    m_MultipleQFIcontainer = value;
    m_MultipleQFIcontainerIsSet = true;
}

bool RoamingQBCInformation::multipleQFIcontainerIsSet() const
{
    return m_MultipleQFIcontainerIsSet;
}

void RoamingQBCInformation::unsetMultipleQFIcontainer()
{
    m_MultipleQFIcontainerIsSet = false;
}
utility::string_t RoamingQBCInformation::getUPFID() const
{
    return m_UPFID;
}

void RoamingQBCInformation::setUPFID(const utility::string_t& value)
{
    m_UPFID = value;
    m_UPFIDIsSet = true;
}

bool RoamingQBCInformation::uPFIDIsSet() const
{
    return m_UPFIDIsSet;
}

void RoamingQBCInformation::unsetUPFID()
{
    m_UPFIDIsSet = false;
}
std::shared_ptr<RoamingChargingProfile> RoamingQBCInformation::getRoamingChargingProfile() const
{
    return m_RoamingChargingProfile;
}

void RoamingQBCInformation::setRoamingChargingProfile(const std::shared_ptr<RoamingChargingProfile>& value)
{
    m_RoamingChargingProfile = value;
    m_RoamingChargingProfileIsSet = true;
}

bool RoamingQBCInformation::roamingChargingProfileIsSet() const
{
    return m_RoamingChargingProfileIsSet;
}

void RoamingQBCInformation::unsetRoamingChargingProfile()
{
    m_RoamingChargingProfileIsSet = false;
}
}
}
}
}


