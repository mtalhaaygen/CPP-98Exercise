#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Type>
void iter(Type *array, size_t length, void (*func)(Type const &))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif