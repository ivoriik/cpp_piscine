#include "Character.hpp"

Character::Character(std::string const &name) 
	:_name(name), _ap(40), _weapon(NULL) {}

Character::Character(Character const &oth)
	:_name(oth._name), _ap(oth._ap), _weapon(oth._weapon) {}

Character::~Character(void) {}

Character&	Character::operator=(Character const &oth) {
	if (this != &oth) {
		this->_name = oth._name;
		this->_ap = oth._ap;
		this->_weapon = oth._weapon;
	}
	return (*this);
}

std::string const	&Character::getName(void)	const	{
	return (_name);
}

int					Character::getAp(void)		const	{
	return (_ap);
}

AWeapon*			Character::getWeapon(void)	const	{
	return (_weapon);
}

void	Character::recoverAP(void) {
	_ap = _ap + 10 > 40 ? 40 : _ap + 10;
}

void	Character::equip(AWeapon *w) {
	_weapon = w;
}

void	Character::attack(Enemy *e) {
	if (!e)
		return ;
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
		_ap -= _weapon->getAPCost();
		_weapon->attack();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() <= 0) {
			std::cout << "DELETE e\n";
			delete e;
		}
	}
}

std::ostream &operator<<(std::ostream &ost, Character const &oth)
{
	oth.getWeapon() ?
		ost << oth.getName() << " has "<< oth.getAp() << " AP and wields a "
			<< oth.getWeapon()->getName() << std::endl :
		ost << oth.getName() << " has " << oth.getAp() << " AP and is unarmed"
			<< std::endl;
	return ost;
}