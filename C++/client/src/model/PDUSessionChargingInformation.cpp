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



#include "CppRestOpenAPIClient/model/PDUSessionChargingInformation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PDUSessionChargingInformation::PDUSessionChargingInformation()
{
    m_ChargingId = 0;
    m_ChargingIdIsSet = false;
    m_SMFChargingId = utility::conversions::to_string_t("");
    m_SMFChargingIdIsSet = false;
    m_UserInformationIsSet = false;
    m_UserLocationinfoIsSet = false;
    m_MAPDUNon3GPPUserLocationInfoIsSet = false;
    m_UserLocationTime = utility::datetime();
    m_UserLocationTimeIsSet = false;
    m_PresenceReportingAreaInformationIsSet = false;
    m_UetimeZone = utility::conversions::to_string_t("");
    m_UetimeZoneIsSet = false;
    m_PduSessionInformationIsSet = false;
    m_UnitCountInactivityTimer = 0;
    m_UnitCountInactivityTimerIsSet = false;
    m_RANSecondaryRATUsageReportIsSet = false;
}

PDUSessionChargingInformation::~PDUSessionChargingInformation()
{
}

void PDUSessionChargingInformation::validate()
{
    // TODO: implement validation
}

web::json::value PDUSessionChargingInformation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ChargingIdIsSet)
    {
        val[utility::conversions::to_string_t(U("chargingId"))] = ModelBase::toJson(m_ChargingId);
    }
    if(m_SMFChargingIdIsSet)
    {
        val[utility::conversions::to_string_t(U("sMFChargingId"))] = ModelBase::toJson(m_SMFChargingId);
    }
    if(m_UserInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("userInformation"))] = ModelBase::toJson(m_UserInformation);
    }
    if(m_UserLocationinfoIsSet)
    {
        val[utility::conversions::to_string_t(U("userLocationinfo"))] = ModelBase::toJson(m_UserLocationinfo);
    }
    if(m_MAPDUNon3GPPUserLocationInfoIsSet)
    {
        val[utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo"))] = ModelBase::toJson(m_MAPDUNon3GPPUserLocationInfo);
    }
    if(m_UserLocationTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("userLocationTime"))] = ModelBase::toJson(m_UserLocationTime);
    }
    if(m_PresenceReportingAreaInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("presenceReportingAreaInformation"))] = ModelBase::toJson(m_PresenceReportingAreaInformation);
    }
    if(m_UetimeZoneIsSet)
    {
        val[utility::conversions::to_string_t(U("uetimeZone"))] = ModelBase::toJson(m_UetimeZone);
    }
    if(m_PduSessionInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("pduSessionInformation"))] = ModelBase::toJson(m_PduSessionInformation);
    }
    if(m_UnitCountInactivityTimerIsSet)
    {
        val[utility::conversions::to_string_t(U("unitCountInactivityTimer"))] = ModelBase::toJson(m_UnitCountInactivityTimer);
    }
    if(m_RANSecondaryRATUsageReportIsSet)
    {
        val[utility::conversions::to_string_t(U("rANSecondaryRATUsageReport"))] = ModelBase::toJson(m_RANSecondaryRATUsageReport);
    }

    return val;
}

