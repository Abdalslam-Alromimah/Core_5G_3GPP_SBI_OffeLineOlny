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
 * r_3GPPPSDataOffStatus.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_r_3GPPPSDataOffStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_r_3GPPPSDataOffStatus_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  r_3GPPPSDataOffStatus
    : public ModelBase
{
public:
    r_3GPPPSDataOffStatus();
    virtual ~r_3GPPPSDataOffStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// r_3GPPPSDataOffStatus members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_r_3GPPPSDataOffStatus_H_ */
