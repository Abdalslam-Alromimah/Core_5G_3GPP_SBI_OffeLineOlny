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



#include "CppRestOpenAPIClient/model/QFIContainerInformation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



QFIContainerInformation::QFIContainerInformation()
{
    m_QFI = 0;
    m_QFIIsSet = false;
    m_TimeofFirstUsage = utility::datetime();
    m_TimeofFirstUsageIsSet = false;
    m_TimeofLastUsage = utility::datetime();
    m_TimeofLastUsageIsSet = false;
    m_QoSInformationIsSet = false;
    m_QoSCharacteristicsIsSet = false;
    m_UserLocationInformationIsSet = false;
    m_UetimeZone = utility::conversions::to_string_t("");
    m_UetimeZoneIsSet = false;
    m_PresenceReportingAreaInformationIsSet = false;
    m_RATTypeIsSet = false;
    m_ServingNetworkFunctionIDIsSet = false;
    m_r_3gppPSDataOffStatusIsSet = false;
}

QFIContainerInformation::~QFIContainerInformation()
{
}

void QFIContainerInformation::validate()
{
    // TODO: implement validation
}

web::json::value QFIContainerInformation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_QFIIsSet)
    {
        val[utility::conversions::to_string_t(U("qFI"))] = ModelBase::toJson(m_QFI);
    }
    if(m_TimeofFirstUsageIsSet)
    {
        val[utility::conversions::to_string_t(U("timeofFirstUsage"))] = ModelBase::toJson(m_TimeofFirstUsage);
    }
    if(m_TimeofLastUsageIsSet)
    {
        val[utility::conversions::to_string_t(U("timeofLastUsage"))] = ModelBase::toJson(m_TimeofLastUsage);
    }
    if(m_QoSInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("qoSInformation"))] = ModelBase::toJson(m_QoSInformation);
    }
    if(m_QoSCharacteristicsIsSet)
    {
        val[utility::conversions::to_string_t(U("qoSCharacteristics"))] = ModelBase::toJson(m_QoSCharacteristics);
    }
    if(m_UserLocationInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("userLocationInformation"))] = ModelBase::toJson(m_UserLocationInformation);
    }
    if(m_UetimeZoneIsSet)
    {
        val[utility::conversions::to_string_t(U("uetimeZone"))] = ModelBase::toJson(m_UetimeZone);
    }
    if(m_PresenceReportingAreaInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("presenceReportingAreaInformation"))] = ModelBase::toJson(m_PresenceReportingAreaInformation);
    }
    if(m_RATTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("rATType"))] = ModelBase::toJson(m_RATType);
    }
    if(m_ServingNetworkFunctionIDIsSet)
    {
        val[utility::conversions::to_string_t(U("servingNetworkFunctionID"))] = ModelBase::toJson(m_ServingNetworkFunctionID);
    }
    if(m_r_3gppPSDataOffStatusIsSet)
    {
        val[utility::conversions::to_string_t(U("3gppPSDataOffStatus"))] = ModelBase::toJson(m_r_3gppPSDataOffStatus);
    }

    return val;
}

bool QFIContainerInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("qFI"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qFI")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setQFI;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQFI);
            setQFI(refVal_setQFI);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timeofFirstUsage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timeofFirstUsage")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setTimeofFirstUsage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeofFirstUsage);
            setTimeofFirstUsage(refVal_setTimeofFirstUsage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timeofLastUsage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timeofLastUsage")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setTimeofLastUsage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeofLastUsage);
            setTimeofLastUsage(refVal_setTimeofLastUsage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qoSInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qoSInformation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<QosData> refVal_setQoSInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQoSInformation);
            setQoSInformation(refVal_setQoSInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qoSCharacteristics"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qoSCharacteristics")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<QosCharacteristics> refVal_setQoSCharacteristics;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQoSCharacteristics);
            setQoSCharacteristics(refVal_setQoSCharacteristics);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userLocationInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userLocationInformation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserLocation> refVal_setUserLocationInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserLocationInformation);
            setUserLocationInformation(refVal_setUserLocationInformation);
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
    if(val.has_field(utility::conversions::to_string_t(U("rATType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rATType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RatType> refVal_setRATType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRATType);
            setRATType(refVal_setRATType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("servingNetworkFunctionID"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("servingNetworkFunctionID")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ServingNetworkFunctionID>> refVal_setServingNetworkFunctionID;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServingNetworkFunctionID);
            setServingNetworkFunctionID(refVal_setServingNetworkFunctionID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("3gppPSDataOffStatus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("3gppPSDataOffStatus")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<r_3GPPPSDataOffStatus> refVal_setR3gppPSDataOffStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setR3gppPSDataOffStatus);
            setR3gppPSDataOffStatus(refVal_setR3gppPSDataOffStatus);
        }
    }
    return ok;
}

void QFIContainerInformation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_QFIIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qFI")), m_QFI));
    }
    if(m_TimeofFirstUsageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timeofFirstUsage")), m_TimeofFirstUsage));
    }
    if(m_TimeofLastUsageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timeofLastUsage")), m_TimeofLastUsage));
    }
    if(m_QoSInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qoSInformation")), m_QoSInformation));
    }
    if(m_QoSCharacteristicsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qoSCharacteristics")), m_QoSCharacteristics));
    }
    if(m_UserLocationInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userLocationInformation")), m_UserLocationInformation));
    }
    if(m_UetimeZoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uetimeZone")), m_UetimeZone));
    }
    if(m_PresenceReportingAreaInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("presenceReportingAreaInformation")), m_PresenceReportingAreaInformation));
    }
    if(m_RATTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rATType")), m_RATType));
    }
    if(m_ServingNetworkFunctionIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("servingNetworkFunctionID")), m_ServingNetworkFunctionID));
    }
    if(m_r_3gppPSDataOffStatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("3gppPSDataOffStatus")), m_r_3gppPSDataOffStatus));
    }
}

