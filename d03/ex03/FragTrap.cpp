#include FragTrap.hpp

FragTrap::FragTrap(std::string const &name):	
		name_(name), hitPoints_(100), maxHitPoints_(100), energyPoints_(100),
		maxEnergyPoints_(100), level_(1), meleeAttackDamage_(30), 
		rangedAttackDamage_(20), armorDamageReduction_(5) {
	std::cout << "FR4G-TP < " << this->name_ << " > : Directive one: Protect humanity! 
		Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) :
	name_(other.name_), hitPoints_(other.hitPoints_), maxHitPoints_(other.maxHitPoints_), 
	energyPoints_(other.energyPoints_), maxEnergyPoints_(other.maxEnergyPoints_), 
	level_(other.level_), meleeAttackDamage_(other.meleeAttackDamage_), 
	rangedAttackDamage_(other.rangedAttackDamage_), armorDamageReduction_(other.armorDamageReduction_)
{
	std::cout << "ASSIGNED FR4G-TP < " << this->name_ << " > : Directive one: Protect humanity! 
		Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap &FragTrap::operator= (FragTrap const &other)
{
	if (this != &other) {
		this->name_ = other.name_;
		this->hitPoints_ = other.hitPoints_;
		this->maxHitPoints_ = other.maxHitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->maxEnergyPoints_ = other.maxEnergyPoints_;
		this->level_ = other.level_;
		this->meleeAttackDamage_ = other.meleeAttackDamage_;
		this->rangedAttackDamage_ = other.rangedAttackDamage_;
		this->armourDamageReduction_ = other.armourDamageReduction_;
		std::cout << "COPY FR4G-TP < " << this->name_ << " > : Directive one: Protect humanity! 
		Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
	}
    return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP < " << this->name_ << " >: Oh. My. God. What if I'm like... a fish? 
		And, if I'm not moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! 
		HHHHHHHELP!" << std::endl;
	return;
}

#include "FragTrap.hpp"

FragTrap::FragTrap(void){

	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	std::cout << "FragTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl;
	std::cout << " Directive one: Protect humanity!"
	<< " Directive two: Obey Jack at all costs."
	<< " Directive three: Dance!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string const & name){

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	std::cout << "FragTrap created." << std::endl;
	std::cout << "< " << name << " >:" << std::endl;
	std::cout << " Directive one: Protect humanity!"
			<< " Directive two: Obey Jack at all costs."
			<< " Directive three: Dance!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & robot) {
	*this = robot;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (getEnergyPoints() < 25) {
		std::cout << "Not enough energy. Please charge now!" << std::endl;
		return;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::string attacks[] = { "Brain Attack",
							"Laser Look",
							"Paralyzing Virus",
							"Fire Ball",
							"Radioactive Punches" };
	std::cout << "FR4G-TP " << getName() << " attacks "
			<< target << " with " << attacks[rand() % 5]
			<< "." << std::endl
			<< "Current level of Energy :: "
			<< getEnergyPoints() << std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << getName() << " died." << std::endl;
	return;
}