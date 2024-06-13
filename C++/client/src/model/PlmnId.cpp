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



#include "CppRestOpenAPIClient/model/PlmnId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PlmnId::PlmnId()
{
    m_Mcc = utility::conversions::to_string_t("");
    m_MccIsSet = false;
    m_Mnc = utility::conversions::to_string_t("");
    m_MncIsSet = false;
}

PlmnId::~PlmnId()
{
}

void PlmnId::validate()
{
    // TODO: implement validation
}

web::json::value PlmnId::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MccIsSet)
    {
        val[utility::conversions::to_string_t(U("mcc"))] = ModelBase::toJson(m_Mcc);
    }
    if(m_MncIsSet)
    {
        val[utility::conversions::to_string_t(U("mnc"))] = ModelBase::toJson(m_Mnc);
    }

    return val;
}

bool PlmnId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("mcc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mcc")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMcc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMcc);
            setMcc(refVal_setMcc);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mnc"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mnc")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMnc;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMnc);
            setMnc(refVal_setMnc);
        }
    }
    return ok;
}

void PlmnId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mcc")), m_Mcc));
    }
    if(m_MncIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mnc")), m_Mnc));
    }
}

bool PlmnId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("mcc"))))
    {
        utility::string_t refVal_setMcc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mcc"))), refVal_setMcc );
        setMcc(refVal_setMcc);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mnc"))))
    {
        utility::string_t refVal_setMnc;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mnc"))), refVal_setMnc );
        setMnc(refVal_setMnc);
    }
    return ok;
}

utility::string_t PlmnId::getMcc() const
{
    return m_Mcc;
}

void PlmnId::setMcc(const utility::string_t& value)
{
    m_Mcc = value;
    m_MccIsSet = true;
}

bool PlmnId::mccIsSet() const
{
    return m_MccIsSet;
}

void PlmnId::unsetMcc()
{
    m_MccIsSet = false;
}
utility::string_t PlmnId::getMnc() const
{
    return m_Mnc;
}

void PlmnId::setMnc(const utility::string_t& value)
{
    m_Mnc = value;
    m_MncIsSet = true;
}

bool PlmnId::mncIsSet() const
{
    return m_MncIsSet;
}

void PlmnId::unsetMnc()
{
    m_MncIsSet = false;
}
}
}
}
}


