#include "Weapon.hpp"

const std::string& Weapon::getType () const
{
	const std::string& strRef = this->type;
	return (strRef);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

