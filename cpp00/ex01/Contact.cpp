#include "Contact.hpp"
#include <sstream>


void Contact::create_contact()
{
	std::stringstream convert;
	std::string input;

	std::cout << "NAME :";
	std::getline(std::cin, input);
	this->name = input;

	std::cout << "SURNAME :";
	std::getline(std::cin, input);
	this->surname = input;

	std::cout << "NİCKNAME :";
	std::getline(std::cin, input);
	this->nickname = input;

	std::cout << "PHONE NUMBER :";
	std::getline(std::cin, input);
	convert << input;
	convert >> this->phone_number;

	std::cout << "DUSKIEST SECRET :";
	std::getline(std::cin, input);
	this->duskiest_secret = input;
	std::cout << std::endl;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

// Contact::Contact(/* args */)
// {
// 	std::string name;
// 	std::string surname;
// 	std::string nickname;
// 	int	phone_number;
// 	std::string duskiest_secret;

// 	std::getline(std::cin, name);
// 	this->name = name;

// 	std::getline(std::cin, name);
// 	this->surname = surname;

// 	std::getline(std::cin, name);
// 	this->nickname = nickname;

// 	std::getline(std::cin, name);
// 	this->phone_number = phone_number;

// 	std::getline(std::cin, name);
// 	this->duskiest_secret = duskiest_secret;
// }

// Contact::Contact(std::string name, std::string surname, std::string nickname, int phone_number, std::string duskiest_secret)
// {
// 	this->name = name;
// 	this->surname = surname;
// 	this->nickname = nickname;
// 	this->phone_number = phone_number;
// 	this->duskiest_secret = duskiest_secret;
// }

