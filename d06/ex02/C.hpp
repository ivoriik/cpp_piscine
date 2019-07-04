#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base {
public:
	C();
	C(C const &oth);
	virtual ~C();
	C &operator=(C const &oth);
};

#endif