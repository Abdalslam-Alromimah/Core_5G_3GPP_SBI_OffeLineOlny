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



#include "CppRestOpenAPIClient/model/GlobalRanNodeId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



GlobalRanNodeId::GlobalRanNodeId()
{
    m_PlmnIdIsSet = false;
    m_N3IwfId = utility::conversions::to_string_t("");
    m_N3IwfIdIsSet = false;
    m_GNbIdIsSet = false;
    m_NgeNbId = utility::conversions::to_string_t("");
    m_NgeNbIdIsSet = false;
    m_WagfId = utility::conversions::to_string_t("");
    m_WagfIdIsSet = false;
    m_TngfId = utility::conversions::to_string_t("");
    m_TngfIdIsSet = false;
    m_Nid = utility::conversions::to_string_t("");
    m_NidIsSet = false;
    m_ENbId = utility::conversions::to_string_t("");
    m_ENbIdIsSet = false;
}

GlobalRanNodeId::~GlobalRanNodeId()
{
}

void GlobalRanNodeId::validate()
{
    // TODO: implement validation
}

web::json::value GlobalRanNodeId::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlmnIdIsSet)
    {
        val[utility::conversions::to_string_t(U("plmnId"))] = ModelBase::toJson(m_PlmnId);
    }
    if(m_N3IwfIdIsSet)
    {
        val[utility::conversions::to_string_t(U("n3IwfId"))] = ModelBase::toJson(m_N3IwfId);
    }
    if(m_GNbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("gNbId"))] = ModelBase::toJson(m_GNbId);
    }
    if(m_NgeNbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ngeNbId"))] = ModelBase::toJson(m_NgeNbId);
    }
    if(m_WagfIdIsSet)
    {
        val[utility::conversions::to_string_t(U("wagfId"))] = ModelBase::toJson(m_WagfId);
    }
    if(m_TngfIdIsSet)
    {
        val[utility::conversions::to_string_t(U("tngfId"))] = ModelBase::toJson(m_TngfId);
    }
    if(m_NidIsSet)
    {
        val[utility::conversions::to_string_t(U("nid"))] = ModelBase::toJson(m_Nid);
    }
    if(m_ENbIdIsSet)
    {
        val[utility::conversions::to_string_t(U("eNbId"))] = ModelBase::toJson(m_ENbId);
    }

    return val;
}

bool GlobalRanNodeId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("plmnId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("plmnId")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PlmnId> refVal_setPlmnId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlmnId);
            setPlmnId(refVal_setPlmnId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("n3IwfId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("n3IwfId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setN3IwfId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setN3IwfId);
            setN3IwfId(refVal_setN3IwfId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("gNbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("gNbId")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GNbId> refVal_setGNbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGNbId);
            setGNbId(refVal_setGNbId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ngeNbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ngeNbId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNgeNbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNgeNbId);
            setNgeNbId(refVal_setNgeNbId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("wagfId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wagfId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWagfId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWagfId);
            setWagfId(refVal_setWagfId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tngfId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tngfId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTngfId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTngfId);
            setTngfId(refVal_setTngfId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNid);
            setNid(refVal_setNid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("eNbId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("eNbId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setENbId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setENbId);
            setENbId(refVal_setENbId);
        }
    }
    return ok;
}

void GlobalRanNodeId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PlmnIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("plmnId")), m_PlmnId));
    }
    if(m_N3IwfIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("n3IwfId")), m_N3IwfId));
    }
    if(m_GNbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("gNbId")), m_GNbId));
    }
    if(m_NgeNbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ngeNbId")), m_NgeNbId));
    }
    if(m_WagfIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wagfId")), m_WagfId));
    }
    if(m_TngfIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tngfId")), m_TngfId));
    }
    if(m_NidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nid")), m_Nid));
    }
    if(m_ENbIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("eNbId")), m_ENbId));
    }
}

bool GlobalRanNodeId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("plmnId"))))
    {
        std::shared_ptr<PlmnId> refVal_setPlmnId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("plmnId"))), refVal_setPlmnId );
        setPlmnId(refVal_setPlmnId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("n3IwfId"))))
    {
        utility::string_t refVal_setN3IwfId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("n3IwfId"))), refVal_setN3IwfId );
        setN3IwfId(refVal_setN3IwfId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("gNbId"))))
    {
        std::shared_ptr<GNbId> refVal_setGNbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("gNbId"))), refVal_setGNbId );
        setGNbId(refVal_setGNbId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ngeNbId"))))
    {
        utility::string_t refVal_setNgeNbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ngeNbId"))), refVal_setNgeNbId );
        setNgeNbId(refVal_setNgeNbId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("wagfId"))))
    {
        utility::string_t refVal_setWagfId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wagfId"))), refVal_setWagfId );
        setWagfId(refVal_setWagfId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tngfId"))))
    {
        utility::string_t refVal_setTngfId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tngfId"))), refVal_setTngfId );
        setTngfId(refVal_setTngfId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nid"))))
    {
        utility::string_t refVal_setNid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nid"))), refVal_setNid );
        setNid(refVal_setNid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("eNbId"))))
    {
        utility::string_t refVal_setENbId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("eNbId"))), refVal_setENbId );
        setENbId(refVal_setENbId);
    }
    return ok;
}

