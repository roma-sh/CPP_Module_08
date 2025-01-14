
#include <stack>
#include <iostream>

// std::stack<int> MyStack; // A stack of integers
// std::stack<T> MyStack; // A stack of T objects

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {} // callig the constructor of the parent class (std::stack<T>)
	MutantStack(const MutantStack &original) : std::stack<T>(original) {}
	MutantStack &operator=(const MutantStack &original)
	{
		std::stack<T>::operator=(original); // calling the operator= of the parent class (std::stack<T>)
		return *this;
	}
	virtual ~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator; // typedef for the iterator
	/* explanation of the above line:
	std::stack<T> is a stack of T objects
	std::stack<T>::container_type is the type of the container that holds the stack
	which is a std::deque<T> by default
	std::deque<T>::iterator is the iterator type of the deque
	so, std::stack<T>::container_type::iterator is the iterator type of the stack
	and we typedef it as iterator, so we can use "iterator" keyword instead of the long type name
	typename is used to tell the compiler that container_type::iterator is a type, not a variable or a function
	because sometimes the compiler can't know if it's a type or not so we have to tell it explicitly */

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}
	
	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

