#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

// Weapon(std::string str) : type(str) {}
// : type(str), C++'ın başlatma listesi olarak adlandırılan bir özelliğidir. Bu, type özelliğinin değerini, yapıcı fonksiyonuna verilen str parametresi ile başlatır. Yani, Weapon nesnesi oluşturulduğunda, type özelliği otomatik olarak parametredeki name değerine ayarlanır.

class Weapon
{
private:
	std::string type;
public:
	const std::string &getType() const;
	void setType( std::string type);
	Weapon(std::string str) : type(str) {};
	~Weapon() {};
};

#endif