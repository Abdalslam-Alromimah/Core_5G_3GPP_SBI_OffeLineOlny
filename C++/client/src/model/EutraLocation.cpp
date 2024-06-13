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



#include "CppRestOpenAPIClient/model/EutraLocation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



EutraLocation::EutraLocation()
{
    m_TaiIsSet = false;
    m_IgnoreTai = false;
    m_IgnoreTaiIsSet = false;
    m_EcgiIsSet = false;
    m_IgnoreEcgi = false;
    m_IgnoreEcgiIsSet = false;
    m_AgeOfLocationInformation = 0;
    m_AgeOfLocationInformationIsSet = false;
    m_UeLocationTimestamp = utility::datetime();
    m_UeLocationTimestampIsSet = false;
    m_GeographicalInformation = utility::conversions::to_string_t("");
    m_GeographicalInformationIsSet = false;
    m_GeodeticInformation = utility::conversions::to_string_t("");
    m_GeodeticInformationIsSet = false;
    m_GlobalNgenbIdIsSet = false;
    m_GlobalENbIdIsSet = false;
}

EutraLocation::~EutraLocation()
{
}

void EutraLocation::validate()
{
    // TODO: implement validation
}

web::json::value EutraLocation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TaiIsSet)
    {
        val[utility::conversions::to_string_t(U("tai"))] = ModelBase::toJson(m_Tai);
    }
    if(m_IgnoreTaiIsSet)
    {
        val[utility::conversions::to_string_t(U("ignoreTai"))] = ModelBase::toJson(m_IgnoreTai);
    }
    if(m_EcgiIsSet)
    {
        val[utility::conversions::to_string_t(U("ecgi"))] = ModelBase::toJson(m_Ecgi);
    }
    if(m_IgnoreEcgiIsSet)
    {
        val[utility::conversions::to_string_t(U("ignoreEcgi"))] = ModelBase::toJson(m_IgnoreEcgi);
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
    if(m_GlobalNgenbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("globalNgenbId"))] = ModelBase::toJson(m_GlobalNgenbId);
    }
    if(m_GlobalENbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("globalENbId"))] = ModelBase::toJson(m_GlobalENbId);
    }

    return val;
}

bool EutraLocation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("ignoreTai"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ignoreTai")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIgnoreTai;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIgnoreTai);
            setIgnoreTai(refVal_setIgnoreTai);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ecgi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ecgi")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ecgi> refVal_setEcgi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEcgi);
            setEcgi(refVal_setEcgi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ignoreEcgi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ignoreEcgi")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIgnoreEcgi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIgnoreEcgi);
            setIgnoreEcgi(refVal_setIgnoreEcgi);
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
    if(val.has_field(utility::conversions::to_string_t(U("globalNgenbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("globalNgenbId")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GlobalRanNodeId> refVal_setGlobalNgenbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGlobalNgenbId);
            setGlobalNgenbId(refVal_setGlobalNgenbId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("globalENbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("globalENbId")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GlobalRanNodeId> refVal_setGlobalENbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGlobalENbId);
            setGlobalENbId(refVal_setGlobalENbId);
        }
    }
    return ok;
}

void EutraLocation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IgnoreTaiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ignoreTai")), m_IgnoreTai));
    }
    if(m_EcgiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ecgi")), m_Ecgi));
    }
    if(m_IgnoreEcgiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ignoreEcgi")), m_IgnoreEcgi));
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
    if(m_GlobalNgenbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("globalNgenbId")), m_GlobalNgenbId));
    }
    if(m_GlobalENbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("globalENbId")), m_GlobalENbId));
    }
}

bool EutraLocation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("ignoreTai"))))
    {
        bool refVal_setIgnoreTai;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ignoreTai"))), refVal_setIgnoreTai );
        setIgnoreTai(refVal_setIgnoreTai);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ecgi"))))
    {
        std::shared_ptr<Ecgi> refVal_setEcgi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ecgi"))), refVal_setEcgi );
        setEcgi(refVal_setEcgi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ignoreEcgi"))))
    {
        bool refVal_setIgnoreEcgi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ignoreEcgi"))), refVal_setIgnoreEcgi );
        setIgnoreEcgi(refVal_setIgnoreEcgi);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("globalNgenbId"))))
    {
        std::shared_ptr<GlobalRanNodeId> refVal_setGlobalNgenbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("globalNgenbId"))), refVal_setGlobalNgenbId );
        setGlobalNgenbId(refVal_setGlobalNgenbId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("globalENbId"))))
    {
        std::shared_ptr<GlobalRanNodeId> refVal_setGlobalENbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("globalENbId"))), refVal_setGlobalENbId );
        setGlobalENbId(refVal_setGlobalENbId);
    }
    return ok;
}

std::shared_ptr<Tai> EutraLocation::getTai() const
{
    return m_Tai;
}

void EutraLocation::setTai(const std::shared_ptr<Tai>& value)
{
    m_Tai = value;
    m_TaiIsSet = true;
}

