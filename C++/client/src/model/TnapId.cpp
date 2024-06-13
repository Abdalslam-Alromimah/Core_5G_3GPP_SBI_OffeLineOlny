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



#include "CppRestOpenAPIClient/model/TnapId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TnapId::TnapId()
{
    m_SsId = utility::conversions::to_string_t("");
    m_SsIdIsSet = false;
    m_BssId = utility::conversions::to_string_t("");
    m_BssIdIsSet = false;
    m_CivicAddressIsSet = false;
}

TnapId::~TnapId()
{
}

void TnapId::validate()
{
    // TODO: implement validation
}

web::json::value TnapId::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SsIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ssId"))] = ModelBase::toJson(m_SsId);
    }
    if(m_BssIdIsSet)
    {
        val[utility::conversions::to_string_t(U("bssId"))] = ModelBase::toJson(m_BssId);
    }
    if(m_CivicAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("civicAddress"))] = ModelBase::toJson(m_CivicAddress);
    }

    return val;
}

bool TnapId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ssId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ssId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSsId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSsId);
            setSsId(refVal_setSsId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("bssId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("bssId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBssId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBssId);
            setBssId(refVal_setBssId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("civicAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("civicAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCivicAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCivicAddress);
            setCivicAddress(refVal_setCivicAddress);
        }
    }
    return ok;
}

void TnapId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SsIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ssId")), m_SsId));
    }
    if(m_BssIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("bssId")), m_BssId));
    }
    if(m_CivicAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("civicAddress")), m_CivicAddress));
    }
}

bool TnapId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ssId"))))
    {
        utility::string_t refVal_setSsId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ssId"))), refVal_setSsId );
        setSsId(refVal_setSsId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("bssId"))))
    {
        utility::string_t refVal_setBssId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("bssId"))), refVal_setBssId );
        setBssId(refVal_setBssId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("civicAddress"))))
    {
        utility::string_t refVal_setCivicAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("civicAddress"))), refVal_setCivicAddress );
        setCivicAddress(refVal_setCivicAddress);
    }
    return ok;
}

utility::string_t TnapId::getSsId() const
{
    return m_SsId;
}

void TnapId::setSsId(const utility::string_t& value)
{
    m_SsId = value;
    m_SsIdIsSet = true;
}

bool TnapId::ssIdIsSet() const
{
    return m_SsIdIsSet;
}

void TnapId::unsetSsId()
{
    m_SsIdIsSet = false;
}
utility::string_t TnapId::getBssId() const
{
    return m_BssId;
}

void TnapId::setBssId(const utility::string_t& value)
{
    m_BssId = value;
    m_BssIdIsSet = true;
}

bool TnapId::bssIdIsSet() const
{
    return m_BssIdIsSet;
}

void TnapId::unsetBssId()
{
    m_BssIdIsSet = false;
}
utility::string_t TnapId::getCivicAddress() const
{
    return m_CivicAddress;
}

void TnapId::setCivicAddress(const utility::string_t& value)
{
    m_CivicAddress = value;
    m_CivicAddressIsSet = true;
}

bool TnapId::civicAddressIsSet() const
{
    return m_CivicAddressIsSet;
}

void TnapId::unsetCivicAddress()
{
    m_CivicAddressIsSet = false;
}
}
}
}
}


