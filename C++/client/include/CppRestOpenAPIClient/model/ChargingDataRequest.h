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
 * ChargingDataRequest.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ChargingDataRequest_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ChargingDataRequest_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/MultipleUnitUsage.h"
#include "CppRestOpenAPIClient/model/NFIdentification.h"
#include "CppRestOpenAPIClient/model/Trigger.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/PDUSessionChargingInformation.h"
#include "CppRestOpenAPIClient/model/RoamingQBCInformation.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class NFIdentification;
class MultipleUnitUsage;
class Trigger;
class PDUSessionChargingInformation;
class RoamingQBCInformation;

/// <summary>
/// 
/// </summary>
class  ChargingDataRequest
    : public ModelBase
{
public:
    ChargingDataRequest();
    virtual ~ChargingDataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ChargingDataRequest members

    /// <summary>
    /// String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501. 
    /// </summary>
    utility::string_t getSubscriberIdentifier() const;
    bool subscriberIdentifierIsSet() const;
    void unsetSubscriberIdentifier();

    void setSubscriberIdentifier(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NFIdentification> getNfConsumerIdentification() const;
    bool nfConsumerIdentificationIsSet() const;
    void unsetNfConsumerIdentification();

    void setNfConsumerIdentification(const std::shared_ptr<NFIdentification>& value);

    /// <summary>
    /// string with format &#39;date-time&#39; as defined in OpenAPI.
    /// </summary>
    utility::datetime getInvocationTimeStamp() const;
    bool invocationTimeStampIsSet() const;
    void unsetInvocationTimeStamp();

    void setInvocationTimeStamp(const utility::datetime& value);

    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 32-bit integer. 
    /// </summary>
    int32_t getInvocationSequenceNumber() const;
    bool invocationSequenceNumberIsSet() const;
    void unsetInvocationSequenceNumber();

    void setInvocationSequenceNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isRetransmissionIndicator() const;
    bool retransmissionIndicatorIsSet() const;
    void unsetRetransmissionIndicator();

    void setRetransmissionIndicator(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getServiceSpecificationInfo() const;
    bool serviceSpecificationInfoIsSet() const;
    void unsetServiceSpecificationInfo();

    void setServiceSpecificationInfo(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<MultipleUnitUsage>>& getMultipleUnitUsage();
    bool multipleUnitUsageIsSet() const;
    void unsetMultipleUnitUsage();

    void setMultipleUnitUsage(const std::vector<std::shared_ptr<MultipleUnitUsage>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Trigger>>& getTriggers();
    bool triggersIsSet() const;
    void unsetTriggers();

    void setTriggers(const std::vector<std::shared_ptr<Trigger>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PDUSessionChargingInformation> getPDUSessionChargingInformation() const;
    bool pDUSessionChargingInformationIsSet() const;
    void unsetPDUSessionChargingInformation();

    void setPDUSessionChargingInformation(const std::shared_ptr<PDUSessionChargingInformation>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RoamingQBCInformation> getRoamingQBCInformation() const;
    bool roamingQBCInformationIsSet() const;
    void unsetRoamingQBCInformation();

    void setRoamingQBCInformation(const std::shared_ptr<RoamingQBCInformation>& value);


protected:
    utility::string_t m_SubscriberIdentifier;
    bool m_SubscriberIdentifierIsSet;
    std::shared_ptr<NFIdentification> m_NfConsumerIdentification;
    bool m_NfConsumerIdentificationIsSet;
    utility::datetime m_InvocationTimeStamp;
    bool m_InvocationTimeStampIsSet;
    int32_t m_InvocationSequenceNumber;
    bool m_InvocationSequenceNumberIsSet;
    bool m_RetransmissionIndicator;
    bool m_RetransmissionIndicatorIsSet;
    utility::string_t m_ServiceSpecificationInfo;
    bool m_ServiceSpecificationInfoIsSet;
    std::vector<std::shared_ptr<MultipleUnitUsage>> m_MultipleUnitUsage;
    bool m_MultipleUnitUsageIsSet;
    std::vector<std::shared_ptr<Trigger>> m_Triggers;
    bool m_TriggersIsSet;
    std::shared_ptr<PDUSessionChargingInformation> m_PDUSessionChargingInformation;
    bool m_PDUSessionChargingInformationIsSet;
    std::shared_ptr<RoamingQBCInformation> m_RoamingQBCInformation;
    bool m_RoamingQBCInformationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ChargingDataRequest_H_ */
