#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Victim.hpp"

class	Dog: public Victim {
public:
	Dog(std::string const &name = "Dog");
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog(void);
	virtual void	getPolymorphed(void) const;
};

#endif
