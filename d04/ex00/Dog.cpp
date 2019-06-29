#include "Dog.hpp"

Dog::Dog(std::string const &name): Victim(name) {
	std::cout << "Woof Woof" << std::endl;
}

Dog::Dog(Dog const &other) {
	this->setName(other.getName());
}

Dog &Dog::operator=(Dog const &other) {
	if (this != &other)
		this->setName(other.getName());
	return (*this);
}


Dog::~Dog(void) {
	std::cout << "Ugrhhh..." << std::endl;
}

void	Dog::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into an unfried steak !" << std::endl;
}
