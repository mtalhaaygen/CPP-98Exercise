#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
	std::cout << "FragT. Constructor is called" << std::endl;
	this->hitPoint = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap (const FragTrap &a) : ClapTrap(a)
{
	std::cout << "FragT. Copy constructor is called" << std::endl;
	this->name = a.name;
	this->hitPoint = a.hitPoint;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	*this = a;
}

FragTrap::~FragTrap()
{
	std::cout << "FragT. Destructor is called" << std::endl;
}

FragTrap & FragTrap::operator = (const FragTrap &a)
{
	if (this != &a)
	{
		this->name = a.name;
		this->hitPoint = a.hitPoint;
		this->energyPoints = a.energyPoints;
		this->attackDamage = a.attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Let's high fives guyss.. " << std::endl;
}
