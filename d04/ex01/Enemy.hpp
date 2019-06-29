#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class	Enemy
{
private:
	int			_hp;
	std::string	_type;

public:
	Enemy(int hp = 170, std::string const &type = "SuperMutant");
	Enemy(const Enemy &oth);
	virtual ~Enemy(void);

	Enemy&	operator = (const Enemy &oth);

	std::string	const	&getType(void)	const;
	int					getHP(void)		const;
	void				setType(std::string const &t);
	void				setHP(int hp);

	virtual void		takeDamage(int damage);
};

#endif
