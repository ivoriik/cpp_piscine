#ifndef PROCESSMODULE_HPP
#define PROCESSMODULE_HPP

#include "IMonitorModule.hpp"

class ProcessModule : public IMonitorModule
{
private:
	std::string active_;
	std::string max_;

	std::string total_;
	std::string running_;
	std::string stuck_;
	std::string sleeping_;
	std::string threads_;
public:
	ProcessModule();
	ProcessModule(ProcessModule const &oth);
	~ProcessModule();

	ProcessModule &operator=(ProcessModule const &oth);

	virtual 	std::vector<std::string>	getInfo() const;
	virtual 	void						refresh();
};

#endif
