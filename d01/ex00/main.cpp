#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack(void)
{
	Pony ronny;

	std::cout << "***STACK ALLOC***\n";
	ronny.setName("Ronny");
	std::cout << "Name  : " << ronny.getName() << std::endl;
	ronny.setBreed("North Iberian");
	std::cout << "Breed  : " << ronny.getBreed() << std::endl;
	ronny.setColor("Ebony");
	std::cout << "Color : " << ronny.getColor() << std::endl;
	ronny.setMark("Speedy mare");
	std::cout << "Mark  : " << ronny.getMark() << std::endl;


}
void ponyOnTheHeap(void)
{
	Pony *pinky = new Pony("Pinky");

	std::cout << "***HEAP ALLOC***\n";
	std::cout << "Name  : " << pinky->getName() << std::endl;
	pinky->setBreed("Canadian flyer");
	std::cout << "Breed  : " << pinky->getBreed() << std::endl;
	pinky->setColor("Pink");
	std::cout << "Color : " << pinky->getColor() << std::endl;
	pinky->setMark("Awesome flying pony");
	std::cout << "Mark  : " << pinky->getMark() << std::endl;
	delete pinky;
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}