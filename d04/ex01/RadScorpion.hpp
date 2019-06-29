#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion: public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &oth);
	virtual ~RadScorpion(void);
	using Enemy::operator =;
};

#endif
