#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
	ClapTrap(std::string const &name = "DefaultClap");
	ClapTrap(ClapTrap const &oth);
	~ClapTrap(void);
	ClapTrap	&operator=(ClapTrap const &oth);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	std::string getName(void);
	unsigned int getHitPoints(void);
	unsigned int getMaxHitPoints(void);
	unsigned int getEnergyPoints(void);
	unsigned int getMaxEnergyPoints(void);
	unsigned int getLevel(void);
	unsigned int getMeleeAttackDamage(void);
	unsigned int getRangedAttackDamage(void);
	unsigned int getArmorDamageReduction(void);

	void setName(std::string name);
	void setHitPoints(unsigned int pnts);
	void setMaxHitPoints(unsigned int pnts);
	void setEnergyPoints(unsigned int pnts);
	void setMaxEnergyPoints(unsigned int pnts);
	void setLevel(unsigned int lvl);
	void setMeleeAttackDamage(unsigned int pnts);
	void setRangedAttackDamage(unsigned int pnts);
	void setArmorDamageReduction(unsigned int pnts);

protected:
	std::string		name_;
	unsigned int	hitPoints_;
	unsigned int	maxHitPoints_;
	unsigned int	energyPoints_;
	unsigned int	maxEnergyPoints_;
	unsigned int	level_;
	unsigned int	meleeAttackDamage_;
	unsigned int	rangedAttackDamage_;
	unsigned int	armorDamageReduction_;
};

#endif 