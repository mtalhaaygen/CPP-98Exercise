#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

// private metodlara haliyle doğrudan erişilemez
// sınıf içinde yada friend keywordu ile erişilebilir
// yada işaretçilerle erişilebilir 
class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
	Harl(/* args */) {};
	~Harl() {};
};


#endif