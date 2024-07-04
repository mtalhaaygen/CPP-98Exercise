#include "easyfind.hpp"

int main()
{
	std::array<int, 5> arr = {41, 42, 43, 44, 45};
	std::vector<int> vec;
	for (int i = 1; i < 6; i++)
		vec.push_back(i);
	std::list<int> lst;
	for (int i = 6; i < 11; i++)
		lst.push_front(i);
	std::forward_list<int> flst;
	for (int i = 11; i < 16; i++)
		flst.push_front(i);
	std::deque<int> deq;
	for (int i = 21; i < 26; i++)
		deq.push_front(i);

	try {
		easyfind(arr, 41);
		easyfind(vec, 3);
		easyfind(lst, 6);
		easyfind(flst, 11);
		easyfind(deq, 21);
	} catch (std::exception &e) {
		std::cout << "Value not found" << std::endl;
	}
}