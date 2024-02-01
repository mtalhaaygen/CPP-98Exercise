#include "ClapTrap.hpp"

int main()
{
	ClapTrap talha("Talha");
	ClapTrap fahriye("Fahriye");
	ClapTrap emre("Emre");
	ClapTrap mustafa(fahriye);

	emre.attack("fahriye");
	emre = talha;
	emre.attack("fahriye");

	talha.attack("Emre");
	mustafa.attack("Oğuzhan");
	talha.beRepaired(5);
	talha.takeDamage(10);
	talha.attack("Anıl");
	mustafa.takeDamage(10);
}