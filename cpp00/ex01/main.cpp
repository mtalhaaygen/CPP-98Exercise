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
		std::getline(std::cin, input); // Bunun bir parametresi daha var, varsayılanı '\n', enter girilene kadarki inputu alıyor
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
				if (std::cin.fail()) // Eğer giriş başarısızsa
					std::cout << "Invalid input. Please enter a number." << std::endl;
				else if (phonebook.people_count < i || i < 1)
					std::cout << "Invalid index";
				else
				{
					phonebook.display_detail(i);
					std::cin.clear(); // Hata bayraklarını temizle
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Tamponu temizle
					break ;
				}
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
}
