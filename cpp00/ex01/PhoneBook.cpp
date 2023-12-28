#include "PhoneBook.hpp"

void PhoneBook::display_detail(int i)
{
	std::cout << "|" << std::setw(10) << this->people[i].name;
	std::cout << "|" << std::setw(10) << this->people[i].surname;
	std::cout << "|" << std::setw(10) << this->people[i].nickname;
	std::cout << "|" << std::setw(10) << this->people[i].nickname;
}
void PhoneBook::search()
{
	std::cout << "|*****************PHONEBOOK*****************|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "NAME";
	std::cout << "|" << std::setw(10) << "SURNAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (size_t i = 0; i < ((size_t)this->people_count) % 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << this->people[i].name;
		std::cout << "|" << std::setw(10) << this->people[i].surname;
		std::cout << "|" << std::setw(10) << this->people[i].nickname << "|" << std::endl;
	}
}

void PhoneBook::add_contact(Contact person)
{
	this->people[this->people_count % 8] = person;
	this->people_count++;
}

PhoneBook::PhoneBook(/* args */)
{
	this->people_count = 0;
}

PhoneBook::~PhoneBook()
{
}