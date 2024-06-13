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
 * PDUSessionChargingInformation.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PDUSessionChargingInformation_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PDUSessionChargingInformation_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/PresenceInfo.h"
#include "CppRestOpenAPIClient/model/UserLocation.h"
#include "CppRestOpenAPIClient/model/RANSecondaryRATUsageReport.h"
#include "CppRestOpenAPIClient/model/PDUSessionInformation.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include "CppRestOpenAPIClient/model/UserInformation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class UserInformation;
class UserLocation;
class PresenceInfo;
class PDUSessionInformation;
class RANSecondaryRATUsageReport;

/// <summary>
/// 
/// </summary>
class  PDUSessionChargingInformation
    : public ModelBase
{
public:
    PDUSessionChargingInformation();
    virtual ~PDUSessionChargingInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PDUSessionChargingInformation members

    /// <summary>
    /// Integer where the allowed values correspond to the value range of an unsigned 32-bit integer. 
    /// </summary>
    int32_t getChargingId() const;
    bool chargingIdIsSet() const;
    void unsetChargingId();

    void setChargingId(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSMFChargingId() const;
    bool sMFChargingIdIsSet() const;
    void unsetSMFChargingId();

    void setSMFChargingId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserInformation> getUserInformation() const;
    bool userInformationIsSet() const;
    void unsetUserInformation();

    void setUserInformation(const std::shared_ptr<UserInformation>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserLocation> getUserLocationinfo() const;
    bool userLocationinfoIsSet() const;
    void unsetUserLocationinfo();

    void setUserLocationinfo(const std::shared_ptr<UserLocation>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserLocation> getMAPDUNon3GPPUserLocationInfo() const;
    bool mAPDUNon3GPPUserLocationInfoIsSet() const;
    void unsetMAPDUNon3GPPUserLocationInfo();

    void setMAPDUNon3GPPUserLocationInfo(const std::shared_ptr<UserLocation>& value);

    /// <summary>
    /// string with format &#39;date-time&#39; as defined in OpenAPI.
    /// </summary>
    utility::datetime getUserLocationTime() const;
    bool userLocationTimeIsSet() const;
    void unsetUserLocationTime();

    void setUserLocationTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& getPresenceReportingAreaInformation();
    bool presenceReportingAreaInformationIsSet() const;
    void unsetPresenceReportingAreaInformation();

    void setPresenceReportingAreaInformation(const std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& value);

    /// <summary>
    /// String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time. 
    /// </summary>
    utility::string_t getUetimeZone() const;
    bool uetimeZoneIsSet() const;
    void unsetUetimeZone();

    void setUetimeZone(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PDUSessionInformation> getPduSessionInformation() const;
    bool pduSessionInformationIsSet() const;
    void unsetPduSessionInformation();

    void setPduSessionInformation(const std::shared_ptr<PDUSessionInformation>& value);

    /// <summary>
    /// indicating a time in seconds.
    /// </summary>
    int32_t getUnitCountInactivityTimer() const;
    bool unitCountInactivityTimerIsSet() const;
    void unsetUnitCountInactivityTimer();

    void setUnitCountInactivityTimer(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RANSecondaryRATUsageReport> getRANSecondaryRATUsageReport() const;
    bool rANSecondaryRATUsageReportIsSet() const;
    void unsetRANSecondaryRATUsageReport();

    void setRANSecondaryRATUsageReport(const std::shared_ptr<RANSecondaryRATUsageReport>& value);


protected:
    int32_t m_ChargingId;
    bool m_ChargingIdIsSet;
    utility::string_t m_SMFChargingId;
    bool m_SMFChargingIdIsSet;
    std::shared_ptr<UserInformation> m_UserInformation;
    bool m_UserInformationIsSet;
    std::shared_ptr<UserLocation> m_UserLocationinfo;
    bool m_UserLocationinfoIsSet;
    std::shared_ptr<UserLocation> m_MAPDUNon3GPPUserLocationInfo;
    bool m_MAPDUNon3GPPUserLocationInfoIsSet;
    utility::datetime m_UserLocationTime;
    bool m_UserLocationTimeIsSet;
    std::map<utility::string_t, std::shared_ptr<PresenceInfo>> m_PresenceReportingAreaInformation;
    bool m_PresenceReportingAreaInformationIsSet;
    utility::string_t m_UetimeZone;
    bool m_UetimeZoneIsSet;
    std::shared_ptr<PDUSessionInformation> m_PduSessionInformation;
    bool m_PduSessionInformationIsSet;
    int32_t m_UnitCountInactivityTimer;
    bool m_UnitCountInactivityTimerIsSet;
    std::shared_ptr<RANSecondaryRATUsageReport> m_RANSecondaryRATUsageReport;
    bool m_RANSecondaryRATUsageReportIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PDUSessionChargingInformation_H_ */
