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



#include "CppRestOpenAPIClient/model/PduSetQosParaRm.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PduSetQosParaRm::PduSetQosParaRm()
{
    m_PduSetDelayBudget = 0;
    m_PduSetDelayBudgetIsSet = false;
    m_PduSetErrRate = utility::conversions::to_string_t("");
    m_PduSetErrRateIsSet = false;
    m_PduSetHandlingInfoIsSet = false;
}

PduSetQosParaRm::~PduSetQosParaRm()
{
}

void PduSetQosParaRm::validate()
{
    // TODO: implement validation
}

web::json::value PduSetQosParaRm::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PduSetDelayBudgetIsSet)
    {
        val[utility::conversions::to_string_t(U("pduSetDelayBudget"))] = ModelBase::toJson(m_PduSetDelayBudget);
    }
    if(m_PduSetErrRateIsSet)
    {
        val[utility::conversions::to_string_t(U("pduSetErrRate"))] = ModelBase::toJson(m_PduSetErrRate);
    }
    if(m_PduSetHandlingInfoIsSet)
    {
        val[utility::conversions::to_string_t(U("pduSetHandlingInfo"))] = ModelBase::toJson(m_PduSetHandlingInfo);
    }

    return val;
}

bool PduSetQosParaRm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("pduSetDelayBudget"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pduSetDelayBudget")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPduSetDelayBudget;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPduSetDelayBudget);
            setPduSetDelayBudget(refVal_setPduSetDelayBudget);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pduSetErrRate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pduSetErrRate")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPduSetErrRate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPduSetErrRate);
            setPduSetErrRate(refVal_setPduSetErrRate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pduSetHandlingInfo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pduSetHandlingInfo")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PduSetHandlingInfo> refVal_setPduSetHandlingInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPduSetHandlingInfo);
            setPduSetHandlingInfo(refVal_setPduSetHandlingInfo);
        }
    }
    return ok;
}

void PduSetQosParaRm::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PduSetDelayBudgetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pduSetDelayBudget")), m_PduSetDelayBudget));
    }
    if(m_PduSetErrRateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pduSetErrRate")), m_PduSetErrRate));
    }
    if(m_PduSetHandlingInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pduSetHandlingInfo")), m_PduSetHandlingInfo));
    }
}

bool PduSetQosParaRm::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("pduSetDelayBudget"))))
    {
        int32_t refVal_setPduSetDelayBudget;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pduSetDelayBudget"))), refVal_setPduSetDelayBudget );
        setPduSetDelayBudget(refVal_setPduSetDelayBudget);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pduSetErrRate"))))
    {
        utility::string_t refVal_setPduSetErrRate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pduSetErrRate"))), refVal_setPduSetErrRate );
        setPduSetErrRate(refVal_setPduSetErrRate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pduSetHandlingInfo"))))
    {
        std::shared_ptr<PduSetHandlingInfo> refVal_setPduSetHandlingInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pduSetHandlingInfo"))), refVal_setPduSetHandlingInfo );
        setPduSetHandlingInfo(refVal_setPduSetHandlingInfo);
    }
    return ok;
}

int32_t PduSetQosParaRm::getPduSetDelayBudget() const
{
    return m_PduSetDelayBudget;
}

void PduSetQosParaRm::setPduSetDelayBudget(int32_t value)
{
    m_PduSetDelayBudget = value;
    m_PduSetDelayBudgetIsSet = true;
}

bool PduSetQosParaRm::pduSetDelayBudgetIsSet() const
{
    return m_PduSetDelayBudgetIsSet;
}

void PduSetQosParaRm::unsetPduSetDelayBudget()
{
    m_PduSetDelayBudgetIsSet = false;
}
utility::string_t PduSetQosParaRm::getPduSetErrRate() const
{
    return m_PduSetErrRate;
}

void PduSetQosParaRm::setPduSetErrRate(const utility::string_t& value)
{
    m_PduSetErrRate = value;
    m_PduSetErrRateIsSet = true;
}

bool PduSetQosParaRm::pduSetErrRateIsSet() const
{
    return m_PduSetErrRateIsSet;
}

void PduSetQosParaRm::unsetPduSetErrRate()
{
    m_PduSetErrRateIsSet = false;
}
std::shared_ptr<PduSetHandlingInfo> PduSetQosParaRm::getPduSetHandlingInfo() const
{
    return m_PduSetHandlingInfo;
}

void PduSetQosParaRm::setPduSetHandlingInfo(const std::shared_ptr<PduSetHandlingInfo>& value)
{
    m_PduSetHandlingInfo = value;
    m_PduSetHandlingInfoIsSet = true;
}

bool PduSetQosParaRm::pduSetHandlingInfoIsSet() const
{
    return m_PduSetHandlingInfoIsSet;
}

void PduSetQosParaRm::unsetPduSetHandlingInfo()
{
    m_PduSetHandlingInfoIsSet = false;
}
}
}
}
}


