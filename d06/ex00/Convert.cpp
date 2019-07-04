#include "Convert.hpp"

Convert::Convert(void) {}
Convert::Convert(std::string const &s): sval_(s) {}
Convert::Convert(Convert const &oth): sval_(oth.sval_) {}
Convert::~Convert(void) {}

Convert	&Convert::operator=(Convert const &oth)
{
	if (this != &oth)
		sval_ = oth.sval_;
	return *this;
	
}

Convert::operator	char(void) const
{
	int	rs = 0;

	try
	{
		rs = std::stoi(sval_);
		return (static_cast<char>(rs));
	}
	catch (const std::exception &e)
	{
		throw (Exception());
	}
}

Convert::operator	int(void) const
{
	int	rs = 0;

	try
	{
		rs = std::stoi(sval_);
		return (rs);
	}
	catch (const std::exception &e)
	{
		throw (Exception());
	}
}

Convert::operator	float(void) const
{
	float rs = 0.0f;

	try
	{
		rs = std::stof(sval_);
		return (rs);
	}
	catch (const std::exception &e)
	{
		throw (Exception());
	}
}

Convert::operator	double(void) const
{
	double	rs = 0.0;

	try
	{
		rs = std::stod(sval_);
		return (rs);
	}
	catch (const std::exception &e)
	{
		throw (Exception());
	}
}

Convert::Exception::Exception(void) {}

Convert::Exception::Exception(Exception const &oth) {
	(void)oth;
}

Convert::Exception::~Exception(void) throw() {}

Convert::Exception &Convert::Exception::operator=(Exception const &oth) {
	if (this != &oth)
		;
	return *this;
}

const char* Convert::Exception::what() const throw() {
	return "impossible";
}
