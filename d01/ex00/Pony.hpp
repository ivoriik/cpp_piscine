#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony 
{
public:
	Pony(std::string name = "");
	~Pony(void);
	void		setName(std::string);
	void		setBreed(std::string);
	void		setColor(std::string);
	void		setMark(std::string);
	std::string	getName(void);
	std::string	getBreed(void);
	std::string	getColor(void);
	std::string	getMark(void);

private:
	std::string		name_;
	std::string		breed_;
	std::string		color_;
	std::string		mark_;
};

#endif