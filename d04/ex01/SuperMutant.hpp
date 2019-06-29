#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant: public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &oth);
	virtual ~SuperMutant(void);
	using Enemy::operator =;

	virtual void takeDamage(int damage);
};

#endif