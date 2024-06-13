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
/*
 * SscMode.h
 *
 * represents the service and session continuity mode It shall comply with the provisions defined in table 5.4.3.6-1.  
 */

#ifndef SscMode_H_
#define SscMode_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// represents the service and session continuity mode It shall comply with the provisions defined in table 5.4.3.6-1.  
/// </summary>
class  SscMode
{
public:
    SscMode();
    virtual ~SscMode() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const SscMode& rhs) const;
    bool operator!=(const SscMode& rhs) const;

    /////////////////////////////////////////////
    /// SscMode members


    friend  void to_json(nlohmann::json& j, const SscMode& o);
    friend  void from_json(const nlohmann::json& j, SscMode& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* SscMode_H_ */
