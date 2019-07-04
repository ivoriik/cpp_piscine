#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base {
public:
	A();
	A(A const &oth);
	virtual ~A();
	A &operator=(A const &oth);
};

#endif