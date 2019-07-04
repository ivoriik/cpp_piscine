#include "C.hpp"

C::C(void) {}

C::C(C const &oth) {
	(void)oth;
}

C::~C(void) {}

C	&C::operator=(C const &oth) {
	(void)oth;
	return (*this);
}