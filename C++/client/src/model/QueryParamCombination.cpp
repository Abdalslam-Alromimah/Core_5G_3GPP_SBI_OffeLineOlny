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



#include "CppRestOpenAPIClient/model/QueryParamCombination.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



QueryParamCombination::QueryParamCombination()
{
    m_QueryParamsIsSet = false;
}

QueryParamCombination::~QueryParamCombination()
{
}

void QueryParamCombination::validate()
{
    // TODO: implement validation
}

web::json::value QueryParamCombination::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_QueryParamsIsSet)
    {
        val[utility::conversions::to_string_t(U("queryParams"))] = ModelBase::toJson(m_QueryParams);
    }

    return val;
}

bool QueryParamCombination::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("queryParams"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("queryParams")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<QueryParameter>> refVal_setQueryParams;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQueryParams);
            setQueryParams(refVal_setQueryParams);
        }
    }
    return ok;
}

void QueryParamCombination::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_QueryParamsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("queryParams")), m_QueryParams));
    }
}

bool QueryParamCombination::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("queryParams"))))
    {
        std::vector<std::shared_ptr<QueryParameter>> refVal_setQueryParams;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("queryParams"))), refVal_setQueryParams );
        setQueryParams(refVal_setQueryParams);
    }
    return ok;
}

std::vector<std::shared_ptr<QueryParameter>>& QueryParamCombination::getQueryParams()
{
    return m_QueryParams;
}

void QueryParamCombination::setQueryParams(const std::vector<std::shared_ptr<QueryParameter>>& value)
{
    m_QueryParams = value;
    m_QueryParamsIsSet = true;
}

bool QueryParamCombination::queryParamsIsSet() const
{
    return m_QueryParamsIsSet;
}

void QueryParamCombination::unsetQueryParams()
{
    m_QueryParamsIsSet = false;
}
}
}
}
}


