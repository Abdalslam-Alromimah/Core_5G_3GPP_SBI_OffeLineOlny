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
 * RanNasRelCause.h
 *
 * Contains the RAN/NAS release cause.
 */

#ifndef RanNasRelCause_H_
#define RanNasRelCause_H_


#include "NgApCause.h"
#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Contains the RAN/NAS release cause.
/// </summary>
class  RanNasRelCause
{
public:
    RanNasRelCause();
    virtual ~RanNasRelCause() = default;


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

    bool operator==(const RanNasRelCause& rhs) const;
    bool operator!=(const RanNasRelCause& rhs) const;

    /////////////////////////////////////////////
    /// RanNasRelCause members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NgApCause getNgApCause() const;
    void setNgApCause(org::openapitools::server::model::NgApCause const& value);
    bool ngApCauseIsSet() const;
    void unsetNgApCause();
    /// <summary>
    /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
    /// </summary>
    int32_t getR5gMmCause() const;
    void setR5gMmCause(int32_t const value);
    bool r5gMmCauseIsSet() const;
    void unsetr_5gMmCause();
    /// <summary>
    /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
    /// </summary>
    int32_t getR5gSmCause() const;
    void setR5gSmCause(int32_t const value);
    bool r5gSmCauseIsSet() const;
    void unsetr_5gSmCause();
    /// <summary>
    /// Defines the EPS RAN/NAS release cause.
    /// </summary>
    std::string getEpsCause() const;
    void setEpsCause(std::string const& value);
    bool epsCauseIsSet() const;
    void unsetEpsCause();

    friend  void to_json(nlohmann::json& j, const RanNasRelCause& o);
    friend  void from_json(const nlohmann::json& j, RanNasRelCause& o);
protected:
    org::openapitools::server::model::NgApCause m_NgApCause;
    bool m_NgApCauseIsSet;
    int32_t m_r_5gMmCause;
    bool m_r_5gMmCauseIsSet;
    int32_t m_r_5gSmCause;
    bool m_r_5gSmCauseIsSet;
    std::string m_EpsCause;
    bool m_EpsCauseIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* RanNasRelCause_H_ */
