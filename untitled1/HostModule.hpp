#ifndef HOSTMODULE_HPP
#define HOSTMODULE_HPP

#include "IMonitorModule.hpp"

class HostModule : public IMonitorModule
{
private:
	std::string host_;
	std::string user_;
public:
	HostModule();
	HostModule(HostModule const &oth);
	~HostModule();

	HostModule &operator=(HostModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
