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


#include "SteeringMode.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SteeringMode::SteeringMode()
{
    m_ActiveIsSet = false;
    m_StandbyIsSet = false;
    m_r_3gLoad = 0;
    m_r_3gLoadIsSet = false;
    m_PrioAccIsSet = false;
    m_ThresValueIsSet = false;
    m_SteerModeIndIsSet = false;
    m_PrimaryIsSet = false;
    
}

void SteeringMode::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SteeringMode::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SteeringMode::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SteeringMode" : pathPrefix;

        
    if (!m_SteerModeValue.validate()) {
        msg << _pathPrefix << ": SteerModeValue is invalid;";
        success = false;
    }             
    if (r3gLoadIsSet())
    {
        const int32_t& value = m_r_3gLoad;
        const std::string currentValuePath = _pathPrefix + ".r3gLoad";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }

    }
                    
    return success;
}

bool SteeringMode::operator==(const SteeringMode& rhs) const
{
    return
    
    
    (getSteerModeValue() == rhs.getSteerModeValue())
     &&
    
    
    ((!activeIsSet() && !rhs.activeIsSet()) || (activeIsSet() && rhs.activeIsSet() && getActive() == rhs.getActive())) &&
    
    
    ((!standbyIsSet() && !rhs.standbyIsSet()) || (standbyIsSet() && rhs.standbyIsSet() && getStandby() == rhs.getStandby())) &&
    
    
    ((!r3gLoadIsSet() && !rhs.r3gLoadIsSet()) || (r3gLoadIsSet() && rhs.r3gLoadIsSet() && getR3gLoad() == rhs.getR3gLoad())) &&
    
    
    ((!prioAccIsSet() && !rhs.prioAccIsSet()) || (prioAccIsSet() && rhs.prioAccIsSet() && getPrioAcc() == rhs.getPrioAcc())) &&
    
    
    ((!thresValueIsSet() && !rhs.thresValueIsSet()) || (thresValueIsSet() && rhs.thresValueIsSet() && getThresValue() == rhs.getThresValue())) &&
    
    
    ((!steerModeIndIsSet() && !rhs.steerModeIndIsSet()) || (steerModeIndIsSet() && rhs.steerModeIndIsSet() && getSteerModeInd() == rhs.getSteerModeInd())) &&
    
    
    ((!primaryIsSet() && !rhs.primaryIsSet()) || (primaryIsSet() && rhs.primaryIsSet() && getPrimary() == rhs.getPrimary()))
    
    ;
}

bool SteeringMode::operator!=(const SteeringMode& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SteeringMode& o)
{
    j = nlohmann::json::object();
    j["steerModeValue"] = o.m_SteerModeValue;
    if(o.activeIsSet())
        j["active"] = o.m_Active;
    if(o.standbyIsSet())
        j["standby"] = o.m_Standby;
    if(o.r3gLoadIsSet())
        j["3gLoad"] = o.m_r_3gLoad;
    if(o.prioAccIsSet())
        j["prioAcc"] = o.m_PrioAcc;
    if(o.thresValueIsSet())
        j["thresValue"] = o.m_ThresValue;
    if(o.steerModeIndIsSet())
        j["steerModeInd"] = o.m_SteerModeInd;
    if(o.primaryIsSet())
        j["primary"] = o.m_Primary;
    
}

void from_json(const nlohmann::json& j, SteeringMode& o)
{
    j.at("steerModeValue").get_to(o.m_SteerModeValue);
    if(j.find("active") != j.end())
    {
        j.at("active").get_to(o.m_Active);
        o.m_ActiveIsSet = true;
    } 
    if(j.find("standby") != j.end())
    {
        j.at("standby").get_to(o.m_Standby);
        o.m_StandbyIsSet = true;
    } 
    if(j.find("3gLoad") != j.end())
    {
        j.at("3gLoad").get_to(o.m_r_3gLoad);
        o.m_r_3gLoadIsSet = true;
    } 
    if(j.find("prioAcc") != j.end())
    {
        j.at("prioAcc").get_to(o.m_PrioAcc);
        o.m_PrioAccIsSet = true;
    } 
    if(j.find("thresValue") != j.end())
    {
        j.at("thresValue").get_to(o.m_ThresValue);
        o.m_ThresValueIsSet = true;
    } 
    if(j.find("steerModeInd") != j.end())
    {
        j.at("steerModeInd").get_to(o.m_SteerModeInd);
        o.m_SteerModeIndIsSet = true;
    } 
    if(j.find("primary") != j.end())
    {
        j.at("primary").get_to(o.m_Primary);
        o.m_PrimaryIsSet = true;
    } 
    
}

