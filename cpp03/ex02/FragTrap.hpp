#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"
// Testlerinizde uygun yapım/yıkım zincirlemesinin gösterilmesi gerekmektedir.
// Bir FragTrap oluşturulduğunda program bir ClapTrap oluşturarak başlar. Yıkım ters sırada gerçekleşir.
class FragTrap : public ClapTrap
{
public:
	FragTrap (std::string name);
	FragTrap (const FragTrap &a);
	~FragTrap ();
	FragTrap & operator = (const FragTrap &a);
	void highFivesGuys(void); // Bu üye işlevi, standart çıktıda olumlu bir beşlik isteği görüntüler.
};

#endif