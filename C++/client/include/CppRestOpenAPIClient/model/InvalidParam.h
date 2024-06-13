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
 * InvalidParam.h
 *
 * It contains an invalid parameter and a related description.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_InvalidParam_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_InvalidParam_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// It contains an invalid parameter and a related description.
/// </summary>
class  InvalidParam
    : public ModelBase
{
public:
    InvalidParam();
    virtual ~InvalidParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InvalidParam members

    /// <summary>
    /// If the invalid parameter is an attribute in a JSON body, this IE shall contain the  attribute&#39;s name and shall be encoded as a JSON Pointer. If the invalid parameter is  an HTTP header, this IE shall be formatted as the concatenation of the string \&quot;header \&quot;  plus the name of such header. If the invalid parameter is a query parameter, this IE  shall be formatted as the concatenation of the string \&quot;query \&quot; plus the name of such  query parameter. If the invalid parameter is a variable part in the path of a resource  URI, this IE shall contain the name of the variable, including the symbols \&quot;{\&quot; and \&quot;}\&quot;  used in OpenAPI specification as the notation to represent variable path segments. 
    /// </summary>
    utility::string_t getParam() const;
    bool paramIsSet() const;
    void unsetParam();

    void setParam(const utility::string_t& value);

    /// <summary>
    /// A human-readable reason, e.g. \&quot;must be a positive integer\&quot;. In cases involving failed  operations in a PATCH request, the reason string should identify the operation that  failed using the operation&#39;s array index to assist in correlation of the invalid  parameter with the failed operation, e.g.\&quot; Replacement value invalid for attribute  (failed operation index&#x3D; 4)\&quot; 
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();

    void setReason(const utility::string_t& value);


protected:
    utility::string_t m_Param;
    bool m_ParamIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_InvalidParam_H_ */
