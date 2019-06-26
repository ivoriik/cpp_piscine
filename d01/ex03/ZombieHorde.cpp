#include "ZombieHorde.hpp"
#include <iostream>
#include <ctime>

const std::string ZombieHorde::ZombieNames[] = {
		"Brainy Allegheny",
		"Undead Jack Seizmore",
		"Bone Toothpick Juanita",
		"Forever Calvin",
		"Brain Daddy",
		"Harold Bitemark",
		"Keith Richards",
		"Kirsten Stuart",
		"Molly from SilentHill",
		"Dirty Garry"
};

const std::string ZombieHorde::ZombieTypes[] = {
		"BITER",
		"COLD BODY",
		"CREEPER",
		"DEAD ONE",
		"FLOATER",
		"GEEK",
		"LAMEBRAIN",
		"LURKER",
		"MONSTER",
		"ROAMER",
		"ROTTER",
		"SKIN EATER",
		"WALKER"
};

ZombieHorde::ZombieHorde(int n): size_((size_t)n % 10000000), zombieHorde_(new Zombie[size_]) 
{
	std::srand(std::time(0));
	std::cout << "\n***Creating Zombie Horde***\n\n";
	for (size_t i = 0; i < size_; ++i)
	{
		zombieHorde_[i].setName(ZombieHorde::ZombieNames[std::rand() % ZNAMES]);
		zombieHorde_[i].setType(ZombieHorde::ZombieTypes[std::rand() % ZTYPES]);
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "\n***Destroing Zombie Horde***\n\n";
	delete [] zombieHorde_;
}

void ZombieHorde::announce(void)
{
	for (size_t i = 0; i < size_; ++i)
	{
		zombieHorde_[i].announce();
	}
}
