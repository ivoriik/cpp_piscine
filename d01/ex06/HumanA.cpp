#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
	name_(name), weapon_(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
	std::cout << this->name_ << " attacks with his " << this->weapon_.getType() << std::endl;
}