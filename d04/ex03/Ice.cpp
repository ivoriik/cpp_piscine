#include "Ice.hpp"

#define PRINT(x) std::cout << x << std::endl

Ice::Ice(void) : AMateria("ice") { }
Ice::Ice(const Ice &cpy) : AMateria(cpy) { }
Ice::~Ice(void) { }

Ice&	Ice::operator = (const Ice &old)
{
	_xp = old.getXP();
	return (*this);
}

AMateria	*Ice::clone(void)	const
{
	AMateria	*clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter & target)
{
	PRINT("* shoots an ice bolt at " << target.getName() << " *");
}
