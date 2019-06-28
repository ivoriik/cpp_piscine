#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap
{
public:
	FragTrap(std::string const &name = "DefaultFrag");
	FragTrap(FragTrap const &oth);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const &oth);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
//Random Attacks
	void		pirateShipMode();
	void		laserInferno();
	void		minionTrap();
	void		meatUnicycle();
	void		rubberDucky();

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
	static void 	(*randomAttacks)[5](void);
};

#endif 