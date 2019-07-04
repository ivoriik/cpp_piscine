#ifndef CONVERT_CLASS_HPP
#define CONVERT_CLASS_HPP

#include <iostream>
#include <string>
#include <exception>

class	Convert
{
private:
	std::string sval_;
public:
	Convert(void);
	Convert(std::string const &s);
	Convert(Convert const &oth);
	~Convert(void);
	Convert &operator=(Convert const &oth);

	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;

	class Exception : public std::exception
	{
		public:
			Exception(void);
			Exception(Exception const &oth);
			virtual ~Exception(void) throw();
			Exception &operator=(Exception const &oth);
			virtual const char* what() const throw();
	};
};

#endif
