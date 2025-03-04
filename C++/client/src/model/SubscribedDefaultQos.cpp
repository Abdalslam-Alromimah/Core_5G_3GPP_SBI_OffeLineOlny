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



#include "CppRestOpenAPIClient/model/SubscribedDefaultQos.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



SubscribedDefaultQos::SubscribedDefaultQos()
{
    m_r_5qi = 0;
    m_r_5qiIsSet = false;
    m_ArpIsSet = false;
    m_PriorityLevel = 0;
    m_PriorityLevelIsSet = false;
}

SubscribedDefaultQos::~SubscribedDefaultQos()
{
}

void SubscribedDefaultQos::validate()
{
    // TODO: implement validation
}

web::json::value SubscribedDefaultQos::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_5qiIsSet)
    {
        val[utility::conversions::to_string_t(U("5qi"))] = ModelBase::toJson(m_r_5qi);
    }
    if(m_ArpIsSet)
    {
        val[utility::conversions::to_string_t(U("arp"))] = ModelBase::toJson(m_Arp);
    }
    if(m_PriorityLevelIsSet)
    {
        val[utility::conversions::to_string_t(U("priorityLevel"))] = ModelBase::toJson(m_PriorityLevel);
    }

    return val;
}

bool SubscribedDefaultQos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("5qi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("5qi")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setR5qi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setR5qi);
            setR5qi(refVal_setR5qi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("arp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("arp")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Arp> refVal_setArp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArp);
            setArp(refVal_setArp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("priorityLevel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priorityLevel")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPriorityLevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriorityLevel);
            setPriorityLevel(refVal_setPriorityLevel);
        }
    }
    return ok;
}

void SubscribedDefaultQos::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_r_5qiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("5qi")), m_r_5qi));
    }
    if(m_ArpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("arp")), m_Arp));
    }
    if(m_PriorityLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priorityLevel")), m_PriorityLevel));
    }
}

bool SubscribedDefaultQos::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("5qi"))))
    {
        int32_t refVal_setR5qi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("5qi"))), refVal_setR5qi );
        setR5qi(refVal_setR5qi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("arp"))))
    {
        std::shared_ptr<Arp> refVal_setArp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("arp"))), refVal_setArp );
        setArp(refVal_setArp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priorityLevel"))))
    {
        int32_t refVal_setPriorityLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priorityLevel"))), refVal_setPriorityLevel );
        setPriorityLevel(refVal_setPriorityLevel);
    }
    return ok;
}

int32_t SubscribedDefaultQos::getR5qi() const
{
    return m_r_5qi;
}

void SubscribedDefaultQos::setR5qi(int32_t value)
{
    m_r_5qi = value;
    m_r_5qiIsSet = true;
}

bool SubscribedDefaultQos::r5qiIsSet() const
{
    return m_r_5qiIsSet;
}

void SubscribedDefaultQos::unsetr_5qi()
{
    m_r_5qiIsSet = false;
}
std::shared_ptr<Arp> SubscribedDefaultQos::getArp() const
{
    return m_Arp;
}

void SubscribedDefaultQos::setArp(const std::shared_ptr<Arp>& value)
{
    m_Arp = value;
    m_ArpIsSet = true;
}

bool SubscribedDefaultQos::arpIsSet() const
{
    return m_ArpIsSet;
}

void SubscribedDefaultQos::unsetArp()
{
    m_ArpIsSet = false;
}
int32_t SubscribedDefaultQos::getPriorityLevel() const
{
    return m_PriorityLevel;
}

void SubscribedDefaultQos::setPriorityLevel(int32_t value)
{
    m_PriorityLevel = value;
    m_PriorityLevelIsSet = true;
}

bool SubscribedDefaultQos::priorityLevelIsSet() const
{
    return m_PriorityLevelIsSet;
}

void SubscribedDefaultQos::unsetPriorityLevel()
{
    m_PriorityLevelIsSet = false;
}
}
}
}
}


