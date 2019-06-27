#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
private:
	int					fpval_;
	static const int	bits_ = 8;
public:
	Fixed();
	Fixed(int val);
	Fixed(float val);
	~Fixed();
	Fixed(Fixed const &other);
	Fixed			&operator=(Fixed const &other);
// Basic arithmetic operators
	Fixed			operator+(Fixed const &other);
	Fixed			operator-(Fixed const &other);
	Fixed			operator*(Fixed const &other);
	Fixed			operator/(Fixed const &other);
// Increments / decrements
	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
	Fixed			operator--(int);
// Logic operators
	bool			operator>(Fixed const &other) const;
	bool			operator<(Fixed const &other) const;
	bool			operator>=(Fixed const &other) const;
	bool			operator<=(Fixed const &other) const;
	bool			operator==(Fixed const &other) const;
	bool			operator!=(Fixed const &other) const;
// Member functions
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
// Non-Member functions
	static Fixed const &max(Fixed const &nb1, Fixed const &nb2);
	static Fixed &max(Fixed &nb1, Fixed &nb2);
	static Fixed const &min(Fixed const &nb1, Fixed const &nb2);
	static Fixed &min(Fixed &nb1, Fixed &nb2);
};

std::ostream	&operator<<(std::ostream &ostr, Fixed const &fval);
#endif