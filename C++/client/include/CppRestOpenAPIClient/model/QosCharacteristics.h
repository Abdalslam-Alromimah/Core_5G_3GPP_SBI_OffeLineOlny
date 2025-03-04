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
 * QosCharacteristics.h
 *
 * Contains QoS characteristics for a non-standardized or a non-configured 5QI.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_QosCharacteristics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_QosCharacteristics_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/QosResourceType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Contains QoS characteristics for a non-standardized or a non-configured 5QI.
/// </summary>
class  QosCharacteristics
    : public ModelBase
{
public:
    QosCharacteristics();
    virtual ~QosCharacteristics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// QosCharacteristics members

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
    std::shared_ptr<QosResourceType> getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetResourceType();

    void setResourceType(const std::shared_ptr<QosResourceType>& value);

    /// <summary>
    /// Unsigned integer indicating the 5QI Priority Level (see clauses 5.7.3.3 and 5.7.4 of 3GPP TS 23.501, within the range 1 to 127.Values are ordered in decreasing order of priority,  i.e. with 1 as the highest priority and 127 as the lowest priority.  
    /// </summary>
    int32_t getPriorityLevel() const;
    bool priorityLevelIsSet() const;
    void unsetPriorityLevel();

    void setPriorityLevel(int32_t value);

    /// <summary>
    /// Unsigned integer indicating Packet Delay Budget (see clauses 5.7.3.4 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds. 
    /// </summary>
    int32_t getPacketDelayBudget() const;
    bool packetDelayBudgetIsSet() const;
    void unsetPacketDelayBudget();

    void setPacketDelayBudget(int32_t value);

    /// <summary>
    /// String representing Packet Error Rate (see clause 5.7.3.5 and 5.7.4 of 3GPP TS 23.501, expressed as a \&quot;scalar x 10-k\&quot; where the scalar and the exponent k are each encoded as one decimal digit. 
    /// </summary>
    utility::string_t getPacketErrorRate() const;
    bool packetErrorRateIsSet() const;
    void unsetPacketErrorRate();

    void setPacketErrorRate(const utility::string_t& value);

    /// <summary>
    /// Unsigned integer indicating Averaging Window (see clause 5.7.3.6 and 5.7.4 of 3GPP TS 23.501), expressed in milliseconds.  
    /// </summary>
    int32_t getAveragingWindow() const;
    bool averagingWindowIsSet() const;
    void unsetAveragingWindow();

    void setAveragingWindow(int32_t value);

    /// <summary>
    /// Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.  
    /// </summary>
    int32_t getMaxDataBurstVol() const;
    bool maxDataBurstVolIsSet() const;
    void unsetMaxDataBurstVol();

    void setMaxDataBurstVol(int32_t value);

    /// <summary>
    /// Unsigned integer indicating Maximum Data Burst Volume (see clauses 5.7.3.7 and 5.7.4 of 3GPP TS 23.501), expressed in Bytes.  
    /// </summary>
    int32_t getExtMaxDataBurstVol() const;
    bool extMaxDataBurstVolIsSet() const;
    void unsetExtMaxDataBurstVol();

    void setExtMaxDataBurstVol(int32_t value);


protected:
    int32_t m_r_5qi;
    bool m_r_5qiIsSet;
    std::shared_ptr<QosResourceType> m_ResourceType;
    bool m_ResourceTypeIsSet;
    int32_t m_PriorityLevel;
    bool m_PriorityLevelIsSet;
    int32_t m_PacketDelayBudget;
    bool m_PacketDelayBudgetIsSet;
    utility::string_t m_PacketErrorRate;
    bool m_PacketErrorRateIsSet;
    int32_t m_AveragingWindow;
    bool m_AveragingWindowIsSet;
    int32_t m_MaxDataBurstVol;
    bool m_MaxDataBurstVolIsSet;
    int32_t m_ExtMaxDataBurstVol;
    bool m_ExtMaxDataBurstVolIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_QosCharacteristics_H_ */
