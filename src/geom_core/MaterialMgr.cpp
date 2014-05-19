#include "MaterialMgr.h"

MaterialMgr::MaterialMgr()
{
}
MaterialMgr::~MaterialMgr()
{
}

void MaterialMgr::SetMaterial( Material * mat )
{
    m_Material.m_Name = mat->m_Name;

    m_Material.m_AmbientR = mat->m_AmbientR.Get();
    m_Material.m_AmbientG = mat->m_AmbientG.Get();
    m_Material.m_AmbientB = mat->m_AmbientB.Get();
    m_Material.m_AmbientA = mat->m_AmbientA.Get();

    m_Material.m_DiffuseR = mat->m_DiffuseR.Get();
    m_Material.m_DiffuseG = mat->m_DiffuseG.Get();
    m_Material.m_DiffuseB = mat->m_DiffuseB.Get();
    m_Material.m_DiffuseA = mat->m_DiffuseA.Get();

    m_Material.m_SpecularR = mat->m_SpecularR.Get();
    m_Material.m_SpecularG = mat->m_SpecularG.Get();
    m_Material.m_SpecularB = mat->m_SpecularB.Get();
    m_Material.m_SpecularA = mat->m_SpecularA.Get();

    m_Material.m_EmissionR = mat->m_EmissionR.Get();
    m_Material.m_EmissionG = mat->m_EmissionG.Get();
    m_Material.m_EmissionB = mat->m_EmissionB.Get();
    m_Material.m_EmissionA = mat->m_EmissionA.Get();

    m_Material.m_Shininess = mat->m_Shininess.Get();
}

void MaterialMgr::SetMaterial( std::string name, double ambi[], double diff[], double spec[], double emis[], double shin )
{
    m_Material.m_Name = name;

    m_Material.m_AmbientR = ambi[0];
    m_Material.m_AmbientG = ambi[1];
    m_Material.m_AmbientB = ambi[2];
    m_Material.m_AmbientA = ambi[3];

    m_Material.m_DiffuseR = diff[0];
    m_Material.m_DiffuseG = diff[1];
    m_Material.m_DiffuseB = diff[2];
    m_Material.m_DiffuseA = diff[3];

    m_Material.m_SpecularR = spec[0];
    m_Material.m_SpecularG = spec[1];
    m_Material.m_SpecularB = spec[2];
    m_Material.m_SpecularA = spec[3];

    m_Material.m_EmissionR = emis[0];
    m_Material.m_EmissionG = emis[1];
    m_Material.m_EmissionB = emis[2];
    m_Material.m_EmissionA = emis[3];

    m_Material.m_Shininess = shin;
}

Material * MaterialMgr::getMaterial()
{
    return &m_Material;
}