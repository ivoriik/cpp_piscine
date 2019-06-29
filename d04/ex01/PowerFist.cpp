#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}
PowerFist::PowerFist(PowerFist const &oth) {
	this->setName(oth.getName());
	this->setAPCost(oth.getAPCost());
	this->setDamage(oth.getDamage());
}

PowerFist &PowerFist::operator=(PowerFist const &oth) {
	if (this != &oth) {
		this->setName(oth.getName());
		this->setAPCost(oth.getAPCost());
		this->setDamage(oth.getDamage());
	}
	return (*this);
}

PowerFist::~PowerFist(void) {}

void	PowerFist::attack(void) const
{
	std::cout << "“* pschhh... SBAM! *" << std::endl;
}