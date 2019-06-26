#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain() {}

Brain::~Brain() {}

std::string Brain::identify() const
{
	std::ostringstream id;
	id << (void *)this;
	return (id.str());
}
