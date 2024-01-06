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
/*
 ** COMPARISON OPERATORS
 */
	bool operator>(const Fixed &a) const;
	bool operator<(const Fixed &a) const;
	bool operator>=(const Fixed &a) const;
	bool operator<=(const Fixed &a) const;
	bool operator==(const Fixed &a) const;
	bool operator!=(const Fixed &a) const;

/*
 ** ARITHMETIC OPERATORS
 */
	Fixed operator+(Fixed const &a) const;
	Fixed operator-(Fixed const &a) const;
	Fixed operator*(Fixed const &a) const;
	Fixed operator/(Fixed const &a) const;

/*
 ** INCERMENT/DECREMENT OPERATORS
 */
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	static Fixed &min(Fixed &a, Fixed &b) ;
	const static Fixed &min(const Fixed &a, const Fixed &b) ;
	static Fixed &max(Fixed &a, Fixed &b) ;
	const static Fixed &max(const Fixed &a, const Fixed &b) ;
};

std::ostream & operator<<(std::ostream & o, Fixed const &a);

#endif
