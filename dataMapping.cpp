#include "dataMapping.h"

DataMapping::DataMapping()
{
	mapping["uk"] = IK;
	mapping["-ik"] = UK;

}

std::map<std::string, DataMapping::CMD_e> DataMapping::GetMapping() const
{
	return mapping;
}

bool DataMapping::CheckExistingElement(const std::string& key) const
{
	return (mapping.find(key) != mapping.end());
}
