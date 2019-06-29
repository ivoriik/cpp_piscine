#include "Peon.hpp"

Peon::Peon(std::string const &name): Victim(name) {
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(const Peon &other) {
	this->setName(other.getName());
}

Peon &Peon::operator=(const Peon &other) {
	if (this != &other)
		this->setName(other.getName());
	return (*this);
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
