#include "FragTrap.hpp"

int main()
{
	FragTrap talha("Talha");
	FragTrap omar("Omar");
	FragTrap maygen(talha);

	talha.attack("Omar");
	omar.takeDamage(20);
	omar.beRepaired(25);
	maygen = omar;
	maygen.attack("Talha");
	talha.highFivesGuys();
	return (0);
}