/*****************************************************************//**
 * \file   dataMapping.h
 * \brief  It data of maps command for choosing paramms
  * 
 * \author BAHOO
 * \date   April 2020
***********************************************************************/
#pragma once
#include <map>
#include <string>
class DataMapping
{
public:
    DataMapping();
    enum CMD_e
    {
        IK,
        UK
    };

    std::map <std::string, DataMapping::CMD_e> GetMapping() const;

    bool CheckExistingElement(const std::string& key) const;
private:
    std::map <std::string, DataMapping::CMD_e> mapping;
};

