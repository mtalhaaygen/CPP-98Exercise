#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "UNKNOW";
	std::cout << "(AAnimal) Default constructor called !" << std::endl;
}

AAnimal::AAnimal(const std::string type) : _type(type)
{
	std::cout << "(AAnimal) \"" << type << "\" suddenly appeared !" << std::endl;
}

AAnimal::AAnimal(const AAnimal& another)
{
	*this = another;
	std::cout << "(AAnimal) Copy constructor called !" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &another)
{
	if (this != &another)
		_type = another._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout <<  "(AAnimal) " << this -> _type << " just disappeared !" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this -> _type);
}