org::openapitools::server::model::SteerModeValue SteeringMode::getSteerModeValue() const
{
    return m_SteerModeValue;
}
void SteeringMode::setSteerModeValue(org::openapitools::server::model::SteerModeValue const& value)
{
    m_SteerModeValue = value;
}
org::openapitools::server::model::AccessType SteeringMode::getActive() const
{
    return m_Active;
}
void SteeringMode::setActive(org::openapitools::server::model::AccessType const& value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool SteeringMode::activeIsSet() const
{
    return m_ActiveIsSet;
}
void SteeringMode::unsetActive()
{
    m_ActiveIsSet = false;
}
org::openapitools::server::model::AccessTypeRm SteeringMode::getStandby() const
{
    return m_Standby;
}
void SteeringMode::setStandby(org::openapitools::server::model::AccessTypeRm const& value)
{
    m_Standby = value;
    m_StandbyIsSet = true;
}
bool SteeringMode::standbyIsSet() const
{
    return m_StandbyIsSet;
}
void SteeringMode::unsetStandby()
{
    m_StandbyIsSet = false;
}
int32_t SteeringMode::getR3gLoad() const
{
    return m_r_3gLoad;
}
void SteeringMode::setR3gLoad(int32_t const value)
{
    m_r_3gLoad = value;
    m_r_3gLoadIsSet = true;
}
bool SteeringMode::r3gLoadIsSet() const
{
    return m_r_3gLoadIsSet;
}
void SteeringMode::unsetr_3gLoad()
{
    m_r_3gLoadIsSet = false;
}
org::openapitools::server::model::AccessType SteeringMode::getPrioAcc() const
{
    return m_PrioAcc;
}
void SteeringMode::setPrioAcc(org::openapitools::server::model::AccessType const& value)
{
    m_PrioAcc = value;
    m_PrioAccIsSet = true;
}
bool SteeringMode::prioAccIsSet() const
{
    return m_PrioAccIsSet;
}
void SteeringMode::unsetPrioAcc()
{
    m_PrioAccIsSet = false;
}
org::openapitools::server::model::ThresholdValue SteeringMode::getThresValue() const
{
    return m_ThresValue;
}
void SteeringMode::setThresValue(org::openapitools::server::model::ThresholdValue const& value)
{
    m_ThresValue = value;
    m_ThresValueIsSet = true;
}
bool SteeringMode::thresValueIsSet() const
{
    return m_ThresValueIsSet;
}
void SteeringMode::unsetThresValue()
{
    m_ThresValueIsSet = false;
}
org::openapitools::server::model::SteerModeIndicator SteeringMode::getSteerModeInd() const
{
    return m_SteerModeInd;
}
void SteeringMode::setSteerModeInd(org::openapitools::server::model::SteerModeIndicator const& value)
{
    m_SteerModeInd = value;
    m_SteerModeIndIsSet = true;
}
bool SteeringMode::steerModeIndIsSet() const
{
    return m_SteerModeIndIsSet;
}
void SteeringMode::unsetSteerModeInd()
{
    m_SteerModeIndIsSet = false;
}
org::openapitools::server::model::AccessTypeRm SteeringMode::getPrimary() const
{
    return m_Primary;
}
void SteeringMode::setPrimary(org::openapitools::server::model::AccessTypeRm const& value)
{
    m_Primary = value;
    m_PrimaryIsSet = true;
}
bool SteeringMode::primaryIsSet() const
{
    return m_PrimaryIsSet;
}
void SteeringMode::unsetPrimary()
{
    m_PrimaryIsSet = false;
}


} // namespace org::openapitools::server::model

