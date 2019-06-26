#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	std::string type_;

public:
	Weapon(std::string type = "");
	~Weapon(void);
	const std::string &getType(void) const;
	void setType(std::string type);
};

#endif