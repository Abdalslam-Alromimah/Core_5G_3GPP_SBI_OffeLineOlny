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
 * LineType.h
 *
 * Possible values are: - DSL: Identifies a DSL line - PON: Identifies a PON line 
 */

#ifndef LineType_H_
#define LineType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Possible values are: - DSL: Identifies a DSL line - PON: Identifies a PON line 
/// </summary>
class  LineType
{
public:
    LineType();
    virtual ~LineType() = default;


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

    bool operator==(const LineType& rhs) const;
    bool operator!=(const LineType& rhs) const;

    /////////////////////////////////////////////
    /// LineType members


    friend  void to_json(nlohmann::json& j, const LineType& o);
    friend  void from_json(const nlohmann::json& j, LineType& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* LineType_H_ */
