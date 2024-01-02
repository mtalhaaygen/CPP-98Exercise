#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	/* data */
public:
	Weapon *weapon;
	std::string name;
	void attack(void);
	HumanA(std::string str, Weapon &w);
	~HumanA();
};

#endif