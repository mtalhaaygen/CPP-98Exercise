#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

void HumanB::attack()
{
	std::cout << this->name + " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB( std::string name)
{
	this->name = name;
	// this->weapon = NULL;
}

HumanB::~HumanB()
{
}