bool QFIContainerInformation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("qFI"))))
    {
        int32_t refVal_setQFI;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qFI"))), refVal_setQFI );
        setQFI(refVal_setQFI);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timeofFirstUsage"))))
    {
        utility::datetime refVal_setTimeofFirstUsage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timeofFirstUsage"))), refVal_setTimeofFirstUsage );
        setTimeofFirstUsage(refVal_setTimeofFirstUsage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timeofLastUsage"))))
    {
        utility::datetime refVal_setTimeofLastUsage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timeofLastUsage"))), refVal_setTimeofLastUsage );
        setTimeofLastUsage(refVal_setTimeofLastUsage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qoSInformation"))))
    {
        std::shared_ptr<QosData> refVal_setQoSInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qoSInformation"))), refVal_setQoSInformation );
        setQoSInformation(refVal_setQoSInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qoSCharacteristics"))))
    {
        std::shared_ptr<QosCharacteristics> refVal_setQoSCharacteristics;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qoSCharacteristics"))), refVal_setQoSCharacteristics );
        setQoSCharacteristics(refVal_setQoSCharacteristics);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userLocationInformation"))))
    {
        std::shared_ptr<UserLocation> refVal_setUserLocationInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userLocationInformation"))), refVal_setUserLocationInformation );
        setUserLocationInformation(refVal_setUserLocationInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("uetimeZone"))))
    {
        utility::string_t refVal_setUetimeZone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uetimeZone"))), refVal_setUetimeZone );
        setUetimeZone(refVal_setUetimeZone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("presenceReportingAreaInformation"))))
    {
        std::map<utility::string_t, std::shared_ptr<PresenceInfo>> refVal_setPresenceReportingAreaInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("presenceReportingAreaInformation"))), refVal_setPresenceReportingAreaInformation );
        setPresenceReportingAreaInformation(refVal_setPresenceReportingAreaInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rATType"))))
    {
        std::shared_ptr<RatType> refVal_setRATType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rATType"))), refVal_setRATType );
        setRATType(refVal_setRATType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("servingNetworkFunctionID"))))
    {
        std::vector<std::shared_ptr<ServingNetworkFunctionID>> refVal_setServingNetworkFunctionID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("servingNetworkFunctionID"))), refVal_setServingNetworkFunctionID );
        setServingNetworkFunctionID(refVal_setServingNetworkFunctionID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("3gppPSDataOffStatus"))))
    {
        std::shared_ptr<r_3GPPPSDataOffStatus> refVal_setR3gppPSDataOffStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("3gppPSDataOffStatus"))), refVal_setR3gppPSDataOffStatus );
        setR3gppPSDataOffStatus(refVal_setR3gppPSDataOffStatus);
    }
    return ok;
}

int32_t QFIContainerInformation::getQFI() const
{
    return m_QFI;
}

void QFIContainerInformation::setQFI(int32_t value)
{
    m_QFI = value;
    m_QFIIsSet = true;
}

bool QFIContainerInformation::qFIIsSet() const
{
    return m_QFIIsSet;
}

void QFIContainerInformation::unsetQFI()
{
    m_QFIIsSet = false;
}
utility::datetime QFIContainerInformation::getTimeofFirstUsage() const
{
    return m_TimeofFirstUsage;
}

void QFIContainerInformation::setTimeofFirstUsage(const utility::datetime& value)
{
    m_TimeofFirstUsage = value;
    m_TimeofFirstUsageIsSet = true;
}

bool QFIContainerInformation::timeofFirstUsageIsSet() const
{
    return m_TimeofFirstUsageIsSet;
}

void QFIContainerInformation::unsetTimeofFirstUsage()
{
    m_TimeofFirstUsageIsSet = false;
}
utility::datetime QFIContainerInformation::getTimeofLastUsage() const
{
    return m_TimeofLastUsage;
}

void QFIContainerInformation::setTimeofLastUsage(const utility::datetime& value)
{
    m_TimeofLastUsage = value;
    m_TimeofLastUsageIsSet = true;
}

bool QFIContainerInformation::timeofLastUsageIsSet() const
{
    return m_TimeofLastUsageIsSet;
}

