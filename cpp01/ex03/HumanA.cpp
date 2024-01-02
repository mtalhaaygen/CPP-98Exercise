#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name + " attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon &w)
{
	this->name = str;
	this->weapon = &w;
}

HumanA::~HumanA()
{
}