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
 * ProblemDetails.h
 *
 * Provides additional information in an error response.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ProblemDetails_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ProblemDetails_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/AccessTokenReq.h"
#include "CppRestOpenAPIClient/model/AccessTokenErr.h"
#include "CppRestOpenAPIClient/model/NoProfileMatchInfo.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/InvalidParam.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class InvalidParam;
class AccessTokenErr;
class AccessTokenReq;
class NoProfileMatchInfo;

/// <summary>
/// Provides additional information in an error response.
/// </summary>
class  ProblemDetails
    : public ModelBase
{
public:
    ProblemDetails();
    virtual ~ProblemDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProblemDetails members

    /// <summary>
    /// String providing an URI formatted according to RFC 3986.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(int32_t value);

    /// <summary>
    /// A human-readable explanation specific to this occurrence of the problem.
    /// </summary>
    utility::string_t getDetail() const;
    bool detailIsSet() const;
    void unsetDetail();

    void setDetail(const utility::string_t& value);

    /// <summary>
    /// String providing an URI formatted according to RFC 3986.
    /// </summary>
    utility::string_t getInstance() const;
    bool instanceIsSet() const;
    void unsetInstance();

    void setInstance(const utility::string_t& value);

    /// <summary>
    /// A machine-readable application error cause specific to this occurrence of the problem.  This IE should be present and provide application-related error information, if available. 
    /// </summary>
    utility::string_t getCause() const;
    bool causeIsSet() const;
    void unsetCause();

    void setCause(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InvalidParam>>& getInvalidParams();
    bool invalidParamsIsSet() const;
    void unsetInvalidParams();

    void setInvalidParams(const std::vector<std::shared_ptr<InvalidParam>>& value);

    /// <summary>
    /// A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported. 
    /// </summary>
    utility::string_t getSupportedFeatures() const;
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();

    void setSupportedFeatures(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AccessTokenErr> getAccessTokenError() const;
    bool accessTokenErrorIsSet() const;
    void unsetAccessTokenError();

    void setAccessTokenError(const std::shared_ptr<AccessTokenErr>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AccessTokenReq> getAccessTokenRequest() const;
    bool accessTokenRequestIsSet() const;
    void unsetAccessTokenRequest();

    void setAccessTokenRequest(const std::shared_ptr<AccessTokenReq>& value);

    /// <summary>
    /// Fully Qualified Domain Name
    /// </summary>
    utility::string_t getNrfId() const;
    bool nrfIdIsSet() const;
    void unsetNrfId();

    void setNrfId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getSupportedApiVersions();
    bool supportedApiVersionsIsSet() const;
    void unsetSupportedApiVersions();

    void setSupportedApiVersions(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NoProfileMatchInfo> getNoProfileMatchInfo() const;
    bool noProfileMatchInfoIsSet() const;
    void unsetNoProfileMatchInfo();

    void setNoProfileMatchInfo(const std::shared_ptr<NoProfileMatchInfo>& value);


protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    int32_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Detail;
    bool m_DetailIsSet;
    utility::string_t m_Instance;
    bool m_InstanceIsSet;
    utility::string_t m_Cause;
    bool m_CauseIsSet;
    std::vector<std::shared_ptr<InvalidParam>> m_InvalidParams;
    bool m_InvalidParamsIsSet;
    utility::string_t m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
    std::shared_ptr<AccessTokenErr> m_AccessTokenError;
    bool m_AccessTokenErrorIsSet;
    std::shared_ptr<AccessTokenReq> m_AccessTokenRequest;
    bool m_AccessTokenRequestIsSet;
    utility::string_t m_NrfId;
    bool m_NrfIdIsSet;
    std::vector<utility::string_t> m_SupportedApiVersions;
    bool m_SupportedApiVersionsIsSet;
    std::shared_ptr<NoProfileMatchInfo> m_NoProfileMatchInfo;
    bool m_NoProfileMatchInfoIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ProblemDetails_H_ */
