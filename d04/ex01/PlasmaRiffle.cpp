#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &oth) {
		this->setName(oth.getName());
		this->setAPCost(oth.getAPCost());
		this->setDamage(oth.getDamage());
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &oth) {
	if (this != &oth) {
		this->setName(oth.getName());
		this->setAPCost(oth.getAPCost());
		this->setDamage(oth.getDamage());
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void) { }

void	PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}