#ifndef OSMODULE_HPP
#define OSMODULE_HPP

#include "IMonitorModule.hpp"

class OsModule : public IMonitorModule
{
private:
	std::string type_;
	std::string release_;
public:
	OsModule();
	OsModule(OsModule const &oth);
	~OsModule();

	OsModule &operator=(OsModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif

//https://www.freebsd.org/cgi/man.cgi?sysctl(3)