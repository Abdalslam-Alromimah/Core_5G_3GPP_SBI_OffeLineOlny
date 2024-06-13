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



#include "CppRestOpenAPIClient/model/InvalidParam.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



InvalidParam::InvalidParam()
{
    m_Param = utility::conversions::to_string_t("");
    m_ParamIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
}

InvalidParam::~InvalidParam()
{
}

void InvalidParam::validate()
{
    // TODO: implement validation
}

web::json::value InvalidParam::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ParamIsSet)
    {
        val[utility::conversions::to_string_t(U("param"))] = ModelBase::toJson(m_Param);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t(U("reason"))] = ModelBase::toJson(m_Reason);
    }

    return val;
}

bool InvalidParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("param"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("param")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParam;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParam);
            setParam(refVal_setParam);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reason"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reason")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReason;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReason);
            setReason(refVal_setReason);
        }
    }
    return ok;
}

void InvalidParam::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ParamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("param")), m_Param));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason")), m_Reason));
    }
}

bool InvalidParam::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("param"))))
    {
        utility::string_t refVal_setParam;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("param"))), refVal_setParam );
        setParam(refVal_setParam);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reason"))))
    {
        utility::string_t refVal_setReason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason"))), refVal_setReason );
        setReason(refVal_setReason);
    }
    return ok;
}

utility::string_t InvalidParam::getParam() const
{
    return m_Param;
}

void InvalidParam::setParam(const utility::string_t& value)
{
    m_Param = value;
    m_ParamIsSet = true;
}

bool InvalidParam::paramIsSet() const
{
    return m_ParamIsSet;
}

void InvalidParam::unsetParam()
{
    m_ParamIsSet = false;
}
utility::string_t InvalidParam::getReason() const
{
    return m_Reason;
}

void InvalidParam::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool InvalidParam::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void InvalidParam::unsetReason()
{
    m_ReasonIsSet = false;
}
}
}
}
}


