#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
    std::string name;
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    void announce();
    Zombie(/* args */);
    ~Zombie();
};



#endif
