#ifndef NETMODULE_HPP
#define NETMODULE_HPP

#include "IMonitorModule.hpp"

class NetModule : public IMonitorModule
{
private:
	std::string packets_;
public:
	NetModule();
	NetModule(NetModule const &oth);
	~NetModule();

	NetModule &operator=(NetModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
