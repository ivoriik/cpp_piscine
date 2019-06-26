#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent 
{
	std::string					type_;
public:
	ZombieEvent();
	~ZombieEvent();
	void						setZombieType(std::string type);
	Zombie*						newZombie(std::string name);
	const static std::string	ZombieNames[10];
};

#endif