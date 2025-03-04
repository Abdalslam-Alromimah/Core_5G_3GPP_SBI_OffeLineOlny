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



#include "CppRestOpenAPIClient/model/RANSecondaryRATUsageReport.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RANSecondaryRATUsageReport::RANSecondaryRATUsageReport()
{
    m_RANSecondaryRATTypeIsSet = false;
    m_QosFlowsUsageReportsIsSet = false;
}

RANSecondaryRATUsageReport::~RANSecondaryRATUsageReport()
{
}

void RANSecondaryRATUsageReport::validate()
{
    // TODO: implement validation
}

web::json::value RANSecondaryRATUsageReport::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RANSecondaryRATTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("rANSecondaryRATType"))] = ModelBase::toJson(m_RANSecondaryRATType);
    }
    if(m_QosFlowsUsageReportsIsSet)
    {
        val[utility::conversions::to_string_t(U("qosFlowsUsageReports"))] = ModelBase::toJson(m_QosFlowsUsageReports);
    }

    return val;
}

bool RANSecondaryRATUsageReport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("rANSecondaryRATType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rANSecondaryRATType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RatType> refVal_setRANSecondaryRATType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRANSecondaryRATType);
            setRANSecondaryRATType(refVal_setRANSecondaryRATType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qosFlowsUsageReports"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qosFlowsUsageReports")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<QosFlowsUsageReport>> refVal_setQosFlowsUsageReports;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQosFlowsUsageReports);
            setQosFlowsUsageReports(refVal_setQosFlowsUsageReports);
        }
    }
    return ok;
}

void RANSecondaryRATUsageReport::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RANSecondaryRATTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rANSecondaryRATType")), m_RANSecondaryRATType));
    }
    if(m_QosFlowsUsageReportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qosFlowsUsageReports")), m_QosFlowsUsageReports));
    }
}

bool RANSecondaryRATUsageReport::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("rANSecondaryRATType"))))
    {
        std::shared_ptr<RatType> refVal_setRANSecondaryRATType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rANSecondaryRATType"))), refVal_setRANSecondaryRATType );
        setRANSecondaryRATType(refVal_setRANSecondaryRATType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qosFlowsUsageReports"))))
    {
        std::vector<std::shared_ptr<QosFlowsUsageReport>> refVal_setQosFlowsUsageReports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qosFlowsUsageReports"))), refVal_setQosFlowsUsageReports );
        setQosFlowsUsageReports(refVal_setQosFlowsUsageReports);
    }
    return ok;
}

std::shared_ptr<RatType> RANSecondaryRATUsageReport::getRANSecondaryRATType() const
{
    return m_RANSecondaryRATType;
}

void RANSecondaryRATUsageReport::setRANSecondaryRATType(const std::shared_ptr<RatType>& value)
{
    m_RANSecondaryRATType = value;
    m_RANSecondaryRATTypeIsSet = true;
}

bool RANSecondaryRATUsageReport::rANSecondaryRATTypeIsSet() const
{
    return m_RANSecondaryRATTypeIsSet;
}

void RANSecondaryRATUsageReport::unsetRANSecondaryRATType()
{
    m_RANSecondaryRATTypeIsSet = false;
}
std::vector<std::shared_ptr<QosFlowsUsageReport>>& RANSecondaryRATUsageReport::getQosFlowsUsageReports()
{
    return m_QosFlowsUsageReports;
}

void RANSecondaryRATUsageReport::setQosFlowsUsageReports(const std::vector<std::shared_ptr<QosFlowsUsageReport>>& value)
{
    m_QosFlowsUsageReports = value;
    m_QosFlowsUsageReportsIsSet = true;
}

bool RANSecondaryRATUsageReport::qosFlowsUsageReportsIsSet() const
{
    return m_QosFlowsUsageReportsIsSet;
}

void RANSecondaryRATUsageReport::unsetQosFlowsUsageReports()
{
    m_QosFlowsUsageReportsIsSet = false;
}
}
}
}
}


