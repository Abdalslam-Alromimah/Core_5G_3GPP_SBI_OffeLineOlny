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



#include "CppRestOpenAPIClient/model/InvocationResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



InvocationResult::InvocationResult()
{
    m_ErrorIsSet = false;
    m_FailureHandlingIsSet = false;
}

InvocationResult::~InvocationResult()
{
}

void InvocationResult::validate()
{
    // TODO: implement validation
}

web::json::value InvocationResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t(U("error"))] = ModelBase::toJson(m_Error);
    }
    if(m_FailureHandlingIsSet)
    {
        val[utility::conversions::to_string_t(U("failureHandling"))] = ModelBase::toJson(m_FailureHandling);
    }

    return val;
}

bool InvocationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("error")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProblemDetails> refVal_setError;
            ok &= ModelBase::fromJson(fieldValue, refVal_setError);
            setError(refVal_setError);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("failureHandling"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("failureHandling")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FailureHandling> refVal_setFailureHandling;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFailureHandling);
            setFailureHandling(refVal_setFailureHandling);
        }
    }
    return ok;
}

void InvocationResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("error")), m_Error));
    }
    if(m_FailureHandlingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("failureHandling")), m_FailureHandling));
    }
}

bool InvocationResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("error"))))
    {
        std::shared_ptr<ProblemDetails> refVal_setError;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("error"))), refVal_setError );
        setError(refVal_setError);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("failureHandling"))))
    {
        std::shared_ptr<FailureHandling> refVal_setFailureHandling;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("failureHandling"))), refVal_setFailureHandling );
        setFailureHandling(refVal_setFailureHandling);
    }
    return ok;
}

std::shared_ptr<ProblemDetails> InvocationResult::getError() const
{
    return m_Error;
}

void InvocationResult::setError(const std::shared_ptr<ProblemDetails>& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool InvocationResult::errorIsSet() const
{
    return m_ErrorIsSet;
}

void InvocationResult::unsetError()
{
    m_ErrorIsSet = false;
}
std::shared_ptr<FailureHandling> InvocationResult::getFailureHandling() const
{
    return m_FailureHandling;
}

void InvocationResult::setFailureHandling(const std::shared_ptr<FailureHandling>& value)
{
    m_FailureHandling = value;
    m_FailureHandlingIsSet = true;
}

bool InvocationResult::failureHandlingIsSet() const
{
    return m_FailureHandlingIsSet;
}

void InvocationResult::unsetFailureHandling()
{
    m_FailureHandlingIsSet = false;
}
}
}
}
}


