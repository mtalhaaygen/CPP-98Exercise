#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

/**
 * 
 * Hayvan nesneleri yaratmak mantıklı değil. Doğrudur, ses çıkarmazlar!
 * Olası hataları önlemek için varsayılan Animal sınıfının somutlaştırılabilir olmaması gerekir. Animal sınıfını kimsenin örnekleyemeyeceği şekilde düzeltin. Her şey eskisi gibi çalışmalı.
 * İsterseniz Animal'a A öneki ekleyerek sınıf adını güncelleyebilirsiniz.
 */

class AAnimal
{
	protected :
		std::string	_type;
	public :
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal &another);
		AAnimal &operator=(const AAnimal &another);
		virtual ~AAnimal();
		virtual void	makeSound(void) const = 0; // create abstract class with pure virtual function
		std::string		getType(void) const;
};

#endif
