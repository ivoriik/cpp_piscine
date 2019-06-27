#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed(): fpval_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other): fpval_(other.fpval_) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->fpval_ = other.fpval_;
	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpval_);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fpval_ = raw;
}
