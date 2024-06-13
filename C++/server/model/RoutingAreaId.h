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
 * RoutingAreaId.h
 *
 * Contains a Routing Area Identification as defined in 3GPP TS 23.003, clause 4.2.
 */

#ifndef RoutingAreaId_H_
#define RoutingAreaId_H_


#include <string>
#include "PlmnId.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Contains a Routing Area Identification as defined in 3GPP TS 23.003, clause 4.2.
/// </summary>
class  RoutingAreaId
{
public:
    RoutingAreaId();
    virtual ~RoutingAreaId() = default;


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

    bool operator==(const RoutingAreaId& rhs) const;
    bool operator!=(const RoutingAreaId& rhs) const;

    /////////////////////////////////////////////
    /// RoutingAreaId members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::PlmnId getPlmnId() const;
    void setPlmnId(org::openapitools::server::model::PlmnId const& value);
    /// <summary>
    /// Location Area Code
    /// </summary>
    std::string getLac() const;
    void setLac(std::string const& value);
    /// <summary>
    /// Routing Area Code
    /// </summary>
    std::string getRac() const;
    void setRac(std::string const& value);

    friend  void to_json(nlohmann::json& j, const RoutingAreaId& o);
    friend  void from_json(const nlohmann::json& j, RoutingAreaId& o);
protected:
    org::openapitools::server::model::PlmnId m_PlmnId;

    std::string m_Lac;

    std::string m_Rac;

    
};

} // namespace org::openapitools::server::model

#endif /* RoutingAreaId_H_ */
