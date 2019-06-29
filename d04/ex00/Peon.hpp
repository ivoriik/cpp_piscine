#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class	Peon: public Victim {
public:
	Peon(std::string const &name = "Peon");
	Peon(const Peon &other);
	Peon &operator=(const Peon &other);
	~Peon(void);
	virtual void	getPolymorphed(void) const;
};

#endif
