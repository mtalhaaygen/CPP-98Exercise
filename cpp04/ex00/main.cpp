#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* adog = new Dog();
	const Animal* acat = new Cat();
	const Cat* cat = new Cat();
	const WrongAnimal *wrongk = new WrongCat();

	std::cout << adog->getType() << " " << std::endl;
	std::cout << acat->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	acat->makeSound(); //will output the cat sound!
	adog->makeSound();
	meta->makeSound();
	cat->makeSound();
	std::cout << "-------------" << std::endl;
	wrongk->makeSound();
	delete meta;
	delete adog;
	delete acat;
	delete cat;
	delete wrongk;
}
