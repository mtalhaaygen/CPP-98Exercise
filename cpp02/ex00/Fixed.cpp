#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedpoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed &Fixed::operator = (const Fixed &a)
{
	std::cout << "Copy assigment operator calledd" << std::endl;
	if(this != &a)	
			_fixedpoint = a.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedpoint;
}


void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedpoint = raw;
}