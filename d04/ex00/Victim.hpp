#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class	Victim {
private:
	std::string	_name;

public:
	Victim(std::string const &name = "Victim");
	Victim(Victim const &other);
	~Victim(void);

	Victim&	operator = (Victim const &other);

	std::string		getName(void)			const;
	virtual void	getPolymorphed(void)	const;
	void			setName(std::string const &name);
};

std::ostream&	operator<<(std::ostream &ost, Victim const &obj);

#endif
