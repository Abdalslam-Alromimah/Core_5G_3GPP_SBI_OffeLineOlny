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
 * QosFlowsUsageReport.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_QosFlowsUsageReport_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_QosFlowsUsageReport_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  QosFlowsUsageReport
    : public ModelBase
{
public:
    QosFlowsUsageReport();
    virtual ~QosFlowsUsageReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// QosFlowsUsageReport members

    /// <summary>
    /// Unsigned integer identifying a QoS flow, within the range 0 to 63.
    /// </summary>
    int32_t getQFI() const;
    bool qFIIsSet() const;
    void unsetQFI();

    void setQFI(int32_t value);

    /// <summary>
    /// string with format &#39;date-time&#39; as defined in OpenAPI.
    /// </summary>
    utility::datetime getStartTimestamp() const;
    bool startTimestampIsSet() const;
    void unsetStartTimestamp();

    void setStartTimestamp(const utility::datetime& value);

    /// <summary>
    /// string with format &#39;date-time&#39; as defined in OpenAPI.
    /// </summary>
    utility::datetime getEndTimestamp() const;
    bool endTimestampIsSet() const;
    void unsetEndTimestamp();

    void setEndTimestamp(const utility::datetime& value);

    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
    /// </summary>
    int32_t getUplinkVolume() const;
    bool uplinkVolumeIsSet() const;
    void unsetUplinkVolume();

    void setUplinkVolume(int32_t value);

    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 64-bit integer. 
    /// </summary>
    int32_t getDownlinkVolume() const;
    bool downlinkVolumeIsSet() const;
    void unsetDownlinkVolume();

    void setDownlinkVolume(int32_t value);


protected:
    int32_t m_QFI;
    bool m_QFIIsSet;
    utility::datetime m_StartTimestamp;
    bool m_StartTimestampIsSet;
    utility::datetime m_EndTimestamp;
    bool m_EndTimestampIsSet;
    int32_t m_UplinkVolume;
    bool m_UplinkVolumeIsSet;
    int32_t m_DownlinkVolume;
    bool m_DownlinkVolumeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_QosFlowsUsageReport_H_ */
