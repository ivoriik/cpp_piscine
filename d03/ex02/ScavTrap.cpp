#include ScavTrap.hpp

ScavTrap::ScavTrap(std::string const &name):	
		name_(name), hitPoints_(100), maxHitPoints_(100), energyPoints_(100),
		maxEnergyPoints_(100), level_(1), meleeAttackDamage_(30), 
		rangedAttackDamage_(20), armorDamageReduction_(5) {
	std::cout << "SC4V-TP < " << this->name_ << " > : Allow me to introduce myself - 
		I am a SC4V-TP steward robot, but my friends call me Scavtrap! 
		Or they would, if any of them were still alive. Or had existed in the first place! 
		Oh - I’ve got something for you!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) :
	name_(other.name_), hitPoints_(other.hitPoints_), maxHitPoints_(other.maxHitPoints_), 
	energyPoints_(other.energyPoints_), maxEnergyPoints_(other.maxEnergyPoints_), 
	level_(other.level_), meleeAttackDamage_(other.meleeAttackDamage_), 
	rangedAttackDamage_(other.rangedAttackDamage_), armorDamageReduction_(other.armorDamageReduction_)
{
	std::cout << "ASSIGNED SC4V-TP < " << this->name_ << " > : Allow me to introduce myself - 
		I am a SC4V-TP steward robot, but my friends call me Scavtrap! 
		Or they would, if any of them were still alive. Or had existed in the first place! 
		Oh - I’ve got something for you!" << std::endl;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &other)
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
		std::cout << "COPIED SC4V-TP < " << this->name_ << " > : Allow me to introduce myself - 
		I am a SC4V-TP steward robot, but my friends call me Scavtrap! 
		Or they would, if any of them were still alive. Or had existed in the first place! 
		Oh - I’ve got something for you!" << std::endl;
	}
    return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "FR4G-TP < " << this->name_ << " >: Oh. My. God. What if I'm like... a fish? 
		And, if I'm not moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! 
		HHHHHHHELP!" << std::endl;
	return;
}

ScavTrap::ScavTrap(void) {

	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	std::cout << "ScavTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Finally I'm alive!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string const & name) {

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	std::cout << "ScavTrap created." << std::endl;
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Finally I'm alive!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & robot) {
	*this = robot;
	return;
}

void ScavTrap::challengeNewcomer(void) {
	std::string challenges[] = {	"Eat It or Wear It",
									"Ice Bucket",
									"Chubby Bunny",
									"No Mirror Makeup",
									"No Thumbs" };
	std::cout << "< " << getName() << " > :" << std::endl
			<< "Time for "
			<< challenges[rand() % 5]
			<< " challenge!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "< " << getName() << " > :" << std::endl
			<< "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return;
}