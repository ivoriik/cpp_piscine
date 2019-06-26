#include "Human.hpp"

Human::Human() {}
Human::~Human() {}

const Brain &Human::getBrain(void) const
{
	return (this->brain_);
}

std::string Human::identify(void) const
{
	return (this->brain_.identify());
}