bool EutraLocation::taiIsSet() const
{
    return m_TaiIsSet;
}

void EutraLocation::unsetTai()
{
    m_TaiIsSet = false;
}
bool EutraLocation::isIgnoreTai() const
{
    return m_IgnoreTai;
}

void EutraLocation::setIgnoreTai(bool value)
{
    m_IgnoreTai = value;
    m_IgnoreTaiIsSet = true;
}

bool EutraLocation::ignoreTaiIsSet() const
{
    return m_IgnoreTaiIsSet;
}

void EutraLocation::unsetIgnoreTai()
{
    m_IgnoreTaiIsSet = false;
}
std::shared_ptr<Ecgi> EutraLocation::getEcgi() const
{
    return m_Ecgi;
}

void EutraLocation::setEcgi(const std::shared_ptr<Ecgi>& value)
{
    m_Ecgi = value;
    m_EcgiIsSet = true;
}

bool EutraLocation::ecgiIsSet() const
{
    return m_EcgiIsSet;
}

void EutraLocation::unsetEcgi()
{
    m_EcgiIsSet = false;
}
bool EutraLocation::isIgnoreEcgi() const
{
    return m_IgnoreEcgi;
}

void EutraLocation::setIgnoreEcgi(bool value)
{
    m_IgnoreEcgi = value;
    m_IgnoreEcgiIsSet = true;
}

bool EutraLocation::ignoreEcgiIsSet() const
{
    return m_IgnoreEcgiIsSet;
}

void EutraLocation::unsetIgnoreEcgi()
{
    m_IgnoreEcgiIsSet = false;
}
int32_t EutraLocation::getAgeOfLocationInformation() const
{
    return m_AgeOfLocationInformation;
}

void EutraLocation::setAgeOfLocationInformation(int32_t value)
{
    m_AgeOfLocationInformation = value;
    m_AgeOfLocationInformationIsSet = true;
}

bool EutraLocation::ageOfLocationInformationIsSet() const
{
    return m_AgeOfLocationInformationIsSet;
}

void EutraLocation::unsetAgeOfLocationInformation()
{
    m_AgeOfLocationInformationIsSet = false;
}
utility::datetime EutraLocation::getUeLocationTimestamp() const
{
    return m_UeLocationTimestamp;
}

void EutraLocation::setUeLocationTimestamp(const utility::datetime& value)
{
    m_UeLocationTimestamp = value;
    m_UeLocationTimestampIsSet = true;
}

bool EutraLocation::ueLocationTimestampIsSet() const
{
    return m_UeLocationTimestampIsSet;
}

void EutraLocation::unsetUeLocationTimestamp()
{
    m_UeLocationTimestampIsSet = false;
}
utility::string_t EutraLocation::getGeographicalInformation() const
{
    return m_GeographicalInformation;
}

void EutraLocation::setGeographicalInformation(const utility::string_t& value)
{
    m_GeographicalInformation = value;
    m_GeographicalInformationIsSet = true;
}

bool EutraLocation::geographicalInformationIsSet() const
{
    return m_GeographicalInformationIsSet;
}

void EutraLocation::unsetGeographicalInformation()
{
    m_GeographicalInformationIsSet = false;
}
utility::string_t EutraLocation::getGeodeticInformation() const
{
    return m_GeodeticInformation;
}

void EutraLocation::setGeodeticInformation(const utility::string_t& value)
{
    m_GeodeticInformation = value;
    m_GeodeticInformationIsSet = true;
}

bool EutraLocation::geodeticInformationIsSet() const
{
    return m_GeodeticInformationIsSet;
}

void EutraLocation::unsetGeodeticInformation()
{
    m_GeodeticInformationIsSet = false;
}
std::shared_ptr<GlobalRanNodeId> EutraLocation::getGlobalNgenbId() const
{
    return m_GlobalNgenbId;
}

void EutraLocation::setGlobalNgenbId(const std::shared_ptr<GlobalRanNodeId>& value)
{
    m_GlobalNgenbId = value;
    m_GlobalNgenbIdIsSet = true;
}

bool EutraLocation::globalNgenbIdIsSet() const
{
    return m_GlobalNgenbIdIsSet;
}

void EutraLocation::unsetGlobalNgenbId()
{
    m_GlobalNgenbIdIsSet = false;
}
std::shared_ptr<GlobalRanNodeId> EutraLocation::getGlobalENbId() const
{
    return m_GlobalENbId;
}

void EutraLocation::setGlobalENbId(const std::shared_ptr<GlobalRanNodeId>& value)
{
    m_GlobalENbId = value;
    m_GlobalENbIdIsSet = true;
}

bool EutraLocation::globalENbIdIsSet() const
{
    return m_GlobalENbIdIsSet;
}

void EutraLocation::unsetGlobalENbId()
{
    m_GlobalENbIdIsSet = false;
}
}
}
}
}


