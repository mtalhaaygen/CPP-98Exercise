#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>
#include <iomanip>      // std::setw

class PhoneBook
{
private:
	/* data */
public:
	Contact	people[8];
	int		people_count;

	void add_contact(Contact person);
	void search();
	void display_detail(int i);
	PhoneBook(/* args */);
	~PhoneBook();
};


#endif