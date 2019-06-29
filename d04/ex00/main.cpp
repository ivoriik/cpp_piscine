#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Dog.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Dog rey("Rey");

	Sorcerer robert2("Robert", "the Magnificent");
	Victim jim2 = jim;
	Peon joe2;
	Dog rey2("Volley");
	joe2 = joe;
	rey2 = rey;

	std::cout << robert2 << jim2 << joe2;
	std::cout << rey2;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(rey);

	return (0);
}
