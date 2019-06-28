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

void FragTrap::rangeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " at melee, causing "
			<< this->_meleeAttackDamage
			<< " points of damage !" << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount) {
	amount -= (amount > this->_armorDamageReduction) ? this->_armorDamageReduction : amount;
	this->_hitPoints -= (this->_hitPoints > amount) ? amount : this->_hitPoints;
	std::cout << "FR4G-TP " << this->_name
			<< " got " << amount << " points of damage!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount > this->_maxHitPoints - this->_hitPoints)
		amount_ = this->_maxHitPoints - this->_hitPoints;
	this->_hitPoints += amount;
	std::cout << "FR4G-TP " << this->_name
			<< " got " << amount << " Hit points!" << std::endl
			<< "Current level of Hit points :: "
			<< this->_hitPoints << std::endl;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25) {
		std::cout << "Not enough energy. Please charge now!" << std::endl;
		return;
	}
	this->_energyPoints -= 25;
	std::string attacks[]_ = { "Brain Attack",
							"Laser Look",
							"Paralyzing Virus",
							"Fire Ball",
							"Radioactive Punches" };
	std::cout << "FR4G-TP " << this->_name << " attacks "
			<< target << " with " << attacks[rand() % 5]
			<< "." << std::endl
			<< "Current level of Energy - "
			<< this->_energyPoints << std::endl;
	return;
}

