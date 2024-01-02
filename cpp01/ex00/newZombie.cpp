#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *heapZombie;
	
	heapZombie = new Zombie();
	heapZombie->setName(name);
	return (heapZombie);
};