bool PDUSessionChargingInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("chargingId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chargingId")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setChargingId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChargingId);
            setChargingId(refVal_setChargingId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sMFChargingId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sMFChargingId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSMFChargingId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSMFChargingId);
            setSMFChargingId(refVal_setSMFChargingId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userInformation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserInformation> refVal_setUserInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserInformation);
            setUserInformation(refVal_setUserInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userLocationinfo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userLocationinfo")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserLocation> refVal_setUserLocationinfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserLocationinfo);
            setUserLocationinfo(refVal_setUserLocationinfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserLocation> refVal_setMAPDUNon3GPPUserLocationInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMAPDUNon3GPPUserLocationInfo);
            setMAPDUNon3GPPUserLocationInfo(refVal_setMAPDUNon3GPPUserLocationInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userLocationTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userLocationTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUserLocationTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserLocationTime);
            setUserLocationTime(refVal_setUserLocationTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("presenceReportingAreaInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("presenceReportingAreaInformation")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<PresenceInfo>> refVal_setPresenceReportingAreaInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPresenceReportingAreaInformation);
            setPresenceReportingAreaInformation(refVal_setPresenceReportingAreaInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("uetimeZone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("uetimeZone")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUetimeZone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUetimeZone);
            setUetimeZone(refVal_setUetimeZone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pduSessionInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pduSessionInformation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PDUSessionInformation> refVal_setPduSessionInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPduSessionInformation);
            setPduSessionInformation(refVal_setPduSessionInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("unitCountInactivityTimer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unitCountInactivityTimer")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUnitCountInactivityTimer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUnitCountInactivityTimer);
            setUnitCountInactivityTimer(refVal_setUnitCountInactivityTimer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rANSecondaryRATUsageReport"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rANSecondaryRATUsageReport")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RANSecondaryRATUsageReport> refVal_setRANSecondaryRATUsageReport;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRANSecondaryRATUsageReport);
            setRANSecondaryRATUsageReport(refVal_setRANSecondaryRATUsageReport);
        }
    }
    return ok;
}

void PDUSessionChargingInformation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ChargingIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chargingId")), m_ChargingId));
    }
    if(m_SMFChargingIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sMFChargingId")), m_SMFChargingId));
    }
    if(m_UserInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userInformation")), m_UserInformation));
    }
    if(m_UserLocationinfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userLocationinfo")), m_UserLocationinfo));
    }
    if(m_MAPDUNon3GPPUserLocationInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo")), m_MAPDUNon3GPPUserLocationInfo));
    }
    if(m_UserLocationTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userLocationTime")), m_UserLocationTime));
    }
    if(m_PresenceReportingAreaInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("presenceReportingAreaInformation")), m_PresenceReportingAreaInformation));
    }
    if(m_UetimeZoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uetimeZone")), m_UetimeZone));
    }
    if(m_PduSessionInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pduSessionInformation")), m_PduSessionInformation));
    }
    if(m_UnitCountInactivityTimerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unitCountInactivityTimer")), m_UnitCountInactivityTimer));
    }
    if(m_RANSecondaryRATUsageReportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rANSecondaryRATUsageReport")), m_RANSecondaryRATUsageReport));
    }
}

