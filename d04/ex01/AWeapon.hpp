#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class	AWeapon {
private:
	std::string	_name;
	int			_apCost;
	int			_damage;

public:
	AWeapon(std::string const &name = "Weapon", int apCost = 0, int damage = 0);
	AWeapon(AWeapon const &oth);
	virtual ~AWeapon(void);

	AWeapon&	operator=(AWeapon const &oth);

	std::string const	&getName(void)	const;
	int					getAPCost(void)	const;
	int					getDamage(void)	const;
	void				setName(std::string const &name);
	void				setAPCost(int val);
	void				setDamage(int val);

	virtual void 		attack()	const = 0;
};

#endif
