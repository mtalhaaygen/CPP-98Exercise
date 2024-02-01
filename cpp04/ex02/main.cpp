#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// AAnimal anim;
	AAnimal *animalArray[4];

	int	i = 0;
	while (i < 4)
	{
		if (i < 2)
			animalArray[i] = new Cat();
		else
			animalArray[i] = new Dog();
		i++;
	}
	std::cout << std::endl;

	// Cat cat(*(Cat *)animalArray[0]);
	// std::cout <<cat.getBrain().getIdea(0) << std::endl;
	// std::cout <<cat.getBrain().getIdea(1) << std::endl;
	// std::cout <<cat.getBrain().getIdea(2) << std::endl;
	// std::cout <<cat.getBrain().getIdea(99) << std::endl;
	// Dog dog(*(Dog *)animalArray[3]);
	// std::cout << dog.getBrain().getIdea(0) << std::endl;
	// std::cout << dog.getBrain().getIdea(1) << std::endl;
	// std::cout << dog.getBrain().getIdea(2) << std::endl;
	// std::cout << dog.getBrain().getIdea(3) << std::endl;
	// cat.makeSound();
	// dog.makeSound();
	// animalArray[0]->makeSound();
	// animalArray[3]->makeSound();
	i = -1;
	while (++i < 4)
		delete animalArray[i];

	return 0;
}
