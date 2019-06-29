#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle: public AWeapon {
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &oth);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &operator=(PlasmaRifle const &oth);

	void	attack() const;
};

#endif