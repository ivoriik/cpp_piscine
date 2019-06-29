#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) { }
AMateria::AMateria(const AMateria &cpy) { *this = cpy; }
AMateria::~AMateria(void) { }

AMateria&	AMateria::operator = (const AMateria &old)
{
	_xp = old.getXP();
	_type = old.getType();
	return (*this);
}

std::string const &	AMateria::getType(void)	const { return (_type); }
unsigned int		AMateria::getXP(void)	const { return (_xp); }
void				AMateria::use(ICharacter & target)
{
	(void)target;
	_xp += 10;
}
