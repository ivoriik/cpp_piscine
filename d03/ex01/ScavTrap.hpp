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
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);

private:
	std::string		name_;
	unsigned int	hitPoints_;
	unsigned int	maxHitPoints_;
	unsigned int	energyPoints_;
	unsigned int	maxEnergyPoints_;
	unsigned int	level_;
	unsigned int	meleeAttackDamage_;
	unsigned int	rangedAttackDamage_;
	unsigned int	armorDamageReduction_;
	
public:
	static void 	(*randomChallenges)[5](void);

};
#endif