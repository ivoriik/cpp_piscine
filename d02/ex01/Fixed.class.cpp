#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(): fpval_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int val): fpval_(val << Fixed::bits_) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float val): fpval_(std::roundf(val * (1 << Fixed::bits_))) {
	std::cout << "Float constructor called" << std::endl;
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

std::ostream&	operator<<(std::ostream &ostr, Fixed const &val) {
	ostr << val.toFloat();
	return (ostr);
}

float			Fixed::toFloat(void) const {
	return (static_cast<float>(this->fpval_) / (1 << Fixed::bits_));
}

int				Fixed::toInt(void) const {
	return (this->fpval_ >> Fixed::bits_);
}