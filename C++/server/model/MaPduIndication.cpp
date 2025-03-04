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


#include "MaPduIndication.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MaPduIndication::MaPduIndication()
{
    
}

void MaPduIndication::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MaPduIndication::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MaPduIndication::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MaPduIndication" : pathPrefix;

    
    return success;
}

bool MaPduIndication::operator==(const MaPduIndication& rhs) const
{
    return
    
    
    ;
}

bool MaPduIndication::operator!=(const MaPduIndication& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MaPduIndication& o)
{
    j = nlohmann::json::object();
    
}

void from_json(const nlohmann::json& j, MaPduIndication& o)
{
    
}



} // namespace org::openapitools::server::model

