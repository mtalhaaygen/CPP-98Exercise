#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;
	int	i = 1;

	while (1)
	{
		std::cout << "=> ( ADD | SEARCH | EXIT ) <=" << std::endl;
		std::cout << "Please enter a valid command : ";
		std::getline(std::cin, input);
		std::cout << std::endl;

		if (input.compare("ADD") == 0)
		{
			Contact newcontact;
			newcontact.create_contact();
			phonebook.add_contact(newcontact);
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.search();
			while (1)
			{
				std::cout << std::endl << "Please enter the index of the contact : ";
				std::cin >> i;
				if ((phonebook.people_count % 8) < i || i < 1)
					std::cout << "Invalid index";
				else
					phonebook.display_detail(i);
				std::cin.clear();
			}
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
}
