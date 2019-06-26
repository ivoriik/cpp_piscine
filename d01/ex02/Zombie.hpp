#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	std::string name_;
	std::string type_;

public:
	Zombie(std::string name = "", std::string type = "");
	~Zombie();
	std::string getName(void);
	std::string getType(void);
	void		announce(void);
};

#endif