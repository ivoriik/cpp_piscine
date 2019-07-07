#ifndef DISKMODULE_HPP
#define DISKMODULE_HPP

#include "IMonitorModule.hpp"

class DiskModule : public IMonitorModule
{
private:
	std::string read_;
	std::string write_;
public:
	DiskModule();
	DiskModule(DiskModule const &oth);
	~DiskModule();

	DiskModule &operator=(DiskModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
