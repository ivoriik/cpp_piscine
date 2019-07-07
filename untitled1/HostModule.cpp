#include "HostModule.hpp"

HostModule::HostModule() {
	this->refresh();
}

HostModule::~HostModule(){}

HostModule::HostModule(HostModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->host_ = info.at(0);
	this->user_ = info.at(1);
}

HostModule &HostModule::operator=(HostModule const &oth) {
	if (this != &oth)
	{
		std::vector<std::string> info(oth.getInfo());
		this->host_ = info.at(0);
		this->user_ = info.at(1);
	}
	return (*this);
}

void HostModule::refresh()
{
	char host[HOST_NAME_MAX];
	char user[HOST_NAME_MAX];
	gethostname(host, HOST_NAME_MAX);
	getlogin_r(user, HOST_NAME_MAX);
	host_ = "Host name: " + std::string(host);
	user_ = "User name: " + std::string(user);
}

std::vector<std::string> HostModule::getInfo() const
{
	std::vector<std::string> info;
	info.push_back(host_);
	info.push_back(user_);
	return info;
}
