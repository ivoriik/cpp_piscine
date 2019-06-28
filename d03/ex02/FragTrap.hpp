#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap(std::string const &name = "DefaultFrag");
	FragTrap(FragTrap const &robot);
	~FragTrap(void);

	void 			vaulthunter_dot_exe(std::string const & target);
	static void 	(*randomChallenges)[5](void);

};
#endif 