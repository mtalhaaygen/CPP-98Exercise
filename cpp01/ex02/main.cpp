#include <iostream>
#include <iomanip>      // std::setw

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string &stringREF = str;
	std::string *stringPTR = &str;
	
	std::cout << std::left;
	std::cout << "Memory address : " << &str << std::endl;
	std::cout << std::setw(15) << "stringPTR ";
	std::cout << ": " << stringPTR << std::endl;
	std::cout << std::setw(15) << "stringREF ";
	std::cout << ": " << &stringREF << std::endl;

	std::cout << std::setw(15) <<"str value";
	std::cout << ": " << str << std::endl;
	std::cout << std::setw(15) <<"stringPTR";
	std::cout << ": " << *stringPTR << std::endl;
	std::cout << std::setw(15) <<"stringREF";
	std::cout << ": " << stringREF << std::endl;
}