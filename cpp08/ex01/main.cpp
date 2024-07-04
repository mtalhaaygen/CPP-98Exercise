#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Span sp2 = Span(3);
	// sp2.fullAdd();

	// std::vector<int> v = sp2.getV();
	// for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }


	// Span sp3 = Span(10);
	// try
	// {
	// 	sp3.shortestSpan();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// Span sp4 = Span(3);
	// sp4.addNumber(6);
	// sp4.addNumber(3);
	// sp4.addNumber(17);
	// std::vector<int> v2 = sp4.getV();
	// for (std::vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }
	// try
	// {
	// 	sp4.fullAdd();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// Span sp5 = Span(7);
	// std::vector<int> v3 = sp5.getV();
	// std::cout << v3.size() << std::endl;
	return (0);
}