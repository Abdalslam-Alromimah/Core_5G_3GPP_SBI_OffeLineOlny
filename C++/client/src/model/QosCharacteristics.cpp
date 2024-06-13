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



#include "CppRestOpenAPIClient/model/QosCharacteristics.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



QosCharacteristics::QosCharacteristics()
{
    m_r_5qi = 0;
    m_r_5qiIsSet = false;
    m_ResourceTypeIsSet = false;
    m_PriorityLevel = 0;
    m_PriorityLevelIsSet = false;
    m_PacketDelayBudget = 0;
    m_PacketDelayBudgetIsSet = false;
    m_PacketErrorRate = utility::conversions::to_string_t("");
    m_PacketErrorRateIsSet = false;
    m_AveragingWindow = 0;
    m_AveragingWindowIsSet = false;
    m_MaxDataBurstVol = 0;
    m_MaxDataBurstVolIsSet = false;
    m_ExtMaxDataBurstVol = 0;
    m_ExtMaxDataBurstVolIsSet = false;
}

QosCharacteristics::~QosCharacteristics()
{
}

void QosCharacteristics::validate()
{
    // TODO: implement validation
}

web::json::value QosCharacteristics::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_5qiIsSet)
    {
        val[utility::conversions::to_string_t(U("5qi"))] = ModelBase::toJson(m_r_5qi);
    }
    if(m_ResourceTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("resourceType"))] = ModelBase::toJson(m_ResourceType);
    }
    if(m_PriorityLevelIsSet)
    {
        val[utility::conversions::to_string_t(U("priorityLevel"))] = ModelBase::toJson(m_PriorityLevel);
    }
    if(m_PacketDelayBudgetIsSet)
    {
        val[utility::conversions::to_string_t(U("packetDelayBudget"))] = ModelBase::toJson(m_PacketDelayBudget);
    }
    if(m_PacketErrorRateIsSet)
    {
        val[utility::conversions::to_string_t(U("packetErrorRate"))] = ModelBase::toJson(m_PacketErrorRate);
    }
    if(m_AveragingWindowIsSet)
    {
        val[utility::conversions::to_string_t(U("averagingWindow"))] = ModelBase::toJson(m_AveragingWindow);
    }
    if(m_MaxDataBurstVolIsSet)
    {
        val[utility::conversions::to_string_t(U("maxDataBurstVol"))] = ModelBase::toJson(m_MaxDataBurstVol);
    }
    if(m_ExtMaxDataBurstVolIsSet)
    {
        val[utility::conversions::to_string_t(U("extMaxDataBurstVol"))] = ModelBase::toJson(m_ExtMaxDataBurstVol);
    }

    return val;
}

bool QosCharacteristics::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("resourceType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("resourceType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<QosResourceType> refVal_setResourceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setResourceType);
            setResourceType(refVal_setResourceType);
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
    if(val.has_field(utility::conversions::to_string_t(U("packetDelayBudget"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("packetDelayBudget")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPacketDelayBudget;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPacketDelayBudget);
            setPacketDelayBudget(refVal_setPacketDelayBudget);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("packetErrorRate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("packetErrorRate")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPacketErrorRate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPacketErrorRate);
            setPacketErrorRate(refVal_setPacketErrorRate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("averagingWindow"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("averagingWindow")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAveragingWindow;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAveragingWindow);
            setAveragingWindow(refVal_setAveragingWindow);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxDataBurstVol"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxDataBurstVol")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMaxDataBurstVol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxDataBurstVol);
            setMaxDataBurstVol(refVal_setMaxDataBurstVol);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("extMaxDataBurstVol"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("extMaxDataBurstVol")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setExtMaxDataBurstVol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExtMaxDataBurstVol);
            setExtMaxDataBurstVol(refVal_setExtMaxDataBurstVol);
        }
    }
    return ok;
}

void QosCharacteristics::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ResourceTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("resourceType")), m_ResourceType));
    }
    if(m_PriorityLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priorityLevel")), m_PriorityLevel));
    }
    if(m_PacketDelayBudgetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("packetDelayBudget")), m_PacketDelayBudget));
    }
    if(m_PacketErrorRateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("packetErrorRate")), m_PacketErrorRate));
    }
    if(m_AveragingWindowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("averagingWindow")), m_AveragingWindow));
    }
    if(m_MaxDataBurstVolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxDataBurstVol")), m_MaxDataBurstVol));
    }
    if(m_ExtMaxDataBurstVolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("extMaxDataBurstVol")), m_ExtMaxDataBurstVol));
    }
}

