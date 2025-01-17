#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(13);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "----------------" << std::endl << std::endl;
	// testing the fill function
	Span sp2 = Span(100000);
	try
	{
		sp2.fill(50000);
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		sp2.fill(50000000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "----------------" << std::endl << std::endl;
	// test 1 element
	Span sp3 = Span(1);
	try
	{
		sp3.addNumber(5);
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "----------------" << std::endl << std::endl;
	// test adding a range
	Span sp4 = Span(10);
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	std::cout << "Vector v: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		sp4.addRange(v.begin() + 1, v.end() - 3);
		std::cout << "Vector sp4 after adding range: ";
		sp4.print_v();
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp5(12);
	sp5.addRange(sp4.begin(), sp4.end());

	std::cout << "Vector sp5 after adding range: ";
	sp5.print_v();
	std::cout << std::endl;

	return 0;
}