std::shared_ptr<PlmnId> GlobalRanNodeId::getPlmnId() const
{
    return m_PlmnId;
}

void GlobalRanNodeId::setPlmnId(const std::shared_ptr<PlmnId>& value)
{
    m_PlmnId = value;
    m_PlmnIdIsSet = true;
}

bool GlobalRanNodeId::plmnIdIsSet() const
{
    return m_PlmnIdIsSet;
}

void GlobalRanNodeId::unsetPlmnId()
{
    m_PlmnIdIsSet = false;
}
utility::string_t GlobalRanNodeId::getN3IwfId() const
{
    return m_N3IwfId;
}

void GlobalRanNodeId::setN3IwfId(const utility::string_t& value)
{
    m_N3IwfId = value;
    m_N3IwfIdIsSet = true;
}

bool GlobalRanNodeId::n3IwfIdIsSet() const
{
    return m_N3IwfIdIsSet;
}

void GlobalRanNodeId::unsetN3IwfId()
{
    m_N3IwfIdIsSet = false;
}
std::shared_ptr<GNbId> GlobalRanNodeId::getGNbId() const
{
    return m_GNbId;
}

void GlobalRanNodeId::setGNbId(const std::shared_ptr<GNbId>& value)
{
    m_GNbId = value;
    m_GNbIdIsSet = true;
}

bool GlobalRanNodeId::gNbIdIsSet() const
{
    return m_GNbIdIsSet;
}

void GlobalRanNodeId::unsetGNbId()
{
    m_GNbIdIsSet = false;
}
utility::string_t GlobalRanNodeId::getNgeNbId() const
{
    return m_NgeNbId;
}

void GlobalRanNodeId::setNgeNbId(const utility::string_t& value)
{
    m_NgeNbId = value;
    m_NgeNbIdIsSet = true;
}

bool GlobalRanNodeId::ngeNbIdIsSet() const
{
    return m_NgeNbIdIsSet;
}

void GlobalRanNodeId::unsetNgeNbId()
{
    m_NgeNbIdIsSet = false;
}
utility::string_t GlobalRanNodeId::getWagfId() const
{
    return m_WagfId;
}

void GlobalRanNodeId::setWagfId(const utility::string_t& value)
{
    m_WagfId = value;
    m_WagfIdIsSet = true;
}

bool GlobalRanNodeId::wagfIdIsSet() const
{
    return m_WagfIdIsSet;
}

void GlobalRanNodeId::unsetWagfId()
{
    m_WagfIdIsSet = false;
}
utility::string_t GlobalRanNodeId::getTngfId() const
{
    return m_TngfId;
}

void GlobalRanNodeId::setTngfId(const utility::string_t& value)
{
    m_TngfId = value;
    m_TngfIdIsSet = true;
}

bool GlobalRanNodeId::tngfIdIsSet() const
{
    return m_TngfIdIsSet;
}

void GlobalRanNodeId::unsetTngfId()
{
    m_TngfIdIsSet = false;
}
utility::string_t GlobalRanNodeId::getNid() const
{
    return m_Nid;
}

void GlobalRanNodeId::setNid(const utility::string_t& value)
{
    m_Nid = value;
    m_NidIsSet = true;
}

bool GlobalRanNodeId::nidIsSet() const
{
    return m_NidIsSet;
}

void GlobalRanNodeId::unsetNid()
{
    m_NidIsSet = false;
}
utility::string_t GlobalRanNodeId::getENbId() const
{
    return m_ENbId;
}

void GlobalRanNodeId::setENbId(const utility::string_t& value)
{
    m_ENbId = value;
    m_ENbIdIsSet = true;
}

bool GlobalRanNodeId::eNbIdIsSet() const
{
    return m_ENbIdIsSet;
}

void GlobalRanNodeId::unsetENbId()
{
    m_ENbIdIsSet = false;
}
}
}
}
}


