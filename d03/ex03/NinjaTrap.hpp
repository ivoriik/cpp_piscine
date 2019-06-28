#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(const std::string name);
		NinjaTrap(const NinjaTrap &obj);
		~NinjaTrap(void);

		NinjaTrap &	operator=(const NinjaTrap &rhs);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			ninjaShoebox(NinjaTrap &target);
		void			ninjaShoebox(ClapTrap &target);
		void			ninjaShoebox(FragTrap &target);
		void			ninjaShoebox(ScavTrap &target);

	private:
		static std::string _vaulthunterQuotes[25];
};

#endif 