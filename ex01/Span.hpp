#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &other);
		Span &operator=(Span const &other);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void fill(unsigned int n);

		class FullException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		class NoSpanException : public std::exception
		{
		public:
			const char *what() const throw();
		};
	private:
		unsigned int _n;
		std::vector<int> _v;
};

#endif
