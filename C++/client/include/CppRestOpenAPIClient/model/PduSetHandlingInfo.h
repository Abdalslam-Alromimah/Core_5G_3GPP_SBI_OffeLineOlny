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
 * PduSetHandlingInfo.h
 *
 * Possible values are: - \&quot;ALL_PDUS_NEEDED\&quot;: All PDUs of the PDU Set are needed - \&quot;ALL_PDUS_NOT_NEEDED\&quot;: All PDUs of the PDU Set are not needed 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PduSetHandlingInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PduSetHandlingInfo_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Possible values are: - \&quot;ALL_PDUS_NEEDED\&quot;: All PDUs of the PDU Set are needed - \&quot;ALL_PDUS_NOT_NEEDED\&quot;: All PDUs of the PDU Set are not needed 
/// </summary>
class  PduSetHandlingInfo
    : public ModelBase
{
public:
    PduSetHandlingInfo();
    virtual ~PduSetHandlingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PduSetHandlingInfo members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PduSetHandlingInfo_H_ */
