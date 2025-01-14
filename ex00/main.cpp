
#include "easyfind.hpp"

int	main()
{
	std::vector<int> vector_container;
	int *ptr = NULL;

	vector_container.push_back(1);
	vector_container.push_back(2);
	vector_container.push_back(3);
	vector_container.push_back(4);
	vector_container.push_back(5);
	vector_container.push_back(4);
	vector_container.push_back(4);

	try
	{
		ptr = easyfind(vector_container, 4);
		std::cout << "Value found: " << *ptr << std::endl;
		// print the index of this value can be done by subtracting
		//the pointer to the value from the pointer to the first element of the vector
		// bexause the vector stores its elements in contiguous memory locations
		std::cout << "Index: " << ptr - &vector_container[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
	try
	{
		ptr = easyfind(vector_container, 13);
		std::cout << "Value found: " << *ptr << std::endl;
		std::cout << "Index: " << ptr - &vector_container[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
	return 0;
}



/*
Vector:
- stores elements in contiguous memory locations, which can lead to better cache performance and faster access times
- provides dynamic resizing, which allows for efficient memory usage and flexibility in the number of elements stored
- supports random access to elements by [], which allows for efficient element retrieval and manipulation
*/