void QFIContainerInformation::unsetTimeofLastUsage()
{
    m_TimeofLastUsageIsSet = false;
}
std::shared_ptr<QosData> QFIContainerInformation::getQoSInformation() const
{
    return m_QoSInformation;
}

void QFIContainerInformation::setQoSInformation(const std::shared_ptr<QosData>& value)
{
    m_QoSInformation = value;
    m_QoSInformationIsSet = true;
}

bool QFIContainerInformation::qoSInformationIsSet() const
{
    return m_QoSInformationIsSet;
}

void QFIContainerInformation::unsetQoSInformation()
{
    m_QoSInformationIsSet = false;
}
std::shared_ptr<QosCharacteristics> QFIContainerInformation::getQoSCharacteristics() const
{
    return m_QoSCharacteristics;
}

void QFIContainerInformation::setQoSCharacteristics(const std::shared_ptr<QosCharacteristics>& value)
{
    m_QoSCharacteristics = value;
    m_QoSCharacteristicsIsSet = true;
}

bool QFIContainerInformation::qoSCharacteristicsIsSet() const
{
    return m_QoSCharacteristicsIsSet;
}

void QFIContainerInformation::unsetQoSCharacteristics()
{
    m_QoSCharacteristicsIsSet = false;
}
std::shared_ptr<UserLocation> QFIContainerInformation::getUserLocationInformation() const
{
    return m_UserLocationInformation;
}

void QFIContainerInformation::setUserLocationInformation(const std::shared_ptr<UserLocation>& value)
{
    m_UserLocationInformation = value;
    m_UserLocationInformationIsSet = true;
}

bool QFIContainerInformation::userLocationInformationIsSet() const
{
    return m_UserLocationInformationIsSet;
}

void QFIContainerInformation::unsetUserLocationInformation()
{
    m_UserLocationInformationIsSet = false;
}
utility::string_t QFIContainerInformation::getUetimeZone() const
{
    return m_UetimeZone;
}

void QFIContainerInformation::setUetimeZone(const utility::string_t& value)
{
    m_UetimeZone = value;
    m_UetimeZoneIsSet = true;
}

bool QFIContainerInformation::uetimeZoneIsSet() const
{
    return m_UetimeZoneIsSet;
}

void QFIContainerInformation::unsetUetimeZone()
{
    m_UetimeZoneIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& QFIContainerInformation::getPresenceReportingAreaInformation()
{
    return m_PresenceReportingAreaInformation;
}

void QFIContainerInformation::setPresenceReportingAreaInformation(const std::map<utility::string_t, std::shared_ptr<PresenceInfo>>& value)
{
    m_PresenceReportingAreaInformation = value;
    m_PresenceReportingAreaInformationIsSet = true;
}

bool QFIContainerInformation::presenceReportingAreaInformationIsSet() const
{
    return m_PresenceReportingAreaInformationIsSet;
}

void QFIContainerInformation::unsetPresenceReportingAreaInformation()
{
    m_PresenceReportingAreaInformationIsSet = false;
}
std::shared_ptr<RatType> QFIContainerInformation::getRATType() const
{
    return m_RATType;
}

void QFIContainerInformation::setRATType(const std::shared_ptr<RatType>& value)
{
    m_RATType = value;
    m_RATTypeIsSet = true;
}

bool QFIContainerInformation::rATTypeIsSet() const
{
    return m_RATTypeIsSet;
}

void QFIContainerInformation::unsetRATType()
{
    m_RATTypeIsSet = false;
}
std::vector<std::shared_ptr<ServingNetworkFunctionID>>& QFIContainerInformation::getServingNetworkFunctionID()
{
    return m_ServingNetworkFunctionID;
}

void QFIContainerInformation::setServingNetworkFunctionID(const std::vector<std::shared_ptr<ServingNetworkFunctionID>>& value)
{
    m_ServingNetworkFunctionID = value;
    m_ServingNetworkFunctionIDIsSet = true;
}

bool QFIContainerInformation::servingNetworkFunctionIDIsSet() const
{
    return m_ServingNetworkFunctionIDIsSet;
}

void QFIContainerInformation::unsetServingNetworkFunctionID()
{
    m_ServingNetworkFunctionIDIsSet = false;
}
std::shared_ptr<r_3GPPPSDataOffStatus> QFIContainerInformation::getR3gppPSDataOffStatus() const
{
    return m_r_3gppPSDataOffStatus;
}

void QFIContainerInformation::setR3gppPSDataOffStatus(const std::shared_ptr<r_3GPPPSDataOffStatus>& value)
{
    m_r_3gppPSDataOffStatus = value;
    m_r_3gppPSDataOffStatusIsSet = true;
}

bool QFIContainerInformation::r3gppPSDataOffStatusIsSet() const
{
    return m_r_3gppPSDataOffStatusIsSet;
}

void QFIContainerInformation::unsetr_3gppPSDataOffStatus()
{
    m_r_3gppPSDataOffStatusIsSet = false;
}
}
}
}
}


