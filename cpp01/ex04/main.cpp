#include "Replace.hpp"

int main() {
	std::string filename, s1, s2;

	std::cout << "Dosya adını girin: ";
	std::cin >> filename;
	std::cout << "Birinci string'i girin: ";
	std::cin >> s1;
	std::cout << "İkinci string'i girin: ";
	std::cin >> s2;

	replaceStringInFile(filename, s1, s2);

	return 0;
}



// #include <iostream>
// #include <string>

// int main() {
// 	std::string str_arr[3];

// 	for(int i = 0; i < 3; i++) {
// 		std::cout << "Please enter " << i+1 << ". entry :";
// 		std::cin >> str_arr[i];
// 	}



// 	return 0;
// }
