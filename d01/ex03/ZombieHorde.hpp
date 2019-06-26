#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

# include <string>
# include "Zombie.hpp"
#define ZNAMES 10
#define ZTYPES 13


class ZombieHorde
{
	size_t						size_;
	Zombie						*zombieHorde_;

public:
	const static std::string	ZombieNames[ZNAMES];
	const static std::string	ZombieTypes[ZTYPES];
	ZombieHorde(int N = 0);
	~ZombieHorde();
	void announce();
};

#endif