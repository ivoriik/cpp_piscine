#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class	PowerFist : public AWeapon {
public:
	PowerFist(void);
	PowerFist(PowerFist const &oth);
	virtual ~PowerFist(void);
	PowerFist &operator=(PowerFist const &oth);

	void	attack() const;
};

#endif