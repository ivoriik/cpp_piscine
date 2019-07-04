#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <string>

struct Data
{
	std::string	s1;
	int			nb;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif