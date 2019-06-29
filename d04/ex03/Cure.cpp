#include "Cure.hpp"

#define PRINT(x) std::cout << x << std::endl

Cure::Cure(void) : AMateria("cure") { }
Cure::Cure(const Cure &cpy) : AMateria(cpy) { }
Cure::~Cure(void) { }

Cure&	Cure::operator = (const Cure &old)
{
	_xp = old.getXP();
	return (*this);
}

AMateria	*Cure::clone(void)	const
{
	AMateria	*clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter & target)
{
	PRINT("* heals " << target.getName() << "'s wounds *");
}
