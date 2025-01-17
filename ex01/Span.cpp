
#include "Span.hpp"

Span::Span() : _n(0), _v(std::vector<int>()) {}

Span::Span(unsigned int n) : _n(n), _v(std::vector<int>()) {}

Span::Span(Span const &original) : _n(original._n), _v(original._v) {}

Span &Span::operator=(Span const &original)
{
	if (this != &original)
	{
		_n = original._n;
		_v = original._v;
	}
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

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _n) // std::distance returns the number of elements between the two iterators
		throw Span::FullException();
	_v.insert(_v.end(), begin, end);
}


int Span::shortestSpan()
{
	int diff = 0;

	if (_v.size() <= 1)
		throw Span::NoSpanException();
	if (_v.empty())
		throw Span::NoSpanException();
	std::vector<int> temp = _v;
	std::sort(temp.begin(), temp.end());
	int min = temp[1] - temp[0];
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end() - 1; it++)
	{
		diff = *(it + 1) - *it;
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() <= 1)
		throw Span::NoSpanException();
	if (_v.empty())
		throw Span::NoSpanException();
	std::vector<int> temp = _v;
	std::sort(temp.begin(), temp.end());
	return temp.back() - temp.front();
}

const char *Span::FullException::what() const throw()
{
	return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No span to find";
}

void Span::print_v()
{
	for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::vector<int>::iterator Span::begin()
{
	return _v.begin();
}

std::vector<int>::iterator Span::end()
{
	return _v.end();
}
