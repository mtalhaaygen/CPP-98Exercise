#include "Zombie.hpp"

void announce(Zombie zombi)
{
    std::cout << zombi.name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(/* args */)
{
    announce(this.);
}

Zombie::~Zombie()
{
}