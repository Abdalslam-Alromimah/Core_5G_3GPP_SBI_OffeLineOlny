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
 * NFType.h
 *
 * NF types known to NRF
 */

#ifndef NFType_H_
#define NFType_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// NF types known to NRF
/// </summary>
class  NFType
{
public:
    NFType();
    virtual ~NFType() = default;


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

    bool operator==(const NFType& rhs) const;
    bool operator!=(const NFType& rhs) const;

    /////////////////////////////////////////////
    /// NFType members


    friend  void to_json(nlohmann::json& j, const NFType& o);
    friend  void from_json(const nlohmann::json& j, NFType& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* NFType_H_ */
