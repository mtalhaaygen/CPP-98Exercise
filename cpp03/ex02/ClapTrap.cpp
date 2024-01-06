#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapT. Constructor is called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &a)
{
	std::cout << "ClapT. Copy constructor is called" << std::endl;
	this->name = a.name;
	this->hitPoint = a.hitPoint;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	*this = a;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapT. Destructor is called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &a)
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

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints >= 1 && this->hitPoint >= 1)
	{
		std::cout << "ClapT. " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > (int)amount)
		this->hitPoint -= amount;
	else
		this->hitPoint = 0;
	std::cout << this->name << " took " << amount << " unist of damage" << std::endl;

	if (this->hitPoint <= 0)
		std::cout << this->name << " is death :(" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint + amount > 10)
		this->hitPoint = 10;
	else
		this->hitPoint += amount;
	std::cout << this->name << " filled " << amount << " unist of hitPoint" << std::endl;
}
