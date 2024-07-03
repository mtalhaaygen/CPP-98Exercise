#include "iter.hpp"

template <typename Type>
void print(Type const &value)
{
	std::cout << value << std::endl;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	iter(intArray, 5, print);

	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(doubleArray, 5, print);

	std::string stringArray[] = {"one", "two", "three", "four", "five"};
	iter(stringArray, 5, print);

	return 0;
}