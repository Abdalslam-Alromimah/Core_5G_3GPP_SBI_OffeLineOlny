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
 * InvocationResult.h
 *
 * 
 */

#ifndef InvocationResult_H_
#define InvocationResult_H_


#include "FailureHandling.h"
#include "ProblemDetails.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  InvocationResult
{
public:
    InvocationResult();
    virtual ~InvocationResult() = default;


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

    bool operator==(const InvocationResult& rhs) const;
    bool operator!=(const InvocationResult& rhs) const;

    /////////////////////////////////////////////
    /// InvocationResult members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ProblemDetails getError() const;
    void setError(org::openapitools::server::model::ProblemDetails const& value);
    bool errorIsSet() const;
    void unsetError();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::FailureHandling getFailureHandling() const;
    void setFailureHandling(org::openapitools::server::model::FailureHandling const& value);
    bool failureHandlingIsSet() const;
    void unsetFailureHandling();

    friend  void to_json(nlohmann::json& j, const InvocationResult& o);
    friend  void from_json(const nlohmann::json& j, InvocationResult& o);
protected:
    org::openapitools::server::model::ProblemDetails m_Error;
    bool m_ErrorIsSet;
    org::openapitools::server::model::FailureHandling m_FailureHandling;
    bool m_FailureHandlingIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* InvocationResult_H_ */
