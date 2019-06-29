#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Peon.hpp"

class	Sorcerer {
private:
	std::string	_name;
	std::string	_title;

public:
	Sorcerer(void);
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(const Sorcerer &other);
	~Sorcerer(void);

	Sorcerer&	operator = (const Sorcerer &other);
	
	std::string	getName(void)	const;
	std::string	getTitle(void)	const;
	void		polymorph(Victim const &);
};

std::ostream	&operator<<(std::ostream &ost, Sorcerer const &obj);

#endif
