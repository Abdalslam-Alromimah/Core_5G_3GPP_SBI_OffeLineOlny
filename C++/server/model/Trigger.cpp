/**
* Nchf_OfflineOnlyCharging
* OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.2.0-alpha.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Trigger.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Trigger::Trigger()
{
    m_TimeLimit = 0;
    m_TimeLimitIsSet = false;
    m_VolumeLimit = 0;
    m_VolumeLimitIsSet = false;
    m_VolumeLimit64 = 0;
    m_VolumeLimit64IsSet = false;
    m_EventLimit = 0;
    m_EventLimitIsSet = false;
    m_MaxNumberOfccc = 0;
    m_MaxNumberOfcccIsSet = false;
    
}

void Trigger::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Trigger::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Trigger::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Trigger" : pathPrefix;

        
    if (!m_TriggerType.validate()) {
        msg << _pathPrefix << ": TriggerType is invalid;";
        success = false;
    }    
    if (!m_TriggerCategory.validate()) {
        msg << _pathPrefix << ": TriggerCategory is invalid;";
        success = false;
    }         
    if (volumeLimitIsSet())
    {
        const int32_t& value = m_VolumeLimit;
        const std::string currentValuePath = _pathPrefix + ".volumeLimit";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 4294967295)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 4294967295;";
        }

    }
         
    if (volumeLimit64IsSet())
    {
        const int32_t& value = m_VolumeLimit64;
        const std::string currentValuePath = _pathPrefix + ".volumeLimit64";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > -1)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to -1;";
        }

    }
         
    if (eventLimitIsSet())
    {
        const int32_t& value = m_EventLimit;
        const std::string currentValuePath = _pathPrefix + ".eventLimit";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 4294967295)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 4294967295;";
        }

    }
         
    if (maxNumberOfcccIsSet())
    {
        const int32_t& value = m_MaxNumberOfccc;
        const std::string currentValuePath = _pathPrefix + ".maxNumberOfccc";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }
        if (value > 4294967295)
        {
            success = false;
            msg << currentValuePath << ": must be less than or equal to 4294967295;";
        }

    }
    
    return success;
}

bool Trigger::operator==(const Trigger& rhs) const
{
    return
    
    
    (getTriggerType() == rhs.getTriggerType())
     &&
    
    (getTriggerCategory() == rhs.getTriggerCategory())
     &&
    
    
    ((!timeLimitIsSet() && !rhs.timeLimitIsSet()) || (timeLimitIsSet() && rhs.timeLimitIsSet() && getTimeLimit() == rhs.getTimeLimit())) &&
    
    
    ((!volumeLimitIsSet() && !rhs.volumeLimitIsSet()) || (volumeLimitIsSet() && rhs.volumeLimitIsSet() && getVolumeLimit() == rhs.getVolumeLimit())) &&
    
    
    ((!volumeLimit64IsSet() && !rhs.volumeLimit64IsSet()) || (volumeLimit64IsSet() && rhs.volumeLimit64IsSet() && getVolumeLimit64() == rhs.getVolumeLimit64())) &&
    
    
    ((!eventLimitIsSet() && !rhs.eventLimitIsSet()) || (eventLimitIsSet() && rhs.eventLimitIsSet() && getEventLimit() == rhs.getEventLimit())) &&
    
    
    ((!maxNumberOfcccIsSet() && !rhs.maxNumberOfcccIsSet()) || (maxNumberOfcccIsSet() && rhs.maxNumberOfcccIsSet() && getMaxNumberOfccc() == rhs.getMaxNumberOfccc()))
    
    ;
}

bool Trigger::operator!=(const Trigger& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Trigger& o)
{
    j = nlohmann::json::object();
    j["triggerType"] = o.m_TriggerType;
    j["triggerCategory"] = o.m_TriggerCategory;
    if(o.timeLimitIsSet())
        j["timeLimit"] = o.m_TimeLimit;
    if(o.volumeLimitIsSet())
        j["volumeLimit"] = o.m_VolumeLimit;
    if(o.volumeLimit64IsSet())
        j["volumeLimit64"] = o.m_VolumeLimit64;
    if(o.eventLimitIsSet())
        j["eventLimit"] = o.m_EventLimit;
    if(o.maxNumberOfcccIsSet())
        j["maxNumberOfccc"] = o.m_MaxNumberOfccc;
    
}

void from_json(const nlohmann::json& j, Trigger& o)
{
    j.at("triggerType").get_to(o.m_TriggerType);
    j.at("triggerCategory").get_to(o.m_TriggerCategory);
    if(j.find("timeLimit") != j.end())
    {
        j.at("timeLimit").get_to(o.m_TimeLimit);
        o.m_TimeLimitIsSet = true;
    } 
    if(j.find("volumeLimit") != j.end())
    {
        j.at("volumeLimit").get_to(o.m_VolumeLimit);
        o.m_VolumeLimitIsSet = true;
    } 
    if(j.find("volumeLimit64") != j.end())
    {
        j.at("volumeLimit64").get_to(o.m_VolumeLimit64);
        o.m_VolumeLimit64IsSet = true;
    } 
    if(j.find("eventLimit") != j.end())
    {
        j.at("eventLimit").get_to(o.m_EventLimit);
        o.m_EventLimitIsSet = true;
    } 
    if(j.find("maxNumberOfccc") != j.end())
    {
        j.at("maxNumberOfccc").get_to(o.m_MaxNumberOfccc);
        o.m_MaxNumberOfcccIsSet = true;
    } 
    
}

org::openapitools::server::model::TriggerType Trigger::getTriggerType() const
{
    return m_TriggerType;
}
void Trigger::setTriggerType(org::openapitools::server::model::TriggerType const& value)
{
    m_TriggerType = value;
}
org::openapitools::server::model::TriggerCategory Trigger::getTriggerCategory() const
{
    return m_TriggerCategory;
}
void Trigger::setTriggerCategory(org::openapitools::server::model::TriggerCategory const& value)
{
    m_TriggerCategory = value;
}
int32_t Trigger::getTimeLimit() const
{
    return m_TimeLimit;
}
void Trigger::setTimeLimit(int32_t const value)
{
    m_TimeLimit = value;
    m_TimeLimitIsSet = true;
}
bool Trigger::timeLimitIsSet() const
{
    return m_TimeLimitIsSet;
}
void Trigger::unsetTimeLimit()
{
    m_TimeLimitIsSet = false;
}
int32_t Trigger::getVolumeLimit() const
{
    return m_VolumeLimit;
}
void Trigger::setVolumeLimit(int32_t const value)
{
    m_VolumeLimit = value;
    m_VolumeLimitIsSet = true;
}
bool Trigger::volumeLimitIsSet() const
{
    return m_VolumeLimitIsSet;
}
void Trigger::unsetVolumeLimit()
{
    m_VolumeLimitIsSet = false;
}
int32_t Trigger::getVolumeLimit64() const
{
    return m_VolumeLimit64;
}
void Trigger::setVolumeLimit64(int32_t const value)
{
    m_VolumeLimit64 = value;
    m_VolumeLimit64IsSet = true;
}
bool Trigger::volumeLimit64IsSet() const
{
    return m_VolumeLimit64IsSet;
}
void Trigger::unsetVolumeLimit64()
{
    m_VolumeLimit64IsSet = false;
}
int32_t Trigger::getEventLimit() const
{
    return m_EventLimit;
}
void Trigger::setEventLimit(int32_t const value)
{
    m_EventLimit = value;
    m_EventLimitIsSet = true;
}
bool Trigger::eventLimitIsSet() const
{
    return m_EventLimitIsSet;
}
void Trigger::unsetEventLimit()
{
    m_EventLimitIsSet = false;
}
int32_t Trigger::getMaxNumberOfccc() const
{
    return m_MaxNumberOfccc;
}
void Trigger::setMaxNumberOfccc(int32_t const value)
{
    m_MaxNumberOfccc = value;
    m_MaxNumberOfcccIsSet = true;
}
bool Trigger::maxNumberOfcccIsSet() const
{
    return m_MaxNumberOfcccIsSet;
}
void Trigger::unsetMaxNumberOfccc()
{
    m_MaxNumberOfcccIsSet = false;
}


} // namespace org::openapitools::server::model

