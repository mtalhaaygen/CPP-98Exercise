#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void announce();

	void setName( std::string newname );
	std::string getName(/* args */);

	Zombie( std::string newname );
	Zombie(/* args */);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
