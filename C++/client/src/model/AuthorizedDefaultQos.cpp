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



#include "CppRestOpenAPIClient/model/AuthorizedDefaultQos.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AuthorizedDefaultQos::AuthorizedDefaultQos()
{
    m_r_5qi = 0;
    m_r_5qiIsSet = false;
    m_ArpIsSet = false;
    m_PriorityLevel = 0;
    m_PriorityLevelIsSet = false;
    m_AverWindow = 0;
    m_AverWindowIsSet = false;
    m_MaxDataBurstVol = 0;
    m_MaxDataBurstVolIsSet = false;
    m_MaxbrUl = utility::conversions::to_string_t("");
    m_MaxbrUlIsSet = false;
    m_MaxbrDl = utility::conversions::to_string_t("");
    m_MaxbrDlIsSet = false;
    m_GbrUl = utility::conversions::to_string_t("");
    m_GbrUlIsSet = false;
    m_GbrDl = utility::conversions::to_string_t("");
    m_GbrDlIsSet = false;
    m_ExtMaxDataBurstVol = 0;
    m_ExtMaxDataBurstVolIsSet = false;
}

AuthorizedDefaultQos::~AuthorizedDefaultQos()
{
}

void AuthorizedDefaultQos::validate()
{
    // TODO: implement validation
}

web::json::value AuthorizedDefaultQos::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_5qiIsSet)
    {
        val[utility::conversions::to_string_t(U("5qi"))] = ModelBase::toJson(m_r_5qi);
    }
    if(m_ArpIsSet)
    {
        val[utility::conversions::to_string_t(U("arp"))] = ModelBase::toJson(m_Arp);
    }
    if(m_PriorityLevelIsSet)
    {
        val[utility::conversions::to_string_t(U("priorityLevel"))] = ModelBase::toJson(m_PriorityLevel);
    }
    if(m_AverWindowIsSet)
    {
        val[utility::conversions::to_string_t(U("averWindow"))] = ModelBase::toJson(m_AverWindow);
    }
    if(m_MaxDataBurstVolIsSet)
    {
        val[utility::conversions::to_string_t(U("maxDataBurstVol"))] = ModelBase::toJson(m_MaxDataBurstVol);
    }
    if(m_MaxbrUlIsSet)
    {
        val[utility::conversions::to_string_t(U("maxbrUl"))] = ModelBase::toJson(m_MaxbrUl);
    }
    if(m_MaxbrDlIsSet)
    {
        val[utility::conversions::to_string_t(U("maxbrDl"))] = ModelBase::toJson(m_MaxbrDl);
    }
    if(m_GbrUlIsSet)
    {
        val[utility::conversions::to_string_t(U("gbrUl"))] = ModelBase::toJson(m_GbrUl);
    }
    if(m_GbrDlIsSet)
    {
        val[utility::conversions::to_string_t(U("gbrDl"))] = ModelBase::toJson(m_GbrDl);
    }
    if(m_ExtMaxDataBurstVolIsSet)
    {
        val[utility::conversions::to_string_t(U("extMaxDataBurstVol"))] = ModelBase::toJson(m_ExtMaxDataBurstVol);
    }

    return val;
}

bool AuthorizedDefaultQos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("5qi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("5qi")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setR5qi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setR5qi);
            setR5qi(refVal_setR5qi);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("arp"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("arp")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Arp> refVal_setArp;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArp);
            setArp(refVal_setArp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("priorityLevel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priorityLevel")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPriorityLevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriorityLevel);
            setPriorityLevel(refVal_setPriorityLevel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("averWindow"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("averWindow")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setAverWindow;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAverWindow);
            setAverWindow(refVal_setAverWindow);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxDataBurstVol"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxDataBurstVol")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setMaxDataBurstVol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxDataBurstVol);
            setMaxDataBurstVol(refVal_setMaxDataBurstVol);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxbrUl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxbrUl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMaxbrUl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxbrUl);
            setMaxbrUl(refVal_setMaxbrUl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maxbrDl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maxbrDl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMaxbrDl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaxbrDl);
            setMaxbrDl(refVal_setMaxbrDl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("gbrUl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gbrUl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGbrUl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGbrUl);
            setGbrUl(refVal_setGbrUl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("gbrDl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gbrDl")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGbrDl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGbrDl);
            setGbrDl(refVal_setGbrDl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("extMaxDataBurstVol"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("extMaxDataBurstVol")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setExtMaxDataBurstVol;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExtMaxDataBurstVol);
            setExtMaxDataBurstVol(refVal_setExtMaxDataBurstVol);
        }
    }
    return ok;
}

