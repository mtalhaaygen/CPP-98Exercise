#include "iter.hpp"

// This is a simple function that will be used as a callback in the iter function.
// It will print the value of the argument passed to it.
template <typename Type>
void print(Type const &value)
{
    std::cout << value << std::endl;
}

int main()
{
    // We will test the iter function with an array of integers.
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, print);

    // We will test the iter function with an array of doubles.
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArray, 5, print);

    // We will test the iter function with an array of strings.
    std::string stringArray[] = {"one", "two", "three", "four", "five"};
    iter(stringArray, 5, print);

    return 0;
}