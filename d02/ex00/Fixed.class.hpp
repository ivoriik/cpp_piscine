#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed {
private:
	int					fpval_;
	static const int	bits_;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &other);
	Fixed	&operator=(Fixed const &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif