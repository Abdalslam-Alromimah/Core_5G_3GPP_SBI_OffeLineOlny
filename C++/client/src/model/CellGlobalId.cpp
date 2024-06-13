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



#include "CppRestOpenAPIClient/model/CellGlobalId.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CellGlobalId::CellGlobalId()
{
    m_PlmnIdIsSet = false;
    m_Lac = utility::conversions::to_string_t("");
    m_LacIsSet = false;
    m_CellId = utility::conversions::to_string_t("");
    m_CellIdIsSet = false;
}

CellGlobalId::~CellGlobalId()
{
}

void CellGlobalId::validate()
{
    // TODO: implement validation
}

web::json::value CellGlobalId::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PlmnIdIsSet)
    {
        val[utility::conversions::to_string_t(U("plmnId"))] = ModelBase::toJson(m_PlmnId);
    }
    if(m_LacIsSet)
    {
        val[utility::conversions::to_string_t(U("lac"))] = ModelBase::toJson(m_Lac);
    }
    if(m_CellIdIsSet)
    {
        val[utility::conversions::to_string_t(U("cellId"))] = ModelBase::toJson(m_CellId);
    }

    return val;
}

bool CellGlobalId::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("lac"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lac")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLac;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLac);
            setLac(refVal_setLac);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cellId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cellId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCellId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCellId);
            setCellId(refVal_setCellId);
        }
    }
    return ok;
}

void CellGlobalId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_LacIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lac")), m_Lac));
    }
    if(m_CellIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cellId")), m_CellId));
    }
}

bool CellGlobalId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("lac"))))
    {
        utility::string_t refVal_setLac;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lac"))), refVal_setLac );
        setLac(refVal_setLac);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cellId"))))
    {
        utility::string_t refVal_setCellId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cellId"))), refVal_setCellId );
        setCellId(refVal_setCellId);
    }
    return ok;
}

std::shared_ptr<PlmnId> CellGlobalId::getPlmnId() const
{
    return m_PlmnId;
}

void CellGlobalId::setPlmnId(const std::shared_ptr<PlmnId>& value)
{
    m_PlmnId = value;
    m_PlmnIdIsSet = true;
}

bool CellGlobalId::plmnIdIsSet() const
{
    return m_PlmnIdIsSet;
}

void CellGlobalId::unsetPlmnId()
{
    m_PlmnIdIsSet = false;
}
utility::string_t CellGlobalId::getLac() const
{
    return m_Lac;
}

void CellGlobalId::setLac(const utility::string_t& value)
{
    m_Lac = value;
    m_LacIsSet = true;
}

bool CellGlobalId::lacIsSet() const
{
    return m_LacIsSet;
}

void CellGlobalId::unsetLac()
{
    m_LacIsSet = false;
}
utility::string_t CellGlobalId::getCellId() const
{
    return m_CellId;
}

void CellGlobalId::setCellId(const utility::string_t& value)
{
    m_CellId = value;
    m_CellIdIsSet = true;
}

bool CellGlobalId::cellIdIsSet() const
{
    return m_CellIdIsSet;
}

void CellGlobalId::unsetCellId()
{
    m_CellIdIsSet = false;
}
}
}
}
}


