#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy &oth) {
	this->setHP(oth.getHP());
	this->setType(oth.getType());
}

Enemy::~Enemy(void) {}

Enemy&	Enemy::operator = (const Enemy &oth) {
	if (this != &oth) {
		this->setHP(oth.getHP());
		this->setType(oth.getType());
	}
	return (*this);
}

std::string const	&Enemy::getType(void)	const {
	return (_type);
}

int					Enemy::getHP(void)		const { 
	return (_hp);
}

void				Enemy::setType(std::string const &t) {
	this->_type = t;
}

void				Enemy::setHP(int hp) {
	this->_hp = hp;
}

void				Enemy::takeDamage(int damage) {
	this->_hp = this->_hp > damage ? this->_hp - damage : 0;
}
