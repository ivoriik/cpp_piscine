#include "A.hpp"

A::A(void) {}

A::A(A const &oth) {
	(void)oth;
}

A::~A(void) {}

A	&A::operator=(A const &oth) {
	(void)oth;
	return (*this);
}