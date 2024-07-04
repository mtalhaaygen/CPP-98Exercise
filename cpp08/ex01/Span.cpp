#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n)
{
	this->N = n;
	this->_v.reserve(n);
}

Span::Span(const Span &a)
{
	this->N = a.N;
	this->_v = a._v;
}

Span::~Span() {}

Span & Span::operator = (const Span &a)
{
	this->N = a.N;
	return *this;
}

void Span::addNumber(int n)
{
	try
	{
		if (_v.size() >= N)
			throw SpanFull();
		_v.push_back(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::vector<int> Span::getV() const
{
	return _v;
}

void Span::fullAdd()
{
	try
	{
		if (_v.size() > N)
			throw SpanFull();
		for (unsigned int i = 0; i < this->N; i++)
		{
			_v.push_back(rand() % 1000000);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan()
{
	try
	{
		if (_v.size() <= 1)
			throw SpanEmpty();
		std::vector<int> tmp = _v;
		std::sort(tmp.begin(), tmp.end());
		int min = tmp[1] - tmp[0];
		for (unsigned int i = 1; i < tmp.size(); i++)
		{
			if (tmp[i] - tmp[i - 1] < min)
				min = tmp[i] - tmp[i - 1];
		}
		return min;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

int Span::longestSpan()
{
	try
	{
		if (_v.size() <= 1)
			throw SpanEmpty();
		int min = *std::min_element(_v.begin(), _v.end());
		int max = *std::max_element(_v.begin(), _v.end());
		return max - min;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

const char * Span::SpanFull::what() const throw()
{
	return "Span is full";
}

const char * Span::SpanEmpty::what() const throw()
{
	return "Span is empty";
}
