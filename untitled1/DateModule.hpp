#ifndef DATEMODULE_HPP
#define DATEMODULE_HPP

#include "IMonitorModule.hpp"

class DateModule : public IMonitorModule
{
private:
	std::string date_;
	std::string time_;
public:
	DateModule();
	DateModule(DateModule const &oth);
	~DateModule();

	DateModule &operator=(DateModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
