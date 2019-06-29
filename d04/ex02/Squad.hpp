#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include "ISquad.hpp"

typedef struct		s_unit
{
	ISpaceMarine	*unit;
	s_unit			*next;
}					t_unit;

class	Squad: public ISquad {
private:
	int		_count;
	t_unit	*_unit;

public:
	Squad();
	Squad(Squad const &oth);
	~Squad();
	Squad &operator=(Squad const &oth);

	int				getCount(void)	const;
	ISpaceMarine*	getUnit(int nb)	const;
	int				push(ISpaceMarine *marine);
};
#endif
