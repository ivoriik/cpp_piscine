#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>
#include <iostream>

void		randomChump()
{
	ZombieEvent event = ZombieEvent();
	event.setZombieType("SKIN EATER");
	Zombie *newZombie = event.newZombie(ZombieEvent::ZombieNames[std::rand() % 10]);
	delete newZombie;
}

int			main(void)
{
	std::cout << "***Heap***" << std::endl;
	std::srand(std::time(0));
	for (int i = 0; i < 10; ++i)
	{
		randomChump();

	}
	std::cout << "***Stack***" << std::endl;
	Zombie spitter = Zombie("Still Dancing Hemphill", "FLOATER");
	return (0);
}