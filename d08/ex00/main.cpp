#include <iostream>

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	int array[10] = {4, 8, 15, 16, 23, 42, 108, 42, 8, 0};

	std::list<int> lst;
	lst.assign(array, array + 10);
	std::cout << "List: ";
	for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
		std::cout << " " << *i;
	std::cout << std::endl;
	try {
		std::cout	<< "\neasyfind(lst, 23): "
					<< easyfind(lst, 23) << std::endl;
		std::cout	<< "\neasyfind(lst, 99): " << easyfind(lst, 99) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::vector<int> vec(array, array + 10);
	std::cout << "Vector: ";
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
		std::cout << " " << *i;
	std::cout << std::endl;
	try {
		std::cout	<< "\neasyfind(vec, 42): "
					<< easyfind(vec, 42) << std::endl;
		std::cout	<< "\neasyfind(vec, -42): " << easyfind(vec, -42) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}