void AuthorizedDefaultQos::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_r_5qiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("5qi")), m_r_5qi));
    }
    if(m_ArpIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("arp")), m_Arp));
    }
    if(m_PriorityLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priorityLevel")), m_PriorityLevel));
    }
    if(m_AverWindowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("averWindow")), m_AverWindow));
    }
    if(m_MaxDataBurstVolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxDataBurstVol")), m_MaxDataBurstVol));
    }
    if(m_MaxbrUlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxbrUl")), m_MaxbrUl));
    }
    if(m_MaxbrDlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maxbrDl")), m_MaxbrDl));
    }
    if(m_GbrUlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gbrUl")), m_GbrUl));
    }
    if(m_GbrDlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gbrDl")), m_GbrDl));
    }
    if(m_ExtMaxDataBurstVolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("extMaxDataBurstVol")), m_ExtMaxDataBurstVol));
    }
}

bool AuthorizedDefaultQos::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("5qi"))))
    {
        int32_t refVal_setR5qi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("5qi"))), refVal_setR5qi );
        setR5qi(refVal_setR5qi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("arp"))))
    {
        std::shared_ptr<Arp> refVal_setArp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("arp"))), refVal_setArp );
        setArp(refVal_setArp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priorityLevel"))))
    {
        int32_t refVal_setPriorityLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priorityLevel"))), refVal_setPriorityLevel );
        setPriorityLevel(refVal_setPriorityLevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("averWindow"))))
    {
        int32_t refVal_setAverWindow;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("averWindow"))), refVal_setAverWindow );
        setAverWindow(refVal_setAverWindow);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxDataBurstVol"))))
    {
        int32_t refVal_setMaxDataBurstVol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxDataBurstVol"))), refVal_setMaxDataBurstVol );
        setMaxDataBurstVol(refVal_setMaxDataBurstVol);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxbrUl"))))
    {
        utility::string_t refVal_setMaxbrUl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxbrUl"))), refVal_setMaxbrUl );
        setMaxbrUl(refVal_setMaxbrUl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maxbrDl"))))
    {
        utility::string_t refVal_setMaxbrDl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maxbrDl"))), refVal_setMaxbrDl );
        setMaxbrDl(refVal_setMaxbrDl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("gbrUl"))))
    {
        utility::string_t refVal_setGbrUl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gbrUl"))), refVal_setGbrUl );
        setGbrUl(refVal_setGbrUl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("gbrDl"))))
    {
        utility::string_t refVal_setGbrDl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gbrDl"))), refVal_setGbrDl );
        setGbrDl(refVal_setGbrDl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("extMaxDataBurstVol"))))
    {
        int32_t refVal_setExtMaxDataBurstVol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("extMaxDataBurstVol"))), refVal_setExtMaxDataBurstVol );
        setExtMaxDataBurstVol(refVal_setExtMaxDataBurstVol);
    }
    return ok;
}

int32_t AuthorizedDefaultQos::getR5qi() const
{
    return m_r_5qi;
}

void AuthorizedDefaultQos::setR5qi(int32_t value)
{
    m_r_5qi = value;
    m_r_5qiIsSet = true;
}

bool AuthorizedDefaultQos::r5qiIsSet() const
{
    return m_r_5qiIsSet;
}

void AuthorizedDefaultQos::unsetr_5qi()
{
    m_r_5qiIsSet = false;
}
std::shared_ptr<Arp> AuthorizedDefaultQos::getArp() const
{
    return m_Arp;
}

void AuthorizedDefaultQos::setArp(const std::shared_ptr<Arp>& value)
{
    m_Arp = value;
    m_ArpIsSet = true;
}

bool AuthorizedDefaultQos::arpIsSet() const
{
    return m_ArpIsSet;
}

void AuthorizedDefaultQos::unsetArp()
{
    m_ArpIsSet = false;
}
int32_t AuthorizedDefaultQos::getPriorityLevel() const
{
    return m_PriorityLevel;
}

