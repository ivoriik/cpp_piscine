#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) : _name(name)
{
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}
Character::Character(const Character &cpy)
{
	_name = cpy.getName();
	_inv[0] = cpy._inv[0];
	_inv[1] = cpy._inv[1];
	_inv[2] = cpy._inv[2];
	_inv[3] = cpy._inv[3];
}
Character::~Character(void) { }
Character&	Character::operator = (const Character &old)
{
	_name = old.getName();
	_inv[0] = old._inv[0];
	_inv[1] = old._inv[1];
	_inv[2] = old._inv[2];
	_inv[3] = old._inv[3];
	return (*this);
}

std::string const &	Character::getName(void)	const { return (_name); }

void	Character::equip(AMateria* m)
{
	for (int i = 0;i < INV;i++)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= INV)
		_inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INV)
		if(_inv[idx])
			_inv[idx]->use(target);
}
