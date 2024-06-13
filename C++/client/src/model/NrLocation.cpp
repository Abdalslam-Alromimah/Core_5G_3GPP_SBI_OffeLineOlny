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



#include "CppRestOpenAPIClient/model/NrLocation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



NrLocation::NrLocation()
{
    m_TaiIsSet = false;
    m_NcgiIsSet = false;
    m_IgnoreNcgi = false;
    m_IgnoreNcgiIsSet = false;
    m_AgeOfLocationInformation = 0;
    m_AgeOfLocationInformationIsSet = false;
    m_UeLocationTimestamp = utility::datetime();
    m_UeLocationTimestampIsSet = false;
    m_GeographicalInformation = utility::conversions::to_string_t("");
    m_GeographicalInformationIsSet = false;
    m_GeodeticInformation = utility::conversions::to_string_t("");
    m_GeodeticInformationIsSet = false;
    m_GlobalGnbIdIsSet = false;
    m_NtnTaiInfoIsSet = false;
}

NrLocation::~NrLocation()
{
}

void NrLocation::validate()
{
    // TODO: implement validation
}

web::json::value NrLocation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TaiIsSet)
    {
        val[utility::conversions::to_string_t(U("tai"))] = ModelBase::toJson(m_Tai);
    }
    if(m_NcgiIsSet)
    {
        val[utility::conversions::to_string_t(U("ncgi"))] = ModelBase::toJson(m_Ncgi);
    }
    if(m_IgnoreNcgiIsSet)
    {
        val[utility::conversions::to_string_t(U("ignoreNcgi"))] = ModelBase::toJson(m_IgnoreNcgi);
    }
    if(m_AgeOfLocationInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("ageOfLocationInformation"))] = ModelBase::toJson(m_AgeOfLocationInformation);
    }
    if(m_UeLocationTimestampIsSet)
    {
        val[utility::conversions::to_string_t(U("ueLocationTimestamp"))] = ModelBase::toJson(m_UeLocationTimestamp);
    }
    if(m_GeographicalInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("geographicalInformation"))] = ModelBase::toJson(m_GeographicalInformation);
    }
    if(m_GeodeticInformationIsSet)
    {
        val[utility::conversions::to_string_t(U("geodeticInformation"))] = ModelBase::toJson(m_GeodeticInformation);
    }
    if(m_GlobalGnbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("globalGnbId"))] = ModelBase::toJson(m_GlobalGnbId);
    }
    if(m_NtnTaiInfoIsSet)
    {
        val[utility::conversions::to_string_t(U("ntnTaiInfo"))] = ModelBase::toJson(m_NtnTaiInfo);
    }

    return val;
}

bool NrLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tai"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tai")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Tai> refVal_setTai;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTai);
            setTai(refVal_setTai);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ncgi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ncgi")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ncgi> refVal_setNcgi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNcgi);
            setNcgi(refVal_setNcgi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ignoreNcgi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ignoreNcgi")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIgnoreNcgi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIgnoreNcgi);
            setIgnoreNcgi(refVal_setIgnoreNcgi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ageOfLocationInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ageOfLocationInformation")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAgeOfLocationInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAgeOfLocationInformation);
            setAgeOfLocationInformation(refVal_setAgeOfLocationInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ueLocationTimestamp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ueLocationTimestamp")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUeLocationTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUeLocationTimestamp);
            setUeLocationTimestamp(refVal_setUeLocationTimestamp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("geographicalInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("geographicalInformation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGeographicalInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGeographicalInformation);
            setGeographicalInformation(refVal_setGeographicalInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("geodeticInformation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("geodeticInformation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGeodeticInformation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGeodeticInformation);
            setGeodeticInformation(refVal_setGeodeticInformation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("globalGnbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("globalGnbId")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GlobalRanNodeId> refVal_setGlobalGnbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGlobalGnbId);
            setGlobalGnbId(refVal_setGlobalGnbId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ntnTaiInfo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ntnTaiInfo")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NtnTaiInfo> refVal_setNtnTaiInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNtnTaiInfo);
            setNtnTaiInfo(refVal_setNtnTaiInfo);
        }
    }
    return ok;
}

void NrLocation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TaiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tai")), m_Tai));
    }
    if(m_NcgiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ncgi")), m_Ncgi));
    }
    if(m_IgnoreNcgiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ignoreNcgi")), m_IgnoreNcgi));
    }
    if(m_AgeOfLocationInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ageOfLocationInformation")), m_AgeOfLocationInformation));
    }
    if(m_UeLocationTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ueLocationTimestamp")), m_UeLocationTimestamp));
    }
    if(m_GeographicalInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("geographicalInformation")), m_GeographicalInformation));
    }
    if(m_GeodeticInformationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("geodeticInformation")), m_GeodeticInformation));
    }
    if(m_GlobalGnbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("globalGnbId")), m_GlobalGnbId));
    }
    if(m_NtnTaiInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ntnTaiInfo")), m_NtnTaiInfo));
    }
}

