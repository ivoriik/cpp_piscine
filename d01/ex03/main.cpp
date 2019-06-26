#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
	ZombieHorde horde = ZombieHorde(23);
	horde.announce();
	return (0);
}