void AuthorizedDefaultQos::setPriorityLevel(int32_t value)
{
    m_PriorityLevel = value;
    m_PriorityLevelIsSet = true;
}

bool AuthorizedDefaultQos::priorityLevelIsSet() const
{
    return m_PriorityLevelIsSet;
}

void AuthorizedDefaultQos::unsetPriorityLevel()
{
    m_PriorityLevelIsSet = false;
}
int32_t AuthorizedDefaultQos::getAverWindow() const
{
    return m_AverWindow;
}

void AuthorizedDefaultQos::setAverWindow(int32_t value)
{
    m_AverWindow = value;
    m_AverWindowIsSet = true;
}

bool AuthorizedDefaultQos::averWindowIsSet() const
{
    return m_AverWindowIsSet;
}

void AuthorizedDefaultQos::unsetAverWindow()
{
    m_AverWindowIsSet = false;
}
int32_t AuthorizedDefaultQos::getMaxDataBurstVol() const
{
    return m_MaxDataBurstVol;
}

void AuthorizedDefaultQos::setMaxDataBurstVol(int32_t value)
{
    m_MaxDataBurstVol = value;
    m_MaxDataBurstVolIsSet = true;
}

bool AuthorizedDefaultQos::maxDataBurstVolIsSet() const
{
    return m_MaxDataBurstVolIsSet;
}

void AuthorizedDefaultQos::unsetMaxDataBurstVol()
{
    m_MaxDataBurstVolIsSet = false;
}
utility::string_t AuthorizedDefaultQos::getMaxbrUl() const
{
    return m_MaxbrUl;
}

void AuthorizedDefaultQos::setMaxbrUl(const utility::string_t& value)
{
    m_MaxbrUl = value;
    m_MaxbrUlIsSet = true;
}

bool AuthorizedDefaultQos::maxbrUlIsSet() const
{
    return m_MaxbrUlIsSet;
}

void AuthorizedDefaultQos::unsetMaxbrUl()
{
    m_MaxbrUlIsSet = false;
}
utility::string_t AuthorizedDefaultQos::getMaxbrDl() const
{
    return m_MaxbrDl;
}

void AuthorizedDefaultQos::setMaxbrDl(const utility::string_t& value)
{
    m_MaxbrDl = value;
    m_MaxbrDlIsSet = true;
}

bool AuthorizedDefaultQos::maxbrDlIsSet() const
{
    return m_MaxbrDlIsSet;
}

void AuthorizedDefaultQos::unsetMaxbrDl()
{
    m_MaxbrDlIsSet = false;
}
utility::string_t AuthorizedDefaultQos::getGbrUl() const
{
    return m_GbrUl;
}

void AuthorizedDefaultQos::setGbrUl(const utility::string_t& value)
{
    m_GbrUl = value;
    m_GbrUlIsSet = true;
}

bool AuthorizedDefaultQos::gbrUlIsSet() const
{
    return m_GbrUlIsSet;
}

void AuthorizedDefaultQos::unsetGbrUl()
{
    m_GbrUlIsSet = false;
}
utility::string_t AuthorizedDefaultQos::getGbrDl() const
{
    return m_GbrDl;
}

void AuthorizedDefaultQos::setGbrDl(const utility::string_t& value)
{
    m_GbrDl = value;
    m_GbrDlIsSet = true;
}

bool AuthorizedDefaultQos::gbrDlIsSet() const
{
    return m_GbrDlIsSet;
}

void AuthorizedDefaultQos::unsetGbrDl()
{
    m_GbrDlIsSet = false;
}
int32_t AuthorizedDefaultQos::getExtMaxDataBurstVol() const
{
    return m_ExtMaxDataBurstVol;
}

void AuthorizedDefaultQos::setExtMaxDataBurstVol(int32_t value)
{
    m_ExtMaxDataBurstVol = value;
    m_ExtMaxDataBurstVolIsSet = true;
}

bool AuthorizedDefaultQos::extMaxDataBurstVolIsSet() const
{
    return m_ExtMaxDataBurstVolIsSet;
}

void AuthorizedDefaultQos::unsetExtMaxDataBurstVol()
{
    m_ExtMaxDataBurstVolIsSet = false;
}
}
}
}
}


