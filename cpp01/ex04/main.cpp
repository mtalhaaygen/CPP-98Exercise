#include "Replace.hpp"

int main() {
	std::string str_arr[3];

	for(int i = 0; i < 3; i++) {
		std::cout << "Please enter " << i+1 << ". entry :";
		std::cin >> str_arr[i];
	}

	if (replaceStringInFile(str_arr[0], str_arr[1], str_arr[2]))
		return (-1);


	return (0);
}
