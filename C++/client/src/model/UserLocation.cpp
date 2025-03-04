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



#include "CppRestOpenAPIClient/model/UserLocation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



UserLocation::UserLocation()
{
    m_EutraLocationIsSet = false;
    m_NrLocationIsSet = false;
    m_N3gaLocationIsSet = false;
    m_UtraLocationIsSet = false;
    m_GeraLocationIsSet = false;
}

UserLocation::~UserLocation()
{
}

void UserLocation::validate()
{
    // TODO: implement validation
}

web::json::value UserLocation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EutraLocationIsSet)
    {
        val[utility::conversions::to_string_t(U("eutraLocation"))] = ModelBase::toJson(m_EutraLocation);
    }
    if(m_NrLocationIsSet)
    {
        val[utility::conversions::to_string_t(U("nrLocation"))] = ModelBase::toJson(m_NrLocation);
    }
    if(m_N3gaLocationIsSet)
    {
        val[utility::conversions::to_string_t(U("n3gaLocation"))] = ModelBase::toJson(m_N3gaLocation);
    }
    if(m_UtraLocationIsSet)
    {
        val[utility::conversions::to_string_t(U("utraLocation"))] = ModelBase::toJson(m_UtraLocation);
    }
    if(m_GeraLocationIsSet)
    {
        val[utility::conversions::to_string_t(U("geraLocation"))] = ModelBase::toJson(m_GeraLocation);
    }

    return val;
}

bool UserLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("eutraLocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eutraLocation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EutraLocation> refVal_setEutraLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEutraLocation);
            setEutraLocation(refVal_setEutraLocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nrLocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nrLocation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NrLocation> refVal_setNrLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNrLocation);
            setNrLocation(refVal_setNrLocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("n3gaLocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("n3gaLocation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<N3gaLocation> refVal_setN3gaLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setN3gaLocation);
            setN3gaLocation(refVal_setN3gaLocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("utraLocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("utraLocation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UtraLocation> refVal_setUtraLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUtraLocation);
            setUtraLocation(refVal_setUtraLocation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("geraLocation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("geraLocation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GeraLocation> refVal_setGeraLocation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGeraLocation);
            setGeraLocation(refVal_setGeraLocation);
        }
    }
    return ok;
}

void UserLocation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EutraLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eutraLocation")), m_EutraLocation));
    }
    if(m_NrLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nrLocation")), m_NrLocation));
    }
    if(m_N3gaLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("n3gaLocation")), m_N3gaLocation));
    }
    if(m_UtraLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("utraLocation")), m_UtraLocation));
    }
    if(m_GeraLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("geraLocation")), m_GeraLocation));
    }
}

bool UserLocation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("eutraLocation"))))
    {
        std::shared_ptr<EutraLocation> refVal_setEutraLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eutraLocation"))), refVal_setEutraLocation );
        setEutraLocation(refVal_setEutraLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nrLocation"))))
    {
        std::shared_ptr<NrLocation> refVal_setNrLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nrLocation"))), refVal_setNrLocation );
        setNrLocation(refVal_setNrLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("n3gaLocation"))))
    {
        std::shared_ptr<N3gaLocation> refVal_setN3gaLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("n3gaLocation"))), refVal_setN3gaLocation );
        setN3gaLocation(refVal_setN3gaLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("utraLocation"))))
    {
        std::shared_ptr<UtraLocation> refVal_setUtraLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("utraLocation"))), refVal_setUtraLocation );
        setUtraLocation(refVal_setUtraLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("geraLocation"))))
    {
        std::shared_ptr<GeraLocation> refVal_setGeraLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("geraLocation"))), refVal_setGeraLocation );
        setGeraLocation(refVal_setGeraLocation);
    }
    return ok;
}

std::shared_ptr<EutraLocation> UserLocation::getEutraLocation() const
{
    return m_EutraLocation;
}

void UserLocation::setEutraLocation(const std::shared_ptr<EutraLocation>& value)
{
    m_EutraLocation = value;
    m_EutraLocationIsSet = true;
}

bool UserLocation::eutraLocationIsSet() const
{
    return m_EutraLocationIsSet;
}

void UserLocation::unsetEutraLocation()
{
    m_EutraLocationIsSet = false;
}
std::shared_ptr<NrLocation> UserLocation::getNrLocation() const
{
    return m_NrLocation;
}

void UserLocation::setNrLocation(const std::shared_ptr<NrLocation>& value)
{
    m_NrLocation = value;
    m_NrLocationIsSet = true;
}

bool UserLocation::nrLocationIsSet() const
{
    return m_NrLocationIsSet;
}

void UserLocation::unsetNrLocation()
{
    m_NrLocationIsSet = false;
}
std::shared_ptr<N3gaLocation> UserLocation::getN3gaLocation() const
{
    return m_N3gaLocation;
}

void UserLocation::setN3gaLocation(const std::shared_ptr<N3gaLocation>& value)
{
    m_N3gaLocation = value;
    m_N3gaLocationIsSet = true;
}

bool UserLocation::n3gaLocationIsSet() const
{
    return m_N3gaLocationIsSet;
}

void UserLocation::unsetN3gaLocation()
{
    m_N3gaLocationIsSet = false;
}
std::shared_ptr<UtraLocation> UserLocation::getUtraLocation() const
{
    return m_UtraLocation;
}

void UserLocation::setUtraLocation(const std::shared_ptr<UtraLocation>& value)
{
    m_UtraLocation = value;
    m_UtraLocationIsSet = true;
}

bool UserLocation::utraLocationIsSet() const
{
    return m_UtraLocationIsSet;
}

void UserLocation::unsetUtraLocation()
{
    m_UtraLocationIsSet = false;
}
std::shared_ptr<GeraLocation> UserLocation::getGeraLocation() const
{
    return m_GeraLocation;
}

void UserLocation::setGeraLocation(const std::shared_ptr<GeraLocation>& value)
{
    m_GeraLocation = value;
    m_GeraLocationIsSet = true;
}

bool UserLocation::geraLocationIsSet() const
{
    return m_GeraLocationIsSet;
}

void UserLocation::unsetGeraLocation()
{
    m_GeraLocationIsSet = false;
}
}
}
}
}


