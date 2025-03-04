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
 * Ipv6Addr.h
 *
 * String identifying an IPv6 address formatted according to clause 4 of RFC5952. The mixed IPv4 IPv6 notation according to clause 5 of RFC5952 shall not be used. 
 */

#ifndef Ipv6Addr_H_
#define Ipv6Addr_H_


#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// String identifying an IPv6 address formatted according to clause 4 of RFC5952. The mixed IPv4 IPv6 notation according to clause 5 of RFC5952 shall not be used. 
/// </summary>
class  Ipv6Addr
{
public:
    Ipv6Addr();
    virtual ~Ipv6Addr() = default;


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

    bool operator==(const Ipv6Addr& rhs) const;
    bool operator!=(const Ipv6Addr& rhs) const;

    /////////////////////////////////////////////
    /// Ipv6Addr members


    friend  void to_json(nlohmann::json& j, const Ipv6Addr& o);
    friend  void from_json(const nlohmann::json& j, Ipv6Addr& o);
protected:
    
};

} // namespace org::openapitools::server::model

#endif /* Ipv6Addr_H_ */
