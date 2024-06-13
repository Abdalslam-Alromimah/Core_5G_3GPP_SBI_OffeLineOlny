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
 * ThresholdValue.h
 *
 * Indicates the threshold value(s) for RTT and/or Packet Loss Rate.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ThresholdValue_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ThresholdValue_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Indicates the threshold value(s) for RTT and/or Packet Loss Rate.
/// </summary>
class  ThresholdValue
    : public ModelBase
{
public:
    ThresholdValue();
    virtual ~ThresholdValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ThresholdValue members

    /// <summary>
    /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI &#39;nullable: true&#39; property. 
    /// </summary>
    int32_t getRttThres() const;
    bool rttThresIsSet() const;
    void unsetRttThres();

    void setRttThres(int32_t value);

    /// <summary>
    /// This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property. 
    /// </summary>
    int32_t getPlrThres() const;
    bool plrThresIsSet() const;
    void unsetPlrThres();

    void setPlrThres(int32_t value);


protected:
    int32_t m_RttThres;
    bool m_RttThresIsSet;
    int32_t m_PlrThres;
    bool m_PlrThresIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ThresholdValue_H_ */
