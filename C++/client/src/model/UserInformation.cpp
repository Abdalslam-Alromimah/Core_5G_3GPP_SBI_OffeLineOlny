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



#include "CppRestOpenAPIClient/model/UserInformation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



UserInformation::UserInformation()
{
    m_ServedGPSI = utility::conversions::to_string_t("");
    m_ServedGPSIIsSet = false;
    m_ServedPEI = utility::conversions::to_string_t("");
    m_ServedPEIIsSet = false;
    m_UnauthenticatedFlag = false;
    m_UnauthenticatedFlagIsSet = false;
    m_RoamerInOutIsSet = false;
}

UserInformation::~UserInformation()
{
}

void UserInformation::validate()
{
    // TODO: implement validation
}

web::json::value UserInformation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ServedGPSIIsSet)
    {
        val[utility::conversions::to_string_t(U("servedGPSI"))] = ModelBase::toJson(m_ServedGPSI);
    }
    if(m_ServedPEIIsSet)
    {
        val[utility::conversions::to_string_t(U("servedPEI"))] = ModelBase::toJson(m_ServedPEI);
    }
    if(m_UnauthenticatedFlagIsSet)
    {
        val[utility::conversions::to_string_t(U("unauthenticatedFlag"))] = ModelBase::toJson(m_UnauthenticatedFlag);
    }
    if(m_RoamerInOutIsSet)
    {
        val[utility::conversions::to_string_t(U("roamerInOut"))] = ModelBase::toJson(m_RoamerInOut);
    }

    return val;
}

bool UserInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("servedGPSI"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("servedGPSI")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setServedGPSI;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServedGPSI);
            setServedGPSI(refVal_setServedGPSI);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("servedPEI"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("servedPEI")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setServedPEI;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServedPEI);
            setServedPEI(refVal_setServedPEI);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unauthenticatedFlag"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unauthenticatedFlag")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUnauthenticatedFlag;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnauthenticatedFlag);
            setUnauthenticatedFlag(refVal_setUnauthenticatedFlag);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("roamerInOut"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("roamerInOut")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RoamerInOut> refVal_setRoamerInOut;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRoamerInOut);
            setRoamerInOut(refVal_setRoamerInOut);
        }
    }
    return ok;
}

void UserInformation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ServedGPSIIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("servedGPSI")), m_ServedGPSI));
    }
    if(m_ServedPEIIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("servedPEI")), m_ServedPEI));
    }
    if(m_UnauthenticatedFlagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unauthenticatedFlag")), m_UnauthenticatedFlag));
    }
    if(m_RoamerInOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("roamerInOut")), m_RoamerInOut));
    }
}

bool UserInformation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("servedGPSI"))))
    {
        utility::string_t refVal_setServedGPSI;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("servedGPSI"))), refVal_setServedGPSI );
        setServedGPSI(refVal_setServedGPSI);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("servedPEI"))))
    {
        utility::string_t refVal_setServedPEI;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("servedPEI"))), refVal_setServedPEI );
        setServedPEI(refVal_setServedPEI);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unauthenticatedFlag"))))
    {
        bool refVal_setUnauthenticatedFlag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unauthenticatedFlag"))), refVal_setUnauthenticatedFlag );
        setUnauthenticatedFlag(refVal_setUnauthenticatedFlag);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("roamerInOut"))))
    {
        std::shared_ptr<RoamerInOut> refVal_setRoamerInOut;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("roamerInOut"))), refVal_setRoamerInOut );
        setRoamerInOut(refVal_setRoamerInOut);
    }
    return ok;
}

utility::string_t UserInformation::getServedGPSI() const
{
    return m_ServedGPSI;
}

void UserInformation::setServedGPSI(const utility::string_t& value)
{
    m_ServedGPSI = value;
    m_ServedGPSIIsSet = true;
}

bool UserInformation::servedGPSIIsSet() const
{
    return m_ServedGPSIIsSet;
}

void UserInformation::unsetServedGPSI()
{
    m_ServedGPSIIsSet = false;
}
utility::string_t UserInformation::getServedPEI() const
{
    return m_ServedPEI;
}

void UserInformation::setServedPEI(const utility::string_t& value)
{
    m_ServedPEI = value;
    m_ServedPEIIsSet = true;
}

bool UserInformation::servedPEIIsSet() const
{
    return m_ServedPEIIsSet;
}

void UserInformation::unsetServedPEI()
{
    m_ServedPEIIsSet = false;
}
bool UserInformation::isUnauthenticatedFlag() const
{
    return m_UnauthenticatedFlag;
}

void UserInformation::setUnauthenticatedFlag(bool value)
{
    m_UnauthenticatedFlag = value;
    m_UnauthenticatedFlagIsSet = true;
}

bool UserInformation::unauthenticatedFlagIsSet() const
{
    return m_UnauthenticatedFlagIsSet;
}

void UserInformation::unsetUnauthenticatedFlag()
{
    m_UnauthenticatedFlagIsSet = false;
}
std::shared_ptr<RoamerInOut> UserInformation::getRoamerInOut() const
{
    return m_RoamerInOut;
}

void UserInformation::setRoamerInOut(const std::shared_ptr<RoamerInOut>& value)
{
    m_RoamerInOut = value;
    m_RoamerInOutIsSet = true;
}

bool UserInformation::roamerInOutIsSet() const
{
    return m_RoamerInOutIsSet;
}

void UserInformation::unsetRoamerInOut()
{
    m_RoamerInOutIsSet = false;
}
}
}
}
}


