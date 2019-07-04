#include "B.hpp"

B::B(void) {}

B::B(B const &oth) {
	(void)oth;
}

B::~B(void) {}

B	&B::operator=(B const &oth) {
	(void)oth;
	return (*this);
}