
#include "Span.hpp"

Span::Span() : _n(0), _v(std::vector<int>()) {}

Span::Span(unsigned int n) : _n(n), _v(std::vector<int>()) {}

Span::Span(Span const &original) : _n(original._n), _v(original._v) {}

Span &Span::operator=(Span const &original)
{
	_n = original._n;
	_v = original._v;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_v.size() >= _n)
		throw Span::FullException();
	_v.push_back(n);
}

void Span::fill(unsigned int n)
{
	if (_v.size() + n > _n)
		throw Span::FullException();
	std::srand(std::time(0));
	for (unsigned int i = 0; i < n; i++)
		_v.push_back(rand());
}

int Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw Span::NoSpanException();
	std::sort(_v.begin(), _v.end());
	int min = _v[1] - _v[0];
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end() - 1; it++)
	{
		int diff = *(it + 1) - *it;
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() <= 1)
		throw Span::NoSpanException();
	std::sort(_v.begin(), _v.end());
	return _v.back() - _v.front();
}

const char *Span::FullException::what() const throw()
{
	return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No span to find";
}


