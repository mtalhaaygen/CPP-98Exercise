#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	/* data */
public:
	Weapon *weapon;
	std::string name;
	void attack(void);
	void setWeapon(Weapon &w);
	HumanB( std::string name);
	~HumanB();
};

#endif