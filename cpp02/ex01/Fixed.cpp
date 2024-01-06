#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedpoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nb * (1 << this->_bits));
}

Fixed::Fixed(const float nb) {

	std::cout << "Float constructor called" << std::endl;
	setRawBits(round(nb * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator = (const Fixed &a)
{
	std::cout << "Copy assigment operator calledd" << std::endl;
	if (this != &a)
			_fixedpoint = a.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

	o << rhs.toFloat();
	return (o);
}

int Fixed::getRawBits( void ) const
{
	return this->_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedpoint = raw;
}

float	Fixed::toFloat(void) const {

	return ((float)this->_fixedpoint / (float)(1 << _bits));
}

int	Fixed::toInt(void) const {

	return (this->_fixedpoint / (1 << this->_bits));
}
