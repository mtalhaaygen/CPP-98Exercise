#include "Replace.hpp"

// not replace :D goodluck

int replaceStringInFile(const std::string& filename, std::string& s1, std::string& s2)
{
	std::string newfilename;
	std::ifstream inFile;
	std::ofstream outFile;
	std::string line;
	
	newfilename = filename + ".replace";
	outFile.open(newfilename.c_str());
	inFile.open(filename.c_str());

	if (!inFile.is_open() || !outFile.is_open()) {
		std::cerr << "File could not be opened!" << std::endl;
		return (1);
	}

	while (getline(inFile, line))
	{
		int found = -1;
		do
		{
			found = line.find(s1, found + 1);
			if (found != -1)
				line = line.substr(0, found) + s2 + line.substr(found + s1.length());
		} while (found != -1);
		
		outFile << line << '\n';
	}

	inFile.close();
	outFile.close();
	return (0);
}
