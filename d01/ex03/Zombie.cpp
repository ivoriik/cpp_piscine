#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type):
		name_(name), type_(type)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Buuurrrrnnniiinnnggg..." << std::endl;
	return ;
}

void		Zombie::setName(std::string name)
{
	this->name_ = name;
}

void		Zombie::setType(std::string type)
{
	this->type_ = type;
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
