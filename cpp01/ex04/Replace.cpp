#include "Replace.hpp"

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
	std::ifstream fileIn(filename);

	if (!fileIn.is_open()) {
		std::cerr << "Dosya açılamadı!" << std::endl;
		return;
	}

	std::ofstream fileOut(filename + ".replace");

	if (!fileOut.is_open()) {
		std::cerr << "Dosya açılamadı!" << std::endl;
		return;
	}

	std::string line;
	while (getline(fileIn, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		fileOut << line << '\n';
	}

	fileIn.close();
	fileOut.close();
}
