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
 * SscMode.h
 *
 * represents the service and session continuity mode It shall comply with the provisions defined in table 5.4.3.6-1.  
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SscMode_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SscMode_H_


#include "CppRestOpenAPIClient/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// represents the service and session continuity mode It shall comply with the provisions defined in table 5.4.3.6-1.  
/// </summary>
class  SscMode
    : public ModelBase
{
public:
    SscMode();
    virtual ~SscMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SscMode members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SscMode_H_ */
