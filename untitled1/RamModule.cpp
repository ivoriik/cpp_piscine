#include "RamModule.hpp"

RamModule::RamModule() {
	this->refresh();
}

RamModule::~RamModule(){}

RamModule::RamModule(RamModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->physMem_ = info.at(0);
}

RamModule &RamModule::operator=(RamModule const &oth) {
	if (this != &oth) {
		std::vector<std::string> info(oth.getInfo());
		this->physMem_ = info.at(0);
	}
	return (*this);
}

void RamModule::refresh() {
	FILE*	f;
	char	str[512];

	f = popen("top -l 1 | head -n 10 | grep PhysMem", "r");
	std::stringstream ss;
	while (fgets(str, sizeof(str), f) != NULL)
		ss << str;
	pclose(f);
	this->physMem_ = ss.str();
}

std::vector<std::string> RamModule::getInfo() const {
	std::vector<std::string> info;
	info.push_back(this->physMem_);
	return info;
}
