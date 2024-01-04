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

	do {
		isValid = true;
		std::cout << "NAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->name = input;

	do {
		isValid = true;
		std::cout << "SURNAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->surname = input;

	do {
		isValid = true;
		std::cout << "NICKNAME :";
		std::getline(std::cin, input);

		if (ft_strprintable(input))
			isValid = false;

	} while (!isValid);
	this->nickname = input;

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
