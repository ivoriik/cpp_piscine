#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character {
private:
	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

public:
	Character(std::string const &name = "Default Warrior");
	Character(Character const &oth);
	~Character(void);

	Character&	operator=(Character const &oth);

	std::string const	&getName(void)		const;
	int					getAp(void)			const;
	AWeapon				*getWeapon(void)	const;
	void				recoverAP(void);
	void				equip(AWeapon* wpn);
	void				attack(Enemy* e);
};

std::ostream &operator<<(std::ostream &ost, Character const &oth);

#endif
