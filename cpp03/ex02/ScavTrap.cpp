#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavT. Constructor is called" << std::endl;
	this->hitPoint = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap (const ScavTrap &a) : ClapTrap(a)
{
	std::cout << "ScavT. Copy constructor is called" << std::endl;
	this->name = a.name;
	this->hitPoint = a.hitPoint;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	*this = a;
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavT. Destructor is called" << std::endl;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &a)
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

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints >= 1 && this->hitPoint >= 1)
	{
		std::cout << "ScavT. " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}