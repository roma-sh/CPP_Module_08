
#include <iostream>
#include <vector>

// template <typename T>
// void easyfind(T &container, int value)
// {
// 	typename T::iterator it = std::find(container.begin(), container.end(), value);
// 	if (it == container.end())
// 		throw std::exception();
// 	else
// 		std::cout << "Value found" << std::endl;
// }

// another way to implement easyfind and return a pointer to the value:
template <typename T>
int* easyfind(T &container, int value)
{
	typename T::iterator it = container.begin();

	while (it != container.end())
	{
		if (*it == value)
			return &(*it);
		++it;
	}
	throw std::exception();
}
