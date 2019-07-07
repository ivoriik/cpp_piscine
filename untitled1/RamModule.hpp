#ifndef RAMMODULE_HPP
#define RAMMODULE_HPP

#include "IMonitorModule.hpp"

class RamModule : public IMonitorModule
{
private:
	std::string		physMem_;
public:
	RamModule();
	RamModule(RamModule const &oth);
	~RamModule();

	RamModule &operator=(RamModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
