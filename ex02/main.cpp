
#include "MutantStack.hpp"
// Subjet main
// int main()
// {
// 	MutantStack<int> myStack;

// 	myStack.push(5);
// 	myStack.push(17);
// 	myStack.push(33);
// 	myStack.push(2);

// 	std::cout << "top: " << myStack.top() << std::endl; // top returns a reference to the top element of the stack
// 	std::cout << "begin: " << *myStack.begin() << std::endl; // begin returns an iterator to the first element of the stack
// 	std::cout << "size: " << myStack.size() << std::endl;

// 	myStack.pop();

// 	std::cout << "size after .pop: " << myStack.size() << std::endl;

// 	myStack.push(3);
// 	myStack.push(5);
// 	myStack.push(737);
// 	myStack.push(0);

// 	MutantStack<int>::iterator it_begin = myStack.begin();
// 	MutantStack<int>::iterator it_end = myStack.end();

// 	++it_begin;
// 	it_begin++;
// 	--it_begin;
// 	it_begin--;
// 	while (it_begin != it_end)
// 	{
// 		std::cout << *it_begin << std::endl;
// 		++it_begin;
// 	}
// 	std::stack<int> s(myStack);
// 	return 0;
// }



// my main:

int main()
{
	MutantStack<int> s1;
	MutantStack<int> s2;

	s1.push(1);
	s1.push(1);
	s1.push(1);
	s1.push(46);
	s1.push(666);
	s1.push(134);

	MutantStack<int>::iterator it1 = s1.begin();
	MutantStack<int>::iterator it1_end = s1.end();


	for (it1 = s1.begin(); it1 != it1_end; it1++)
	{
		std::cout << *it1 << " ";
		s2.push(*it1);
	}
	MutantStack<int>::iterator it2 = s2.begin();
	MutantStack<int>::iterator it2_end = s2.end();

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	for (it2 = s2.begin(); it2 != it2_end; it2++)
	{
		std::cout << *it2 << " ";
	}

	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	s1.pop();
	s1.pop();
	*(s1.begin() + 1) = *(s2.end() - 2);
	for (it1 = s1.begin(); it1 != it1_end; it1++)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	return 0;
}
