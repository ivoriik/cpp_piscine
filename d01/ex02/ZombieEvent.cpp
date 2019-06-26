#include "ZombieEvent.hpp"

const std::string ZombieEvent::ZombieNames[] = {
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

ZombieEvent::ZombieEvent(void)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type_ = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type_));
}

// std::string getZombieName(void)
// {
// 	return ();
// }