#include "PhoneBook.hpp"

void PhoneBook::display_detail(int i)
{
	std::cout << "name :" << this->people[i - 1].name << std::endl;
	std::cout << "surname :" << this->people[i - 1].surname << std::endl;
	std::cout << "nickname : " << this->people[i - 1].nickname << std::endl;
	std::cout << "phone_number : " << this->people[i - 1].phone_number << std::endl;
	std::cout << "duskiest_secret : " << this->people[i - 1].duskiest_secret << std::endl;
	std::cout << '\n' << std::endl;
}
void PhoneBook::search()
{
	std::cout << "|*****************PHONEBOOK*****************|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << std::right; // already right justified by default
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "NAME";
	std::cout << "|" << std::setw(10) << "SURNAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (size_t i = 0; i < (size_t)this->people_count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;

		std::string nameCopy = this->people[i].name;
		(nameCopy.length() > 10) ? nameCopy = nameCopy.erase(9) + "." : "";
		std::cout << "|" << std::setw(10) << nameCopy;
		std::string surnameCopy = this->people[i].surname;
		(surnameCopy.length() > 10) ? surnameCopy = surnameCopy.erase(9) + "." : "";
		std::cout << "|" << std::setw(10) << surnameCopy;
		std::string nicknameCopy = this->people[i].nickname;
		(nicknameCopy.length() > 10) ? nicknameCopy = nicknameCopy.erase(9) + "." : "";
		std::cout << "|" << std::setw(10) << nicknameCopy << "|" << std::endl;
	}
}

void PhoneBook::add_contact(Contact person)
{
	this->people[this->people_count % 8] = person;
	if (this->people_count < 8)
		this->people_count++;
}

PhoneBook::PhoneBook(/* args */)
{
	this->people_count = 0;
}

PhoneBook::~PhoneBook()
{
}