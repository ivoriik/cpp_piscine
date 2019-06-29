#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apCost, int damage)
	: _name(name), _apCost(apCost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const &oth)
	: _name(oth._name), _apCost(oth._apCost), _damage(oth._damage) {}

AWeapon::~AWeapon(void) {}
AWeapon&	AWeapon::operator = (AWeapon const &oth)
{
	if (this != &oth) {
		_name = oth.getName();
		_apCost = oth.getAPCost();
		_damage = oth.getDamage();
	}
	return (*this);
}

std::string const &	AWeapon::getName(void)		const {
	return (_name);
}

int					AWeapon::getAPCost(void)	const {
	return (_apCost);
}

int					AWeapon::getDamage(void)	const {
	return (_damage);
}

void				AWeapon::setName(std::string const &name) {
	this->_name = name;
}

void				AWeapon::setAPCost(int val) {
	this->_apCost = val;
}

void				AWeapon::setDamage(int val) {
	this->_damage = val;
}