bool PDUSessionChargingInformation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("chargingId"))))
    {
        int32_t refVal_setChargingId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chargingId"))), refVal_setChargingId );
        setChargingId(refVal_setChargingId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sMFChargingId"))))
    {
        utility::string_t refVal_setSMFChargingId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sMFChargingId"))), refVal_setSMFChargingId );
        setSMFChargingId(refVal_setSMFChargingId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userInformation"))))
    {
        std::shared_ptr<UserInformation> refVal_setUserInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userInformation"))), refVal_setUserInformation );
        setUserInformation(refVal_setUserInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userLocationinfo"))))
    {
        std::shared_ptr<UserLocation> refVal_setUserLocationinfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userLocationinfo"))), refVal_setUserLocationinfo );
        setUserLocationinfo(refVal_setUserLocationinfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo"))))
    {
        std::shared_ptr<UserLocation> refVal_setMAPDUNon3GPPUserLocationInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("mAPDUNon3GPPUserLocationInfo"))), refVal_setMAPDUNon3GPPUserLocationInfo );
        setMAPDUNon3GPPUserLocationInfo(refVal_setMAPDUNon3GPPUserLocationInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userLocationTime"))))
    {
        utility::datetime refVal_setUserLocationTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userLocationTime"))), refVal_setUserLocationTime );
        setUserLocationTime(refVal_setUserLocationTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("presenceReportingAreaInformation"))))
    {
        std::map<utility::string_t, std::shared_ptr<PresenceInfo>> refVal_setPresenceReportingAreaInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("presenceReportingAreaInformation"))), refVal_setPresenceReportingAreaInformation );
        setPresenceReportingAreaInformation(refVal_setPresenceReportingAreaInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("uetimeZone"))))
    {
        utility::string_t refVal_setUetimeZone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uetimeZone"))), refVal_setUetimeZone );
        setUetimeZone(refVal_setUetimeZone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pduSessionInformation"))))
    {
        std::shared_ptr<PDUSessionInformation> refVal_setPduSessionInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pduSessionInformation"))), refVal_setPduSessionInformation );
        setPduSessionInformation(refVal_setPduSessionInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("unitCountInactivityTimer"))))
    {
        int32_t refVal_setUnitCountInactivityTimer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unitCountInactivityTimer"))), refVal_setUnitCountInactivityTimer );
        setUnitCountInactivityTimer(refVal_setUnitCountInactivityTimer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rANSecondaryRATUsageReport"))))
    {
        std::shared_ptr<RANSecondaryRATUsageReport> refVal_setRANSecondaryRATUsageReport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rANSecondaryRATUsageReport"))), refVal_setRANSecondaryRATUsageReport );
        setRANSecondaryRATUsageReport(refVal_setRANSecondaryRATUsageReport);
    }
    return ok;
}

int32_t PDUSessionChargingInformation::getChargingId() const
{
    return m_ChargingId;
}

void PDUSessionChargingInformation::setChargingId(int32_t value)
{
    m_ChargingId = value;
    m_ChargingIdIsSet = true;
}

bool PDUSessionChargingInformation::chargingIdIsSet() const
{
    return m_ChargingIdIsSet;
}

void PDUSessionChargingInformation::unsetChargingId()
{
    m_ChargingIdIsSet = false;
}
utility::string_t PDUSessionChargingInformation::getSMFChargingId() const
{
    return m_SMFChargingId;
}

void PDUSessionChargingInformation::setSMFChargingId(const utility::string_t& value)
{
    m_SMFChargingId = value;
    m_SMFChargingIdIsSet = true;
}

bool PDUSessionChargingInformation::sMFChargingIdIsSet() const
{
    return m_SMFChargingIdIsSet;
}

void PDUSessionChargingInformation::unsetSMFChargingId()
{
    m_SMFChargingIdIsSet = false;
}
std::shared_ptr<UserInformation> PDUSessionChargingInformation::getUserInformation() const
{
    return m_UserInformation;
}

void PDUSessionChargingInformation::setUserInformation(const std::shared_ptr<UserInformation>& value)
{
    m_UserInformation = value;
    m_UserInformationIsSet = true;
}

bool PDUSessionChargingInformation::userInformationIsSet() const
{
    return m_UserInformationIsSet;
}

void PDUSessionChargingInformation::unsetUserInformation()
{
    m_UserInformationIsSet = false;
}
std::shared_ptr<UserLocation> PDUSessionChargingInformation::getUserLocationinfo() const
{
    return m_UserLocationinfo;
}

void PDUSessionChargingInformation::setUserLocationinfo(const std::shared_ptr<UserLocation>& value)
{
    m_UserLocationinfo = value;
    m_UserLocationinfoIsSet = true;
}

bool PDUSessionChargingInformation::userLocationinfoIsSet() const
{
    return m_UserLocationinfoIsSet;
}

void PDUSessionChargingInformation::unsetUserLocationinfo()
{
    m_UserLocationinfoIsSet = false;
}
std::shared_ptr<UserLocation> PDUSessionChargingInformation::getMAPDUNon3GPPUserLocationInfo() const
{
    return m_MAPDUNon3GPPUserLocationInfo;
}

void PDUSessionChargingInformation::setMAPDUNon3GPPUserLocationInfo(const std::shared_ptr<UserLocation>& value)
{
    m_MAPDUNon3GPPUserLocationInfo = value;
    m_MAPDUNon3GPPUserLocationInfoIsSet = true;
}

bool PDUSessionChargingInformation::mAPDUNon3GPPUserLocationInfoIsSet() const
{
    return m_MAPDUNon3GPPUserLocationInfoIsSet;
}

void PDUSessionChargingInformation::unsetMAPDUNon3GPPUserLocationInfo()
{
    m_MAPDUNon3GPPUserLocationInfoIsSet = false;
}
utility::datetime PDUSessionChargingInformation::getUserLocationTime() const
{
    return m_UserLocationTime;
}

void PDUSessionChargingInformation::setUserLocationTime(const utility::datetime& value)
{
    m_UserLocationTime = value;
    m_UserLocationTimeIsSet = true;
}

bool PDUSessionChargingInformation::userLocationTimeIsSet() const
{
    return m_UserLocationTimeIsSet;
}

void PDUSessionChargingInformation::unsetUserLocationTime()
{
    m_UserLocationTimeIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& PDUSessionChargingInformation::getPresenceReportingAreaInformation()
{
    return m_PresenceReportingAreaInformation;
}

void PDUSessionChargingInformation::setPresenceReportingAreaInformation(const std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& value)
{
    m_PresenceReportingAreaInformation = value;
    m_PresenceReportingAreaInformationIsSet = true;
}

bool PDUSessionChargingInformation::presenceReportingAreaInformationIsSet() const
{
    return m_PresenceReportingAreaInformationIsSet;
}

void PDUSessionChargingInformation::unsetPresenceReportingAreaInformation()
{
    m_PresenceReportingAreaInformationIsSet = false;
}
utility::string_t PDUSessionChargingInformation::getUetimeZone() const
{
    return m_UetimeZone;
}

void PDUSessionChargingInformation::setUetimeZone(const utility::string_t& value)
{
    m_UetimeZone = value;
    m_UetimeZoneIsSet = true;
}

bool PDUSessionChargingInformation::uetimeZoneIsSet() const
{
    return m_UetimeZoneIsSet;
}

void PDUSessionChargingInformation::unsetUetimeZone()
{
    m_UetimeZoneIsSet = false;
}
std::shared_ptr<PDUSessionInformation> PDUSessionChargingInformation::getPduSessionInformation() const
{
    return m_PduSessionInformation;
}

void PDUSessionChargingInformation::setPduSessionInformation(const std::shared_ptr<PDUSessionInformation>& value)
{
    m_PduSessionInformation = value;
    m_PduSessionInformationIsSet = true;
}

bool PDUSessionChargingInformation::pduSessionInformationIsSet() const
{
    return m_PduSessionInformationIsSet;
}

void PDUSessionChargingInformation::unsetPduSessionInformation()
{
    m_PduSessionInformationIsSet = false;
}
int32_t PDUSessionChargingInformation::getUnitCountInactivityTimer() const
{
    return m_UnitCountInactivityTimer;
}

void PDUSessionChargingInformation::setUnitCountInactivityTimer(int32_t value)
{
    m_UnitCountInactivityTimer = value;
    m_UnitCountInactivityTimerIsSet = true;
}

bool PDUSessionChargingInformation::unitCountInactivityTimerIsSet() const
{
    return m_UnitCountInactivityTimerIsSet;
}

void PDUSessionChargingInformation::unsetUnitCountInactivityTimer()
{
    m_UnitCountInactivityTimerIsSet = false;
}
std::shared_ptr<RANSecondaryRATUsageReport> PDUSessionChargingInformation::getRANSecondaryRATUsageReport() const
{
    return m_RANSecondaryRATUsageReport;
}

void PDUSessionChargingInformation::setRANSecondaryRATUsageReport(const std::shared_ptr<RANSecondaryRATUsageReport>& value)
{
    m_RANSecondaryRATUsageReport = value;
    m_RANSecondaryRATUsageReportIsSet = true;
}

bool PDUSessionChargingInformation::rANSecondaryRATUsageReportIsSet() const
{
    return m_RANSecondaryRATUsageReportIsSet;
}

void PDUSessionChargingInformation::unsetRANSecondaryRATUsageReport()
{
    m_RANSecondaryRATUsageReportIsSet = false;
}
}
}
}
}


