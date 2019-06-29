#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	_inv[0] = cpy._inv[0];
	_inv[1] = cpy._inv[1];
	_inv[2] = cpy._inv[2];
	_inv[3] = cpy._inv[3];
}
MateriaSource::~MateriaSource(void) { }
MateriaSource&	MateriaSource::operator = (const MateriaSource &old)
{
	_inv[0] = old._inv[0];
	_inv[1] = old._inv[1];
	_inv[2] = old._inv[2];
	_inv[3] = old._inv[3];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0;i < 4;i++)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0;i < 4;i++)
	{
		if (_inv[i] && _inv[i]->getType() == type)
			return (_inv[i]->clone());
	}
	return (NULL);
}
