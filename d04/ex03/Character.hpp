#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INV 4

class	Character : public ICharacter
{
private:
	std::string	_name;

public:
	Character(void);
	Character(std::string const &name);
	Character(const Character &cpy);
	~Character(void);
	Character&	operator = (const Character &old);

	std::string const &	getName(void)	const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	AMateria*	_inv[INV];
};

#endif
