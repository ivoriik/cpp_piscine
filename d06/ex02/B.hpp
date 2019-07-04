#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base {
public:
	B();
	B(B const &oth);
	virtual ~B();
	B &operator=(B const &oth);
};

#endif