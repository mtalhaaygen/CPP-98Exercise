#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoint;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap &a);
	~ClapTrap ();
	ClapTrap & operator = (const ClapTrap &a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif