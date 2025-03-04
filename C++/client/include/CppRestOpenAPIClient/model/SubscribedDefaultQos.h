/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SubscribedDefaultQos.h
 *
 * Provides the subsribed 5QI and the ARP, it may contain the priority level.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/Arp.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Arp;

/// <summary>
/// Provides the subsribed 5QI and the ARP, it may contain the priority level.
/// </summary>
class  SubscribedDefaultQos
    : public ModelBase
{
public:
    SubscribedDefaultQos();
    virtual ~SubscribedDefaultQos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscribedDefaultQos members

    /// <summary>
    /// Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255. 
    /// </summary>
    int32_t getR5qi() const;
    bool r5qiIsSet() const;
    void unsetr_5qi();

    void setR5qi(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Arp> getArp() const;
    bool arpIsSet() const;
    void unsetArp();

    void setArp(const std::shared_ptr<Arp>& value);

    /// <summary>
    /// Unsigned integer indicating the 5QI Priority Level (see clauses 5.7.3.3 and 5.7.4 of 3GPP TS 23.501, within the range 1 to 127.Values are ordered in decreasing order of priority,  i.e. with 1 as the highest priority and 127 as the lowest priority.  
    /// </summary>
    int32_t getPriorityLevel() const;
    bool priorityLevelIsSet() const;
    void unsetPriorityLevel();

    void setPriorityLevel(int32_t value);


protected:
    int32_t m_r_5qi;
    bool m_r_5qiIsSet;
    std::shared_ptr<Arp> m_Arp;
    bool m_ArpIsSet;
    int32_t m_PriorityLevel;
    bool m_PriorityLevelIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SubscribedDefaultQos_H_ */
