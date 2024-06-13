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
 * UserLocation.h
 *
 * At least one of eutraLocation, nrLocation and n3gaLocation shall be present. Several of them may be present. 
 */

#ifndef UserLocation_H_
#define UserLocation_H_


#include "EutraLocation.h"
#include "GeraLocation.h"
#include "NrLocation.h"
#include "UtraLocation.h"
#include "N3gaLocation.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// At least one of eutraLocation, nrLocation and n3gaLocation shall be present. Several of them may be present. 
/// </summary>
class  UserLocation
{
public:
    UserLocation();
    virtual ~UserLocation() = default;


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

    bool operator==(const UserLocation& rhs) const;
    bool operator!=(const UserLocation& rhs) const;

    /////////////////////////////////////////////
    /// UserLocation members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::EutraLocation getEutraLocation() const;
    void setEutraLocation(org::openapitools::server::model::EutraLocation const& value);
    bool eutraLocationIsSet() const;
    void unsetEutraLocation();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NrLocation getNrLocation() const;
    void setNrLocation(org::openapitools::server::model::NrLocation const& value);
    bool nrLocationIsSet() const;
    void unsetNrLocation();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::N3gaLocation getN3gaLocation() const;
    void setN3gaLocation(org::openapitools::server::model::N3gaLocation const& value);
    bool n3gaLocationIsSet() const;
    void unsetN3gaLocation();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::UtraLocation getUtraLocation() const;
    void setUtraLocation(org::openapitools::server::model::UtraLocation const& value);
    bool utraLocationIsSet() const;
    void unsetUtraLocation();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::GeraLocation getGeraLocation() const;
    void setGeraLocation(org::openapitools::server::model::GeraLocation const& value);
    bool geraLocationIsSet() const;
    void unsetGeraLocation();

    friend  void to_json(nlohmann::json& j, const UserLocation& o);
    friend  void from_json(const nlohmann::json& j, UserLocation& o);
protected:
    org::openapitools::server::model::EutraLocation m_EutraLocation;
    bool m_EutraLocationIsSet;
    org::openapitools::server::model::NrLocation m_NrLocation;
    bool m_NrLocationIsSet;
    org::openapitools::server::model::N3gaLocation m_N3gaLocation;
    bool m_N3gaLocationIsSet;
    org::openapitools::server::model::UtraLocation m_UtraLocation;
    bool m_UtraLocationIsSet;
    org::openapitools::server::model::GeraLocation m_GeraLocation;
    bool m_GeraLocationIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* UserLocation_H_ */
