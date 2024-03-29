#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class	TacticalMarine: public ISpaceMarine {
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &oth);
	~TacticalMarine(void);
	TacticalMarine&	operator=(TacticalMarine const &oth);

	ISpaceMarine	*clone(void)		const;
	void			battleCry(void)		const;
	void			rangedAttack(void)	const;
	void			meleeAttack(void)	const;
};

#endif