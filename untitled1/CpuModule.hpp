#ifndef CPUMODULE_HPP
#define CPUMODULE_HPP

#include "IMonitorModule.hpp"

class CpuModule : public IMonitorModule
{
private:
	std::string		name_;
	std::string		cores_;
//	long			busFreq_;
//	long			cpuFreq_;
	std::string		usage_;
public:
	CpuModule();
	CpuModule(CpuModule const &oth);
	~CpuModule();

	CpuModule &operator=(CpuModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
