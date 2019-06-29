#include "Victim.hpp"

Victim::Victim(std::string const &name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &other): _name(other._name) {}

Victim::~Victim(void) {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string		Victim::getName(void) const {
	return (_name); 
}

void			Victim::setName(std::string const &name) {
	this->_name = name;
}

void			Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

Victim&			Victim::operator=(const Victim &other) {
	std::cout << "VICTIM::ASSIGN"  << std::endl;
	this->_name = other.getName();
	return (*this);
}

std::ostream	&operator << (std::ostream &ost, Victim const &obj) {
	ost << "I'm " << obj.getName() << " and I like otters !\n";
	return (ost);
}