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
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &ostr, Fixed const &fval);
#endif