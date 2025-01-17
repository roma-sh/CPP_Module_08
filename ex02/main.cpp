
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> myStack;

	myStack.push(5);
	myStack.push(17);
	myStack.push(33);
	myStack.push(2);

	std::cout << "top: " << myStack.top() << std::endl; // top returns a reference to the top element of the stack
	std::cout << "begin: " << *myStack.begin() << std::endl; // begin returns an iterator to the first element of the stack
	std::cout << "size: " << myStack.size() << std::endl;

	myStack.pop();

	std::cout << "size after .pop: " << myStack.size() << std::endl;

	myStack.push(3);
	myStack.push(5);
	myStack.push(737);
	myStack.push(0);

	MutantStack<int>::iterator it_begin = myStack.begin();
	MutantStack<int>::iterator it_end = myStack.end();

	++it_begin;
	it_begin++;
	--it_begin;
	it_begin--;
	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		++it_begin;
	}
	std::stack<int> s(myStack);
	return 0;
}

