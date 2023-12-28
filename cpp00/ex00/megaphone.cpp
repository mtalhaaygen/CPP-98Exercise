#include <iostream>
#include <string>
#include <cctype> // toupper()

int main(int argc, char**argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (size_t i = 1; i < (size_t)argc; i++)
	{
		std::string str = argv[i];
		for (size_t j = 0; j < str.length() ; j++)
			str[j] = toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
}
