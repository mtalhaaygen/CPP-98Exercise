#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie stackZombi;

	stackZombi.setName(name);
	stackZombi.announce();
};