#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	/* data */
public:
	std::string name;
	std::string surname;
	std::string nickname;
	int	phone_number;
	std::string duskiest_secret;

	void create_contact();
	Contact(/* args */);
	~Contact();

};

#endif