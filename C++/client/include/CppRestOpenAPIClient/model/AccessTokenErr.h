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
 * AccessTokenErr.h
 *
 * Error returned in the access token response message
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AccessTokenErr_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AccessTokenErr_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Error returned in the access token response message
/// </summary>
class  AccessTokenErr
    : public ModelBase
{
public:
    AccessTokenErr();
    virtual ~AccessTokenErr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AccessTokenErr members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorDescription() const;
    bool errorDescriptionIsSet() const;
    void unsetError_description();

    void setErrorDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorUri() const;
    bool errorUriIsSet() const;
    void unsetError_uri();

    void setErrorUri(const utility::string_t& value);


protected:
    utility::string_t m_Error;
    bool m_ErrorIsSet;
    utility::string_t m_Error_description;
    bool m_Error_descriptionIsSet;
    utility::string_t m_Error_uri;
    bool m_Error_uriIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AccessTokenErr_H_ */
