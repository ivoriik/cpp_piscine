#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap:
{
public:
	ScavTrap(std::string const &name = "DefaultScav");
	ScavTrap(ScavTrap const & other);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);

	void			challengeNewcomer(void);
	static void 	(*randomChallenges)[5](void);

};
#endif