#ifndef EASYFIND_CPP
#define EASYFIND_CPP

#include <exception>

template <class T>
int		easyfind(T const &container, int val)
{
	for (typename T::const_iterator i = container.begin(); i != container.end(); ++i)
	{
		if (*i == val)
			return (*i);
	}
	throw std::logic_error("No number in the list");
}

#endif