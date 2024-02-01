#include "ScavTrap.hpp"

int main()
{
	ScavTrap talha("Talha");
	ScavTrap salih("Salih");
	ScavTrap maygen(talha);

	talha.attack("Salih");
	salih.takeDamage(20);
	salih.beRepaired(25);
	maygen = salih;
	maygen.attack("Talha");
	return (0);
}