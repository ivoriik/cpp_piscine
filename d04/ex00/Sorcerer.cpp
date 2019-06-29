#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other) {
	_name = other._name;
	_title = other._title;

}

Sorcerer::~Sorcerer(void) {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &other) {
	if (this != &other) {
		_name = other._name;
		_title = other._title;
	}
	return (*this);
}

std::string	Sorcerer::getName(void) const {
	return (_name); 
}

std::string	Sorcerer::getTitle(void) const {
	return (_title);
}

void		Sorcerer::polymorph(Victim const &v) {
	v.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &ost, Sorcerer const &obj) {
	ost << "I am " << obj.getName() << ", " << obj.getTitle()
		<< ", and I like ponies !\n";
	return (ost);
}