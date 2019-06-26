#ifndef HUMAN_HPP
#define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	const Brain brain_;

	public:
		Human(void);
		~Human(void);
		const Brain &getBrain() const;
		std::string identify() const;
};

#endif