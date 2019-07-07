#include "DateModule.hpp"

DateModule::DateModule() {
	this->refresh();
}

DateModule::DateModule(DateModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->date_ = info.at(0);
	this->time_ = info.at(1);
}

DateModule &DateModule::operator=(DateModule const &oth) {
	if (this != &oth) {
		std::vector<std::string> info(oth.getInfo());
		this->date_ = info.at(0);
		this->time_ = info.at(1);
	}
	return (*this);
}

DateModule::~DateModule() { }

void	DateModule::refresh() {
	time_t raw = time(NULL);
	struct tm *tInfo = localtime(&raw);

	std::stringstream	ss;
	ss << "Date: " << std::to_string(tInfo->tm_mday) << "/"
	   << std::to_string(tInfo->tm_mon + 1) << "/"
	   << std::to_string(tInfo->tm_year + 1900);
	this->date_ = ss.str();
	ss.str("");
	ss << "Time: " << std::to_string(tInfo->tm_hour) << ":" <<
		(tInfo->tm_min <= 9 ? "0" : "") << std::to_string(tInfo->tm_min) << ":" <<
		(tInfo->tm_sec <= 9 ? "0" : "") << std::to_string(tInfo->tm_sec);
	this->time_ = ss.str();
}

std::vector<std::string>	DateModule::getInfo() const {
	std::vector<std::string> info;
	info.push_back(date_);
	info.push_back(time_);
	return info;
}
