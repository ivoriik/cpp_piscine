#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type):
		name_(name), type_(type)
{
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Buuurrrrnnniiinnnggg..." << std::endl;
}

std::string Zombie::getName(void)
{
	return (this->name_);
}

std::string Zombie::getType(void)
{
	return (this->type_);
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss..." << std::endl;
}
