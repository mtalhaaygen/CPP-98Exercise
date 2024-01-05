#include "Contact.hpp"

int	ft_strprintable(std::string input)
{
	for (std::string::size_type i = 0; i < input.size(); ++i) {
		char c = input[i];
		if (!isprint(c)) {
			std::cout << "Invalid character .. " << c << std::endl;
			std::cin.clear();
			return (1);
		}
	}
	return (0);
}

void Contact::create_contact()
{
	std::string input;
	bool isValid;

/*
*KULLANICIDAN NAME DEĞİŞKENİNİ AL
*/
	do {
		isValid = true;
		std::cout << "NAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->name = input;
/*
*KULLANICIDAN SURNAME DEĞİŞKENİNİ AL
*/
	do {
		isValid = true;
		std::cout << "SURNAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->surname = input;
/*
*KULLANICIDAN NICKNAME DEĞİŞKENİNİ AL
*/
	do {
		isValid = true;
		std::cout << "NICKNAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->nickname = input;
/*
*KULLANICIDAN PHONE NUMBER DEĞİŞKENİNİ AL
*/
	while (1)
	{
		std::stringstream convert;
		std::cout << "PHONE NUMBER :";
		std::getline(std::cin, input);
		convert << input;
		if (!(convert >> this->phone_number))
		{
			std::cout << "Invalid phone number" << std::endl;
			std::cin.clear();
		}
		else
			break;
	}
/*
*KULLANICIDAN NICKNAME DEĞİŞKENİNİ AL
*/
	do {
		isValid = true;
		std::cout << "DUSKIEST SECRET :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
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