bool QosCharacteristics::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("resourceType"))))
    {
        std::shared_ptr<QosResourceType> refVal_setResourceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("resourceType"))), refVal_setResourceType );
        setResourceType(refVal_setResourceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priorityLevel"))))
    {
        int32_t refVal_setPriorityLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priorityLevel"))), refVal_setPriorityLevel );
        setPriorityLevel(refVal_setPriorityLevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("packetDelayBudget"))))
    {
        int32_t refVal_setPacketDelayBudget;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("packetDelayBudget"))), refVal_setPacketDelayBudget );
        setPacketDelayBudget(refVal_setPacketDelayBudget);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("packetErrorRate"))))
    {
        utility::string_t refVal_setPacketErrorRate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("packetErrorRate"))), refVal_setPacketErrorRate );
        setPacketErrorRate(refVal_setPacketErrorRate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("averagingWindow"))))
    {
        int32_t refVal_setAveragingWindow;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("averagingWindow"))), refVal_setAveragingWindow );
        setAveragingWindow(refVal_setAveragingWindow);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxDataBurstVol"))))
    {
        int32_t refVal_setMaxDataBurstVol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxDataBurstVol"))), refVal_setMaxDataBurstVol );
        setMaxDataBurstVol(refVal_setMaxDataBurstVol);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("extMaxDataBurstVol"))))
    {
        int32_t refVal_setExtMaxDataBurstVol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("extMaxDataBurstVol"))), refVal_setExtMaxDataBurstVol );
        setExtMaxDataBurstVol(refVal_setExtMaxDataBurstVol);
    }
    return ok;
}

int32_t QosCharacteristics::getR5qi() const
{
    return m_r_5qi;
}

void QosCharacteristics::setR5qi(int32_t value)
{
    m_r_5qi = value;
    m_r_5qiIsSet = true;
}

bool QosCharacteristics::r5qiIsSet() const
{
    return m_r_5qiIsSet;
}

void QosCharacteristics::unsetr_5qi()
{
    m_r_5qiIsSet = false;
}
std::shared_ptr<QosResourceType> QosCharacteristics::getResourceType() const
{
    return m_ResourceType;
}

void QosCharacteristics::setResourceType(const std::shared_ptr<QosResourceType>& value)
{
    m_ResourceType = value;
    m_ResourceTypeIsSet = true;
}

bool QosCharacteristics::resourceTypeIsSet() const
{
    return m_ResourceTypeIsSet;
}

void QosCharacteristics::unsetResourceType()
{
    m_ResourceTypeIsSet = false;
}
int32_t QosCharacteristics::getPriorityLevel() const
{
    return m_PriorityLevel;
}

void QosCharacteristics::setPriorityLevel(int32_t value)
{
    m_PriorityLevel = value;
    m_PriorityLevelIsSet = true;
}

bool QosCharacteristics::priorityLevelIsSet() const
{
    return m_PriorityLevelIsSet;
}

void QosCharacteristics::unsetPriorityLevel()
{
    m_PriorityLevelIsSet = false;
}
int32_t QosCharacteristics::getPacketDelayBudget() const
{
    return m_PacketDelayBudget;
}

void QosCharacteristics::setPacketDelayBudget(int32_t value)
{
    m_PacketDelayBudget = value;
    m_PacketDelayBudgetIsSet = true;
}

bool QosCharacteristics::packetDelayBudgetIsSet() const
{
    return m_PacketDelayBudgetIsSet;
}

void QosCharacteristics::unsetPacketDelayBudget()
{
    m_PacketDelayBudgetIsSet = false;
}
utility::string_t QosCharacteristics::getPacketErrorRate() const
{
    return m_PacketErrorRate;
}

void QosCharacteristics::setPacketErrorRate(const utility::string_t& value)
{
    m_PacketErrorRate = value;
    m_PacketErrorRateIsSet = true;
}

bool QosCharacteristics::packetErrorRateIsSet() const
{
    return m_PacketErrorRateIsSet;
}

void QosCharacteristics::unsetPacketErrorRate()
{
    m_PacketErrorRateIsSet = false;
}
int32_t QosCharacteristics::getAveragingWindow() const
{
    return m_AveragingWindow;
}

void QosCharacteristics::setAveragingWindow(int32_t value)
{
    m_AveragingWindow = value;
    m_AveragingWindowIsSet = true;
}

bool QosCharacteristics::averagingWindowIsSet() const
{
    return m_AveragingWindowIsSet;
}

void QosCharacteristics::unsetAveragingWindow()
{
    m_AveragingWindowIsSet = false;
}
int32_t QosCharacteristics::getMaxDataBurstVol() const
{
    return m_MaxDataBurstVol;
}

void QosCharacteristics::setMaxDataBurstVol(int32_t value)
{
    m_MaxDataBurstVol = value;
    m_MaxDataBurstVolIsSet = true;
}

bool QosCharacteristics::maxDataBurstVolIsSet() const
{
    return m_MaxDataBurstVolIsSet;
}

void QosCharacteristics::unsetMaxDataBurstVol()
{
    m_MaxDataBurstVolIsSet = false;
}
int32_t QosCharacteristics::getExtMaxDataBurstVol() const
{
    return m_ExtMaxDataBurstVol;
}

void QosCharacteristics::setExtMaxDataBurstVol(int32_t value)
{
    m_ExtMaxDataBurstVol = value;
    m_ExtMaxDataBurstVolIsSet = true;
}

bool QosCharacteristics::extMaxDataBurstVolIsSet() const
{
    return m_ExtMaxDataBurstVolIsSet;
}

void QosCharacteristics::unsetExtMaxDataBurstVol()
{
    m_ExtMaxDataBurstVolIsSet = false;
}
}
}
}
}


