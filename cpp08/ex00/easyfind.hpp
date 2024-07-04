#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> // std::find
#include <iterator> // std::distance
#include <exception> // std::exception

#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

template <typename T>
void easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::exception();
	std::cout << "Value found | " << std::distance(container.begin(), it) << " | "<< *it << std::endl;
}

#endif