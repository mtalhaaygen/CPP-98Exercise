#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (name);
}

void Zombie::setName(std::string newname)
{
	name = newname;
}

Zombie::Zombie(std::string newname)
{
	name = newname;
}

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << name + ": " << "is death" << std::endl;
}