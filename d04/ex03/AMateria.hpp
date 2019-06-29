#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
protected:
	unsigned int	_xp;
	std::string		_type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &cpy);
	virtual ~AMateria(void);

	AMateria&	operator = (const AMateria &old);

	std::string const &	getType(void)	const;
	unsigned int		getXP(void)		const;

	virtual AMateria*	clone(void)		const = 0;
	virtual	void		use(ICharacter& target);
};

#endif
