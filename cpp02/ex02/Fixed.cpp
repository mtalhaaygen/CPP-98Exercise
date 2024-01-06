#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedpoint = 0;
}

Fixed::Fixed(const int nb)
{
	setRawBits(nb * (1 << this->_bits));
}

Fixed::Fixed(const float nb)
{
	setRawBits(round(nb * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator = (const Fixed &a)
{
	if(this != &a)	
			_fixedpoint = a.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const &a)
{
	o << a.toFloat();
	return (o);
}

/*
 ** COMPARISON OPERATORS
 */

bool Fixed::operator>(const Fixed &a) const
{
	return (this->_fixedpoint > a._fixedpoint);
}


bool Fixed::operator<(const Fixed &a) const
{
	return (this->_fixedpoint < a._fixedpoint);
}


bool Fixed::operator>=(const Fixed &a) const
{
	return (this->_fixedpoint >= a._fixedpoint);
}

bool Fixed::operator<=(const Fixed &a) const
{
	return (this->_fixedpoint <= a._fixedpoint);
}


bool Fixed::operator==(const Fixed &a) const
{
	return (this->_fixedpoint == a._fixedpoint);
}


bool Fixed::operator!=(const Fixed &a) const
{
	return (this->_fixedpoint != a._fixedpoint);
}

/*
 ** ARITHMETIC OPERATORS
 */

Fixed Fixed::operator+(Fixed const &a) const
{
	Fixed temp;

	temp._fixedpoint = this->_fixedpoint + a._fixedpoint;
	return (temp);
}


Fixed Fixed::operator-(Fixed const &a) const
{
	Fixed temp;

	temp._fixedpoint = this->_fixedpoint - a._fixedpoint;
	return (temp);
}


Fixed Fixed::operator*(Fixed const &a) const
{
	Fixed temp;

	temp._fixedpoint = this->toFloat() * a.toFloat() * (1 << this->_bits);
	return (temp);
}


Fixed Fixed::operator/(Fixed const &a) const
{
	Fixed temp;

	temp._fixedpoint = (this->toFloat() / a.toFloat()) * (1 << this->_bits);
	return (temp);
}

/*
 ** INCERMENT/DECREMENT OPERATORS
 */

Fixed Fixed::operator++(void)
{
	Fixed temp;

	++ this->_fixedpoint;
	temp._fixedpoint = this->_fixedpoint;
	return (temp);
}


Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp._fixedpoint = this->_fixedpoint;
	this->_fixedpoint ++;
	return (temp);
}


Fixed Fixed::operator--(void)
{
	Fixed temp;

	-- this->_fixedpoint;
	temp._fixedpoint = this->_fixedpoint;
	return (temp);
}


Fixed Fixed::operator--(int)
{
	Fixed temp;

	temp._fixedpoint = this->_fixedpoint;
	this->_fixedpoint --;
	return (temp);
}


int Fixed::getRawBits( void ) const
{
	return this->_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedpoint = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedpoint / (float)(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedpoint / (1 << this->_bits));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a._fixedpoint > b._fixedpoint)
		return (a);
	else
		return (b);
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._fixedpoint > b._fixedpoint)
		return (a);
	else
		return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a._fixedpoint > b._fixedpoint)
		return (b);
	else
		return (a);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._fixedpoint > b._fixedpoint)
		return (b);
	else
		return (a);
}