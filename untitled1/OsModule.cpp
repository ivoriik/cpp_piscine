#include "OsModule.hpp"

OsModule::OsModule() {
	int			mib[2];
	char		str[512];
	size_t		len;

	mib[0] = CTL_KERN;
	mib[1] = KERN_OSTYPE;
	len = sizeof(str);
	sysctl(mib, 2, str, &len, NULL, 0);
	this->type_ = "OS Type: " + std::string(str);
	mib[1] = KERN_OSRELEASE;
	len = sizeof(str);
	sysctl(mib, 2, str, &len, NULL, 0);
	this->release_ = "OS Release: " + std::string(str);
}

OsModule::~OsModule(){}

OsModule::OsModule(OsModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->type_ = info.at(0);
	this->release_ = info.at(1);
}

OsModule &OsModule::operator=(OsModule const &oth) {
	if (this != &oth) {
		std::vector<std::string> info(oth.getInfo());
		this->type_ = info.at(0);
		this->release_ = info.at(1);
	}
	return (*this);
}

void OsModule::refresh() {}

std::vector<std::string> OsModule::getInfo() const {
	std::vector<std::string> info;
	info.push_back(this->type_);
	info.push_back(this->release_);
	return info;
}