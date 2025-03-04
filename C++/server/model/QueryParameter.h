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
 * QueryParameter.h
 *
 * Contains the name and value of a query parameter
 */

#ifndef QueryParameter_H_
#define QueryParameter_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Contains the name and value of a query parameter
/// </summary>
class  QueryParameter
{
public:
    QueryParameter();
    virtual ~QueryParameter() = default;


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

    bool operator==(const QueryParameter& rhs) const;
    bool operator!=(const QueryParameter& rhs) const;

    /////////////////////////////////////////////
    /// QueryParameter members

    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getValue() const;
    void setValue(std::string const& value);

    friend  void to_json(nlohmann::json& j, const QueryParameter& o);
    friend  void from_json(const nlohmann::json& j, QueryParameter& o);
protected:
    std::string m_Name;

    std::string m_Value;

    
};

} // namespace org::openapitools::server::model

#endif /* QueryParameter_H_ */
