#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedpoint;
	static const int _bits = 8;
public:
	Fixed (); // constructor
	Fixed (const int nb); // int constructor
	Fixed (const float nb); // float constructor
	Fixed (const Fixed &a); // copy constructor
	~Fixed (); // destructor

	Fixed & operator = (const Fixed &a); // copy assigment operator

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const &a);

#endif
