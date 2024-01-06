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
	Fixed (const Fixed &a); // copy constructor
	~Fixed (); // destructor
	Fixed & operator = (const Fixed &a); // copy assigment operator
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
