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
 * MultipleQFIcontainer.h
 *
 * 
 */

#ifndef MultipleQFIcontainer_H_
#define MultipleQFIcontainer_H_


#include "QFIContainerInformation.h"
#include "Trigger.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  MultipleQFIcontainer
{
public:
    MultipleQFIcontainer();
    virtual ~MultipleQFIcontainer() = default;


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

    bool operator==(const MultipleQFIcontainer& rhs) const;
    bool operator!=(const MultipleQFIcontainer& rhs) const;

    /////////////////////////////////////////////
    /// MultipleQFIcontainer members

    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::Trigger> getTriggers() const;
    void setTriggers(std::vector<org::openapitools::server::model::Trigger> const& value);
    bool triggersIsSet() const;
    void unsetTriggers();
    /// <summary>
    /// string with format &#39;date-time&#39; as defined in OpenAPI.
    /// </summary>
    std::string getTriggerTimestamp() const;
    void setTriggerTimestamp(std::string const& value);
    bool triggerTimestampIsSet() const;
    void unsetTriggerTimestamp();
    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 32-bit integer. 
    /// </summary>
    int32_t getTime() const;
    void setTime(int32_t const value);
    bool timeIsSet() const;
    void unsetTime();
    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
    /// </summary>
    int32_t getTotalVolume() const;
    void setTotalVolume(int32_t const value);
    bool totalVolumeIsSet() const;
    void unsetTotalVolume();
    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
    /// </summary>
    int32_t getUplinkVolume() const;
    void setUplinkVolume(int32_t const value);
    bool uplinkVolumeIsSet() const;
    void unsetUplinkVolume();
    /// <summary>
    /// 
    /// </summary>
    int32_t getLocalSequenceNumber() const;
    void setLocalSequenceNumber(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::QFIContainerInformation getQFIContainerInformation() const;
    void setQFIContainerInformation(org::openapitools::server::model::QFIContainerInformation const& value);
    bool qFIContainerInformationIsSet() const;
    void unsetQFIContainerInformation();

    friend  void to_json(nlohmann::json& j, const MultipleQFIcontainer& o);
    friend  void from_json(const nlohmann::json& j, MultipleQFIcontainer& o);
protected:
    std::vector<org::openapitools::server::model::Trigger> m_Triggers;
    bool m_TriggersIsSet;
    std::string m_TriggerTimestamp;
    bool m_TriggerTimestampIsSet;
    int32_t m_Time;
    bool m_TimeIsSet;
    int32_t m_TotalVolume;
    bool m_TotalVolumeIsSet;
    int32_t m_UplinkVolume;
    bool m_UplinkVolumeIsSet;
    int32_t m_LocalSequenceNumber;

    org::openapitools::server::model::QFIContainerInformation m_QFIContainerInformation;
    bool m_QFIContainerInformationIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* MultipleQFIcontainer_H_ */
