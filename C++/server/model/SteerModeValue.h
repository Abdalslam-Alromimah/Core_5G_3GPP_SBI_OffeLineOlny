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
 * SteerModeValue.h
 *
 * Indicates the steering mode value determined by the PCF.
 */

#ifndef SteerModeValue_H_
#define SteerModeValue_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Indicates the steering mode value determined by the PCF.
/// </summary>
class  SteerModeValue
{
public:
    SteerModeValue();
    virtual ~SteerModeValue() = default;


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

    bool operator==(const SteerModeValue& rhs) const;
    bool operator!=(const SteerModeValue& rhs) const;

    /////////////////////////////////////////////
    /// SteerModeValue members


    friend  void to_json(nlohmann::json& j, const SteerModeValue& o);
    friend  void from_json(const nlohmann::json& j, SteerModeValue& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* SteerModeValue_H_ */
