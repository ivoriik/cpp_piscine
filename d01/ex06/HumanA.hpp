#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA 
{
	std::string	name_;
	Weapon		&weapon_;
public:
	HumanA(std::string name, Weapon &w);
	~HumanA(void);
	void attack(void) const;
};

#endif