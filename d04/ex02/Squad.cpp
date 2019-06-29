#include "Squad.hpp"

Squad::Squad(void): _count(0), _unit(NULL) {}
Squad::Squad(Squad const &oth)
{
	for (int i = 0; i < oth.getCount(); ++i)
		this->push(oth.getUnit(i));
}

Squad::~Squad(void)
{
	t_unit	*tmp;

	while (_unit)
	{
		tmp = _unit;
		_unit = _unit->next;
		delete tmp->unit;
		delete tmp;
	}
	_unit = NULL;
}

Squad 			&Squad::operator=(Squad const &oth)
{
	if (this != &oth) {
		this->~Squad();
		for (int i = 0; i < oth.getCount(); ++i)
			this->push(oth.getUnit(i));
	}
	return (*this);
}

int				Squad::getCount(void)	const {
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int nb)	const {
	t_unit	*tmp;

	if (nb > this->getCount())
		return (NULL);
	tmp = _unit;
	while (nb--)
		tmp = tmp->next;
	return (tmp->unit);
}

int				Squad::push(ISpaceMarine *marine)
{
	t_unit	*tmp;

	if (!marine)
		return (_count);
	tmp = _unit;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new t_unit;
		tmp->next->unit = marine->clone();
		tmp->next->next = NULL;
	}
	else
	{
		_unit = new t_unit;
		_unit->unit = marine->clone();
		_unit->next = NULL;
	}
	return (++_count);
}