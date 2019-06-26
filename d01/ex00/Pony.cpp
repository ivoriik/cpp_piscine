#include "Pony.hpp"

Pony::Pony(std::string name): name_(name)
{
	return ;
}

Pony::~Pony(void)
{
	return ;
}

void		Pony::setName(std::string name)
{
	this->name_ = name;
	return ;
}

void		Pony::setBreed(std::string breed)
{
	this->breed_ = breed;
	return ;
}

void		Pony::setColor(std::string color)
{
	this->color_ = color;
	return ;
}

void		Pony::setMark(std::string mark)
{
	this->mark_ = mark;
	return ;
}



std::string Pony::getName(void)
{
	return (this->name_);
}

std::string Pony::getBreed(void)
{
	return (this->breed_);
}

std::string Pony::getColor(void)
{
	return (this->color_);
}

std::string Pony::getMark(void)
{
	return (this->mark_);
}