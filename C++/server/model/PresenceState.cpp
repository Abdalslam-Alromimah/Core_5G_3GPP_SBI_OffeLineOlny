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


#include "PresenceState.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PresenceState::PresenceState()
{
    
}

void PresenceState::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PresenceState::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PresenceState::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PresenceState" : pathPrefix;

    
    return success;
}

bool PresenceState::operator==(const PresenceState& rhs) const
{
    return
    
    
    ;
}

bool PresenceState::operator!=(const PresenceState& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PresenceState& o)
{
    j = nlohmann::json::object();
    
}

void from_json(const nlohmann::json& j, PresenceState& o)
{
    
}



} // namespace org::openapitools::server::model

