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


#include "UserLocation.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

UserLocation::UserLocation()
{
    m_EutraLocationIsSet = false;
    m_NrLocationIsSet = false;
    m_N3gaLocationIsSet = false;
    m_UtraLocationIsSet = false;
    m_GeraLocationIsSet = false;
    
}

void UserLocation::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool UserLocation::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool UserLocation::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "UserLocation" : pathPrefix;

                        
    return success;
}

bool UserLocation::operator==(const UserLocation& rhs) const
{
    return
    
    
    
    ((!eutraLocationIsSet() && !rhs.eutraLocationIsSet()) || (eutraLocationIsSet() && rhs.eutraLocationIsSet() && getEutraLocation() == rhs.getEutraLocation())) &&
    
    
    ((!nrLocationIsSet() && !rhs.nrLocationIsSet()) || (nrLocationIsSet() && rhs.nrLocationIsSet() && getNrLocation() == rhs.getNrLocation())) &&
    
    
    ((!n3gaLocationIsSet() && !rhs.n3gaLocationIsSet()) || (n3gaLocationIsSet() && rhs.n3gaLocationIsSet() && getN3gaLocation() == rhs.getN3gaLocation())) &&
    
    
    ((!utraLocationIsSet() && !rhs.utraLocationIsSet()) || (utraLocationIsSet() && rhs.utraLocationIsSet() && getUtraLocation() == rhs.getUtraLocation())) &&
    
    
    ((!geraLocationIsSet() && !rhs.geraLocationIsSet()) || (geraLocationIsSet() && rhs.geraLocationIsSet() && getGeraLocation() == rhs.getGeraLocation()))
    
    ;
}

bool UserLocation::operator!=(const UserLocation& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UserLocation& o)
{
    j = nlohmann::json::object();
    if(o.eutraLocationIsSet())
        j["eutraLocation"] = o.m_EutraLocation;
    if(o.nrLocationIsSet())
        j["nrLocation"] = o.m_NrLocation;
    if(o.n3gaLocationIsSet())
        j["n3gaLocation"] = o.m_N3gaLocation;
    if(o.utraLocationIsSet())
        j["utraLocation"] = o.m_UtraLocation;
    if(o.geraLocationIsSet())
        j["geraLocation"] = o.m_GeraLocation;
    
}

void from_json(const nlohmann::json& j, UserLocation& o)
{
    if(j.find("eutraLocation") != j.end())
    {
        j.at("eutraLocation").get_to(o.m_EutraLocation);
        o.m_EutraLocationIsSet = true;
    } 
    if(j.find("nrLocation") != j.end())
    {
        j.at("nrLocation").get_to(o.m_NrLocation);
        o.m_NrLocationIsSet = true;
    } 
    if(j.find("n3gaLocation") != j.end())
    {
        j.at("n3gaLocation").get_to(o.m_N3gaLocation);
        o.m_N3gaLocationIsSet = true;
    } 
    if(j.find("utraLocation") != j.end())
    {
        j.at("utraLocation").get_to(o.m_UtraLocation);
        o.m_UtraLocationIsSet = true;
    } 
    if(j.find("geraLocation") != j.end())
    {
        j.at("geraLocation").get_to(o.m_GeraLocation);
        o.m_GeraLocationIsSet = true;
    } 
    
}

org::openapitools::server::model::EutraLocation UserLocation::getEutraLocation() const
{
    return m_EutraLocation;
}
void UserLocation::setEutraLocation(org::openapitools::server::model::EutraLocation const& value)
{
    m_EutraLocation = value;
    m_EutraLocationIsSet = true;
}
bool UserLocation::eutraLocationIsSet() const
{
    return m_EutraLocationIsSet;
}
void UserLocation::unsetEutraLocation()
{
    m_EutraLocationIsSet = false;
}
org::openapitools::server::model::NrLocation UserLocation::getNrLocation() const
{
    return m_NrLocation;
}
void UserLocation::setNrLocation(org::openapitools::server::model::NrLocation const& value)
{
    m_NrLocation = value;
    m_NrLocationIsSet = true;
}
bool UserLocation::nrLocationIsSet() const
{
    return m_NrLocationIsSet;
}
void UserLocation::unsetNrLocation()
{
    m_NrLocationIsSet = false;
}
org::openapitools::server::model::N3gaLocation UserLocation::getN3gaLocation() const
{
    return m_N3gaLocation;
}
void UserLocation::setN3gaLocation(org::openapitools::server::model::N3gaLocation const& value)
{
    m_N3gaLocation = value;
    m_N3gaLocationIsSet = true;
}
bool UserLocation::n3gaLocationIsSet() const
{
    return m_N3gaLocationIsSet;
}
void UserLocation::unsetN3gaLocation()
{
    m_N3gaLocationIsSet = false;
}
org::openapitools::server::model::UtraLocation UserLocation::getUtraLocation() const
{
    return m_UtraLocation;
}
void UserLocation::setUtraLocation(org::openapitools::server::model::UtraLocation const& value)
{
    m_UtraLocation = value;
    m_UtraLocationIsSet = true;
}
bool UserLocation::utraLocationIsSet() const
{
    return m_UtraLocationIsSet;
}
void UserLocation::unsetUtraLocation()
{
    m_UtraLocationIsSet = false;
}
org::openapitools::server::model::GeraLocation UserLocation::getGeraLocation() const
{
    return m_GeraLocation;
}
void UserLocation::setGeraLocation(org::openapitools::server::model::GeraLocation const& value)
{
    m_GeraLocation = value;
    m_GeraLocationIsSet = true;
}
bool UserLocation::geraLocationIsSet() const
{
    return m_GeraLocationIsSet;
}
void UserLocation::unsetGeraLocation()
{
    m_GeraLocationIsSet = false;
}


} // namespace org::openapitools::server::model

