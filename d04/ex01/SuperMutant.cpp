#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &oth) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	this->setHP(oth.getHP());
	this->setType(oth.getType());
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage) {
	this->setHP(this->getHP() > (damage - 3) ? this->getHP() - (damage - 3) : 0);
}