#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(): fpval_(0) {}

Fixed::Fixed(int val): fpval_(val << Fixed::bits_) {}

Fixed::Fixed(float val): fpval_(std::roundf(val * (1 << Fixed::bits_))) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &other): fpval_(other.fpval_) {}

Fixed&		Fixed::operator=(Fixed const &other) {
	if (this != &other)
		this->fpval_ = other.fpval_;
	return (*this);
}

Fixed 			Fixed::operator-(Fixed const &rhs) {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed 			Fixed::operator+(Fixed const &rhs) {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed 			Fixed::operator*(Fixed const &rhs) {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed 			Fixed::operator/(Fixed const &rhs) {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed 			&Fixed::operator++(void) {
	++this->fpval_;
	return (*this);
}

Fixed 			&Fixed::operator--(void) {
	--this->fpval_;
	return (*this);
}

Fixed 			Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed 			Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

bool    		Fixed::operator>(Fixed const &rhs) const {
	return (this->fpval_ > rhs.fpval_);
}

bool    		Fixed::operator<(Fixed const &rhs) const {
	return (rhs > const_cast<Fixed const &>((*this)));
}

bool    		Fixed::operator>=(Fixed const &rhs) const {
	return (!(rhs > const_cast<Fixed const &>((*this))));
}

bool    		Fixed::operator<=(Fixed const &rhs) const {
	return (!((*this) > rhs));
}

bool    		Fixed::operator==(Fixed const &rhs) const {
	return (this->fpval_ == rhs.fpval_);
}

bool    		Fixed::operator!=(Fixed const &rhs) const {
	return (!(*this == rhs));
}

int				Fixed::getRawBits(void) const {
	return (this->fpval_);
}

void			Fixed::setRawBits(int const raw) {
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

Fixed const&	Fixed::max(Fixed const &nb1, Fixed const &nb2) {
	return (nb1 > nb2 ? nb1 : nb2);
}

Fixed& 			Fixed::max(Fixed &nb1, Fixed &nb2) {
	return (nb1 > nb2 ? nb1 : nb2);
}

Fixed const&	Fixed::min(Fixed const &nb1, Fixed const &nb2) {
	return (nb1 < nb2 ? nb1 : nb2);
}

Fixed& 		Fixed::min(Fixed &nb1, Fixed &nb2) {
	return (nb1 < nb2 ? nb1 : nb2);
}
