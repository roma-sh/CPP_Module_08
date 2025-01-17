
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int* easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value); // find returns an iterator pointing
	// to the first occurrence of the element in the range
	if (it == container.end())
		throw std::exception();
	return &(*it); // return a pointer to the value which is dereferenced from the iterator it
}

// manual implementation of easyfind
// template <typename T>
// int* easyfind(T &container, int value)
// {
// 	typename T::iterator it = container.begin();

// 	while (it != container.end())
// 	{
// 		if (*it == value)
// 			return &(*it); // return a pointer to the value which is dereferenced from the iterator it
// 		++it;
// 	}
// 	throw std::exception();
// }
