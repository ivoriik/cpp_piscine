#include "NetModule.hpp"

NetModule::NetModule() {
	this->refresh();
}

NetModule::~NetModule(){}

NetModule::NetModule(NetModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->packets_ = info.at(0);
}

NetModule &NetModule::operator=(NetModule const &oth) {
	if (this != &oth) {
		std::vector<std::string> info(oth.getInfo());
		this->packets_ = info.at(0);
	}
	return (*this);
}

void NetModule::refresh() {
	FILE*	f;
	char	str[512];

	f = popen("top -l 1 | head -n 10 | grep Network", "r");
	std::stringstream ss;
	while (fgets(str, sizeof(str), f) != NULL)
		ss << str;
	pclose(f);
	this->packets_ = ss.str();
}

std::vector<std::string> NetModule::getInfo() const {
	std::vector<std::string> info;
	info.push_back(this->packets_);
	return info;
}
