#include "Array.hpp"

int main()
{
    Array<int> array(5);
    for (size_t i = 0; i < array.size(); i++)
        array[i] = i;
    for (size_t i = 0; i < array.size(); i++)
        std::cout << array[i] << std::endl;

    // double array
    Array<double> darray(5);
    for (size_t i = 0; i < darray.size(); i++)
        darray[i] = i + 0.5;
    for (size_t i = 0; i < darray.size(); i++)
        std::cout << darray[i] << std::endl;
    
    // string array
    Array<std::string> sarray(5);
    sarray[0] = "one";
    sarray[1] = "two";
    sarray[2] = "three";
    sarray[3] = "four";
    sarray[4] = "five";
    for (size_t i = 0; i < sarray.size(); i++)
        std::cout << sarray[i] << std::endl;

    return 0;
}