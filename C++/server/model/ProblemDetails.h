/**
* Nchf_OfflineOnlyCharging
* OfflineOnlyCharging Service © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.2.0-alpha.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ProblemDetails.h
 *
 * Provides additional information in an error response.
 */

#ifndef ProblemDetails_H_
#define ProblemDetails_H_


#include "NoProfileMatchInfo.h"
#include <string>
#include "InvalidParam.h"
#include "AccessTokenErr.h"
#include "AccessTokenReq.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Provides additional information in an error response.
/// </summary>
class  ProblemDetails
{
public:
    ProblemDetails();
    virtual ~ProblemDetails() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const ProblemDetails& rhs) const;
    bool operator!=(const ProblemDetails& rhs) const;

    /////////////////////////////////////////////
    /// ProblemDetails members

    /// <summary>
    /// String providing an URI formatted according to RFC 3986.
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string const& value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// 
    /// </summary>
    int32_t getStatus() const;
    void setStatus(int32_t const value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// A human-readable explanation specific to this occurrence of the problem.
    /// </summary>
    std::string getDetail() const;
    void setDetail(std::string const& value);
    bool detailIsSet() const;
    void unsetDetail();
    /// <summary>
    /// String providing an URI formatted according to RFC 3986.
    /// </summary>
    std::string getInstance() const;
    void setInstance(std::string const& value);
    bool instanceIsSet() const;
    void unsetInstance();
    /// <summary>
    /// A machine-readable application error cause specific to this occurrence of the problem.  This IE should be present and provide application-related error information, if available. 
    /// </summary>
    std::string getCause() const;
    void setCause(std::string const& value);
    bool causeIsSet() const;
    void unsetCause();
    /// <summary>
    /// 
    /// </summary>
    std::vector<org::openapitools::server::model::InvalidParam> getInvalidParams() const;
    void setInvalidParams(std::vector<org::openapitools::server::model::InvalidParam> const& value);
    bool invalidParamsIsSet() const;
    void unsetInvalidParams();
    /// <summary>
    /// A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported. 
    /// </summary>
    std::string getSupportedFeatures() const;
    void setSupportedFeatures(std::string const& value);
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::AccessTokenErr getAccessTokenError() const;
    void setAccessTokenError(org::openapitools::server::model::AccessTokenErr const& value);
    bool accessTokenErrorIsSet() const;
    void unsetAccessTokenError();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::AccessTokenReq getAccessTokenRequest() const;
    void setAccessTokenRequest(org::openapitools::server::model::AccessTokenReq const& value);
    bool accessTokenRequestIsSet() const;
    void unsetAccessTokenRequest();
    /// <summary>
    /// Fully Qualified Domain Name
    /// </summary>
    std::string getNrfId() const;
    void setNrfId(std::string const& value);
    bool nrfIdIsSet() const;
    void unsetNrfId();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getSupportedApiVersions() const;
    void setSupportedApiVersions(std::vector<std::string> const& value);
    bool supportedApiVersionsIsSet() const;
    void unsetSupportedApiVersions();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NoProfileMatchInfo getNoProfileMatchInfo() const;
    void setNoProfileMatchInfo(org::openapitools::server::model::NoProfileMatchInfo const& value);
    bool noProfileMatchInfoIsSet() const;
    void unsetNoProfileMatchInfo();

    friend  void to_json(nlohmann::json& j, const ProblemDetails& o);
    friend  void from_json(const nlohmann::json& j, ProblemDetails& o);
protected:
    std::string m_Type;
    bool m_TypeIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    int32_t m_Status;
    bool m_StatusIsSet;
    std::string m_Detail;
    bool m_DetailIsSet;
    std::string m_Instance;
    bool m_InstanceIsSet;
    std::string m_Cause;
    bool m_CauseIsSet;
    std::vector<org::openapitools::server::model::InvalidParam> m_InvalidParams;
    bool m_InvalidParamsIsSet;
    std::string m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
    org::openapitools::server::model::AccessTokenErr m_AccessTokenError;
    bool m_AccessTokenErrorIsSet;
    org::openapitools::server::model::AccessTokenReq m_AccessTokenRequest;
    bool m_AccessTokenRequestIsSet;
    std::string m_NrfId;
    bool m_NrfIdIsSet;
    std::vector<std::string> m_SupportedApiVersions;
    bool m_SupportedApiVersionsIsSet;
    org::openapitools::server::model::NoProfileMatchInfo m_NoProfileMatchInfo;
    bool m_NoProfileMatchInfoIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ProblemDetails_H_ */