bool NrLocation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tai"))))
    {
        std::shared_ptr<Tai> refVal_setTai;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tai"))), refVal_setTai );
        setTai(refVal_setTai);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ncgi"))))
    {
        std::shared_ptr<Ncgi> refVal_setNcgi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ncgi"))), refVal_setNcgi );
        setNcgi(refVal_setNcgi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ignoreNcgi"))))
    {
        bool refVal_setIgnoreNcgi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ignoreNcgi"))), refVal_setIgnoreNcgi );
        setIgnoreNcgi(refVal_setIgnoreNcgi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ageOfLocationInformation"))))
    {
        int32_t refVal_setAgeOfLocationInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ageOfLocationInformation"))), refVal_setAgeOfLocationInformation );
        setAgeOfLocationInformation(refVal_setAgeOfLocationInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ueLocationTimestamp"))))
    {
        utility::datetime refVal_setUeLocationTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ueLocationTimestamp"))), refVal_setUeLocationTimestamp );
        setUeLocationTimestamp(refVal_setUeLocationTimestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("geographicalInformation"))))
    {
        utility::string_t refVal_setGeographicalInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("geographicalInformation"))), refVal_setGeographicalInformation );
        setGeographicalInformation(refVal_setGeographicalInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("geodeticInformation"))))
    {
        utility::string_t refVal_setGeodeticInformation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("geodeticInformation"))), refVal_setGeodeticInformation );
        setGeodeticInformation(refVal_setGeodeticInformation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("globalGnbId"))))
    {
        std::shared_ptr<GlobalRanNodeId> refVal_setGlobalGnbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("globalGnbId"))), refVal_setGlobalGnbId );
        setGlobalGnbId(refVal_setGlobalGnbId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ntnTaiInfo"))))
    {
        std::shared_ptr<NtnTaiInfo> refVal_setNtnTaiInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ntnTaiInfo"))), refVal_setNtnTaiInfo );
        setNtnTaiInfo(refVal_setNtnTaiInfo);
    }
    return ok;
}

std::shared_ptr<Tai> NrLocation::getTai() const
{
    return m_Tai;
}

void NrLocation::setTai(const std::shared_ptr<Tai>& value)
{
    m_Tai = value;
    m_TaiIsSet = true;
}

bool NrLocation::taiIsSet() const
{
    return m_TaiIsSet;
}

void NrLocation::unsetTai()
{
    m_TaiIsSet = false;
}
std::shared_ptr<Ncgi> NrLocation::getNcgi() const
{
    return m_Ncgi;
}

void NrLocation::setNcgi(const std::shared_ptr<Ncgi>& value)
{
    m_Ncgi = value;
    m_NcgiIsSet = true;
}

bool NrLocation::ncgiIsSet() const
{
    return m_NcgiIsSet;
}

void NrLocation::unsetNcgi()
{
    m_NcgiIsSet = false;
}
bool NrLocation::isIgnoreNcgi() const
{
    return m_IgnoreNcgi;
}

void NrLocation::setIgnoreNcgi(bool value)
{
    m_IgnoreNcgi = value;
    m_IgnoreNcgiIsSet = true;
}

bool NrLocation::ignoreNcgiIsSet() const
{
    return m_IgnoreNcgiIsSet;
}

void NrLocation::unsetIgnoreNcgi()
{
    m_IgnoreNcgiIsSet = false;
}
int32_t NrLocation::getAgeOfLocationInformation() const
{
    return m_AgeOfLocationInformation;
}

void NrLocation::setAgeOfLocationInformation(int32_t value)
{
    m_AgeOfLocationInformation = value;
    m_AgeOfLocationInformationIsSet = true;
}

bool NrLocation::ageOfLocationInformationIsSet() const
{
    return m_AgeOfLocationInformationIsSet;
}

void NrLocation::unsetAgeOfLocationInformation()
{
    m_AgeOfLocationInformationIsSet = false;
}
utility::datetime NrLocation::getUeLocationTimestamp() const
{
    return m_UeLocationTimestamp;
}

void NrLocation::setUeLocationTimestamp(const utility::datetime& value)
{
    m_UeLocationTimestamp = value;
    m_UeLocationTimestampIsSet = true;
}

bool NrLocation::ueLocationTimestampIsSet() const
{
    return m_UeLocationTimestampIsSet;
}

void NrLocation::unsetUeLocationTimestamp()
{
    m_UeLocationTimestampIsSet = false;
}
utility::string_t NrLocation::getGeographicalInformation() const
{
    return m_GeographicalInformation;
}

void NrLocation::setGeographicalInformation(const utility::string_t& value)
{
    m_GeographicalInformation = value;
    m_GeographicalInformationIsSet = true;
}

bool NrLocation::geographicalInformationIsSet() const
{
    return m_GeographicalInformationIsSet;
}

void NrLocation::unsetGeographicalInformation()
{
    m_GeographicalInformationIsSet = false;
}
utility::string_t NrLocation::getGeodeticInformation() const
{
    return m_GeodeticInformation;
}

void NrLocation::setGeodeticInformation(const utility::string_t& value)
{
    m_GeodeticInformation = value;
    m_GeodeticInformationIsSet = true;
}

bool NrLocation::geodeticInformationIsSet() const
{
    return m_GeodeticInformationIsSet;
}

void NrLocation::unsetGeodeticInformation()
{
    m_GeodeticInformationIsSet = false;
}
std::shared_ptr<GlobalRanNodeId> NrLocation::getGlobalGnbId() const
{
    return m_GlobalGnbId;
}

void NrLocation::setGlobalGnbId(const std::shared_ptr<GlobalRanNodeId>& value)
{
    m_GlobalGnbId = value;
    m_GlobalGnbIdIsSet = true;
}

bool NrLocation::globalGnbIdIsSet() const
{
    return m_GlobalGnbIdIsSet;
}

void NrLocation::unsetGlobalGnbId()
{
    m_GlobalGnbIdIsSet = false;
}
std::shared_ptr<NtnTaiInfo> NrLocation::getNtnTaiInfo() const
{
    return m_NtnTaiInfo;
}

void NrLocation::setNtnTaiInfo(const std::shared_ptr<NtnTaiInfo>& value)
{
    m_NtnTaiInfo = value;
    m_NtnTaiInfoIsSet = true;
}

bool NrLocation::ntnTaiInfoIsSet() const
{
    return m_NtnTaiInfoIsSet;
}

void NrLocation::unsetNtnTaiInfo()
{
    m_NtnTaiInfoIsSet = false;
}
}
}
}
}


