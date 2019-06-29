#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define INV 4

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource&cpy);
	~MateriaSource(void);
	MateriaSource&	operator = (const MateriaSource &old);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);

	AMateria*	_inv[INV];
};

#endif
