#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int N;
	public:
		Span ();
		Span (unsigned int n);
		Span (const Span &a);
		~Span ();
		Span & operator = (const Span &a);
		void addNumber(int n);
		void fullAdd();
		int shortestSpan();
		int longestSpan();
		std::vector<int> getV() const;

		class SpanFull : public std::exception
		{
			virtual const char * what() const throw();
		};
		class SpanEmpty : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif