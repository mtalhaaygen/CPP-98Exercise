#include "Zombie.hpp"
#include <stdlib.h>
int main()
{
	Zombie *z;
	z = newZombie("talha");
	z->announce();
	z->setName("maygen");
	std::cout << "main : " + z->getName() << std::endl;

	randomChump("veli"); // new keywordu kullanılmadığı için otomatik olarak bellek serbest bırakıldı


	// z->~Zombie();
	delete z; // z1 için destructor çağırır ve belleği serbest bırakır
}